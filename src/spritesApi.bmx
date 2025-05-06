Type Rtexture2dWrapper Extends Object
    Field texture:Rtexture2d
    Method New(tex:Rtexture2d)
        texture = tex
    EndMethod
EndType

Type TspritesApi
    Field sprites:TMap

    Method New()
        sprites = New TMap
    EndMethod

    Method add:String(title:String, data:String)
        data = data.Trim()
        Local righe:String[] = data.Replace(" ", "").Split(Chr(10))
        Local spriteImage:Rimage = GenImageColor(righe[1].Replace(" ", "").Length, righe.Length, New Rcolor(0, 0, 0, 0))

        For Local y:Int = 0 Until righe.Length
            Local riga:String = righe[y].Replace(" ", "")
            Print(righe[y])

            For Local x:Int = 0 Until riga.Length
                If righe[y][x] = Asc("1") Then
                    ImageDrawPixel(spriteImage, x, y, New Rcolor(255, 255, 255, 255)) 
                EndIf
            Next
        Next

        Local texture:Rtexture2d = LoadTextureFromImage(spriteImage)
        UnloadImage(spriteImage)

        Local wrapper:Rtexture2dWrapper = New Rtexture2dWrapper(texture)
        sprites.Insert(title, wrapper)
        Return title
    EndMethod

    Method draw(title:String, x:Int, y:Int)
        Local wrapper:Rtexture2dWrapper = Rtexture2dWrapper(sprites.ValueForKey(title))
        Local texture:Rtexture2d = wrapper.texture
        DrawTexture(texture, x, y, drawApi.mainColor)
    EndMethod


    Method collision:Int(sprite1:String, x1:Int, y1:Int, sprite2:String, x2:Int, y2:Int)
        Local wrapper1:Rtexture2dWrapper = Rtexture2dWrapper(sprites.ValueForKey(sprite1))
        Local wrapper2:Rtexture2dWrapper = Rtexture2dWrapper(sprites.ValueForKey(sprite2))

        If wrapper1 = Null Or wrapper2 = Null Then
            Return False
        EndIf

        Local tex1:Rtexture2d = wrapper1.texture
        Local tex2:Rtexture2d = wrapper2.texture

        If tex1 = Null Or tex2 = Null Then
            Return False
        EndIf
        Return CheckRectCollision(tex1, New Rvector2(x1, y1), tex2, New Rvector2(x2, y2))

    EndMethod



    Method unload()
        For Local s:Object = EachIn sprites.Values()
            UnloadTexture( Rtexture2dWrapper(s).texture)
            Print "Sprite unloaded"
        Next
        sprites.Clear()
    EndMethod
EndType

Function CheckRectCollision:Byte(tex1:RTexture2D, pos1:RVector2, tex2:RTexture2D, pos2:RVector2)
    Local rect1:RRectangle = New RRectangle(pos1.x, pos1.y, tex1.width, tex1.height)
	Local rect2:RRectangle = New RRectangle(pos2.x, pos2.y, tex2.width, tex2.height)
	Return CheckCollisionRecs(rect1, rect2)
End Function
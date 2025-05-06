Type Rtexture2dWrapper Extends Object
    Field texture:Rtexture2d
    Method New(tex:Rtexture2d)
        texture = tex
    EndMethod
EndType

Type TspriteApi
    Field sprites:TMap

    Method New()
        sprites = New TMap
    EndMethod

    Method add(title:String, data:String)
        data = data.Trim()
        Local righe:String[] = data.Replace(" ", "").Split(Chr(10))
        If righe.Length = 0 Then
            Print "Errore: i dati per '" + title + "' sono vuoti!"
            Return
        EndIf

        Local spriteImage:Rimage = GenImageColor(righe[1].Replace(" ", "").Length, righe.Length, New Rcolor(0, 0, 0, 0))
        Print "Creazione sprite: " + title
        Print "Dimensioni: " + righe[1].Length + "x" + righe.Length

        For Local y:Int = 0 Until righe.Length
            Local riga:String = righe[y].Replace(" ", "")
            Print(righe[y])

            For Local x:Int = 0 Until riga.Length
                If righe[y][x] = Asc("1") Then
                    Print("Add Pixel: " + x + ", " + y + " = 1")
                    ImageDrawPixel(spriteImage, x, y, New Rcolor(255, 255, 255, 255)) ' Ensure Rcolor uses appropriate values (e.g., 0-255 for RGBA)
                EndIf
            Next
        Next

        Local texture:Rtexture2d = LoadTextureFromImage(spriteImage)
        UnloadImage(spriteImage)

        If texture = Null Then
            Print "Errore: il texture non è stato creato correttamente!"
            Return
        EndIf

        Local wrapper:Rtexture2dWrapper = New Rtexture2dWrapper(texture)
        sprites.Insert(title, wrapper)
        Print "Sprite '" + title + "' aggiunto con successo!"
    EndMethod

    Method draw(title:String, x:Int, y:Int)
        Local wrapper:Rtexture2dWrapper = Rtexture2dWrapper(sprites.ValueForKey(title))
        If wrapper = Null Then
            Print "Errore: sprite '" + title + "' non trovato!"
            Return
        EndIf

        Local texture:Rtexture2d = wrapper.texture
        If texture = Null Then
            Print "Errore: il texture per '" + title + "' è Null!"
            Return
        EndIf

        Print "Disegno sprite '" + title + "' alle coordinate (" + x + ", " + y + ")"
        DrawTexture(texture, x, y, drawApi.mainColor)
    EndMethod
EndType
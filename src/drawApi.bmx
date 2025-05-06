Type TdrawApi



	Global bg:RColor = new RColor(0,0,0,255)
	Global mainColor:RColor = getPalette(3)

	Method background(name:Int)
		bg = getPalette(name)
	EndMethod

	Method color(name:Int)
		mainColor = getPalette(name)
	EndMethod


	Method point(x:Int, y:int )
		DrawPixel( x, y, mainColor) 
	EndMethod

	Method line(startx:Int, startY:Int, endX:Int, endY:Int)
		DrawLine( startX, startY, endX, endY, mainColor) 
	EndMethod

	Method rect(x:Int, y:Int, Width:Int, height:Int)
		DrawRectangle( x, y, width, height, mainColor)
	EndMethod

	Method triangle(x1:Int, y1:Int, x2:Int, y2:Int, x3:Int, y3:Int)
		DrawTriangle( new RVector2(x1, y1), new RVector2(x2, y2), new RVector2(x3, y3), mainColor)
	EndMethod

	Method text(text:String, x:Int, y:Int, size:Int)
		DrawText( text,x,y, size, mainColor)
	EndMethod

	Method circle(x:Int, y:Int, radius:Int)
		DrawCircle( x, y, radius, mainColor)
	EndMethod

	Method sprite(title:String, x:Int, y:Int)
		spritesApi.draw(title, x, y)
	EndMethod


End Type
'-----------------------------------------------------------------------------------------------------------


Function getPalette:RColor(n:Int)
	if n = 0 Then
		return new RColor(5, 31, 57,255)
	EndIf
	if n = 1 Then
        return new RColor(74, 36, 128,255)
    EndIf
	if n = 2 Then
        return new RColor(197, 58, 157,255)
    EndIf
    if n = 3 Then
        return new RColor(255, 142, 128,255)
    EndIf

End Function



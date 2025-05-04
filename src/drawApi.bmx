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

	Method text(text:String, x:Int, y:Int, size:Int)
		DrawText( text,x,y, size, mainColor)
	EndMethod

	Method circle(x:Int, y:Int, radius:Int)
		DrawCircle( x, y, radius, mainColor)
	EndMethod


End Type
'-----------------------------------------------------------------------------------------------------------


Function getPalette:RColor(n:Int)
	if n = 0 Then
		return new RColor(224, 248, 208,255)
	EndIf
	if n = 1 Then
        return new RColor(136, 192, 112,255)
    EndIf
	if n = 2 Then
        return new RColor(52, 104, 86,255)
    EndIf
    if n = 3 Then
        return new RColor(8, 24, 32,255)
    EndIf

End Function



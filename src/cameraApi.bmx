Type TcameraApi
	
	Method target(x:Int, y:Int)
		camera2d.target = New RVector2(x,y)
	EndMethod
	Method offset(x:Int, y:Int)
		camera2d.offset = New RVector2(x,y)
	EndMethod
	Method rotation(r:Float)
		camera2d.rotation = r
	EndMethod
	Method zoom(z:Float)
		camera2d.zoom = z
	EndMethod

	Method reset()
		camera2d.target = New RVector2(0, 0)
		camera2d.offset = New RVector2(0,0)
		camera2d.rotation = 0.0
		camera2d.zoom = 1.0
	EndMethod

EndType
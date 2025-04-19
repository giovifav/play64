Type TappApi  

	Method dt:Float()
		return GetFrameTime()		
	EndMethod	

	Method title(name:String)
		SetWindowTitle(name:String)
	EndMethod

	Method width(width:Int)
		windowWidth = width
	EndMethod

	Method height(height:Int)
        windowHeight = height
    EndMethod

	Method fullscreen()
		ToggleBorderlessWindowed()
	EndMethod

	Method reset()
		cartName = ""
	EndMethod
	Method restart()
		LoadLua(cartName)
	EndMethod
EndType
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
		CART = ""
	EndMethod

	Method restart()
		LoadLua(CART)
	EndMethod

	Method loadCart(cart:String)
		CART = cart
		LoadLua(CART)
	EndMethod

	Method save(key:String, value:String)
		CONF.saveData(key, value)
	EndMethod

	Method load:String(key:String)
		return CONF.getData(key)
	EndMethod

EndType
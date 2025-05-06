
Global CART:String = ""
Global LUAINSTANCE:TLuaObject
Global LUACLASS:TLuaClass
Global drawApi:TdrawApi=New TdrawApi
LuaRegisterObject(drawApi,"draw")
Global appApi:TappApi=New TappApi
LuaRegisterObject(appApi,"app")
Global inputApi:TinputApi=New TinputApi
LuaRegisterObject(inputApi,"input")
Global soundApi:TsoundApi = New TsoundApi
LuaRegisterObject( soundApi, "sound")
Global spritesApi:TspritesApi = New TspritesApi
LuaRegisterObject( spritesApi, "sprites")
Global cameraApi:TcameraApi = New TcameraApi
LuaRegisterObject( cameraApi, "camera")

function LoadLua(file:String)
    CART = file
	Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "carts/" + file + ".lua" )
	LUACLASS:TLuaLUACLASS=TLuaClass.Create( source )
	LUAINSTANCE:TLuaObject=TLuaObject.Create( LUACLASS,Null )
	LUAINSTANCE.Invoke("init",Null)'esegui funzione init del programma in lua
EndFunction

function LoadLuaInc(file:String)
    CART = file
	Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "incbin::src/" + file + ".lua" )
	LUACLASS:TLuaLUACLASS=TLuaClass.Create( source )
	LUAINSTANCE:TLuaObject=TLuaObject.Create( LUACLASS,Null )
	LUAINSTANCE.Invoke("init",Null)'esegui funzione init del programma in lua
EndFunction

function RunLua()
	LUAINSTANCE.Invoke("update",Null)
EndFunction

Function LoadFileAsString:String(url:Object)
    Local file:TStream = ReadFile(url)
    Local contents:String = ""
    While Not(file.Eof())
        contents:+ file.ReadLine() + "~n"
    Wend
    CloseStream file
    Return contents
End Function


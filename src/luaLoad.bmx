
Global cartName:String = ""
Global instance:TLuaObject
Global class:TLuaClass
Global drawApi:TdrawApi=New TdrawApi
LuaRegisterObject(drawApi,"draw")
Global appApi:TappApi=New TappApi
LuaRegisterObject(appApi,"app")
Global inputApi:TinputApi=New TinputApi
LuaRegisterObject(inputApi,"input")
Global soundApi:TsoundApi = New TsoundApi
LuaRegisterObject( soundApi, "sound")
Global spriteApi:TspriteApi = New TspriteApi
LuaRegisterObject( spriteApi, "sprite")







function LoadLua(file:String)
    cartName = file
	Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "carts/" + file + ".lua" )
	class:TLuaClass=TLuaClass.Create( source )
	instance:TLuaObject=TLuaObject.Create( class,Null )
	instance.Invoke("init",Null)'esegui funzione init del programma in lua
EndFunction

function LoadLuaInc(file:String)
    cartName = file
	Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "incbin::src/" + file + ".lua" )
	class:TLuaClass=TLuaClass.Create( source )
	instance:TLuaObject=TLuaObject.Create( class,Null )
	instance.Invoke("init",Null)'esegui funzione init del programma in lua
EndFunction

function RunLua()
	instance.Invoke("update",Null)
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


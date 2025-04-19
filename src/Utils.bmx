function LoadLua(file:String)
    cartName = file
	Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "carts/" + file + ".lua" )
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



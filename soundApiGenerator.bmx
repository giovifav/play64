' filepath: c:\Users\jo\Desktop\play64\generate_incbins.bmx
Import BRL.Filesystem

Function GenerateSoundApiFile(directory:String, outputFile:String)
    Local output:TStream = WriteFile(outputFile)
    
    If Not output then
        Print "Failed to create output file: " + outputFile
        Return
    EndIf


	Local dir:Byte Ptr = ReadDir(directory)
	WriteLine(output, "'List of sounds:")
	Repeat
		Local t:String = NextFile( dir )
		If t="" Exit
		If t="." Or t=".." Continue
		WriteLine(output, "'" + Lower(StripExt(t)))
	Forever

	dir:Byte Ptr = ReadDir(directory)
	Repeat
		Local t:String = NextFile( dir )
		If t="" Exit
		If t="." Or t=".." Continue
		WriteLine(output, "Incbin ~q"+ "assets/" + t + "~q")
		WriteLine(output, "Global sounds_" + Lower(StripExt(t)) +":Tsound = LoadSound(~qincbin::assets/"+t+"~q)")
	Forever
	WriteLine( output, "Type TSoundApi" )
	WriteLine ( output, "Method play(sound:String)" )
	dir:Byte Ptr = ReadDir(directory)
	Repeat
		Local t:String = NextFile( dir )
		If t="" Exit
		If t="." Or t=".." Continue
		WriteLine(output, "If sound = ~q" + StripExt(t) +  "~q  PlaySound(sounds_" + Lower(StripExt(t)) +")")
	Forever
	WriteLine( output,	"EndMethod EndType" )
    CloseStream(output)
    Print "Incbin statements written to: " + outputFile
End Function

' Generate the incbin file for the "assets" directory
GenerateSoundApiFile("src/assets", "src/soundApi.bmx")
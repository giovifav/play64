SuperStrict
Framework Ray.Lib
Import audio.AudioMiniAudio
Import BRL.StandardIO
Import BRL.Basic
Import brl.maxlua
Import brl.filesystem
Include "src/drawApi.bmx"
Include "src/inputApi.bmx"
Include "src/appApi.bmx"
Include "src/Utils.bmx"
Include "src/soundApi.bmx"	
Include "src/list.bmx"
Incbin "src/lualibs.lua"
Incbin "src/titlescreen.lua"

'configurazione di base
Global windowWidth:Int = 800
Global windowHeight:Int = 450
Const windowTitle:String ="window"
Const targetFps:Int = 30
Const gameScreenWidth:Int = 64
Const gameScreenHeight:Int = 64
Global cartName:String = "titlescreen"
Local list:ScrollableList = New ScrollableList()

'creazione della finestra 
SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT)
InitWindow(windowWidth, windowHeight, windowTitle)

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

SetWindowMinSize(320, 180)
SetTargetFPS(targetFps)               ' Set our game to run at 30 frames-per-second

' Render texture initialization, used to hold the rendering result so we can easily resize it
Local target:RRenderTexture2D = LoadRenderTexture(gameScreenWidth, gameScreenHeight)
SetTextureFilter(target.texture, 0)  ' Texture scale filter to use
'--------------------------------------------------------------------------------------

'carica lo screen di intro scritto in lua 
Local source:String =  LoadFileAsString("incbin::src/lualibs.lua") +  LoadFileAsString(  "incbin::src/titlescreen.lua" )
class:TLuaClass=TLuaClass.Create( source )
instance:TLuaObject=TLuaObject.Create( class,Null )
instance.Invoke("init",Null)'esegui funzione init del programma in lua' Main game loop


While Not WindowShouldClose()  
	  ' Detect window close button or ESC key
	If IsKeyPressed( KEY_F ) Then
		ToggleBorderlessWindowed()
	EndIf
	' Update
	'----------------------------------------------------------------------------------
	' Compute required framebuffer scaling
	Local Scale:Float = Min(GetScreenWidth()/Float(gameScreenWidth), GetScreenHeight()/Float(gameScreenHeight))
	If cartName = "" Then
		list.Update()
	EndIf

	' Draw
	'----------------------------------------------------------------------------------
	' Draw everything in the render texture, note this will not be rendered on screen, yet
	BeginTextureMode(target)
	ClearBackground(drawApi.bg)
	If cartName = "" Then
		list.Draw()
	Else
		RunLua()
		If IsKeyPressed( KEY_R ) Then
			cartName = ""
			drawApi.bg = getPalette(3)
			SetWindowTitle(windowTitle)
		EndIf
	EndIf
	EndTextureMode()

	BeginDrawing()
	ClearBackground(getPalette(3)) 
	' Draw RenderTexture2D to window, properly scaled
	DrawTexturePro(target.texture, ..
			New RRectangle(0.0, 0.0, Float(target.texture.width), Float(-target.texture.height)), ..
			New RRectangle((GetScreenWidth() - Float(gameScreenWidth*Scale))*0.5, (GetScreenHeight() - Float(gameScreenHeight*Scale))*0.5, Float(gameScreenWidth*Scale), Float(gameScreenHeight*Scale)), ..
			New RVector2(0, 0), 0.0, WHITE)
	EndDrawing()
	'--------------------------------------------------------------------------------------
Wend

' De-Initialization
'--------------------------------------------------------------------------------------
UnloadRenderTexture(target)    ' Unload render texture
CloseWindow()                  ' Close window and OpenGL context
'--------------------------------------------------------------------------------------
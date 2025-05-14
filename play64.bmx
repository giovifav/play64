SuperStrict
Framework Ray.Lib
Import audio.AudioMiniAudio
Import BRL.StandardIO
Import BRL.Basic
Import brl.maxlua
Import brl.filesystem
Import Text.ini
Import brl.map



Include "src/drawApi.bmx"
Include "src/inputApi.bmx"
Include "src/appApi.bmx"
Include "src/soundApi.bmx"	
Include "src/spritesApi.bmx"
Include "src/cameraApi.bmx"
Include "src/Tlist.bmx"
Include "src/luaLoad.bmx"
Include "src/Tconfig.bmx"
Incbin "src/lualibs.lua"
Incbin "src/titlescreen.lua"

Global CONF:Tconfig = New Tconfig()
'configurazione di base
Global windowWidth:Int = Int(CONF.width.GetValue())
Global windowHeight:Int = Int(CONF.height.GetValue())
Global windowTitle:String = CONF.title.GetValue()
Const gameScreenWidth:Int = 64
Const gameScreenHeight:Int = 64
Local list:TgameList = New TgameList()
Global PAUSE:Int = False

'creazione della finestra 
SetConfigFlags(FLAG_WINDOW_RESIZABLE | FLAG_VSYNC_HINT)
InitWindow(windowWidth, windowHeight, windowTitle)

SetWindowMinSize(320, 180)
SetTargetFPS(30)               ' Set our game to run at 30 frames-per-second
Global camera2d:RCamera2D = New RCamera2D()
camera2d.target = New RVector2(0, 0)
camera2d.offset = New RVector2(0,0)
camera2d.rotation = 0.0
camera2d.zoom = 1.0
'--------------------------------------------------------------------------------------

' Render texture initialization, used to hold the rendering result so we can easily resize it
Local target:RRenderTexture2D = LoadRenderTexture(gameScreenWidth, gameScreenHeight)
SetTextureFilter(target.texture, 0)  ' Texture scale filter to use
'--------------------------------------------------------------------------------------
if CONF.intro.GetValue() = String("True") Then
	LoadLuaInc("titlescreen") ' Load the Lua file and run the init function
EndIf

If FileType("carts/" + String(CONF.game.GetValue()) + ".lua") = 1 Then
	LoadLua(CONF.game.GetValue()) ' Load the Lua file and run the init function
EndIf


While Not WindowShouldClose()  

	  ' Detect window close button or ESC key
	If IsKeyPressed( KEY_F ) Then
		ToggleBorderlessWindowed()
	EndIf

	' Update
	'----------------------------------------------------------------------------------
	' Compute required framebuffer scaling
	Local Scale:Float = Min(GetScreenWidth()/Float(gameScreenWidth), GetScreenHeight()/Float(gameScreenHeight))
	' Draw
	'----------------------------------------------------------------------------------
	' Draw everything in the render texture, note this will not be rendered on screen, yet
	BeginTextureMode(target)
	BeginMode2D(camera2d ) 
	ClearBackground(drawApi.bg)
	If PAUSE = False Then

		If IsKeyPressed( KEY_P ) Then
			PAUSE = True
		EndIf

		If CART = "" Then
			list.Update()
			list.Draw()
		Else
			RunLua()
			If IsKeyPressed( KEY_R ) Then
				'reset camera
				camera2d.target = New RVector2(0, 0)
				camera2d.offset = New RVector2(0,0)
				camera2d.rotation = 0.0
				camera2d.zoom = 1.0
				If FileType("carts/" + String(CONF.game.GetValue()) + ".lua") = 1 Then
					LoadLua(CONF.game.GetValue()) ' Load the Lua file and run the init function
				Else
					CART = ""
					SetWindowTitle(windowTitle)
				EndIf
			EndIf
		EndIf
	Else
		' Draw pause menu
		DrawText("PAUSED", 11, 22, 10, getPalette(3))
		DrawText("Press P", 11, 32, 10, getPalette(2))
		If IsKeyPressed( KEY_P ) Then
			PAUSE = False
		EndIf
	EndIf
	
	EndMode2D()
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
CONF.close()
UnloadRenderTexture(target)    ' Unload render texture
spritesApi.unload()		  ' Unload sprites
CloseWindow()                  ' Close window and OpenGL context
'--------------------------------------------------------------------------------------
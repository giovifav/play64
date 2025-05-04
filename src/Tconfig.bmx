Type Tconfig
	Private
		Field ini:Tini
		Field settings:TIniSection
		Field controls:TIniSection
	Public
		Field width:TIniProperty 
		Field height:TIniProperty
		Field fullscreen:TIniProperty
		Field intro:TIniProperty
		Field game:TIniProperty
		Field title:TIniProperty
	

	Method New()
		ini:TIni = TIni.Load("config.ini")
		settings = ini.FindSection("Settings")
		controls:TIniSection = ini.FindSection("Controls")
		width = settings.FindProperty("Width")
		height = settings.FindProperty("Height")
		fullscreen = settings.FindProperty("Fullscreen")
		intro = settings.FindProperty("Intro")
		game = settings.FindProperty("Game")
		title = settings.FindProperty("Title")
	EndMethod

	Method save()
		ini.Save("config.ini")
	EndMethod

	Method close()
		self.save()
		ini.Free()
	EndMethod

EndType
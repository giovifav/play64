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

	Method saveData(key:String, value:String)
		Local section:TIniSection = ini.FindSection("SAVE_" + CART)
		if not section Then
			section = ini.AddSection("SAVE_" + CART)
		EndIf
		Local property:TIniProperty = section.FindProperty(key)
		if property Then
			property.SetValue(value)
		Else
			section.AddProperty(key, value)
		EndIf
		ini.Save("config.ini")
	EndMethod

	Method getData:String(key:String)
		Local section:TIniSection = ini.FindSection("SAVE_" + CART)
		if section Then
			Local property:TIniProperty = section.FindProperty(key)
			if property Then
				return property.GetValue()
			EndIf
		EndIf
		return ""
	EndMethod

EndType
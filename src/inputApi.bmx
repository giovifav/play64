
Type TinputApi

	Method down:string()
		If IsKeyDown( KEY_Z ) Then
			return "z"
		EndIf

		If IsKeyDown( KEY_x ) Then
			return "x"
		EndIf

		If IsKeyDown( KEY_UP ) Then
			return "up"
		EndIf

		If IsKeyDown( KEY_DOWN ) Then
			return "down"
		EndIf

		If IsKeyDown( KEY_LEFT ) Then
			return "left"
		EndIf

		If IsKeyDown( KEY_RIGHT ) Then
			return "right"
		EndIf
		
	EndMethod

	Method pressed:string()
		If IsKeyPressed( KEY_Z ) Then
			return "z"
		EndIf

		If IsKeyPressed( KEY_x ) Then
			return "x"
		EndIf

		If IsKeyPressed( KEY_UP ) Then
			return "up"
		EndIf

		If IsKeyPressed( KEY_DOWN ) Then
			return "down"
		EndIf

		If IsKeyPressed( KEY_LEFT ) Then
			return "left"
		EndIf

		If IsKeyPressed( KEY_RIGHT ) Then
			return "right"
		EndIf
		
	EndMethod

	Method released:string()
		If IsKeyReleased( KEY_Z ) Then
			return "z"
		EndIf

		If IsKeyReleased( KEY_x ) Then
			return "x"
		EndIf

		If IsKeyReleased( KEY_UP ) Then
			return "up"
		EndIf

		If IsKeyReleased( KEY_DOWN ) Then
			return "down"
		EndIf

		If IsKeyReleased( KEY_LEFT ) Then
			return "left"
		EndIf

		If IsKeyReleased( KEY_RIGHT ) Then
			return "right"
		EndIf
		
	EndMethod

	
EndType
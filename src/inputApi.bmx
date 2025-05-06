
Type TinputApi

	Method down:string()
		If IsKeyDown( KEY_Z ) or IsKeyDown( KEY_N ) Then
			return "a"
		EndIf

		If IsKeyDown( KEY_x ) or IsKeyDown( KEY_M ) Then
			return "b"
		EndIf

		If IsKeyDown( KEY_UP ) or IsKeyDown( KEY_W ) Then
			return "up"
		EndIf

		If IsKeyDown( KEY_DOWN ) or IsKeyDown( KEY_S ) Then
			return "down"
		EndIf

		If IsKeyDown( KEY_LEFT ) or IsKeyDown( KEY_A ) Then
			return "left"
		EndIf

		If IsKeyDown( KEY_RIGHT ) or IsKeyDown( KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	Method pressed:string()
		If IsKeyPressed( KEY_Z ) Or IsKeyPressed( KEY_N ) Then
			return "a"
		EndIf

		If IsKeyPressed( KEY_x ) Or IsKeyPressed( KEY_M) Then
			return "b"
		EndIf

		If IsKeyPressed( KEY_UP ) Or IsKeyPressed( KEY_W ) Then
			return "up"
		EndIf

		If IsKeyPressed( KEY_DOWN ) Or IsKeyPressed( KEY_S ) Then
			return "down"
		EndIf

		If IsKeyPressed( KEY_LEFT ) Or IsKeyPressed( KEY_A ) Then
			return "left"
		EndIf

		If IsKeyPressed( KEY_RIGHT ) Or IsKeyPressed( KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	Method released:string()
		If IsKeyReleased( KEY_Z ) Or IsKeyReleased( KEY_N ) Then
			return "a"
		EndIf

		If IsKeyReleased( KEY_x ) Or IsKeyReleased( KEY_M ) Then
			return "b"
		EndIf

		If IsKeyReleased( KEY_UP ) Or IsKeyReleased( KEY_W ) Then
			return "up"
		EndIf

		If IsKeyReleased( KEY_DOWN ) Or IsKeyReleased( KEY_S ) Then
			return "down"
		EndIf

		If IsKeyReleased( KEY_LEFT ) Or IsKeyReleased( KEY_A ) Then
			return "left"
		EndIf

		If IsKeyReleased( KEY_RIGHT ) Or IsKeyReleased( KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	
EndType

Type TinputApi

	Method down:string()
		If IsKeyDown( ray.lib.KEY_Z ) or IsKeyDown( ray.lib.KEY_N ) Then
			return "a"
		EndIf

		If IsKeyDown( ray.lib.KEY_X ) or IsKeyDown( ray.lib.KEY_M ) Then
			return "b"
		EndIf

		If IsKeyDown( ray.lib.KEY_UP ) or IsKeyDown( ray.lib.KEY_W ) Then
			return "up"
		EndIf

		If IsKeyDown( ray.lib.KEY_DOWN ) or IsKeyDown( ray.lib.KEY_S ) Then
			return "down"
		EndIf

		If IsKeyDown( ray.lib.KEY_LEFT ) or IsKeyDown( ray.lib.KEY_A ) Then
			return "left"
		EndIf

		If IsKeyDown( ray.lib.KEY_RIGHT ) or IsKeyDown( ray.lib.KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	Method pressed:string()
		If IsKeyPressed( ray.lib.KEY_Z ) Or IsKeyPressed( ray.lib.KEY_N ) Then
			return "a"
		EndIf

		If IsKeyPressed( ray.lib.KEY_X ) Or IsKeyPressed( ray.lib.KEY_M) Then
			return "b"
		EndIf

		If IsKeyPressed( ray.lib.KEY_UP ) Or IsKeyPressed( ray.lib.KEY_W ) Then
			return "up"
		EndIf

		If IsKeyPressed( ray.lib.KEY_DOWN ) Or IsKeyPressed( ray.lib.KEY_S ) Then
			return "down"
		EndIf

		If IsKeyPressed( ray.lib.KEY_LEFT ) Or IsKeyPressed( ray.lib.KEY_A ) Then
			return "left"
		EndIf

		If IsKeyPressed( ray.lib.KEY_RIGHT ) Or IsKeyPressed( ray.lib.KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	Method released:string()
		If IsKeyReleased( ray.lib.KEY_Z ) Or IsKeyReleased( ray.lib.KEY_N ) Then
			return "a"
		EndIf

		If IsKeyReleased( ray.lib.KEY_X ) Or IsKeyReleased( ray.lib.KEY_M ) Then
			return "b"
		EndIf

		If IsKeyReleased( ray.lib.KEY_UP ) Or IsKeyReleased( ray.lib.KEY_W ) Then
			return "up"
		EndIf

		If IsKeyReleased( ray.lib.KEY_DOWN ) Or IsKeyReleased( ray.lib.KEY_S ) Then
			return "down"
		EndIf

		If IsKeyReleased( ray.lib.KEY_LEFT ) Or IsKeyReleased( ray.lib.KEY_A ) Then
			return "left"
		EndIf

		If IsKeyReleased( ray.lib.KEY_RIGHT ) Or IsKeyReleased( ray.lib.KEY_D ) Then
			return "right"
		EndIf
		
	EndMethod

	
EndType
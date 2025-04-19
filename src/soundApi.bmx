Incbin "assets/blipSelect.wav"
Incbin "assets/click.wav"
Incbin "assets/explosion.wav"
Incbin "assets/hitHurt.wav"
Incbin "assets/jump.wav"
Incbin "assets/laserShoot.wav"
Incbin "assets/pickupCoin.wav"
Incbin "assets/powerUp.wav"
Incbin "assets/random.wav"
Incbin "assets/synth.wav"
' Audio initialization
Global BLIP_SOUND:Tsound = LoadSound("incbin::assets/blipSelect.wav")
Global CLICK_SOUND:Tsound = LoadSound("incbin::assets/click.wav")
Global EXPLOSION_SOUND:Tsound = LoadSound("incbin::assets/explosion.wav")
Global HIT_SOUND:Tsound = LoadSound("incbin::assets/hitHurt.wav")
Global JUMP_SOUND:Tsound = LoadSound("incbin::assets/jump.wav")
Global LASER_SOUND:Tsound = LoadSound("incbin::assets/laserShoot.wav")
Global PICKUP_SOUND:Tsound = LoadSound("incbin::assets/pickupCoin.wav")
Global POWERUP_SOUND:Tsound = LoadSound("incbin::assets/poweUp.wav")
Global RANDOM_SOUND:Tsound = LoadSound("incbin::assets/random.wav")
Global SYNTH_SOUND:Tsound = LoadSound("incbin::assets/synt.wav")


Type TSoundApi
	
	Method play(sound:String)
		If sound = "blip" then
			PlaySound(BLIP_SOUND)  
		EndIf

		If sound = "click" then
			PlaySound(CLICK_SOUND)
		EndIf

		If sound = "explosion" then
			PlaySound(EXPLOSION_SOUND)
		EndIf

		If sound = "hit" then
			PlaySound(HIT_SOUND)
		EndIf

		If sound = "powerup" then
            PlaySound(POWERUP_SOUND)
        EndIf

		If sound = "jump" then
			PlaySound(JUMP_SOUND)
		EndIf

		If sound = "pickup" then
			PlaySound(PICKUP_SOUND)
		EndIf

		If sound = "laser" then
			PlaySound(LASER_SOUND)
		EndIf

		If sound = "random" then
			PlaySound( RANDOM_SOUND )
		EndIf

		If sound = "synth" then
			PlaySound( SYNTH_SOUND )
		EndIf
	EndMethod

EndType
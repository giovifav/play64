'List of sounds:
'Bottle_Break
'Bump
'Cancel
'Cat_Meow
'Click
'Confirm
'Crunch
'Digital_Alarm
'Dog_Bark
'Door_Slow_Open
'Drink
'Evil_Laugh
'Explosion
'Gun
'Hurt
'Jump
'Laser_Gun
'Low_Health
'Menu_In
'Menu_Out
'Monster_Scream
'Notso_Confirm
'Pause
'Phone_Ring
'Powerdown
'Powerup
'Siren
'Steps
'Sword_Slash
'Thunder
'Trampoline
'Water_Splash
Incbin "assets/Bottle_Break.wav"
Global sounds_Bottle_Break:Tsound = LoadSound("incbin::assets/Bottle_Break.wav")
Incbin "assets/Bump.wav"
Global sounds_Bump:Tsound = LoadSound("incbin::assets/Bump.wav")
Incbin "assets/Cancel.wav"
Global sounds_Cancel:Tsound = LoadSound("incbin::assets/Cancel.wav")
Incbin "assets/Cat_Meow.wav"
Global sounds_Cat_Meow:Tsound = LoadSound("incbin::assets/Cat_Meow.wav")
Incbin "assets/Click.wav"
Global sounds_Click:Tsound = LoadSound("incbin::assets/Click.wav")
Incbin "assets/Confirm.wav"
Global sounds_Confirm:Tsound = LoadSound("incbin::assets/Confirm.wav")
Incbin "assets/Crunch.wav"
Global sounds_Crunch:Tsound = LoadSound("incbin::assets/Crunch.wav")
Incbin "assets/Digital_Alarm.wav"
Global sounds_Digital_Alarm:Tsound = LoadSound("incbin::assets/Digital_Alarm.wav")
Incbin "assets/Dog_Bark.wav"
Global sounds_Dog_Bark:Tsound = LoadSound("incbin::assets/Dog_Bark.wav")
Incbin "assets/Door_Slow_Open.wav"
Global sounds_Door_Slow_Open:Tsound = LoadSound("incbin::assets/Door_Slow_Open.wav")
Incbin "assets/Drink.wav"
Global sounds_Drink:Tsound = LoadSound("incbin::assets/Drink.wav")
Incbin "assets/Evil_Laugh.wav"
Global sounds_Evil_Laugh:Tsound = LoadSound("incbin::assets/Evil_Laugh.wav")
Incbin "assets/Explosion.wav"
Global sounds_Explosion:Tsound = LoadSound("incbin::assets/Explosion.wav")
Incbin "assets/Gun.wav"
Global sounds_Gun:Tsound = LoadSound("incbin::assets/Gun.wav")
Incbin "assets/Hurt.wav"
Global sounds_Hurt:Tsound = LoadSound("incbin::assets/Hurt.wav")
Incbin "assets/Jump.wav"
Global sounds_Jump:Tsound = LoadSound("incbin::assets/Jump.wav")
Incbin "assets/Laser_Gun.wav"
Global sounds_Laser_Gun:Tsound = LoadSound("incbin::assets/Laser_Gun.wav")
Incbin "assets/Low_Health.wav"
Global sounds_Low_Health:Tsound = LoadSound("incbin::assets/Low_Health.wav")
Incbin "assets/Menu_In.wav"
Global sounds_Menu_In:Tsound = LoadSound("incbin::assets/Menu_In.wav")
Incbin "assets/Menu_Out.wav"
Global sounds_Menu_Out:Tsound = LoadSound("incbin::assets/Menu_Out.wav")
Incbin "assets/Monster_Scream.wav"
Global sounds_Monster_Scream:Tsound = LoadSound("incbin::assets/Monster_Scream.wav")
Incbin "assets/Notso_Confirm.wav"
Global sounds_Notso_Confirm:Tsound = LoadSound("incbin::assets/Notso_Confirm.wav")
Incbin "assets/Pause.wav"
Global sounds_Pause:Tsound = LoadSound("incbin::assets/Pause.wav")
Incbin "assets/Phone_Ring.wav"
Global sounds_Phone_Ring:Tsound = LoadSound("incbin::assets/Phone_Ring.wav")
Incbin "assets/Powerdown.wav"
Global sounds_Powerdown:Tsound = LoadSound("incbin::assets/Powerdown.wav")
Incbin "assets/Powerup.wav"
Global sounds_Powerup:Tsound = LoadSound("incbin::assets/Powerup.wav")
Incbin "assets/Siren.wav"
Global sounds_Siren:Tsound = LoadSound("incbin::assets/Siren.wav")
Incbin "assets/Steps.wav"
Global sounds_Steps:Tsound = LoadSound("incbin::assets/Steps.wav")
Incbin "assets/Sword_Slash.wav"
Global sounds_Sword_Slash:Tsound = LoadSound("incbin::assets/Sword_Slash.wav")
Incbin "assets/Thunder.wav"
Global sounds_Thunder:Tsound = LoadSound("incbin::assets/Thunder.wav")
Incbin "assets/Trampoline.wav"
Global sounds_Trampoline:Tsound = LoadSound("incbin::assets/Trampoline.wav")
Incbin "assets/Water_Splash.wav"
Global sounds_Water_Splash:Tsound = LoadSound("incbin::assets/Water_Splash.wav")
Type TSoundApi
Method play(sound:String)
If sound = "Bottle_Break"  PlaySound(sounds_Bottle_Break)
If sound = "Bump"  PlaySound(sounds_Bump)
If sound = "Cancel"  PlaySound(sounds_Cancel)
If sound = "Cat_Meow"  PlaySound(sounds_Cat_Meow)
If sound = "Click"  PlaySound(sounds_Click)
If sound = "Confirm"  PlaySound(sounds_Confirm)
If sound = "Crunch"  PlaySound(sounds_Crunch)
If sound = "Digital_Alarm"  PlaySound(sounds_Digital_Alarm)
If sound = "Dog_Bark"  PlaySound(sounds_Dog_Bark)
If sound = "Door_Slow_Open"  PlaySound(sounds_Door_Slow_Open)
If sound = "Drink"  PlaySound(sounds_Drink)
If sound = "Evil_Laugh"  PlaySound(sounds_Evil_Laugh)
If sound = "Explosion"  PlaySound(sounds_Explosion)
If sound = "Gun"  PlaySound(sounds_Gun)
If sound = "Hurt"  PlaySound(sounds_Hurt)
If sound = "Jump"  PlaySound(sounds_Jump)
If sound = "Laser_Gun"  PlaySound(sounds_Laser_Gun)
If sound = "Low_Health"  PlaySound(sounds_Low_Health)
If sound = "Menu_In"  PlaySound(sounds_Menu_In)
If sound = "Menu_Out"  PlaySound(sounds_Menu_Out)
If sound = "Monster_Scream"  PlaySound(sounds_Monster_Scream)
If sound = "Notso_Confirm"  PlaySound(sounds_Notso_Confirm)
If sound = "Pause"  PlaySound(sounds_Pause)
If sound = "Phone_Ring"  PlaySound(sounds_Phone_Ring)
If sound = "Powerdown"  PlaySound(sounds_Powerdown)
If sound = "Powerup"  PlaySound(sounds_Powerup)
If sound = "Siren"  PlaySound(sounds_Siren)
If sound = "Steps"  PlaySound(sounds_Steps)
If sound = "Sword_Slash"  PlaySound(sounds_Sword_Slash)
If sound = "Thunder"  PlaySound(sounds_Thunder)
If sound = "Trampoline"  PlaySound(sounds_Trampoline)
If sound = "Water_Splash"  PlaySound(sounds_Water_Splash)
EndMethod EndType

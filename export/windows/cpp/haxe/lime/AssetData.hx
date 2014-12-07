package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/ball.png", "assets/images/ball.png");
			type.set ("assets/images/ball.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bg.png", "assets/images/bg.png");
			type.set ("assets/images/bg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle1.png", "assets/images/OuterCircle1.png");
			type.set ("assets/images/OuterCircle1.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle2.png", "assets/images/OuterCircle2.png");
			type.set ("assets/images/OuterCircle2.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle3.png", "assets/images/OuterCircle3.png");
			type.set ("assets/images/OuterCircle3.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle4.png", "assets/images/OuterCircle4.png");
			type.set ("assets/images/OuterCircle4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle5.png", "assets/images/OuterCircle5.png");
			type.set ("assets/images/OuterCircle5.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle6.png", "assets/images/OuterCircle6.png");
			type.set ("assets/images/OuterCircle6.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle7.png", "assets/images/OuterCircle7.png");
			type.set ("assets/images/OuterCircle7.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle8.png", "assets/images/OuterCircle8.png");
			type.set ("assets/images/OuterCircle8.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/OuterCircle9.png", "assets/images/OuterCircle9.png");
			type.set ("assets/images/OuterCircle9.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pipe.png", "assets/images/pipe.png");
			type.set ("assets/images/pipe.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/background.wav", "assets/music/background.wav");
			type.set ("assets/music/background.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/BallDrop.wav", "assets/sounds/BallDrop.wav");
			type.set ("assets/sounds/BallDrop.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/buttonclick.wav", "assets/sounds/buttonclick.wav");
			type.set ("assets/sounds/buttonclick.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/extralife.wav", "assets/sounds/extralife.wav");
			type.set ("assets/sounds/extralife.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/GameOver.wav", "assets/sounds/GameOver.wav");
			type.set ("assets/sounds/GameOver.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/IncreaseDifficulty.wav", "assets/sounds/IncreaseDifficulty.wav");
			type.set ("assets/sounds/IncreaseDifficulty.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/LifeLost.wav", "assets/sounds/LifeLost.wav");
			type.set ("assets/sounds/LifeLost.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/Match.wav", "assets/sounds/Match.wav");
			type.set ("assets/sounds/Match.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/rotate.wav", "assets/sounds/rotate.wav");
			type.set ("assets/sounds/rotate.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/box.png", "flixel/flixel-ui/img/box.png");
			type.set ("flixel/flixel-ui/img/box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button.png", "flixel/flixel-ui/img/button.png");
			type.set ("flixel/flixel-ui/img/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_down.png", "flixel/flixel-ui/img/button_arrow_down.png");
			type.set ("flixel/flixel-ui/img/button_arrow_down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_left.png", "flixel/flixel-ui/img/button_arrow_left.png");
			type.set ("flixel/flixel-ui/img/button_arrow_left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_right.png", "flixel/flixel-ui/img/button_arrow_right.png");
			type.set ("flixel/flixel-ui/img/button_arrow_right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_arrow_up.png", "flixel/flixel-ui/img/button_arrow_up.png");
			type.set ("flixel/flixel-ui/img/button_arrow_up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_thin.png", "flixel/flixel-ui/img/button_thin.png");
			type.set ("flixel/flixel-ui/img/button_thin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/button_toggle.png", "flixel/flixel-ui/img/button_toggle.png");
			type.set ("flixel/flixel-ui/img/button_toggle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_box.png", "flixel/flixel-ui/img/check_box.png");
			type.set ("flixel/flixel-ui/img/check_box.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/check_mark.png", "flixel/flixel-ui/img/check_mark.png");
			type.set ("flixel/flixel-ui/img/check_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome.png", "flixel/flixel-ui/img/chrome.png");
			type.set ("flixel/flixel-ui/img/chrome.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_flat.png", "flixel/flixel-ui/img/chrome_flat.png");
			type.set ("flixel/flixel-ui/img/chrome_flat.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_inset.png", "flixel/flixel-ui/img/chrome_inset.png");
			type.set ("flixel/flixel-ui/img/chrome_inset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/chrome_light.png", "flixel/flixel-ui/img/chrome_light.png");
			type.set ("flixel/flixel-ui/img/chrome_light.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/dropdown_mark.png", "flixel/flixel-ui/img/dropdown_mark.png");
			type.set ("flixel/flixel-ui/img/dropdown_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_big.png", "flixel/flixel-ui/img/finger_big.png");
			type.set ("flixel/flixel-ui/img/finger_big.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/finger_small.png", "flixel/flixel-ui/img/finger_small.png");
			type.set ("flixel/flixel-ui/img/finger_small.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/hilight.png", "flixel/flixel-ui/img/hilight.png");
			type.set ("flixel/flixel-ui/img/hilight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/invis.png", "flixel/flixel-ui/img/invis.png");
			type.set ("flixel/flixel-ui/img/invis.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/minus_mark.png", "flixel/flixel-ui/img/minus_mark.png");
			type.set ("flixel/flixel-ui/img/minus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/plus_mark.png", "flixel/flixel-ui/img/plus_mark.png");
			type.set ("flixel/flixel-ui/img/plus_mark.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio.png", "flixel/flixel-ui/img/radio.png");
			type.set ("flixel/flixel-ui/img/radio.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/radio_dot.png", "flixel/flixel-ui/img/radio_dot.png");
			type.set ("flixel/flixel-ui/img/radio_dot.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/swatch.png", "flixel/flixel-ui/img/swatch.png");
			type.set ("flixel/flixel-ui/img/swatch.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab.png", "flixel/flixel-ui/img/tab.png");
			type.set ("flixel/flixel-ui/img/tab.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/img/tab_back.png", "flixel/flixel-ui/img/tab_back.png");
			type.set ("flixel/flixel-ui/img/tab_back.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/defaults.xml", "flixel/flixel-ui/xml/defaults.xml");
			type.set ("flixel/flixel-ui/xml/defaults.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_loading_screen.xml", "flixel/flixel-ui/xml/default_loading_screen.xml");
			type.set ("flixel/flixel-ui/xml/default_loading_screen.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("flixel/flixel-ui/xml/default_popup.xml", "flixel/flixel-ui/xml/default_popup.xml");
			type.set ("flixel/flixel-ui/xml/default_popup.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData

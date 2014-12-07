#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS0(Difficulty)
HX_DECLARE_CLASS0(DiscSprite)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxSave)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		bool GameOver;
		bool StartGame;
		::flixel::addons::ui::FlxUIButton StartButton;
		::flixel::addons::ui::FlxUIButton MusicButton;
		bool music;
		bool sound;
		::flixel::addons::ui::FlxUIButton SoundButton;
		::flixel::text::FlxText GameOverText;
		::flixel::system::FlxSound ballSfx;
		::flixel::system::FlxSound lifeSfx;
		::flixel::system::FlxSound deathSfx;
		::flixel::system::FlxSound overSfx;
		::flixel::system::FlxSound diffSfx;
		::flixel::system::FlxSound rotateSfx;
		::flixel::system::FlxSound matchSfx;
		int score;
		int lives;
		int extralifecounter;
		int diffCounter;
		::flixel::text::FlxText scoreText;
		::flixel::text::FlxText livesText;
		Array< ::Dynamic > discs;
		Array< ::Dynamic > pipes;
		Array< ::Dynamic > ball;
		::flixel::FlxSprite bg;
		::flixel::FlxSprite border;
		::flixel::FlxSprite margin;
		::flixel::text::FlxText hiscoreText;
		int hiScore;
		::flixel::util::FlxSave scoreSave;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void ToggleMusic( );
		Dynamic ToggleMusic_dyn();

		virtual Void ToggleSoundFx( );
		Dynamic ToggleSoundFx_dyn();

		virtual Void Start( );
		Dynamic Start_dyn();

		virtual int SelectDisc( int x,int y);
		Dynamic SelectDisc_dyn();

		virtual Void updateScore( int ballIndex);
		Dynamic updateScore_dyn();

		virtual int addScore( int discColor,int ballColor);
		Dynamic addScore_dyn();

		virtual int colorCompare( int c1,int c2);
		Dynamic colorCompare_dyn();

		virtual int getRandColor( int i);
		Dynamic getRandColor_dyn();

		static Float rotationAmount;
		static ::Difficulty diff;
};


#endif /* INCLUDED_PlayState */ 

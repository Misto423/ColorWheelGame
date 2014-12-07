#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
#endif
#ifndef INCLUDED_Difficulty
#include <Difficulty.h>
#endif
#ifndef INCLUDED_DiscSprite
#include <DiscSprite.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_ScoreText
#include <ScoreText.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",22,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(59)
	this->hiScore = (int)0;
	HX_STACK_LINE(47)
	this->diffCounter = (int)0;
	HX_STACK_LINE(46)
	this->extralifecounter = (int)0;
	HX_STACK_LINE(32)
	this->sound = true;
	HX_STACK_LINE(31)
	this->music = true;
	HX_STACK_LINE(28)
	this->StartGame = true;
	HX_STACK_LINE(27)
	this->GameOver = false;
	HX_STACK_LINE(22)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",66,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(67)
		::Difficulty _g = ::Difficulty_obj::__new(null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::PlayState_obj::diff = _g;
		HX_STACK_LINE(68)
		::flixel::FlxG_obj::sound->playMusic(HX_CSTRING("assets/music/background.wav"),(int)1,true);
		HX_STACK_LINE(69)
		::flixel::system::FlxSound _g1 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/extralife.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		this->lifeSfx = _g1;
		HX_STACK_LINE(70)
		::flixel::system::FlxSound _g2 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/BallDrop.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(70)
		this->ballSfx = _g2;
		HX_STACK_LINE(71)
		::flixel::system::FlxSound _g3 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/LifeLost.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(71)
		this->deathSfx = _g3;
		HX_STACK_LINE(72)
		::flixel::system::FlxSound _g4 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/GameOver.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(72)
		this->overSfx = _g4;
		HX_STACK_LINE(73)
		::flixel::system::FlxSound _g5 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/IncreaseDifficulty.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(73)
		this->diffSfx = _g5;
		HX_STACK_LINE(74)
		::flixel::system::FlxSound _g6 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/rotate.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(74)
		this->rotateSfx = _g6;
		HX_STACK_LINE(75)
		::flixel::system::FlxSound _g7 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/Match.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(75)
		this->matchSfx = _g7;
		HX_STACK_LINE(77)
		::PlayState_obj::rotationAmount = 45.;
		HX_STACK_LINE(78)
		this->score = (int)0;
		HX_STACK_LINE(81)
		::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(81)
		this->bg = _g8;
		HX_STACK_LINE(82)
		this->bg->loadGraphic(HX_CSTRING("assets/images/bg.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(83)
		this->add(this->bg);
		HX_STACK_LINE(86)
		Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(86)
		this->discs = _g9;
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int _g10 = (int)0;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(87)
			while((true)){
				HX_STACK_LINE(87)
				if ((!(((_g10 < (int)9))))){
					HX_STACK_LINE(87)
					break;
				}
				HX_STACK_LINE(87)
				int i = (_g10)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(89)
				this->discs[i] = ::DiscSprite_obj::__new((int)0,(int)0,null(),i);
				HX_STACK_LINE(90)
				this->discs->__get(i).StaticCast< ::DiscSprite >()->loadGraphic(((HX_CSTRING("assets/images/OuterCircle") + ((i + (int)1))) + HX_CSTRING(".png")),null(),null(),null(),null(),null());
				HX_STACK_LINE(91)
				this->add(this->discs->__get(i).StaticCast< ::DiscSprite >());
			}
		}
		HX_STACK_LINE(94)
		Array< ::Dynamic > _g10 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(94)
		this->pipes = _g10;
		HX_STACK_LINE(95)
		Float angle = (int)-45;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(96)
			while((true)){
				HX_STACK_LINE(96)
				if ((!(((_g11 < (int)4))))){
					HX_STACK_LINE(96)
					break;
				}
				HX_STACK_LINE(96)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(98)
				this->pipes[i] = ::flixel::FlxSprite_obj::__new(null(),null(),null());
				HX_STACK_LINE(99)
				this->pipes->__get(i).StaticCast< ::flixel::FlxSprite >()->loadGraphic(HX_CSTRING("assets/images/pipe.png"),null(),null(),null(),null(),null());
				HX_STACK_LINE(100)
				this->pipes->__get(i).StaticCast< ::flixel::FlxSprite >()->set_angle(angle);
				HX_STACK_LINE(101)
				hx::AddEq(angle,(int)90);
				HX_STACK_LINE(102)
				this->add(this->pipes->__get(i).StaticCast< ::flixel::FlxSprite >());
			}
		}
		HX_STACK_LINE(104)
		this->pipes->__get((int)0).StaticCast< ::flixel::FlxSprite >()->set_x((int)25);
		HX_STACK_LINE(105)
		this->pipes->__get((int)0).StaticCast< ::flixel::FlxSprite >()->set_y((int)-50);
		HX_STACK_LINE(106)
		this->pipes->__get((int)1).StaticCast< ::flixel::FlxSprite >()->set_x((int)650);
		HX_STACK_LINE(107)
		this->pipes->__get((int)1).StaticCast< ::flixel::FlxSprite >()->set_y((int)-50);
		HX_STACK_LINE(108)
		this->pipes->__get((int)2).StaticCast< ::flixel::FlxSprite >()->set_x((int)625);
		HX_STACK_LINE(109)
		this->pipes->__get((int)2).StaticCast< ::flixel::FlxSprite >()->set_y((int)550);
		HX_STACK_LINE(110)
		this->pipes->__get((int)3).StaticCast< ::flixel::FlxSprite >()->set_x((int)35);
		HX_STACK_LINE(111)
		this->pipes->__get((int)3).StaticCast< ::flixel::FlxSprite >()->set_y((int)565);
		HX_STACK_LINE(114)
		Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(114)
		this->ball = _g11;
		HX_STACK_LINE(117)
		::flixel::FlxSprite _g12 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(117)
		this->margin = _g12;
		HX_STACK_LINE(118)
		this->margin->makeGraphic((int)200,(int)700,(int)-16777216,null(),null());
		HX_STACK_LINE(119)
		this->margin->set_x((int)700);
		HX_STACK_LINE(120)
		this->margin->set_y((int)0);
		HX_STACK_LINE(121)
		this->add(this->margin);
		HX_STACK_LINE(123)
		::flixel::FlxSprite _g13 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(123)
		this->border = _g13;
		HX_STACK_LINE(124)
		this->border->makeGraphic((int)3,(int)700,(int)-8113799,null(),null());
		HX_STACK_LINE(125)
		this->border->set_x((int)700);
		HX_STACK_LINE(126)
		this->border->set_y((int)0);
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::PlayState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",127,0xb30d7781)
				{
					HX_STACK_LINE(127)
					int _int = __this->score;		HX_STACK_VAR(_int,"int");
					HX_STACK_LINE(127)
					return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(127)
		::String _g14 = ::Std_obj::string(_Function_1_1::Block(this));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(127)
		::String _g15 = (HX_CSTRING("") + _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(127)
		::flixel::text::FlxText _g16 = ::flixel::text::FlxText_obj::__new((int)705,(int)48,(int)0,_g15,(int)20,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(127)
		this->scoreText = _g16;
		HX_STACK_LINE(129)
		this->lives = (int)5;
		HX_STACK_LINE(130)
		::flixel::text::FlxText _g17 = ::flixel::text::FlxText_obj::__new((int)705,(int)90,(int)0,(HX_CSTRING("Lives: ") + this->lives),(int)24,null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(130)
		this->livesText = _g17;
		HX_STACK_LINE(131)
		this->add(this->livesText);
		HX_STACK_LINE(133)
		this->add(this->border);
		HX_STACK_LINE(134)
		::flixel::text::FlxText _g18 = ::flixel::text::FlxText_obj::__new((int)705,(int)0,(int)0,HX_CSTRING("Score:"),(int)32,null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(134)
		this->add(_g18);
		HX_STACK_LINE(135)
		this->add(this->scoreText);
		HX_STACK_LINE(137)
		::flixel::text::FlxText _g19 = ::flixel::text::FlxText_obj::__new((int)705,(int)450,(int)0,HX_CSTRING("GAME OVER!"),(int)26,null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(137)
		this->GameOverText = _g19;
		HX_STACK_LINE(138)
		this->GameOverText->set_color((int)-65536);
		HX_STACK_LINE(140)
		::flixel::addons::ui::FlxUIButton _g20 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)725,(int)500,HX_CSTRING(""),this->Start_dyn());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(140)
		this->StartButton = _g20;
		HX_STACK_LINE(141)
		::flixel::addons::ui::FlxUIText _g21 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Start Game"),(int)8,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(141)
		this->StartButton->setLabel(_g21);
		HX_STACK_LINE(142)
		this->StartButton->resize((int)150,(int)100);
		HX_STACK_LINE(143)
		::flixel::system::FlxSound _g22 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/buttonclick.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(143)
		this->StartButton->onUp->sound = _g22;
		HX_STACK_LINE(145)
		::flixel::addons::ui::FlxUIButton _g23 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)725,(int)625,HX_CSTRING(""),this->ToggleMusic_dyn());		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(145)
		this->MusicButton = _g23;
		HX_STACK_LINE(146)
		::flixel::addons::ui::FlxUIText _g24 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Music Off"),(int)8,null());		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(146)
		this->MusicButton->setLabel(_g24);
		HX_STACK_LINE(147)
		this->MusicButton->resize((int)75,(int)50);
		HX_STACK_LINE(148)
		::flixel::system::FlxSound _g25 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/buttonclick.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(148)
		this->MusicButton->onUp->sound = _g25;
		HX_STACK_LINE(149)
		this->add(this->MusicButton);
		HX_STACK_LINE(151)
		::flixel::addons::ui::FlxUIButton _g26 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)810,(int)625,HX_CSTRING(""),this->ToggleSoundFx_dyn());		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(151)
		this->SoundButton = _g26;
		HX_STACK_LINE(152)
		::flixel::addons::ui::FlxUIText _g27 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Sound Off"),(int)8,null());		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(152)
		this->SoundButton->setLabel(_g27);
		HX_STACK_LINE(153)
		this->SoundButton->resize((int)75,(int)50);
		HX_STACK_LINE(154)
		::flixel::system::FlxSound _g28 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/buttonclick.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(154)
		this->SoundButton->onUp->sound = _g28;
		HX_STACK_LINE(155)
		this->add(this->SoundButton);
		HX_STACK_LINE(157)
		::flixel::util::FlxSave _g29 = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(157)
		this->scoreSave = _g29;
		HX_STACK_LINE(158)
		this->scoreSave->bind(HX_CSTRING("ScoreSave"));
		HX_STACK_LINE(159)
		if (((this->scoreSave->data->__Field(HX_CSTRING("HiScore"),true) == null()))){
			HX_STACK_LINE(161)
			this->scoreSave->data->__FieldRef(HX_CSTRING("HiScore")) = (int)0;
			HX_STACK_LINE(162)
			this->scoreSave->flush(null(),null());
		}
		HX_STACK_LINE(164)
		this->hiScore = this->scoreSave->data->__Field(HX_CSTRING("HiScore"),true);
		HX_STACK_LINE(166)
		::flixel::text::FlxText _g30 = ::flixel::text::FlxText_obj::__new((int)705,(int)150,(int)0,HX_CSTRING("High Score:"),(int)26,null());		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(166)
		this->add(_g30);
		HX_STACK_LINE(167)
		::flixel::text::FlxText _g31 = ::flixel::text::FlxText_obj::__new((int)705,(int)200,(int)0,(HX_CSTRING("") + this->hiScore),(int)20,null());		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(167)
		this->hiscoreText = _g31;
		HX_STACK_LINE(168)
		this->add(this->hiscoreText);
		HX_STACK_LINE(170)
		this->super::create();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",178,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->StartButton);
		HX_STACK_LINE(180)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->SoundButton);
		HX_STACK_LINE(181)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->MusicButton);
		HX_STACK_LINE(183)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->livesText);
		HX_STACK_LINE(184)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->scoreText);
		HX_STACK_LINE(186)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->border);
		HX_STACK_LINE(187)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->margin);
		HX_STACK_LINE(189)
		{
			HX_STACK_LINE(189)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(189)
			int _g = this->discs->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(189)
			while((true)){
				HX_STACK_LINE(189)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(189)
					break;
				}
				HX_STACK_LINE(189)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(191)
				::flixel::util::FlxDestroyUtil_obj::destroy(this->discs->__get(i).StaticCast< ::DiscSprite >());
			}
		}
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			int _g = this->pipes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				::flixel::util::FlxDestroyUtil_obj::destroy(this->pipes->__get(i).StaticCast< ::flixel::FlxSprite >());
			}
		}
		HX_STACK_LINE(198)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->StartButton);
		HX_STACK_LINE(199)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->StartButton);
		HX_STACK_LINE(201)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->bg);
		HX_STACK_LINE(203)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->ballSfx);
		HX_STACK_LINE(204)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->diffSfx);
		HX_STACK_LINE(205)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->overSfx);
		HX_STACK_LINE(206)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->lifeSfx);
		HX_STACK_LINE(207)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->deathSfx);
		HX_STACK_LINE(208)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->rotateSfx);
		HX_STACK_LINE(209)
		::flixel::util::FlxDestroyUtil_obj::destroy(this->matchSfx);
		HX_STACK_LINE(210)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",217,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		if ((this->StartGame)){
			HX_STACK_LINE(220)
			if ((this->GameOver)){
				HX_STACK_LINE(222)
				if ((this->sound)){
					HX_STACK_LINE(222)
					this->overSfx->play(null());
				}
				HX_STACK_LINE(223)
				this->scoreSave->data->__FieldRef(HX_CSTRING("HiScore")) = this->hiScore;
				HX_STACK_LINE(224)
				this->scoreSave->flush(null(),null());
				HX_STACK_LINE(225)
				this->add(this->GameOverText);
				HX_STACK_LINE(226)
				::flixel::addons::ui::FlxUIText _g = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Try Again"),(int)8,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(226)
				this->StartButton->setLabel(_g);
				HX_STACK_LINE(227)
				this->GameOver = false;
			}
			HX_STACK_LINE(229)
			this->add(this->StartButton);
		}
		else{
			struct _Function_2_1{
				inline static bool Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",233,0xb30d7781)
					{
						HX_STACK_LINE(233)
						::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(233)
						return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
					}
					return null();
				}
			};
			HX_STACK_LINE(233)
			if (((bool(_Function_2_1::Block()) || bool((::flixel::FlxG_obj::mouse->wheel > (int)0))))){
				HX_STACK_LINE(235)
				int d = this->SelectDisc(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(236)
				if (((d >= (int)0))){
					HX_STACK_LINE(238)
					{
						HX_STACK_LINE(238)
						::DiscSprite _g = this->discs->__get(d).StaticCast< ::DiscSprite >();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(238)
						_g->set_angle((_g->angle + ::PlayState_obj::rotationAmount));
					}
					HX_STACK_LINE(239)
					this->discs->__get(d).StaticCast< ::DiscSprite >()->rotate(false);
					HX_STACK_LINE(240)
					this->rotateSfx->play(true);
				}
			}
			else{
				struct _Function_3_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",243,0xb30d7781)
						{
							HX_STACK_LINE(243)
							::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_rightButton;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(243)
							return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
						}
						return null();
					}
				};
				HX_STACK_LINE(243)
				if (((bool(_Function_3_1::Block()) || bool((::flixel::FlxG_obj::mouse->wheel < (int)0))))){
					HX_STACK_LINE(245)
					int d = this->SelectDisc(::flixel::FlxG_obj::mouse->screenX,::flixel::FlxG_obj::mouse->screenY);		HX_STACK_VAR(d,"d");
					HX_STACK_LINE(246)
					if (((d >= (int)0))){
						HX_STACK_LINE(248)
						{
							HX_STACK_LINE(248)
							::DiscSprite _g = this->discs->__get(d).StaticCast< ::DiscSprite >();		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(248)
							_g->set_angle((_g->angle + -(::PlayState_obj::rotationAmount)));
						}
						HX_STACK_LINE(249)
						this->discs->__get(d).StaticCast< ::DiscSprite >()->rotate(true);
						HX_STACK_LINE(250)
						this->rotateSfx->play(true);
					}
				}
			}
			HX_STACK_LINE(254)
			{
				HX_STACK_LINE(254)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(254)
				int _g = this->ball->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(254)
				while((true)){
					HX_STACK_LINE(254)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(254)
						break;
					}
					HX_STACK_LINE(254)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(256)
					this->ball->__get(i).StaticCast< ::Ball >()->HandleMovement();
					HX_STACK_LINE(257)
					this->updateScore(i);
				}
			}
			HX_STACK_LINE(260)
			if ((::PlayState_obj::diff->ShouldSpawn())){
				HX_STACK_LINE(262)
				int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(262)
				int _g2 = ::PlayState_obj::diff->getBallSpawnPercent();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(262)
				if (((_g1 <= _g2))){
					HX_STACK_LINE(264)
					int _g3 = ::PlayState_obj::diff->getBallSpeed();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(264)
					int _g4 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)3,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(264)
					::Ball b = ::Ball_obj::__new(_g3,_g4);		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(265)
					int _g5 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)8,null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(265)
					int _g6 = this->getRandColor(_g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(265)
					b->set_color(_g6);
					HX_STACK_LINE(266)
					this->ball->push(b);
					HX_STACK_LINE(267)
					this->add(b);
					HX_STACK_LINE(268)
					if ((this->sound)){
						HX_STACK_LINE(268)
						this->ballSfx->play(null());
					}
				}
			}
			HX_STACK_LINE(272)
			if (((this->diffCounter >= (int)25000))){
				HX_STACK_LINE(274)
				::PlayState_obj::diff->IncreaseDifficulty();
				HX_STACK_LINE(275)
				this->diffCounter = (int)0;
				HX_STACK_LINE(276)
				if ((this->sound)){
					HX_STACK_LINE(276)
					this->diffSfx->play(null());
				}
			}
			HX_STACK_LINE(279)
			if (((this->extralifecounter >= (int)10000))){
				HX_STACK_LINE(281)
				this->extralifecounter = (int)0;
				HX_STACK_LINE(282)
				(this->lives)++;
				HX_STACK_LINE(284)
				if ((this->sound)){
					HX_STACK_LINE(284)
					this->lifeSfx->play(null());
				}
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::PlayState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",287,0xb30d7781)
					{
						HX_STACK_LINE(287)
						int a = __this->score;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(287)
						int b = __this->hiScore;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(287)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(287)
						bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(287)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > b)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(287)
			if ((_Function_2_2::Block(this))){
				HX_STACK_LINE(289)
				this->hiScore = this->score;
			}
			struct _Function_2_3{
				inline static Float Block( hx::ObjectPtr< ::PlayState_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",292,0xb30d7781)
					{
						HX_STACK_LINE(292)
						int _int = __this->score;		HX_STACK_VAR(_int,"int");
						HX_STACK_LINE(292)
						return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(292)
			::String _g7 = ::Std_obj::string(_Function_2_3::Block(this));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(292)
			::String _g8 = (HX_CSTRING("") + _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(292)
			this->scoreText->set_text(_g8);
			HX_STACK_LINE(293)
			this->livesText->set_text((HX_CSTRING("Lives: ") + this->lives));
			HX_STACK_LINE(294)
			this->hiscoreText->set_text((HX_CSTRING("") + this->hiScore));
		}
		HX_STACK_LINE(296)
		this->super::update();
	}
return null();
}


Void PlayState_obj::ToggleMusic( ){
{
		HX_STACK_FRAME("PlayState","ToggleMusic",0x25a26dc0,"PlayState.ToggleMusic","PlayState.hx",300,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(301)
		if ((this->music)){
			HX_STACK_LINE(303)
			::flixel::addons::ui::FlxUIText _g = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Music On"),(int)8,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(303)
			this->MusicButton->setLabel(_g);
			HX_STACK_LINE(304)
			::flixel::FlxG_obj::sound->pause();
		}
		else{
			HX_STACK_LINE(308)
			::flixel::addons::ui::FlxUIText _g1 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Music Off"),(int)8,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(308)
			this->MusicButton->setLabel(_g1);
			HX_STACK_LINE(309)
			::flixel::FlxG_obj::sound->resume();
		}
		HX_STACK_LINE(311)
		this->music = !(this->music);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,ToggleMusic,(void))

Void PlayState_obj::ToggleSoundFx( ){
{
		HX_STACK_FRAME("PlayState","ToggleSoundFx",0x62e235dc,"PlayState.ToggleSoundFx","PlayState.hx",315,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(316)
		if ((this->sound)){
			HX_STACK_LINE(318)
			::flixel::addons::ui::FlxUIText _g = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Sound On"),(int)8,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(318)
			this->SoundButton->setLabel(_g);
		}
		else{
			HX_STACK_LINE(322)
			::flixel::addons::ui::FlxUIText _g1 = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Sound Off"),(int)8,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(322)
			this->SoundButton->setLabel(_g1);
		}
		HX_STACK_LINE(324)
		this->sound = !(this->sound);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,ToggleSoundFx,(void))

Void PlayState_obj::Start( ){
{
		HX_STACK_FRAME("PlayState","Start",0xd6f66471,"PlayState.Start","PlayState.hx",328,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		this->StartGame = false;
		HX_STACK_LINE(330)
		this->GameOver = false;
		HX_STACK_LINE(331)
		this->lives = (int)5;
		HX_STACK_LINE(332)
		this->score = (int)0;
		HX_STACK_LINE(333)
		this->extralifecounter = (int)0;
		HX_STACK_LINE(334)
		this->diffCounter = (int)0;
		HX_STACK_LINE(335)
		{
			HX_STACK_LINE(335)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(335)
			int _g = this->ball->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(335)
			while((true)){
				HX_STACK_LINE(335)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(335)
					break;
				}
				HX_STACK_LINE(335)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(337)
				this->ball->__get(i).StaticCast< ::Ball >()->destroy();
			}
		}
		HX_STACK_LINE(339)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(339)
		this->ball = _g;
		HX_STACK_LINE(340)
		this->remove(this->StartButton,null());
		HX_STACK_LINE(341)
		this->remove(this->GameOverText,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,Start,(void))

int PlayState_obj::SelectDisc( int x,int y){
	HX_STACK_FRAME("PlayState","SelectDisc",0x33ce5602,"PlayState.SelectDisc","PlayState.hx",345,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(346)
	int cData;		HX_STACK_VAR(cData,"cData");
	HX_STACK_LINE(348)
	{
		HX_STACK_LINE(348)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(348)
		int _g = this->discs->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(350)
			int _g2 = this->discs->__get(i).StaticCast< ::DiscSprite >()->get_pixels()->getPixel32(x,y);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(350)
			cData = _g2;
			struct _Function_3_1{
				inline static bool Block( int &cData){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",351,0xb30d7781)
					{
						HX_STACK_LINE(351)
						int a = (int(cData) >> int((int)24));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(351)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(351)
						bool bNeg = ((int)50 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(351)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)50)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(351)
			if ((_Function_3_1::Block(cData))){
				HX_STACK_LINE(353)
				return i;
			}
		}
	}
	HX_STACK_LINE(357)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,SelectDisc,return )

Void PlayState_obj::updateScore( int ballIndex){
{
		HX_STACK_FRAME("PlayState","updateScore",0x67c029f8,"PlayState.updateScore","PlayState.hx",361,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ballIndex,"ballIndex")
		HX_STACK_LINE(362)
		int x = ::Std_obj::_int((this->ball->__get(ballIndex).StaticCast< ::Ball >()->x + 12.5));		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(363)
		int y = ::Std_obj::_int((this->ball->__get(ballIndex).StaticCast< ::Ball >()->y + 12.5));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(364)
		int discColor;		HX_STACK_VAR(discColor,"discColor");
		HX_STACK_LINE(365)
		int discIndex = this->SelectDisc(x,y);		HX_STACK_VAR(discIndex,"discIndex");
		HX_STACK_LINE(367)
		if (((discIndex >= (int)0))){
			HX_STACK_LINE(369)
			int _g = this->discs->__get(discIndex).StaticCast< ::DiscSprite >()->getColor(this->ball->__get(ballIndex).StaticCast< ::Ball >()->start);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(369)
			discColor = _g;
			HX_STACK_LINE(371)
			if ((!(this->ball->__get(ballIndex).StaticCast< ::Ball >()->IsDiscTriggered(discIndex)))){
				HX_STACK_LINE(373)
				if (((discColor == (int)0))){
					HX_STACK_LINE(375)
					(this->lives)--;
					HX_STACK_LINE(376)
					if ((this->sound)){
						HX_STACK_LINE(376)
						this->deathSfx->play(null());
					}
					HX_STACK_LINE(377)
					this->ball->__get(ballIndex).StaticCast< ::Ball >()->shouldDestroy = true;
					HX_STACK_LINE(378)
					if (((this->lives <= (int)0))){
						HX_STACK_LINE(380)
						this->StartGame = true;
						HX_STACK_LINE(381)
						this->GameOver = true;
					}
				}
				else{
					HX_STACK_LINE(386)
					int s = this->addScore(discColor,this->ball->__get(ballIndex).StaticCast< ::Ball >()->color);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(387)
					if (((s > (int)0))){
						HX_STACK_LINE(389)
						::ScoreText _g1 = ::ScoreText_obj::__new(this->ball->__get(ballIndex).StaticCast< ::Ball >()->x,this->ball->__get(ballIndex).StaticCast< ::Ball >()->y,(int)0,(HX_CSTRING("") + s),(int)20,null());		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(389)
						this->add(_g1);
						HX_STACK_LINE(390)
						this->score = (this->score + s);
						HX_STACK_LINE(391)
						hx::AddEq(this->extralifecounter,s);
						HX_STACK_LINE(392)
						hx::AddEq(this->diffCounter,s);
					}
				}
				HX_STACK_LINE(395)
				this->ball->__get(ballIndex).StaticCast< ::Ball >()->TriggerDisc(discIndex);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,updateScore,(void))

int PlayState_obj::addScore( int discColor,int ballColor){
	HX_STACK_FRAME("PlayState","addScore",0xa0fa20a2,"PlayState.addScore","PlayState.hx",401,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(discColor,"discColor")
	HX_STACK_ARG(ballColor,"ballColor")
	HX_STACK_LINE(402)
	int s = (int)0;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(403)
	if (((discColor == ballColor))){
		HX_STACK_LINE(405)
		hx::AddEq(s,(int)500);
		HX_STACK_LINE(406)
		if ((this->sound)){
			HX_STACK_LINE(406)
			this->matchSfx->play(true);
		}
	}
	else{
		HX_STACK_LINE(410)
		int _g = this->colorCompare((int((int(discColor) >> int((int)16))) & int((int)255)),(int((int(ballColor) >> int((int)16))) & int((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(410)
		hx::AddEq(s,_g);
		HX_STACK_LINE(411)
		int _g1 = this->colorCompare((int((int(discColor) >> int((int)8))) & int((int)255)),(int((int(ballColor) >> int((int)8))) & int((int)255)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(411)
		hx::AddEq(s,_g1);
		HX_STACK_LINE(412)
		int _g2 = this->colorCompare((int(discColor) & int((int)255)),(int(ballColor) & int((int)255)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(412)
		hx::AddEq(s,_g2);
	}
	HX_STACK_LINE(414)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,addScore,return )

int PlayState_obj::colorCompare( int c1,int c2){
	HX_STACK_FRAME("PlayState","colorCompare",0xc7f58533,"PlayState.colorCompare","PlayState.hx",419,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(c1,"c1")
	HX_STACK_ARG(c2,"c2")
	HX_STACK_LINE(419)
	if (((bool((bool((c1 == c2)) && bool((c1 > (int)0)))) && bool((c2 > (int)0))))){
		HX_STACK_LINE(421)
		return (int)250;
	}
	else{
		HX_STACK_LINE(425)
		return ::Std_obj::_int(((Float(((int(c1) & int(c2)))) / Float((int)10)) * (int)10));
	}
	HX_STACK_LINE(419)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,colorCompare,return )

int PlayState_obj::getRandColor( int i){
	HX_STACK_FRAME("PlayState","getRandColor",0x7d9d0db9,"PlayState.getRandColor","PlayState.hx",431,0xb30d7781)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(431)
	switch( (int)(i)){
		case (int)1: {
			HX_STACK_LINE(433)
			return (int)16711680;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(435)
			return (int)65280;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(437)
			return (int)255;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(439)
			return (int)16744448;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(441)
			return (int)16777088;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(443)
			return (int)8388736;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(445)
			return (int)16711808;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(447)
			return (int)4227200;
		}
		;break;
		default: {
			HX_STACK_LINE(449)
			return (int)16711680;
		}
	}
	HX_STACK_LINE(431)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,getRandColor,return )

Float PlayState_obj::rotationAmount;

::Difficulty PlayState_obj::diff;


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(GameOver,"GameOver");
	HX_MARK_MEMBER_NAME(StartGame,"StartGame");
	HX_MARK_MEMBER_NAME(StartButton,"StartButton");
	HX_MARK_MEMBER_NAME(MusicButton,"MusicButton");
	HX_MARK_MEMBER_NAME(music,"music");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(SoundButton,"SoundButton");
	HX_MARK_MEMBER_NAME(GameOverText,"GameOverText");
	HX_MARK_MEMBER_NAME(ballSfx,"ballSfx");
	HX_MARK_MEMBER_NAME(lifeSfx,"lifeSfx");
	HX_MARK_MEMBER_NAME(deathSfx,"deathSfx");
	HX_MARK_MEMBER_NAME(overSfx,"overSfx");
	HX_MARK_MEMBER_NAME(diffSfx,"diffSfx");
	HX_MARK_MEMBER_NAME(rotateSfx,"rotateSfx");
	HX_MARK_MEMBER_NAME(matchSfx,"matchSfx");
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(lives,"lives");
	HX_MARK_MEMBER_NAME(extralifecounter,"extralifecounter");
	HX_MARK_MEMBER_NAME(diffCounter,"diffCounter");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(livesText,"livesText");
	HX_MARK_MEMBER_NAME(discs,"discs");
	HX_MARK_MEMBER_NAME(pipes,"pipes");
	HX_MARK_MEMBER_NAME(ball,"ball");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(hiscoreText,"hiscoreText");
	HX_MARK_MEMBER_NAME(hiScore,"hiScore");
	HX_MARK_MEMBER_NAME(scoreSave,"scoreSave");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(GameOver,"GameOver");
	HX_VISIT_MEMBER_NAME(StartGame,"StartGame");
	HX_VISIT_MEMBER_NAME(StartButton,"StartButton");
	HX_VISIT_MEMBER_NAME(MusicButton,"MusicButton");
	HX_VISIT_MEMBER_NAME(music,"music");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(SoundButton,"SoundButton");
	HX_VISIT_MEMBER_NAME(GameOverText,"GameOverText");
	HX_VISIT_MEMBER_NAME(ballSfx,"ballSfx");
	HX_VISIT_MEMBER_NAME(lifeSfx,"lifeSfx");
	HX_VISIT_MEMBER_NAME(deathSfx,"deathSfx");
	HX_VISIT_MEMBER_NAME(overSfx,"overSfx");
	HX_VISIT_MEMBER_NAME(diffSfx,"diffSfx");
	HX_VISIT_MEMBER_NAME(rotateSfx,"rotateSfx");
	HX_VISIT_MEMBER_NAME(matchSfx,"matchSfx");
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(lives,"lives");
	HX_VISIT_MEMBER_NAME(extralifecounter,"extralifecounter");
	HX_VISIT_MEMBER_NAME(diffCounter,"diffCounter");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(livesText,"livesText");
	HX_VISIT_MEMBER_NAME(discs,"discs");
	HX_VISIT_MEMBER_NAME(pipes,"pipes");
	HX_VISIT_MEMBER_NAME(ball,"ball");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(border,"border");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(hiscoreText,"hiscoreText");
	HX_VISIT_MEMBER_NAME(hiScore,"hiScore");
	HX_VISIT_MEMBER_NAME(scoreSave,"scoreSave");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return bg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { return diff; }
		if (HX_FIELD_EQ(inName,"ball") ) { return ball; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { return music; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"lives") ) { return lives; }
		if (HX_FIELD_EQ(inName,"discs") ) { return discs; }
		if (HX_FIELD_EQ(inName,"pipes") ) { return pipes; }
		if (HX_FIELD_EQ(inName,"Start") ) { return Start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { return border; }
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ballSfx") ) { return ballSfx; }
		if (HX_FIELD_EQ(inName,"lifeSfx") ) { return lifeSfx; }
		if (HX_FIELD_EQ(inName,"overSfx") ) { return overSfx; }
		if (HX_FIELD_EQ(inName,"diffSfx") ) { return diffSfx; }
		if (HX_FIELD_EQ(inName,"hiScore") ) { return hiScore; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GameOver") ) { return GameOver; }
		if (HX_FIELD_EQ(inName,"deathSfx") ) { return deathSfx; }
		if (HX_FIELD_EQ(inName,"matchSfx") ) { return matchSfx; }
		if (HX_FIELD_EQ(inName,"addScore") ) { return addScore_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"StartGame") ) { return StartGame; }
		if (HX_FIELD_EQ(inName,"rotateSfx") ) { return rotateSfx; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"livesText") ) { return livesText; }
		if (HX_FIELD_EQ(inName,"scoreSave") ) { return scoreSave; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SelectDisc") ) { return SelectDisc_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"StartButton") ) { return StartButton; }
		if (HX_FIELD_EQ(inName,"MusicButton") ) { return MusicButton; }
		if (HX_FIELD_EQ(inName,"SoundButton") ) { return SoundButton; }
		if (HX_FIELD_EQ(inName,"diffCounter") ) { return diffCounter; }
		if (HX_FIELD_EQ(inName,"hiscoreText") ) { return hiscoreText; }
		if (HX_FIELD_EQ(inName,"ToggleMusic") ) { return ToggleMusic_dyn(); }
		if (HX_FIELD_EQ(inName,"updateScore") ) { return updateScore_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GameOverText") ) { return GameOverText; }
		if (HX_FIELD_EQ(inName,"colorCompare") ) { return colorCompare_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandColor") ) { return getRandColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ToggleSoundFx") ) { return ToggleSoundFx_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotationAmount") ) { return rotationAmount; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"extralifecounter") ) { return extralifecounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"diff") ) { diff=inValue.Cast< ::Difficulty >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ball") ) { ball=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"music") ) { music=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lives") ) { lives=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"discs") ) { discs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pipes") ) { pipes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ballSfx") ) { ballSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifeSfx") ) { lifeSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overSfx") ) { overSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffSfx") ) { diffSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hiScore") ) { hiScore=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GameOver") ) { GameOver=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"deathSfx") ) { deathSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matchSfx") ) { matchSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"StartGame") ) { StartGame=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotateSfx") ) { rotateSfx=inValue.Cast< ::flixel::system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"livesText") ) { livesText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreSave") ) { scoreSave=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"StartButton") ) { StartButton=inValue.Cast< ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MusicButton") ) { MusicButton=inValue.Cast< ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SoundButton") ) { SoundButton=inValue.Cast< ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"diffCounter") ) { diffCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hiscoreText") ) { hiscoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GameOverText") ) { GameOverText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotationAmount") ) { rotationAmount=inValue.Cast< Float >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"extralifecounter") ) { extralifecounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("GameOver"));
	outFields->push(HX_CSTRING("StartGame"));
	outFields->push(HX_CSTRING("StartButton"));
	outFields->push(HX_CSTRING("MusicButton"));
	outFields->push(HX_CSTRING("music"));
	outFields->push(HX_CSTRING("sound"));
	outFields->push(HX_CSTRING("SoundButton"));
	outFields->push(HX_CSTRING("GameOverText"));
	outFields->push(HX_CSTRING("ballSfx"));
	outFields->push(HX_CSTRING("lifeSfx"));
	outFields->push(HX_CSTRING("deathSfx"));
	outFields->push(HX_CSTRING("overSfx"));
	outFields->push(HX_CSTRING("diffSfx"));
	outFields->push(HX_CSTRING("rotateSfx"));
	outFields->push(HX_CSTRING("matchSfx"));
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("lives"));
	outFields->push(HX_CSTRING("extralifecounter"));
	outFields->push(HX_CSTRING("diffCounter"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("livesText"));
	outFields->push(HX_CSTRING("discs"));
	outFields->push(HX_CSTRING("pipes"));
	outFields->push(HX_CSTRING("ball"));
	outFields->push(HX_CSTRING("bg"));
	outFields->push(HX_CSTRING("border"));
	outFields->push(HX_CSTRING("margin"));
	outFields->push(HX_CSTRING("hiscoreText"));
	outFields->push(HX_CSTRING("hiScore"));
	outFields->push(HX_CSTRING("scoreSave"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("rotationAmount"),
	HX_CSTRING("diff"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlayState_obj,GameOver),HX_CSTRING("GameOver")},
	{hx::fsBool,(int)offsetof(PlayState_obj,StartGame),HX_CSTRING("StartGame")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(PlayState_obj,StartButton),HX_CSTRING("StartButton")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(PlayState_obj,MusicButton),HX_CSTRING("MusicButton")},
	{hx::fsBool,(int)offsetof(PlayState_obj,music),HX_CSTRING("music")},
	{hx::fsBool,(int)offsetof(PlayState_obj,sound),HX_CSTRING("sound")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(PlayState_obj,SoundButton),HX_CSTRING("SoundButton")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,GameOverText),HX_CSTRING("GameOverText")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,ballSfx),HX_CSTRING("ballSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,lifeSfx),HX_CSTRING("lifeSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,deathSfx),HX_CSTRING("deathSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,overSfx),HX_CSTRING("overSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,diffSfx),HX_CSTRING("diffSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,rotateSfx),HX_CSTRING("rotateSfx")},
	{hx::fsObject /*::flixel::system::FlxSound*/ ,(int)offsetof(PlayState_obj,matchSfx),HX_CSTRING("matchSfx")},
	{hx::fsInt,(int)offsetof(PlayState_obj,score),HX_CSTRING("score")},
	{hx::fsInt,(int)offsetof(PlayState_obj,lives),HX_CSTRING("lives")},
	{hx::fsInt,(int)offsetof(PlayState_obj,extralifecounter),HX_CSTRING("extralifecounter")},
	{hx::fsInt,(int)offsetof(PlayState_obj,diffCounter),HX_CSTRING("diffCounter")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,livesText),HX_CSTRING("livesText")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,discs),HX_CSTRING("discs")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,pipes),HX_CSTRING("pipes")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,ball),HX_CSTRING("ball")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,bg),HX_CSTRING("bg")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,border),HX_CSTRING("border")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,margin),HX_CSTRING("margin")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,hiscoreText),HX_CSTRING("hiscoreText")},
	{hx::fsInt,(int)offsetof(PlayState_obj,hiScore),HX_CSTRING("hiScore")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(int)offsetof(PlayState_obj,scoreSave),HX_CSTRING("scoreSave")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("GameOver"),
	HX_CSTRING("StartGame"),
	HX_CSTRING("StartButton"),
	HX_CSTRING("MusicButton"),
	HX_CSTRING("music"),
	HX_CSTRING("sound"),
	HX_CSTRING("SoundButton"),
	HX_CSTRING("GameOverText"),
	HX_CSTRING("ballSfx"),
	HX_CSTRING("lifeSfx"),
	HX_CSTRING("deathSfx"),
	HX_CSTRING("overSfx"),
	HX_CSTRING("diffSfx"),
	HX_CSTRING("rotateSfx"),
	HX_CSTRING("matchSfx"),
	HX_CSTRING("score"),
	HX_CSTRING("lives"),
	HX_CSTRING("extralifecounter"),
	HX_CSTRING("diffCounter"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("livesText"),
	HX_CSTRING("discs"),
	HX_CSTRING("pipes"),
	HX_CSTRING("ball"),
	HX_CSTRING("bg"),
	HX_CSTRING("border"),
	HX_CSTRING("margin"),
	HX_CSTRING("hiscoreText"),
	HX_CSTRING("hiScore"),
	HX_CSTRING("scoreSave"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("ToggleMusic"),
	HX_CSTRING("ToggleSoundFx"),
	HX_CSTRING("Start"),
	HX_CSTRING("SelectDisc"),
	HX_CSTRING("updateScore"),
	HX_CSTRING("addScore"),
	HX_CSTRING("colorCompare"),
	HX_CSTRING("getRandColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::rotationAmount,"rotationAmount");
	HX_MARK_MEMBER_NAME(PlayState_obj::diff,"diff");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::rotationAmount,"rotationAmount");
	HX_VISIT_MEMBER_NAME(PlayState_obj::diff,"diff");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}


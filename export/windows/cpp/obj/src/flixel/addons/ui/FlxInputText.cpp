#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_KeyboardEvent
#include <openfl/_v2/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextLineMetrics
#include <openfl/_v2/text/TextLineMetrics.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxInputText_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{
HX_STACK_FRAME("flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",30,0x19fbd1e7)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Width,"Width")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_size,"size")
HX_STACK_ARG(__o_TextColor,"TextColor")
HX_STACK_ARG(__o_BackgroundColor,"BackgroundColor")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Width = __o_Width.Default(150);
int size = __o_size.Default(8);
int TextColor = __o_TextColor.Default(-16777216);
int BackgroundColor = __o_BackgroundColor.Default(-1);
bool EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(140)
	this->backgroundColor = (int)-1;
	HX_STACK_LINE(135)
	this->fieldBorderThickness = (int)1;
	HX_STACK_LINE(130)
	this->fieldBorderColor = (int)-16777216;
	HX_STACK_LINE(125)
	this->filterMode = (int)0;
	HX_STACK_LINE(114)
	this->maxLength = (int)0;
	HX_STACK_LINE(108)
	this->forceCase = (int)0;
	HX_STACK_LINE(103)
	this->caretIndex = (int)0;
	HX_STACK_LINE(98)
	this->hasFocus = false;
	HX_STACK_LINE(80)
	this->caretWidth = (int)1;
	HX_STACK_LINE(67)
	this->background = false;
	HX_STACK_LINE(179)
	super::__construct(X,Y,Width,Text,size,EmbeddedFont);
	HX_STACK_LINE(181)
	this->set_backgroundColor(BackgroundColor);
	HX_STACK_LINE(183)
	if (((BackgroundColor != (int)0))){
		HX_STACK_LINE(185)
		this->background = true;
	}
	HX_STACK_LINE(188)
	this->set_color(TextColor);
	HX_STACK_LINE(189)
	this->set_caretColor(TextColor);
	HX_STACK_LINE(191)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	this->caret = _g;
	HX_STACK_LINE(192)
	int _g1 = ::Std_obj::_int((size + (int)2));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(192)
	this->caret->makeGraphic(this->caretWidth,_g1,null(),null(),null());
	HX_STACK_LINE(193)
	this->set_caretIndex((int)0);
	HX_STACK_LINE(194)
	::flixel::util::FlxTimer _g2 = ::flixel::util::FlxTimer_obj::__new(null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(194)
	this->_caretTimer = _g2;
	HX_STACK_LINE(196)
	this->set_hasFocus(false);
	HX_STACK_LINE(197)
	if ((this->background)){
		HX_STACK_LINE(198)
		::flixel::FlxSprite _g3 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(198)
		this->fieldBorderSprite = _g3;
		HX_STACK_LINE(199)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new(X,Y,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(199)
		this->backgroundSprite = _g4;
	}
	HX_STACK_LINE(202)
	this->set_lines((int)1);
	HX_STACK_LINE(203)
	::openfl::_v2::Lib_obj::get_current()->get_stage()->addEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null(),null(),null());
	HX_STACK_LINE(205)
	this->calcFrame(null());
}
;
	return null();
}

//FlxInputText_obj::~FlxInputText_obj() { }

Dynamic FlxInputText_obj::__CreateEmpty() { return  new FlxInputText_obj; }
hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Width,::String Text,hx::Null< int >  __o_size,hx::Null< int >  __o_TextColor,hx::Null< int >  __o_BackgroundColor,hx::Null< bool >  __o_EmbeddedFont)
{  hx::ObjectPtr< FlxInputText_obj > result = new FlxInputText_obj();
	result->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return result;}

Dynamic FlxInputText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxInputText_obj > result = new FlxInputText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",53,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cfp,"cfp")
	HX_STACK_LINE(54)
	this->customFilterPattern = cfp;
	HX_STACK_LINE(55)
	this->set_filterMode((int)4);
	HX_STACK_LINE(56)
	return this->customFilterPattern;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",74,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(75)
	this->caretColor = i;
	HX_STACK_LINE(76)
	this->dirty = true;
	HX_STACK_LINE(77)
	return this->caretColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",82,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(83)
	this->caretWidth = i;
	HX_STACK_LINE(84)
	this->dirty = true;
	HX_STACK_LINE(85)
	return this->caretWidth;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

Void FlxInputText_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",212,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(213)
		::openfl::_v2::Lib_obj::get_current()->get_stage()->removeEventListener(::openfl::_v2::events::KeyboardEvent_obj::KEY_DOWN,this->onKeyDown_dyn(),null());
		HX_STACK_LINE(215)
		::flixel::FlxSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->backgroundSprite);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		this->backgroundSprite = _g;
		HX_STACK_LINE(216)
		::flixel::FlxSprite _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->fieldBorderSprite);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(216)
		this->fieldBorderSprite = _g1;
		HX_STACK_LINE(217)
		this->callback = null();
		HX_STACK_LINE(220)
		if (((this->_charBoundaries != null()))){
			HX_STACK_LINE(222)
			while((true)){
				HX_STACK_LINE(222)
				if ((!(((this->_charBoundaries->length > (int)0))))){
					HX_STACK_LINE(222)
					break;
				}
				HX_STACK_LINE(224)
				this->_charBoundaries->pop().StaticCast< ::flixel::util::FlxRect >();
			}
			HX_STACK_LINE(226)
			this->_charBoundaries = null();
		}
		HX_STACK_LINE(230)
		this->super::destroy();
	}
return null();
}


Void FlxInputText_obj::draw( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",237,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		this->drawSprite(this->fieldBorderSprite);
		HX_STACK_LINE(239)
		this->drawSprite(this->backgroundSprite);
		HX_STACK_LINE(241)
		this->super::draw();
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::flixel::addons::ui::FlxInputText_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",244,0x19fbd1e7)
				{
					HX_STACK_LINE(244)
					Float _g = __this->caret->get_height();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(244)
					Float _g1 = __this->get_size();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(244)
					Float _g2 = (_g1 + (int)2);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(244)
					return (_g != _g2);
				}
				return null();
			}
		};
		HX_STACK_LINE(244)
		if (((  ((!(((this->caretColor != this->caret->color))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))){
			HX_STACK_LINE(246)
			this->caret->set_color(this->caretColor);
		}
		HX_STACK_LINE(249)
		this->drawSprite(this->caret);
	}
return null();
}


Void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",258,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Sprite,"Sprite")
		HX_STACK_LINE(258)
		if (((bool((Sprite != null())) && bool(Sprite->visible)))){
			HX_STACK_LINE(260)
			Sprite->scrollFactor = this->scrollFactor;
			HX_STACK_LINE(261)
			Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(261)
			Sprite->set_cameras(_g);
			HX_STACK_LINE(262)
			Sprite->draw();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

Void FlxInputText_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",270,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",275,0x19fbd1e7)
				{
					HX_STACK_LINE(275)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(275)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(275)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(277)
			if ((this->overlapsPoint(::flixel::FlxG_obj::mouse,null(),null()))){
				HX_STACK_LINE(279)
				int _g = this->getCaretIndexFromPoint(::flixel::FlxG_obj::mouse);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(279)
				this->set_caretIndex(_g);
				HX_STACK_LINE(280)
				this->set_hasFocus(true);
			}
			else{
				HX_STACK_LINE(284)
				this->set_hasFocus(false);
			}
		}
	}
return null();
}


Void FlxInputText_obj::onKeyDown( ::openfl::_v2::events::KeyboardEvent e){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",294,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(295)
		int key = e->keyCode;		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(297)
		if ((this->hasFocus)){
			HX_STACK_LINE(300)
			if (((bool((bool((key == (int)16)) || bool((key == (int)17)))) || bool((key == (int)220))))){
				HX_STACK_LINE(302)
				return null();
			}
			else{
				HX_STACK_LINE(305)
				if (((key == (int)37))){
					HX_STACK_LINE(307)
					if (((this->caretIndex > (int)0))){
						HX_STACK_LINE(307)
						::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(307)
						int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(307)
						_g->set_caretIndex((_g1 - (int)1));
						HX_STACK_LINE(307)
						_g1;
					}
				}
				else{
					HX_STACK_LINE(310)
					if (((key == (int)39))){
						HX_STACK_LINE(312)
						if (((this->caretIndex < this->get_text().length))){
							HX_STACK_LINE(312)
							::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(312)
							int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(312)
							_g->set_caretIndex((_g1 + (int)1));
							HX_STACK_LINE(312)
							_g1;
						}
					}
					else{
						HX_STACK_LINE(315)
						if (((key == (int)8))){
							HX_STACK_LINE(317)
							if (((this->caretIndex > (int)0))){
								HX_STACK_LINE(319)
								::String s;		HX_STACK_VAR(s,"s");
								HX_STACK_LINE(320)
								::String _g = this->get_text().substring((int)0,(this->caretIndex - (int)1));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(320)
								::String _g1 = this->get_text().substring(this->caretIndex,null());		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(320)
								::String _g2 = (_g + _g1);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(320)
								this->set_text(_g2);
								HX_STACK_LINE(321)
								{
									HX_STACK_LINE(321)
									::flixel::addons::ui::FlxInputText _g3 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(321)
									int _g11 = _g3->caretIndex;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(321)
									_g3->set_caretIndex((_g11 - (int)1));
									HX_STACK_LINE(321)
									_g11;
								}
								HX_STACK_LINE(322)
								this->dirty = true;
								HX_STACK_LINE(323)
								this->onChange(HX_CSTRING("backspace"));
							}
						}
						else{
							HX_STACK_LINE(327)
							if (((key == (int)46))){
								HX_STACK_LINE(329)
								if (((bool((this->get_text().length > (int)0)) && bool((this->caretIndex < this->get_text().length))))){
									HX_STACK_LINE(331)
									::String _g3 = this->get_text().substring((int)0,this->caretIndex);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(331)
									::String _g4 = this->get_text().substring((this->caretIndex + (int)1),null());		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(331)
									::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(331)
									this->set_text(_g5);
									HX_STACK_LINE(332)
									this->onChange(HX_CSTRING("delete"));
								}
							}
							else{
								HX_STACK_LINE(336)
								if (((key == (int)13))){
									HX_STACK_LINE(338)
									this->onChange(HX_CSTRING("enter"));
								}
								else{
									HX_STACK_LINE(343)
									if (((e->charCode == (int)0))){
										HX_STACK_LINE(345)
										return null();
									}
									HX_STACK_LINE(347)
									::String _g6 = ::String::fromCharCode(e->charCode);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(347)
									::String newText = this->filter(_g6);		HX_STACK_VAR(newText,"newText");
									HX_STACK_LINE(349)
									if (((bool((newText.length > (int)0)) && bool(((bool((this->maxLength == (int)0)) || bool(((this->get_text().length + newText.length) < this->maxLength)))))))){
										HX_STACK_LINE(351)
										::String _g7 = this->get_text();		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(351)
										::String _g8 = this->insertSubstring(_g7,newText,this->caretIndex);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(351)
										this->set_text(_g8);
										HX_STACK_LINE(352)
										{
											HX_STACK_LINE(352)
											::flixel::addons::ui::FlxInputText _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
											HX_STACK_LINE(352)
											int _g1 = _g->caretIndex;		HX_STACK_VAR(_g1,"_g1");
											HX_STACK_LINE(352)
											_g->set_caretIndex((_g1 + (int)1));
											HX_STACK_LINE(352)
											_g1;
										}
										HX_STACK_LINE(353)
										this->onChange(HX_CSTRING("input"));
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

Void FlxInputText_obj::onChange( ::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",361,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(361)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(363)
			::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(363)
			this->callback(_g,action);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring( ::String Original,::String Insert,int Index){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",376,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Original,"Original")
	HX_STACK_ARG(Insert,"Insert")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(377)
	if (((Index != Original.length))){
		HX_STACK_LINE(379)
		::String _g = Original.substring((int)0,Index);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(379)
		::String _g1 = (_g + Insert);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(379)
		::String _g2 = Original.substring(Index,null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(379)
		::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(379)
		Original = _g3;
	}
	else{
		HX_STACK_LINE(383)
		Original = (Original + Insert);
	}
	HX_STACK_LINE(385)
	return Original;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndexFromPoint( ::flixel::util::FlxPoint Landing){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCaretIndexFromPoint",0xe14b9a99,"flixel.addons.ui.FlxInputText.getCaretIndexFromPoint","flixel/addons/ui/FlxInputText.hx",395,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Landing,"Landing")
	HX_STACK_LINE(397)
	::flixel::util::FlxPoint hit;		HX_STACK_VAR(hit,"hit");
	HX_STACK_LINE(397)
	{
		HX_STACK_LINE(397)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((::flixel::FlxG_obj::mouse->x - this->x),(::flixel::FlxG_obj::mouse->y - this->y));		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(397)
		point->_inPool = false;
		HX_STACK_LINE(397)
		hit = point;
	}
	HX_STACK_LINE(398)
	bool caretRightOfText = false;		HX_STACK_VAR(caretRightOfText,"caretRightOfText");
	HX_STACK_LINE(400)
	if (((hit->y < (int)2))){
		HX_STACK_LINE(400)
		hit->set_y((int)2);
	}
	else{
		HX_STACK_LINE(401)
		Float _g = this->_textField->get_textHeight();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(401)
		Float _g1 = (_g + (int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(401)
		if (((hit->y > _g1))){
			HX_STACK_LINE(401)
			Float _g2 = this->_textField->get_textHeight();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(401)
			Float _g3 = (_g2 + (int)2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(401)
			hit->set_y(_g3);
		}
	}
	HX_STACK_LINE(402)
	if (((hit->x < (int)2))){
		HX_STACK_LINE(402)
		hit->set_x((int)2);
	}
	else{
		HX_STACK_LINE(403)
		if (((hit->x > this->_textField->getLineMetrics((int)0)->width))){
			HX_STACK_LINE(404)
			hit->set_x(this->_textField->getLineMetrics((int)0)->width);
			HX_STACK_LINE(405)
			caretRightOfText = true;
		}
		else{
			struct _Function_3_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::addons::ui::FlxInputText_obj > __this,::flixel::util::FlxPoint &hit){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",407,0x19fbd1e7)
					{
						HX_STACK_LINE(407)
						Float _g4 = __this->_textField->get_textHeight();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(407)
						Float _g5 = (_g4 - __this->_textField->getLineMetrics((__this->_textField->get_numLines() - (int)1))->ascent);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(407)
						return (hit->y > _g5);
					}
					return null();
				}
			};
			HX_STACK_LINE(407)
			if (((  (((hit->x > this->_textField->getLineMetrics((this->_textField->get_numLines() - (int)1))->width))) ? bool(_Function_3_1::Block(this,hit)) : bool(false) ))){
				HX_STACK_LINE(408)
				hit->set_x(this->_textField->getLineMetrics((this->_textField->get_numLines() - (int)1))->width);
				HX_STACK_LINE(409)
				caretRightOfText = true;
			}
		}
	}
	HX_STACK_LINE(412)
	int index = (int)0;		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(414)
	if ((caretRightOfText)){
		HX_STACK_LINE(418)
		int _g6 = this->getCharIndexAtPoint(hit->x,hit->y);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(418)
		int _g7 = (_g6 + (int)1);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(418)
		index = _g7;
	}
	else{
		HX_STACK_LINE(425)
		int _g8 = this->getCharIndexAtPoint(hit->x,hit->y);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(425)
		index = _g8;
	}
	HX_STACK_LINE(429)
	return index;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCaretIndexFromPoint,return )

int FlxInputText_obj::getCharIndexAtPoint( Float X,Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",438,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(439)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(440)
	if (((this->_charBoundaries != null()))){
		HX_STACK_LINE(442)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		Array< ::Dynamic > _g1 = this->_charBoundaries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(442)
		while((true)){
			HX_STACK_LINE(442)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(442)
				break;
			}
			HX_STACK_LINE(442)
			::flixel::util::FlxRect r = _g1->__get(_g).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(442)
			++(_g);
			HX_STACK_LINE(444)
			if (((bool((bool((bool((X >= r->x)) && bool((X <= (r->x + r->width))))) && bool((Y >= r->y)))) && bool((Y <= (r->y + r->height)))))){
				HX_STACK_LINE(446)
				return i;
			}
			HX_STACK_LINE(448)
			(i)++;
		}
	}
	HX_STACK_LINE(452)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

::openfl::_v2::geom::Rectangle FlxInputText_obj::getCharBoundaries( int charIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",456,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(charIndex,"charIndex")
	HX_STACK_LINE(457)
	if (((bool((bool((this->_charBoundaries != null())) && bool((charIndex > (int)0)))) && bool((charIndex < this->_charBoundaries->length))))){
		HX_STACK_LINE(459)
		::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(460)
		{
			HX_STACK_LINE(460)
			::flixel::util::FlxRect _this = this->_charBoundaries->__get(charIndex).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(460)
			r->x = _this->x;
			HX_STACK_LINE(460)
			r->y = _this->y;
			HX_STACK_LINE(460)
			r->width = _this->width;
			HX_STACK_LINE(460)
			r->height = _this->height;
			HX_STACK_LINE(460)
			return r;
		}
	}
	HX_STACK_LINE(462)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text( ::String Text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",466,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Text,"Text")
	HX_STACK_LINE(467)
	::String return_text = this->super::set_text(Text);		HX_STACK_VAR(return_text,"return_text");
	HX_STACK_LINE(468)
	int numChars = Text.length;		HX_STACK_VAR(numChars,"numChars");
	HX_STACK_LINE(469)
	this->prepareCharBoundaries(numChars);
	HX_STACK_LINE(470)
	this->_textField->set_text(HX_CSTRING(""));
	HX_STACK_LINE(471)
	Float textH = (int)0;		HX_STACK_VAR(textH,"textH");
	HX_STACK_LINE(472)
	Float textW = (int)0;		HX_STACK_VAR(textW,"textW");
	HX_STACK_LINE(473)
	Float lastW = (int)0;		HX_STACK_VAR(lastW,"lastW");
	HX_STACK_LINE(474)
	{
		HX_STACK_LINE(474)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(474)
		while((true)){
			HX_STACK_LINE(474)
			if ((!(((_g < numChars))))){
				HX_STACK_LINE(474)
				break;
			}
			HX_STACK_LINE(474)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(476)
			::String _g1 = Text.substr(i,(int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(476)
			this->_textField->appendText(_g1);
			HX_STACK_LINE(477)
			Float _g11 = this->_textField->get_textWidth();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(477)
			textW = _g11;
			HX_STACK_LINE(478)
			if (((i == (int)0))){
				HX_STACK_LINE(480)
				Float _g2 = this->_textField->get_textHeight();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(480)
				textH = _g2;
			}
			HX_STACK_LINE(482)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >()->x = lastW;
			HX_STACK_LINE(483)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >()->y = (int)0;
			HX_STACK_LINE(484)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >()->width = (textW - lastW);
			HX_STACK_LINE(485)
			this->_charBoundaries->__get(i).StaticCast< ::flixel::util::FlxRect >()->height = textH;
			HX_STACK_LINE(486)
			lastW = textW;
		}
	}
	HX_STACK_LINE(488)
	this->_textField->set_text(Text);
	HX_STACK_LINE(489)
	return return_text;
}


Void FlxInputText_obj::prepareCharBoundaries( int numChars){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",493,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(numChars,"numChars")
		HX_STACK_LINE(494)
		if (((this->_charBoundaries == null()))){
			HX_STACK_LINE(496)
			this->_charBoundaries = Array_obj< ::Dynamic >::__new();
		}
		HX_STACK_LINE(499)
		if (((this->_charBoundaries->length > numChars))){
			HX_STACK_LINE(501)
			int diff = (this->_charBoundaries->length - numChars);		HX_STACK_VAR(diff,"diff");
			HX_STACK_LINE(502)
			{
				HX_STACK_LINE(502)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(502)
				while((true)){
					HX_STACK_LINE(502)
					if ((!(((_g < diff))))){
						HX_STACK_LINE(502)
						break;
					}
					HX_STACK_LINE(502)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(504)
					this->_charBoundaries->pop().StaticCast< ::flixel::util::FlxRect >();
				}
			}
		}
		HX_STACK_LINE(508)
		{
			HX_STACK_LINE(508)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(508)
			while((true)){
				HX_STACK_LINE(508)
				if ((!(((_g < numChars))))){
					HX_STACK_LINE(508)
					break;
				}
				HX_STACK_LINE(508)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(510)
				if ((((this->_charBoundaries->length - (int)1) < i))){
					HX_STACK_LINE(512)
					::flixel::util::FlxRect _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(512)
					{
						HX_STACK_LINE(512)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(512)
						{
							HX_STACK_LINE(512)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(512)
							_this->x = (int)0;
							HX_STACK_LINE(512)
							_this->y = (int)0;
							HX_STACK_LINE(512)
							_this->width = (int)0;
							HX_STACK_LINE(512)
							_this->height = (int)0;
							HX_STACK_LINE(512)
							rect = _this;
						}
						HX_STACK_LINE(512)
						rect->_inPool = false;
						HX_STACK_LINE(512)
						_g1 = rect;
					}
					HX_STACK_LINE(512)
					this->_charBoundaries->push(_g1);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

Void FlxInputText_obj::calcFrame( hx::Null< bool >  __o_RunOnCpp){
bool RunOnCpp = __o_RunOnCpp.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",524,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(RunOnCpp,"RunOnCpp")
{
		HX_STACK_LINE(525)
		this->super::calcFrame(RunOnCpp);
		HX_STACK_LINE(527)
		if (((this->fieldBorderSprite != null()))){
			HX_STACK_LINE(529)
			if (((this->fieldBorderThickness > (int)0))){
				HX_STACK_LINE(531)
				Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(531)
				Float _g1 = (_g + (this->fieldBorderThickness * (int)2));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(531)
				int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(531)
				Float _g3 = this->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(531)
				Float _g4 = (_g3 + (this->fieldBorderThickness * (int)2));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(531)
				int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(531)
				this->fieldBorderSprite->makeGraphic(_g2,_g5,this->fieldBorderColor,null(),null());
				HX_STACK_LINE(532)
				this->fieldBorderSprite->set_x((this->x - this->fieldBorderThickness));
				HX_STACK_LINE(533)
				this->fieldBorderSprite->set_y((this->y - this->fieldBorderThickness));
			}
			else{
				HX_STACK_LINE(535)
				if (((this->fieldBorderThickness == (int)0))){
					HX_STACK_LINE(537)
					this->fieldBorderSprite->set_visible(false);
				}
			}
		}
		HX_STACK_LINE(541)
		if (((this->backgroundSprite != null()))){
			HX_STACK_LINE(543)
			if ((this->background)){
				HX_STACK_LINE(545)
				Float _g6 = this->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(545)
				int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(545)
				Float _g8 = this->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(545)
				int _g9 = ::Std_obj::_int(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(545)
				this->backgroundSprite->makeGraphic(_g7,_g9,this->backgroundColor,null(),null());
				HX_STACK_LINE(546)
				this->backgroundSprite->set_x(this->x);
				HX_STACK_LINE(547)
				this->backgroundSprite->set_y(this->y);
			}
			else{
				HX_STACK_LINE(551)
				this->backgroundSprite->set_visible(false);
			}
		}
		HX_STACK_LINE(555)
		if (((this->caret != null()))){
			HX_STACK_LINE(560)
			int cw = this->caretWidth;		HX_STACK_VAR(cw,"cw");
			HX_STACK_LINE(561)
			Float _g10 = this->get_size();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(561)
			Float _g11 = (_g10 + (int)2);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(561)
			int ch = ::Std_obj::_int(_g11);		HX_STACK_VAR(ch,"ch");
			HX_STACK_LINE(564)
			int borderC = (int((int)-16777216) | int((int(this->borderColor) & int((int)16777215))));		HX_STACK_VAR(borderC,"borderC");
			HX_STACK_LINE(565)
			int caretC = (int((int)-16777216) | int((int(this->caretColor) & int((int)16777215))));		HX_STACK_VAR(caretC,"caretC");
			HX_STACK_LINE(568)
			::String caretKey = (((((((((((HX_CSTRING("caret") + cw) + HX_CSTRING("x")) + ch) + HX_CSTRING("c:")) + caretC) + HX_CSTRING("b:")) + this->borderStyle) + HX_CSTRING(",")) + this->borderSize) + HX_CSTRING(",")) + borderC);		HX_STACK_VAR(caretKey,"caretKey");
			HX_STACK_LINE(569)
			{
				HX_STACK_LINE(569)
				int _g = this->borderStyle;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(569)
				switch( (int)(_g)){
					case (int)0: {
						HX_STACK_LINE(573)
						this->caret->makeGraphic(cw,ch,caretC,false,caretKey);
						HX_STACK_LINE(574)
						Float _g12 = this->caret->offset->set_y((int)0);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(574)
						this->caret->offset->set_x(_g12);
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(577)
						int _g13 = ::Std_obj::_int(this->borderSize);		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(577)
						hx::AddEq(cw,_g13);
						HX_STACK_LINE(578)
						int _g14 = ::Std_obj::_int(this->borderSize);		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(578)
						hx::AddEq(ch,_g14);
						HX_STACK_LINE(579)
						this->caret->makeGraphic(cw,ch,(int)0,false,caretKey);
						HX_STACK_LINE(580)
						Float _g15 = this->get_size();		HX_STACK_VAR(_g15,"_g15");
						HX_STACK_LINE(580)
						Float _g16 = (_g15 + (int)2);		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(580)
						int _g17 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(580)
						::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(this->borderSize,this->borderSize,this->caretWidth,_g17);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(581)
						this->caret->get_pixels()->fillRect(r,borderC);
						HX_STACK_LINE(582)
						Float _g18 = r->y = (int)0;		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(582)
						r->x = _g18;
						HX_STACK_LINE(583)
						this->caret->get_pixels()->fillRect(r,caretC);
						HX_STACK_LINE(584)
						Float _g19 = this->caret->offset->set_y((int)0);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(584)
						this->caret->offset->set_x(_g19);
					}
					;break;
					case (int)3: case (int)2: {
						HX_STACK_LINE(587)
						int _g20 = ::Std_obj::_int((this->borderSize * (int)2));		HX_STACK_VAR(_g20,"_g20");
						HX_STACK_LINE(587)
						hx::AddEq(cw,_g20);
						HX_STACK_LINE(588)
						int _g21 = ::Std_obj::_int((this->borderSize * (int)2));		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(588)
						hx::AddEq(ch,_g21);
						HX_STACK_LINE(589)
						this->caret->makeGraphic(cw,ch,borderC,false,caretKey);
						HX_STACK_LINE(590)
						Float _g22 = this->get_size();		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(590)
						Float _g23 = (_g22 + (int)2);		HX_STACK_VAR(_g23,"_g23");
						HX_STACK_LINE(590)
						int _g24 = ::Std_obj::_int(_g23);		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(590)
						::openfl::_v2::geom::Rectangle r = ::openfl::_v2::geom::Rectangle_obj::__new(this->borderSize,this->borderSize,this->caretWidth,_g24);		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(591)
						Float _g25 = this->get_size();		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(591)
						Float _g26 = (_g25 + (int)2);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(591)
						int _g27 = ::Std_obj::_int(_g26);		HX_STACK_VAR(_g27,"_g27");
						HX_STACK_LINE(591)
						r->setTo(this->borderSize,this->borderSize,this->caretWidth,_g27);
						HX_STACK_LINE(592)
						this->caret->get_pixels()->fillRect(r,caretC);
						HX_STACK_LINE(594)
						Float _g28 = this->caret->offset->set_y(this->borderSize);		HX_STACK_VAR(_g28,"_g28");
						HX_STACK_LINE(594)
						this->caret->offset->set_x(_g28);
					}
					;break;
				}
			}
			HX_STACK_LINE(597)
			this->caret->set_width(cw);
			HX_STACK_LINE(598)
			this->caret->set_height(ch);
			HX_STACK_LINE(600)
			this->set_caretIndex(this->caretIndex);
		}
	}
return null();
}


Void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",609,0x19fbd1e7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(timer,"timer")
		HX_STACK_LINE(609)
		this->caret->set_visible(!(this->caret->visible));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter( ::String text){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",617,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(text,"text")
	HX_STACK_LINE(618)
	if (((this->forceCase == (int)1))){
		HX_STACK_LINE(620)
		::String _g = text.toUpperCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(620)
		text = _g;
	}
	else{
		HX_STACK_LINE(622)
		if (((this->forceCase == (int)2))){
			HX_STACK_LINE(624)
			::String _g1 = text.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(624)
			text = _g1;
		}
	}
	HX_STACK_LINE(627)
	if (((this->filterMode != (int)0))){
		HX_STACK_LINE(629)
		::EReg pattern;		HX_STACK_VAR(pattern,"pattern");
		HX_STACK_LINE(630)
		{
			HX_STACK_LINE(630)
			int _g = this->filterMode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(630)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(632)
					::EReg _g2 = ::EReg_obj::__new(HX_CSTRING("[^a-zA-Z]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(632)
					pattern = _g2;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(633)
					::EReg _g3 = ::EReg_obj::__new(HX_CSTRING("[^0-9]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(633)
					pattern = _g3;
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(634)
					::EReg _g4 = ::EReg_obj::__new(HX_CSTRING("[^a-zA-Z0-9]*"),HX_CSTRING("g"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(634)
					pattern = _g4;
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(635)
					pattern = this->customFilterPattern;
				}
				;break;
				default: {
					HX_STACK_LINE(637)
					HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(((HX_CSTRING("FlxInputText: Unknown filterMode (") + this->filterMode) + HX_CSTRING(")")),null()));
				}
			}
		}
		HX_STACK_LINE(639)
		pattern->replace(text,HX_CSTRING(""));
	}
	HX_STACK_LINE(641)
	return text;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

Dynamic FlxInputText_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",645,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(646)
	this->params = p;
	HX_STACK_LINE(647)
	if (((this->params == null()))){
		HX_STACK_LINE(649)
		this->params = Dynamic( Array_obj<Dynamic>::__new());
	}
	HX_STACK_LINE(651)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static Dynamic Block( ::String &_g){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",651,0x19fbd1e7)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("name") , HX_CSTRING("value"),false);
				__result->Add(HX_CSTRING("value") , _g,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(651)
	Dynamic namedValue = _Function_1_1::Block(_g);		HX_STACK_VAR(namedValue,"namedValue");
	HX_STACK_LINE(652)
	this->params->__Field(HX_CSTRING("push"),true)(namedValue);
	HX_STACK_LINE(653)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x( Float X){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",657,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_LINE(658)
	if (((bool((this->fieldBorderSprite != null())) && bool((this->fieldBorderThickness > (int)0))))){
		HX_STACK_LINE(660)
		this->fieldBorderSprite->set_x((X - this->fieldBorderThickness));
	}
	HX_STACK_LINE(662)
	if (((bool((this->backgroundSprite != null())) && bool(this->background)))){
		HX_STACK_LINE(664)
		this->backgroundSprite->set_x(X);
	}
	HX_STACK_LINE(666)
	return this->super::set_x(X);
}


Float FlxInputText_obj::set_y( Float Y){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",670,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(671)
	if (((bool((this->fieldBorderSprite != null())) && bool((this->fieldBorderThickness > (int)0))))){
		HX_STACK_LINE(673)
		this->fieldBorderSprite->set_y((Y - this->fieldBorderThickness));
	}
	HX_STACK_LINE(675)
	if (((bool((this->backgroundSprite != null())) && bool(this->background)))){
		HX_STACK_LINE(677)
		this->backgroundSprite->set_y(Y);
	}
	HX_STACK_LINE(679)
	return this->super::set_y(Y);
}


bool FlxInputText_obj::set_hasFocus( bool newFocus){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",683,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newFocus,"newFocus")
	HX_STACK_LINE(684)
	if ((newFocus)){
		HX_STACK_LINE(686)
		if (((this->hasFocus != newFocus))){
			HX_STACK_LINE(688)
			this->_caretTimer->start(0.5,this->toggleCaret_dyn(),(int)0);
			HX_STACK_LINE(689)
			this->caret->set_visible(true);
			HX_STACK_LINE(690)
			this->set_caretIndex(this->get_text().length);
		}
	}
	else{
		HX_STACK_LINE(696)
		this->caret->set_visible(false);
		HX_STACK_LINE(697)
		if (((this->_caretTimer != null()))){
			HX_STACK_LINE(699)
			this->_caretTimer->cancel();
		}
	}
	HX_STACK_LINE(703)
	if (((newFocus != this->hasFocus))){
		HX_STACK_LINE(705)
		this->calcFrame(null());
	}
	HX_STACK_LINE(707)
	return this->hasFocus = newFocus;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

int FlxInputText_obj::set_caretIndex( int newCaretIndex){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",711,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(newCaretIndex,"newCaretIndex")
	HX_STACK_LINE(712)
	Float offx = (int)0;		HX_STACK_VAR(offx,"offx");
	HX_STACK_LINE(714)
	::String alignStr = HX_CSTRING("left");		HX_STACK_VAR(alignStr,"alignStr");
	HX_STACK_LINE(715)
	if (((bool((this->_defaultFormat != null())) && bool((this->_defaultFormat->align != null()))))){
		HX_STACK_LINE(716)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(716)
		_g = hx::TCast< String >::cast(this->_defaultFormat->align);
		HX_STACK_LINE(716)
		alignStr = _g;
	}
	HX_STACK_LINE(719)
	::String _switch_1 = (alignStr);
	if (  ( _switch_1==HX_CSTRING("right"))){
		HX_STACK_LINE(720)
		offx = (int)0;
	}
	else if (  ( _switch_1==HX_CSTRING("center"))){
		HX_STACK_LINE(721)
		Float _g1 = this->_textField->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(721)
		Float _g2 = this->_textField->get_textWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(721)
		Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(721)
		Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(721)
		offx = _g4;
	}
	else  {
		HX_STACK_LINE(722)
		offx = (int)0;
	}
;
;
	HX_STACK_LINE(725)
	this->caretIndex = newCaretIndex;
	HX_STACK_LINE(728)
	if (((this->caretIndex > (this->get_text().length + (int)1)))){
		HX_STACK_LINE(730)
		this->caretIndex = (int)-1;
	}
	HX_STACK_LINE(734)
	if (((this->caretIndex != (int)-1))){
		HX_STACK_LINE(736)
		::openfl::_v2::geom::Rectangle boundaries = null();		HX_STACK_VAR(boundaries,"boundaries");
		HX_STACK_LINE(739)
		if (((this->caretIndex < this->get_text().length))){
			HX_STACK_LINE(743)
			::openfl::_v2::geom::Rectangle _g5 = this->getCharBoundaries(this->caretIndex);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(743)
			boundaries = _g5;
			HX_STACK_LINE(745)
			if (((boundaries != null()))){
				HX_STACK_LINE(747)
				Float _g6 = boundaries->get_left();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(747)
				Float _g7 = (offx + _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(747)
				Float _g8 = (_g7 + this->x);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(747)
				this->caret->set_x(_g8);
				HX_STACK_LINE(748)
				Float _g9 = boundaries->get_top();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(748)
				Float _g10 = (_g9 + this->y);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(748)
				this->caret->set_y(_g10);
			}
		}
		else{
			HX_STACK_LINE(756)
			::openfl::_v2::geom::Rectangle _g11 = this->getCharBoundaries((this->caretIndex - (int)1));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(756)
			boundaries = _g11;
			HX_STACK_LINE(758)
			if (((boundaries != null()))){
				HX_STACK_LINE(760)
				Float _g12 = boundaries->get_right();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(760)
				Float _g13 = (offx + _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(760)
				Float _g14 = (_g13 + this->x);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(760)
				this->caret->set_x(_g14);
				HX_STACK_LINE(761)
				Float _g15 = boundaries->get_top();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(761)
				Float _g16 = (_g15 + this->y);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(761)
				this->caret->set_y(_g16);
			}
			else{
				HX_STACK_LINE(764)
				if (((this->get_text().length == (int)0))){
					HX_STACK_LINE(767)
					this->caret->set_x(((this->x + offx) + (int)2));
					HX_STACK_LINE(768)
					this->caret->set_y((this->y + (int)2));
					HX_STACK_LINE(769)
					if (((alignStr == HX_CSTRING("right")))){
						HX_STACK_LINE(770)
						Float _g17 = this->_textField->get_width();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(770)
						Float _g18 = (this->x + _g17);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(770)
						Float _g19 = (_g18 - (int)2);		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(770)
						this->caret->set_x(_g19);
					}
				}
			}
		}
	}
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::addons::ui::FlxInputText_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxInputText.hx",777,0x19fbd1e7)
			{
				HX_STACK_LINE(777)
				Float _g20 = __this->caret->get_width();		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(777)
				Float _g21 = (__this->caret->x + _g20);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(777)
				Float _g22 = __this->get_width();		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(777)
				Float _g23 = (__this->x + _g22);		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(777)
				return (_g21 > _g23);
			}
			return null();
		}
	};
	HX_STACK_LINE(777)
	if (((  (((this->lines == (int)1))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(779)
		Float _g24 = this->get_width();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(779)
		Float _g25 = (this->x + _g24);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(779)
		Float _g26 = (_g25 - (int)2);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(779)
		this->caret->set_x(_g26);
	}
	HX_STACK_LINE(782)
	return this->caretIndex;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",786,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(787)
	this->forceCase = Value;
	HX_STACK_LINE(788)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(788)
	::String _g1 = this->filter(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(788)
	this->set_text(_g1);
	HX_STACK_LINE(789)
	return this->forceCase;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

Float FlxInputText_obj::set_size( Float Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",793,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(794)
	this->super::set_size(Value);
	HX_STACK_LINE(795)
	Float _g = this->get_size();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(795)
	Float _g1 = (_g + (int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(795)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(795)
	this->caret->makeGraphic((int)1,_g2,null(),null(),null());
	HX_STACK_LINE(796)
	return Value;
}


int FlxInputText_obj::set_maxLength( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",800,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(801)
	this->maxLength = Value;
	HX_STACK_LINE(802)
	if (((this->get_text().length > this->maxLength))){
		HX_STACK_LINE(804)
		::String _g = this->get_text().substring((int)0,this->maxLength);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(804)
		this->set_text(_g);
	}
	HX_STACK_LINE(806)
	return this->maxLength;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",810,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(811)
	if (((Value == (int)0))){
		HX_STACK_LINE(811)
		return (int)0;
	}
	HX_STACK_LINE(813)
	if (((Value > (int)1))){
		HX_STACK_LINE(814)
		this->_textField->set_wordWrap(true);
		HX_STACK_LINE(815)
		this->_textField->set_multiline(true);
	}
	else{
		HX_STACK_LINE(818)
		this->_textField->set_wordWrap(false);
		HX_STACK_LINE(819)
		this->_textField->set_multiline(false);
	}
	HX_STACK_LINE(822)
	this->lines = Value;
	HX_STACK_LINE(823)
	this->calcFrame(null());
	HX_STACK_LINE(824)
	return this->lines;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",829,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(829)
	return this->_textField->get_displayAsPassword();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode( bool value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",833,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(834)
	this->_textField->set_displayAsPassword(value);
	HX_STACK_LINE(835)
	this->calcFrame(null());
	HX_STACK_LINE(836)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",840,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(841)
	this->filterMode = Value;
	HX_STACK_LINE(842)
	::String _g = this->get_text();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(842)
	::String _g1 = this->filter(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(842)
	this->set_text(_g1);
	HX_STACK_LINE(843)
	return this->filterMode;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",847,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(848)
	this->fieldBorderColor = Value;
	HX_STACK_LINE(849)
	this->calcFrame(null());
	HX_STACK_LINE(850)
	return this->fieldBorderColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",854,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(855)
	this->fieldBorderThickness = Value;
	HX_STACK_LINE(856)
	this->calcFrame(null());
	HX_STACK_LINE(857)
	return this->fieldBorderThickness;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",861,0x19fbd1e7)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(862)
	this->backgroundColor = Value;
	HX_STACK_LINE(863)
	this->calcFrame(null());
	HX_STACK_LINE(864)
	return this->backgroundColor;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;


FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxInputText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return lines; }
		if (HX_FIELD_EQ(inName,"caret") ) { return caret; }
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return hasFocus; }
		if (HX_FIELD_EQ(inName,"onChange") ) { return onChange_dyn(); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return set_text_dyn(); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return set_size_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { return forceCase; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return maxLength; }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return calcFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return set_lines_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return background; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return caretColor; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return caretWidth; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return caretIndex; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return filterMode; }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return drawSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return _caretTimer; }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return toggleCaret_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { return get_passwordMode(); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return set_hasFocus_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return set_forceCase_dyn(); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return set_maxLength_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return set_caretColor_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return set_caretWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return set_caretIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return set_filterMode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return _charBoundaries; }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return insertSubstring_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return fieldBorderColor; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return backgroundSprite; }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return get_passwordMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return set_passwordMode_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return fieldBorderSprite; }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return getCharBoundaries_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return customFilterPattern; }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return getCharIndexAtPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return set_backgroundColor_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return fieldBorderThickness; }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return set_fieldBorderColor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return prepareCharBoundaries_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getCaretIndexFromPoint") ) { return getCaretIndexFromPoint_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return set_customFilterPattern_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return set_fieldBorderThickness_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxInputText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp) return set_lines(inValue);lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp) return set_hasFocus(inValue);hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp) return set_forceCase(inValue);forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp) return set_maxLength(inValue);maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp) return set_caretColor(inValue);caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp) return set_caretWidth(inValue);caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp) return set_caretIndex(inValue);caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp) return set_filterMode(inValue);filterMode=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { return set_passwordMode(inValue); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp) return set_backgroundColor(inValue);backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp) return set_fieldBorderColor(inValue);fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp) return set_customFilterPattern(inValue);customFilterPattern=inValue.Cast< ::EReg >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp) return set_fieldBorderThickness(inValue);fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("customFilterPattern"));
	outFields->push(HX_CSTRING("background"));
	outFields->push(HX_CSTRING("caretColor"));
	outFields->push(HX_CSTRING("caretWidth"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("passwordMode"));
	outFields->push(HX_CSTRING("hasFocus"));
	outFields->push(HX_CSTRING("caretIndex"));
	outFields->push(HX_CSTRING("forceCase"));
	outFields->push(HX_CSTRING("maxLength"));
	outFields->push(HX_CSTRING("lines"));
	outFields->push(HX_CSTRING("filterMode"));
	outFields->push(HX_CSTRING("fieldBorderColor"));
	outFields->push(HX_CSTRING("fieldBorderThickness"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("backgroundSprite"));
	outFields->push(HX_CSTRING("_caretTimer"));
	outFields->push(HX_CSTRING("caret"));
	outFields->push(HX_CSTRING("fieldBorderSprite"));
	outFields->push(HX_CSTRING("_charBoundaries"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NO_FILTER"),
	HX_CSTRING("ONLY_ALPHA"),
	HX_CSTRING("ONLY_NUMERIC"),
	HX_CSTRING("ONLY_ALPHANUMERIC"),
	HX_CSTRING("CUSTOM_FILTER"),
	HX_CSTRING("ALL_CASES"),
	HX_CSTRING("UPPER_CASE"),
	HX_CSTRING("LOWER_CASE"),
	HX_CSTRING("BACKSPACE_ACTION"),
	HX_CSTRING("DELETE_ACTION"),
	HX_CSTRING("ENTER_ACTION"),
	HX_CSTRING("INPUT_ACTION"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::EReg*/ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_CSTRING("customFilterPattern")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,callback),HX_CSTRING("callback")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_CSTRING("background")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_CSTRING("caretColor")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_CSTRING("caretWidth")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxInputText_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_CSTRING("hasFocus")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_CSTRING("caretIndex")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_CSTRING("forceCase")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_CSTRING("maxLength")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_CSTRING("lines")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_CSTRING("filterMode")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_CSTRING("fieldBorderColor")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_CSTRING("fieldBorderThickness")},
	{hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_CSTRING("backgroundColor")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_CSTRING("backgroundSprite")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_CSTRING("_caretTimer")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,caret),HX_CSTRING("caret")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_CSTRING("fieldBorderSprite")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_CSTRING("_charBoundaries")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("customFilterPattern"),
	HX_CSTRING("set_customFilterPattern"),
	HX_CSTRING("callback"),
	HX_CSTRING("background"),
	HX_CSTRING("caretColor"),
	HX_CSTRING("set_caretColor"),
	HX_CSTRING("caretWidth"),
	HX_CSTRING("set_caretWidth"),
	HX_CSTRING("params"),
	HX_CSTRING("hasFocus"),
	HX_CSTRING("caretIndex"),
	HX_CSTRING("forceCase"),
	HX_CSTRING("maxLength"),
	HX_CSTRING("lines"),
	HX_CSTRING("filterMode"),
	HX_CSTRING("fieldBorderColor"),
	HX_CSTRING("fieldBorderThickness"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("backgroundSprite"),
	HX_CSTRING("_caretTimer"),
	HX_CSTRING("caret"),
	HX_CSTRING("fieldBorderSprite"),
	HX_CSTRING("_charBoundaries"),
	HX_CSTRING("destroy"),
	HX_CSTRING("draw"),
	HX_CSTRING("drawSprite"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onChange"),
	HX_CSTRING("insertSubstring"),
	HX_CSTRING("getCaretIndexFromPoint"),
	HX_CSTRING("getCharIndexAtPoint"),
	HX_CSTRING("getCharBoundaries"),
	HX_CSTRING("set_text"),
	HX_CSTRING("prepareCharBoundaries"),
	HX_CSTRING("calcFrame"),
	HX_CSTRING("toggleCaret"),
	HX_CSTRING("filter"),
	HX_CSTRING("set_params"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("set_hasFocus"),
	HX_CSTRING("set_caretIndex"),
	HX_CSTRING("set_forceCase"),
	HX_CSTRING("set_size"),
	HX_CSTRING("set_maxLength"),
	HX_CSTRING("set_lines"),
	HX_CSTRING("get_passwordMode"),
	HX_CSTRING("set_passwordMode"),
	HX_CSTRING("set_filterMode"),
	HX_CSTRING("set_fieldBorderColor"),
	HX_CSTRING("set_fieldBorderThickness"),
	HX_CSTRING("set_backgroundColor"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
};

#endif

Class FlxInputText_obj::__mClass;

void FlxInputText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxInputText"), hx::TCanCast< FlxInputText_obj> ,sStaticFields,sMemberFields,
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

void FlxInputText_obj::__boot()
{
	NO_FILTER= (int)0;
	ONLY_ALPHA= (int)1;
	ONLY_NUMERIC= (int)2;
	ONLY_ALPHANUMERIC= (int)3;
	CUSTOM_FILTER= (int)4;
	ALL_CASES= (int)0;
	UPPER_CASE= (int)1;
	LOWER_CASE= (int)2;
	BACKSPACE_ACTION= HX_CSTRING("backspace");
	DELETE_ACTION= HX_CSTRING("delete");
	ENTER_ACTION= HX_CSTRING("enter");
	INPUT_ACTION= HX_CSTRING("input");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

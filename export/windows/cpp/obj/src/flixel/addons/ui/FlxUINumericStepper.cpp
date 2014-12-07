#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIInputText
#include <flixel/addons/ui/FlxUIInputText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUINumericStepper
#include <flixel/addons/ui/FlxUINumericStepper.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUINumericStepper_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","new",0xdb22a66b,"flixel.addons.ui.FlxUINumericStepper.new","flixel/addons/ui/FlxUINumericStepper.hx",16,0xbef22206)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_StepSize,"StepSize")
HX_STACK_ARG(__o_DefaultValue,"DefaultValue")
HX_STACK_ARG(__o_Min,"Min")
HX_STACK_ARG(__o_Max,"Max")
HX_STACK_ARG(__o_Decimals,"Decimals")
HX_STACK_ARG(__o_Stack,"Stack")
HX_STACK_ARG(TextField,"TextField")
HX_STACK_ARG(ButtonPlus,"ButtonPlus")
HX_STACK_ARG(ButtonMinus,"ButtonMinus")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float StepSize = __o_StepSize.Default(1);
Float DefaultValue = __o_DefaultValue.Default(0);
Float Min = __o_Min.Default(-999);
Float Max = __o_Max.Default(999);
int Decimals = __o_Decimals.Default(0);
int Stack = __o_Stack.Default(1);
{
	HX_STACK_LINE(28)
	this->stack = (int)1;
	HX_STACK_LINE(27)
	this->value = (int)0;
	HX_STACK_LINE(26)
	this->max = (int)10;
	HX_STACK_LINE(25)
	this->min = (int)0;
	HX_STACK_LINE(24)
	this->decimals = (int)0;
	HX_STACK_LINE(23)
	this->stepSize = (int)0;
	HX_STACK_LINE(154)
	super::__construct(X,Y);
	HX_STACK_LINE(156)
	if (((TextField == null()))){
		HX_STACK_LINE(157)
		::flixel::addons::ui::FlxUIInputText _g = ::flixel::addons::ui::FlxUIInputText_obj::__new((int)0,(int)0,(int)25,null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		TextField = _g;
	}
	HX_STACK_LINE(159)
	TextField->set_x((int)0);
	HX_STACK_LINE(160)
	TextField->set_y((int)0);
	HX_STACK_LINE(161)
	this->text_field = TextField;
	HX_STACK_LINE(162)
	::String _g1 = ::Std_obj::string(DefaultValue);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(162)
	this->text_field->set_text(_g1);
	HX_STACK_LINE(164)
	if ((::Std_obj::is(this->text_field,hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >()))){
		HX_STACK_LINE(166)
		::flixel::addons::ui::FlxUIInputText fuit = this->text_field;		HX_STACK_VAR(fuit,"fuit");
		HX_STACK_LINE(167)
		fuit->set_lines((int)1);
		HX_STACK_LINE(168)
		fuit->callback = this->_onInputTextEvent_dyn();
		HX_STACK_LINE(169)
		fuit->broadcastToFlxUI = false;
	}
	HX_STACK_LINE(172)
	this->stepSize = StepSize;
	HX_STACK_LINE(173)
	this->set_decimals(Decimals);
	HX_STACK_LINE(174)
	this->set_min(Min);
	HX_STACK_LINE(175)
	this->set_max(Max);
	HX_STACK_LINE(176)
	this->set_value(DefaultValue);
	HX_STACK_LINE(178)
	int _g2 = TextField->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(178)
	int btnSize = ((int)1 + _g2);		HX_STACK_VAR(btnSize,"btnSize");
	HX_STACK_LINE(180)
	if (((ButtonPlus == null()))){
		HX_STACK_LINE(181)
		::flixel::addons::ui::FlxUITypedButton _g3 = ::flixel::addons::ui::FlxUITypedButton_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(181)
		ButtonPlus = _g3;
		HX_STACK_LINE(182)
		Array< int > _g4 = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("2,2,15,15"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(182)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new().Add(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(182)
		ButtonPlus->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button_thin.png")),btnSize,btnSize,_g5,(int)0,(int)-1,false,(int)18,(int)18,null());
		HX_STACK_LINE(183)
		::flixel::FlxSprite _g6 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/plus_mark.png"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(183)
		ButtonPlus->set_label(_g6);
	}
	HX_STACK_LINE(185)
	if (((ButtonMinus == null()))){
		HX_STACK_LINE(186)
		::flixel::addons::ui::FlxUITypedButton _g7 = ::flixel::addons::ui::FlxUITypedButton_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(186)
		ButtonMinus = _g7;
		HX_STACK_LINE(187)
		Array< int > _g8 = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("2,2,15,15"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(187)
		Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new().Add(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(187)
		ButtonMinus->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button_thin.png")),btnSize,btnSize,_g9,(int)0,(int)-1,false,(int)18,(int)18,null());
		HX_STACK_LINE(188)
		::flixel::FlxSprite _g10 = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/minus_mark.png"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(188)
		ButtonMinus->set_label(_g10);
	}
	HX_STACK_LINE(191)
	this->button_plus = ButtonPlus;
	HX_STACK_LINE(192)
	this->button_minus = ButtonMinus;
	HX_STACK_LINE(194)
	this->add(this->text_field);
	HX_STACK_LINE(195)
	this->add(this->button_plus);
	HX_STACK_LINE(196)
	this->add(this->button_minus);
	HX_STACK_LINE(198)
	this->button_plus->onUp->callback = this->_onPlus_dyn();
	HX_STACK_LINE(199)
	this->button_plus->broadcastToFlxUI = false;
	HX_STACK_LINE(201)
	this->button_minus->onUp->callback = this->_onMinus_dyn();
	HX_STACK_LINE(202)
	this->button_minus->broadcastToFlxUI = false;
	HX_STACK_LINE(204)
	this->set_stack(Stack);
}
;
	return null();
}

//FlxUINumericStepper_obj::~FlxUINumericStepper_obj() { }

Dynamic FlxUINumericStepper_obj::__CreateEmpty() { return  new FlxUINumericStepper_obj; }
hx::ObjectPtr< FlxUINumericStepper_obj > FlxUINumericStepper_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_StepSize,hx::Null< Float >  __o_DefaultValue,hx::Null< Float >  __o_Min,hx::Null< Float >  __o_Max,hx::Null< int >  __o_Decimals,hx::Null< int >  __o_Stack,::flixel::text::FlxText TextField,::flixel::addons::ui::FlxUITypedButton ButtonPlus,::flixel::addons::ui::FlxUITypedButton ButtonMinus)
{  hx::ObjectPtr< FlxUINumericStepper_obj > result = new FlxUINumericStepper_obj();
	result->__construct(__o_X,__o_Y,__o_StepSize,__o_DefaultValue,__o_Min,__o_Max,__o_Decimals,__o_Stack,TextField,ButtonPlus,ButtonMinus);
	return result;}

Dynamic FlxUINumericStepper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUINumericStepper_obj > result = new FlxUINumericStepper_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

hx::Object *FlxUINumericStepper_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

Dynamic FlxUINumericStepper_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_params",0xbd02dad8,"flixel.addons.ui.FlxUINumericStepper.set_params","flixel/addons/ui/FlxUINumericStepper.hx",38,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(39)
	this->params = p;
	HX_STACK_LINE(40)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_params,return )

bool FlxUINumericStepper_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_skipButtonUpdate",0x707fcccc,"flixel.addons.ui.FlxUINumericStepper.set_skipButtonUpdate","flixel/addons/ui/FlxUINumericStepper.hx",44,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(45)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(46)
	this->button_plus->set_skipButtonUpdate(b);
	HX_STACK_LINE(47)
	this->button_minus->set_skipButtonUpdate(b);
	HX_STACK_LINE(49)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_skipButtonUpdate,return )

int FlxUINumericStepper_obj::set_color( int Value){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_color",0x15562a11,"flixel.addons.ui.FlxUINumericStepper.set_color","flixel/addons/ui/FlxUINumericStepper.hx",52,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(53)
	this->color = Value;
	HX_STACK_LINE(54)
	this->button_plus->set_color(Value);
	HX_STACK_LINE(55)
	this->button_minus->set_color(Value);
	HX_STACK_LINE(56)
	if ((::Std_obj::is(this->text_field,hx::ClassOf< ::flixel::addons::ui::FlxInputText >()))){
		HX_STACK_LINE(57)
		::flixel::addons::ui::FlxInputText fit = this->text_field;		HX_STACK_VAR(fit,"fit");
		HX_STACK_LINE(58)
		fit->set_backgroundColor(Value);
	}
	else{
		HX_STACK_LINE(60)
		this->text_field->set_color(Value);
	}
	HX_STACK_LINE(62)
	return Value;
}


Float FlxUINumericStepper_obj::set_min( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_min",0x8923a2c0,"flixel.addons.ui.FlxUINumericStepper.set_min","flixel/addons/ui/FlxUINumericStepper.hx",65,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(66)
	this->min = f;
	HX_STACK_LINE(67)
	if (((this->value < this->min))){
		HX_STACK_LINE(67)
		this->set_value(this->min);
	}
	HX_STACK_LINE(68)
	return this->min;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_min,return )

Float FlxUINumericStepper_obj::set_max( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_max",0x89239bd2,"flixel.addons.ui.FlxUINumericStepper.set_max","flixel/addons/ui/FlxUINumericStepper.hx",71,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(72)
	this->max = f;
	HX_STACK_LINE(73)
	if (((this->value > this->max))){
		HX_STACK_LINE(73)
		this->set_value(this->max);
	}
	HX_STACK_LINE(74)
	return this->max;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_max,return )

Float FlxUINumericStepper_obj::set_value( Float f){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_value",0xfcb2381f,"flixel.addons.ui.FlxUINumericStepper.set_value","flixel/addons/ui/FlxUINumericStepper.hx",77,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_LINE(78)
	this->value = f;
	HX_STACK_LINE(79)
	if (((this->value < this->min))){
		HX_STACK_LINE(79)
		this->value = this->min;
	}
	HX_STACK_LINE(80)
	if (((this->value > this->max))){
		HX_STACK_LINE(80)
		this->value = this->max;
	}
	HX_STACK_LINE(81)
	if (((this->text_field != null()))){
		HX_STACK_LINE(82)
		::String _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			Float tens = ::Math_obj::pow((int)10,this->decimals);		HX_STACK_VAR(tens,"tens");
			HX_STACK_LINE(82)
			int _g = ::Math_obj::round((this->value * tens));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(82)
			Float _g1 = (Float(_g) / Float(tens));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(82)
			_g2 = ::Std_obj::string(_g1);
		}
		HX_STACK_LINE(82)
		this->text_field->set_text(_g2);
	}
	HX_STACK_LINE(84)
	return this->value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_value,return )

int FlxUINumericStepper_obj::set_decimals( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_decimals",0xbb56b2d4,"flixel.addons.ui.FlxUINumericStepper.set_decimals","flixel/addons/ui/FlxUINumericStepper.hx",87,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(88)
	this->decimals = i;
	HX_STACK_LINE(89)
	if (((i < (int)0))){
		HX_STACK_LINE(89)
		this->decimals = (int)0;
	}
	HX_STACK_LINE(90)
	this->set_value(this->value);
	HX_STACK_LINE(91)
	return this->decimals;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_decimals,return )

int FlxUINumericStepper_obj::set_stack( int s){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","set_stack",0x4f051ff6,"flixel.addons.ui.FlxUINumericStepper.set_stack","flixel/addons/ui/FlxUINumericStepper.hx",94,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(95)
	this->stack = s;
	HX_STACK_LINE(96)
	int btnSize = (int)10;		HX_STACK_VAR(btnSize,"btnSize");
	HX_STACK_LINE(97)
	int offsetX = (int)0;		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(98)
	int offsetY = (int)0;		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(99)
	if ((::Std_obj::is(this->text_field,hx::ClassOf< ::flixel::addons::ui::FlxUIInputText >()))){
		HX_STACK_LINE(100)
		offsetX = (int)1;
		HX_STACK_LINE(101)
		offsetY = (int)1;
	}
	HX_STACK_LINE(103)
	{
		HX_STACK_LINE(103)
		int _g = this->stack;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(103)
		switch( (int)(_g)){
			case (int)1: {
				HX_STACK_LINE(105)
				int _g1 = this->text_field->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(105)
				int _g11 = ((int)2 + _g1);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(105)
				btnSize = _g11;
				HX_STACK_LINE(106)
				Float _g2 = this->button_plus->get_height();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(106)
				if (((_g2 != btnSize))){
					HX_STACK_LINE(107)
					this->button_plus->resize(btnSize,btnSize);
				}
				HX_STACK_LINE(109)
				Float _g3 = this->button_minus->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(109)
				if (((_g3 != btnSize))){
					HX_STACK_LINE(110)
					this->button_minus->resize(btnSize,btnSize);
				}
				HX_STACK_LINE(112)
				Float _g4 = this->text_field->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(112)
				Float _g5 = ((offsetX + this->text_field->x) + _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(112)
				this->button_plus->set_x(_g5);
				HX_STACK_LINE(113)
				this->button_plus->set_y((-(offsetY) + this->text_field->y));
				HX_STACK_LINE(114)
				Float _g6 = this->button_plus->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(114)
				Float _g7 = (this->button_plus->x + _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(114)
				this->button_minus->set_x(_g7);
				HX_STACK_LINE(115)
				this->button_minus->set_y(this->button_plus->y);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(117)
				Float _g8 = this->text_field->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(117)
				int _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(117)
				int _g10 = ((int)1 + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(117)
				btnSize = _g10;
				HX_STACK_LINE(118)
				Float _g11 = this->button_plus->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(118)
				if (((_g11 != btnSize))){
					HX_STACK_LINE(119)
					this->button_plus->resize(btnSize,btnSize);
				}
				HX_STACK_LINE(121)
				Float _g12 = this->button_minus->get_height();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(121)
				if (((_g12 != btnSize))){
					HX_STACK_LINE(122)
					this->button_minus->resize(btnSize,btnSize);
				}
				HX_STACK_LINE(124)
				Float _g13 = this->text_field->get_width();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(124)
				Float _g14 = ((offsetX + this->text_field->x) + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(124)
				this->button_plus->set_x(_g14);
				HX_STACK_LINE(125)
				this->button_plus->set_y((-(offsetY) + this->text_field->y));
				HX_STACK_LINE(126)
				Float _g15 = this->text_field->get_width();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(126)
				Float _g16 = ((offsetX + this->text_field->x) + _g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(126)
				this->button_minus->set_x(_g16);
				HX_STACK_LINE(127)
				Float _g17 = this->text_field->get_height();		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(127)
				Float _g18 = this->button_minus->get_height();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(127)
				Float _g19 = (_g17 - _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(127)
				Float _g20 = ((offsetY + this->text_field->y) + _g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(127)
				this->button_minus->set_y(_g20);
			}
			;break;
		}
	}
	HX_STACK_LINE(129)
	return this->stack;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,set_stack,return )

::String FlxUINumericStepper_obj::decimalize( Float f,int digits){
	HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","decimalize",0x151fa4b8,"flixel.addons.ui.FlxUINumericStepper.decimalize","flixel/addons/ui/FlxUINumericStepper.hx",132,0xbef22206)
	HX_STACK_THIS(this)
	HX_STACK_ARG(f,"f")
	HX_STACK_ARG(digits,"digits")
	HX_STACK_LINE(133)
	Float tens = ::Math_obj::pow((int)10,digits);		HX_STACK_VAR(tens,"tens");
	HX_STACK_LINE(134)
	int _g = ::Math_obj::round((f * tens));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	Float _g1 = (Float(_g) / Float(tens));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(134)
	return ::Std_obj::string(_g1);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUINumericStepper_obj,decimalize,return )

Void FlxUINumericStepper_obj::_onInputTextEvent( ::String text,::String action){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onInputTextEvent",0x97f1d1ec,"flixel.addons.ui.FlxUINumericStepper._onInputTextEvent","flixel/addons/ui/FlxUINumericStepper.hx",207,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_ARG(text,"text")
		HX_STACK_ARG(action,"action")
		HX_STACK_LINE(208)
		if (((text == HX_CSTRING("")))){
			HX_STACK_LINE(210)
			::String _g = ::Std_obj::string(this->min);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(210)
			text = _g;
		}
		HX_STACK_LINE(212)
		Dynamic _g1 = ::Std_obj::parseInt(text);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(212)
		this->set_value(_g1);
		HX_STACK_LINE(213)
		this->_doCallback(HX_CSTRING("edit_numeric_stepper"));
		HX_STACK_LINE(214)
		this->_doCallback(HX_CSTRING("change_numeric_stepper"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUINumericStepper_obj,_onInputTextEvent,(void))

Void FlxUINumericStepper_obj::_onPlus( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onPlus",0xcab59143,"flixel.addons.ui.FlxUINumericStepper._onPlus","flixel/addons/ui/FlxUINumericStepper.hx",217,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::flixel::addons::ui::FlxUINumericStepper _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			_g->set_value((_g->value + this->stepSize));
		}
		HX_STACK_LINE(219)
		this->_doCallback(HX_CSTRING("click_numeric_stepper"));
		HX_STACK_LINE(220)
		this->_doCallback(HX_CSTRING("change_numeric_stepper"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUINumericStepper_obj,_onPlus,(void))

Void FlxUINumericStepper_obj::_onMinus( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_onMinus",0xd7f4da67,"flixel.addons.ui.FlxUINumericStepper._onMinus","flixel/addons/ui/FlxUINumericStepper.hx",223,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			::flixel::addons::ui::FlxUINumericStepper _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			_g->set_value((_g->value - this->stepSize));
		}
		HX_STACK_LINE(225)
		this->_doCallback(HX_CSTRING("click_numeric_stepper"));
		HX_STACK_LINE(226)
		this->_doCallback(HX_CSTRING("change_numeric_stepper"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUINumericStepper_obj,_onMinus,(void))

Void FlxUINumericStepper_obj::_doCallback( ::String event_name){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUINumericStepper","_doCallback",0xf5f9d69a,"flixel.addons.ui.FlxUINumericStepper._doCallback","flixel/addons/ui/FlxUINumericStepper.hx",230,0xbef22206)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event_name,"event_name")
		HX_STACK_LINE(230)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(231)
			::flixel::addons::ui::FlxUI_obj::event(event_name,hx::ObjectPtr<OBJ_>(this),this->value,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUINumericStepper_obj,_doCallback,(void))

int FlxUINumericStepper_obj::STACK_VERTICAL;

int FlxUINumericStepper_obj::STACK_HORIZONTAL;

::String FlxUINumericStepper_obj::CLICK_EVENT;

::String FlxUINumericStepper_obj::EDIT_EVENT;

::String FlxUINumericStepper_obj::CHANGE_EVENT;


FlxUINumericStepper_obj::FlxUINumericStepper_obj()
{
}

void FlxUINumericStepper_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUINumericStepper);
	HX_MARK_MEMBER_NAME(button_plus,"button_plus");
	HX_MARK_MEMBER_NAME(button_minus,"button_minus");
	HX_MARK_MEMBER_NAME(text_field,"text_field");
	HX_MARK_MEMBER_NAME(stepSize,"stepSize");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(stack,"stack");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUINumericStepper_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(button_plus,"button_plus");
	HX_VISIT_MEMBER_NAME(button_minus,"button_minus");
	HX_VISIT_MEMBER_NAME(text_field,"text_field");
	HX_VISIT_MEMBER_NAME(stepSize,"stepSize");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(stack,"stack");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUINumericStepper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"stack") ) { return stack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"set_min") ) { return set_min_dyn(); }
		if (HX_FIELD_EQ(inName,"set_max") ) { return set_max_dyn(); }
		if (HX_FIELD_EQ(inName,"_onPlus") ) { return _onPlus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stepSize") ) { return stepSize; }
		if (HX_FIELD_EQ(inName,"decimals") ) { return decimals; }
		if (HX_FIELD_EQ(inName,"_onMinus") ) { return _onMinus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_color") ) { return set_color_dyn(); }
		if (HX_FIELD_EQ(inName,"set_value") ) { return set_value_dyn(); }
		if (HX_FIELD_EQ(inName,"set_stack") ) { return set_stack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_field") ) { return text_field; }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"decimalize") ) { return decimalize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"button_plus") ) { return button_plus; }
		if (HX_FIELD_EQ(inName,"_doCallback") ) { return _doCallback_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"button_minus") ) { return button_minus; }
		if (HX_FIELD_EQ(inName,"set_decimals") ) { return set_decimals_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onInputTextEvent") ) { return _onInputTextEvent_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUINumericStepper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { if (inCallProp) return set_min(inValue);min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { if (inCallProp) return set_max(inValue);max=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { if (inCallProp) return set_value(inValue);value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stack") ) { if (inCallProp) return set_stack(inValue);stack=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stepSize") ) { stepSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { if (inCallProp) return set_decimals(inValue);decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"text_field") ) { text_field=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"button_plus") ) { button_plus=inValue.Cast< ::flixel::addons::ui::FlxUITypedButton >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"button_minus") ) { button_minus=inValue.Cast< ::flixel::addons::ui::FlxUITypedButton >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUINumericStepper_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("button_plus"));
	outFields->push(HX_CSTRING("button_minus"));
	outFields->push(HX_CSTRING("text_field"));
	outFields->push(HX_CSTRING("stepSize"));
	outFields->push(HX_CSTRING("decimals"));
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("stack"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STACK_VERTICAL"),
	HX_CSTRING("STACK_HORIZONTAL"),
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("EDIT_EVENT"),
	HX_CSTRING("CHANGE_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::FlxUITypedButton*/ ,(int)offsetof(FlxUINumericStepper_obj,button_plus),HX_CSTRING("button_plus")},
	{hx::fsObject /*::flixel::addons::ui::FlxUITypedButton*/ ,(int)offsetof(FlxUINumericStepper_obj,button_minus),HX_CSTRING("button_minus")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(FlxUINumericStepper_obj,text_field),HX_CSTRING("text_field")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,stepSize),HX_CSTRING("stepSize")},
	{hx::fsInt,(int)offsetof(FlxUINumericStepper_obj,decimals),HX_CSTRING("decimals")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,min),HX_CSTRING("min")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,max),HX_CSTRING("max")},
	{hx::fsFloat,(int)offsetof(FlxUINumericStepper_obj,value),HX_CSTRING("value")},
	{hx::fsInt,(int)offsetof(FlxUINumericStepper_obj,stack),HX_CSTRING("stack")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUINumericStepper_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxUINumericStepper_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("button_plus"),
	HX_CSTRING("button_minus"),
	HX_CSTRING("text_field"),
	HX_CSTRING("stepSize"),
	HX_CSTRING("decimals"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("value"),
	HX_CSTRING("stack"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("set_color"),
	HX_CSTRING("set_min"),
	HX_CSTRING("set_max"),
	HX_CSTRING("set_value"),
	HX_CSTRING("set_decimals"),
	HX_CSTRING("set_stack"),
	HX_CSTRING("decimalize"),
	HX_CSTRING("_onInputTextEvent"),
	HX_CSTRING("_onPlus"),
	HX_CSTRING("_onMinus"),
	HX_CSTRING("_doCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::STACK_VERTICAL,"STACK_VERTICAL");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::EDIT_EVENT,"EDIT_EVENT");
	HX_MARK_MEMBER_NAME(FlxUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::STACK_VERTICAL,"STACK_VERTICAL");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::STACK_HORIZONTAL,"STACK_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::EDIT_EVENT,"EDIT_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUINumericStepper_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#endif

Class FlxUINumericStepper_obj::__mClass;

void FlxUINumericStepper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUINumericStepper"), hx::TCanCast< FlxUINumericStepper_obj> ,sStaticFields,sMemberFields,
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

void FlxUINumericStepper_obj::__boot()
{
	STACK_VERTICAL= (int)0;
	STACK_HORIZONTAL= (int)1;
	CLICK_EVENT= HX_CSTRING("click_numeric_stepper");
	EDIT_EVENT= HX_CSTRING("edit_numeric_stepper");
	CHANGE_EVENT= HX_CSTRING("change_numeric_stepper");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

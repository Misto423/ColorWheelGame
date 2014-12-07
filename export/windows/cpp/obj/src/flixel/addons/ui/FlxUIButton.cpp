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
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxBasic
#include <flixel/interfaces/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","new",0x9a0e8c99,"flixel.addons.ui.FlxUIButton.new","flixel/addons/ui/FlxUIButton.hx",26,0xbb6c9298)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(Label,"Label")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(36)
	this->down_toggle_style = null();
	HX_STACK_LINE(35)
	this->over_toggle_style = null();
	HX_STACK_LINE(34)
	this->up_toggle_style = null();
	HX_STACK_LINE(32)
	this->down_style = null();
	HX_STACK_LINE(31)
	this->over_style = null();
	HX_STACK_LINE(30)
	this->up_style = null();
	HX_STACK_LINE(47)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(48)
	if (((Label != null()))){
		HX_STACK_LINE(50)
		::flixel::addons::ui::FlxUIText _g = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,Label,(int)8,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(50)
		this->set_label(_g);
		HX_STACK_LINE(51)
		this->label->__Field(HX_CSTRING("setFormat"),true)(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
	}
	HX_STACK_LINE(53)
	Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(53)
	Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(53)
	this->resize(_g1,_g2);
	HX_STACK_LINE(54)
	this->autoCenterLabel();
}
;
	return null();
}

//FlxUIButton_obj::~FlxUIButton_obj() { }

Dynamic FlxUIButton_obj::__CreateEmpty() { return  new FlxUIButton_obj; }
hx::ObjectPtr< FlxUIButton_obj > FlxUIButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxUIButton_obj > result = new FlxUIButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxUIButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIButton_obj > result = new FlxUIButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxUIButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxDestroyable_obj)) return operator ::flixel::interfaces::IFlxDestroyable_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ILabeled_obj)) return operator ::flixel::addons::ui::interfaces::ILabeled_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIButton_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIButton_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

::flixel::addons::ui::FlxUIText FlxUIButton_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","setLabel",0x4416cc19,"flixel.addons.ui.FlxUIButton.setLabel","flixel/addons/ui/FlxUIButton.hx",59,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(59)
	this->set_label(t);
	HX_STACK_LINE(59)
	return this->label;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,setLabel,return )

::flixel::addons::ui::FlxUIText FlxUIButton_obj::getLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","getLabel",0x95b972a5,"flixel.addons.ui.FlxUIButton.getLabel","flixel/addons/ui/FlxUIButton.hx",60,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return this->label;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,getLabel,return )

Void FlxUIButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resize",0x28cb475b,"flixel.addons.ui.FlxUIButton.resize","flixel/addons/ui/FlxUIButton.hx",64,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(65)
		this->super::resize(W,H);
		HX_STACK_LINE(66)
		if (((this->label != null()))){
			HX_STACK_LINE(67)
			this->label->__Field(HX_CSTRING("set_width"),true)(W);
			HX_STACK_LINE(68)
			this->label->__Field(HX_CSTRING("set_fieldWidth"),true)(W);
		}
	}
return null();
}


Void FlxUIButton_obj::addIcon( ::flixel::FlxSprite icon,hx::Null< int >  __o_X,hx::Null< int >  __o_Y,Dynamic __o_center){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
Dynamic center = __o_center.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","addIcon",0xa78ff6f3,"flixel.addons.ui.FlxUIButton.addIcon","flixel/addons/ui/FlxUIButton.hx",73,0xbb6c9298)
	HX_STACK_THIS(this)
	HX_STACK_ARG(icon,"icon")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(center,"center")
{
		HX_STACK_LINE(75)
		::openfl::_v2::display::BitmapData _g = this->cachedGraphics->bitmap->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(75)
		this->_noIconGraphicsBkup = _g;
		HX_STACK_LINE(77)
		int sx = X;		HX_STACK_VAR(sx,"sx");
		HX_STACK_LINE(78)
		int sy = Y;		HX_STACK_VAR(sy,"sy");
		HX_STACK_LINE(80)
		if ((center)){
			HX_STACK_LINE(81)
			Float _g1 = this->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(81)
			Float _g2 = icon->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(81)
			Float _g3 = (_g1 - _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(81)
			Float _g4 = (Float(_g3) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(81)
			int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(81)
			sx = _g5;
			HX_STACK_LINE(82)
			Float _g6 = this->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(82)
			Float _g7 = icon->get_height();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(82)
			Float _g8 = (_g6 - _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(82)
			Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(82)
			int _g10 = ::Std_obj::_int(_g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(82)
			sy = _g10;
		}
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(86)
			int _g2 = this->frames;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(86)
			while((true)){
				HX_STACK_LINE(86)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(86)
					break;
				}
				HX_STACK_LINE(86)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(88)
				Float _g11 = this->get_height();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(88)
				Float _g12 = (i * _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(88)
				int _g13 = ::Std_obj::_int(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(88)
				int _g14 = (sy + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(88)
				this->stamp(icon,sx,_g14);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIButton_obj,addIcon,(void))

Void FlxUIButton_obj::removeIcon( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","removeIcon",0xfc624ec4,"flixel.addons.ui.FlxUIButton.removeIcon","flixel/addons/ui/FlxUIButton.hx",94,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		if (((this->_noIconGraphicsBkup != null()))){
			HX_STACK_LINE(97)
			::openfl::_v2::geom::Rectangle _g = this->cachedGraphics->bitmap->get_rect();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(97)
			this->cachedGraphics->bitmap->fillRect(_g,(int)0);
			HX_STACK_LINE(98)
			int _g1 = this->_noIconGraphicsBkup->get_width();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(98)
			int _g2 = this->_noIconGraphicsBkup->get_height();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(98)
			::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g1,_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(98)
			::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(98)
			this->cachedGraphics->bitmap->copyPixels(this->_noIconGraphicsBkup,_g3,_g4,null(),null(),null());
			HX_STACK_LINE(99)
			this->cachedGraphics->get_tilesheet()->destroyFrameBitmapDatas();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIButton_obj,removeIcon,(void))

Void FlxUIButton_obj::changeIcon( ::flixel::FlxSprite newIcon){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","changeIcon",0x598c49f0,"flixel.addons.ui.FlxUIButton.changeIcon","flixel/addons/ui/FlxUIButton.hx",108,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newIcon,"newIcon")
		HX_STACK_LINE(109)
		this->removeIcon();
		HX_STACK_LINE(110)
		this->addIcon(newIcon,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIButton_obj,changeIcon,(void))

Void FlxUIButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","destroy",0x4a25f9b3,"flixel.addons.ui.FlxUIButton.destroy","flixel/addons/ui/FlxUIButton.hx",114,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		::openfl::_v2::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_noIconGraphicsBkup);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(115)
		this->_noIconGraphicsBkup = _g;
		HX_STACK_LINE(116)
		this->super::destroy();
	}
return null();
}


Void FlxUIButton_obj::resetHelpers( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","resetHelpers",0x11dffddd,"flixel.addons.ui.FlxUIButton.resetHelpers","flixel/addons/ui/FlxUIButton.hx",125,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		this->super::resetHelpers();
		HX_STACK_LINE(128)
		if (((this->label != null()))){
			HX_STACK_LINE(130)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			int _g2 = this->label->__FieldRef(HX_CSTRING("frameWidth")) = _g1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(130)
			this->label->__Field(HX_CSTRING("set_width"),true)(_g2);
			HX_STACK_LINE(131)
			Float _g3 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(131)
			this->label->__Field(HX_CSTRING("set_fieldWidth"),true)(_g3);
			HX_STACK_LINE(132)
			Float _g4 = this->label->__Field(HX_CSTRING("get_size"),true)();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(132)
			this->label->__Field(HX_CSTRING("set_size"),true)(_g4);
		}
	}
return null();
}


Void FlxUIButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onDownHandler",0x9da54a22,"flixel.addons.ui.FlxUIButton.onDownHandler","flixel/addons/ui/FlxUIButton.hx",137,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		this->super::onDownHandler();
		HX_STACK_LINE(139)
		if (((this->label != null()))){
			HX_STACK_LINE(140)
			if (((bool(this->toggled) && bool((this->down_toggle_style != null()))))){
				HX_STACK_LINE(141)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->down_toggle_style->color);
				HX_STACK_LINE(142)
				if (((this->down_toggle_style != null()))){
					HX_STACK_LINE(143)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->down_toggle_style->border->style);
					HX_STACK_LINE(144)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->down_toggle_style->border->color);
					HX_STACK_LINE(145)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->down_toggle_style->border->size);
					HX_STACK_LINE(146)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->down_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(148)
				if (((bool(!(this->toggled)) && bool((this->down_style != null()))))){
					HX_STACK_LINE(149)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->down_style->color);
					HX_STACK_LINE(150)
					if (((this->down_style != null()))){
						HX_STACK_LINE(151)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->down_style->border->style);
						HX_STACK_LINE(152)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->down_style->border->color);
						HX_STACK_LINE(153)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->down_style->border->size);
						HX_STACK_LINE(154)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->down_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOverHandler",0x790d9370,"flixel.addons.ui.FlxUIButton.onOverHandler","flixel/addons/ui/FlxUIButton.hx",161,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(162)
		this->super::onOverHandler();
		HX_STACK_LINE(163)
		if (((this->label != null()))){
			HX_STACK_LINE(164)
			if (((bool(this->toggled) && bool((this->over_toggle_style != null()))))){
				HX_STACK_LINE(165)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->over_toggle_style->color);
				HX_STACK_LINE(166)
				if (((this->over_toggle_style != null()))){
					HX_STACK_LINE(167)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->over_toggle_style->border->style);
					HX_STACK_LINE(168)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->over_toggle_style->border->color);
					HX_STACK_LINE(169)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->over_toggle_style->border->size);
					HX_STACK_LINE(170)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->over_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(172)
				if (((bool(!(this->toggled)) && bool((this->over_style != null()))))){
					HX_STACK_LINE(173)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->over_style->color);
					HX_STACK_LINE(174)
					if (((this->over_style != null()))){
						HX_STACK_LINE(175)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->over_style->border->style);
						HX_STACK_LINE(176)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->over_style->border->color);
						HX_STACK_LINE(177)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->over_style->border->size);
						HX_STACK_LINE(178)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->over_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onOutHandler",0x7e879b82,"flixel.addons.ui.FlxUIButton.onOutHandler","flixel/addons/ui/FlxUIButton.hx",185,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		this->super::onOutHandler();
		HX_STACK_LINE(187)
		if (((this->label != null()))){
			HX_STACK_LINE(188)
			if (((bool(this->toggled) && bool((this->up_toggle_style != null()))))){
				HX_STACK_LINE(189)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->up_toggle_style->color);
				HX_STACK_LINE(190)
				if (((this->up_toggle_style->border != null()))){
					HX_STACK_LINE(191)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_toggle_style->border->style);
					HX_STACK_LINE(192)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_toggle_style->border->color);
					HX_STACK_LINE(193)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_toggle_style->border->size);
					HX_STACK_LINE(194)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(196)
				if (((bool(!(this->toggled)) && bool((this->up_style != null()))))){
					HX_STACK_LINE(197)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->up_style->color);
					HX_STACK_LINE(198)
					if (((this->up_style->border != null()))){
						HX_STACK_LINE(199)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_style->border->style);
						HX_STACK_LINE(200)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_style->border->color);
						HX_STACK_LINE(201)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_style->border->size);
						HX_STACK_LINE(202)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_style->border->quality);
					}
				}
			}
		}
	}
return null();
}


Void FlxUIButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIButton","onUpHandler",0xc867c2c9,"flixel.addons.ui.FlxUIButton.onUpHandler","flixel/addons/ui/FlxUIButton.hx",209,0xbb6c9298)
		HX_STACK_THIS(this)
		HX_STACK_LINE(210)
		this->super::onUpHandler();
		HX_STACK_LINE(211)
		if (((this->label != null()))){
			HX_STACK_LINE(212)
			if (((bool(this->toggled) && bool((this->up_toggle_style != null()))))){
				HX_STACK_LINE(213)
				this->label->__Field(HX_CSTRING("set_color"),true)(this->up_toggle_style->color);
				HX_STACK_LINE(214)
				if (((this->up_toggle_style->border != null()))){
					HX_STACK_LINE(215)
					this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_toggle_style->border->style);
					HX_STACK_LINE(216)
					this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_toggle_style->border->color);
					HX_STACK_LINE(217)
					this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_toggle_style->border->size);
					HX_STACK_LINE(218)
					this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_toggle_style->border->quality);
				}
			}
			else{
				HX_STACK_LINE(220)
				if (((bool(!(this->toggled)) && bool((this->up_style != null()))))){
					HX_STACK_LINE(221)
					this->label->__Field(HX_CSTRING("set_color"),true)(this->up_style->color);
					HX_STACK_LINE(222)
					if (((this->up_style->border != null()))){
						HX_STACK_LINE(223)
						this->label->__Field(HX_CSTRING("set_borderStyle"),true)(this->up_style->border->style);
						HX_STACK_LINE(224)
						this->label->__Field(HX_CSTRING("set_borderColor"),true)(this->up_style->border->color);
						HX_STACK_LINE(225)
						this->label->__Field(HX_CSTRING("set_borderSize"),true)(this->up_style->border->size);
						HX_STACK_LINE(226)
						this->label->__Field(HX_CSTRING("set_borderQuality"),true)(this->up_style->border->quality);
					}
				}
			}
		}
	}
return null();
}



FlxUIButton_obj::FlxUIButton_obj()
{
}

void FlxUIButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIButton);
	HX_MARK_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_MARK_MEMBER_NAME(up_style,"up_style");
	HX_MARK_MEMBER_NAME(over_style,"over_style");
	HX_MARK_MEMBER_NAME(down_style,"down_style");
	HX_MARK_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_MARK_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_MARK_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_noIconGraphicsBkup,"_noIconGraphicsBkup");
	HX_VISIT_MEMBER_NAME(up_style,"up_style");
	HX_VISIT_MEMBER_NAME(over_style,"over_style");
	HX_VISIT_MEMBER_NAME(down_style,"down_style");
	HX_VISIT_MEMBER_NAME(up_toggle_style,"up_toggle_style");
	HX_VISIT_MEMBER_NAME(over_toggle_style,"over_toggle_style");
	HX_VISIT_MEMBER_NAME(down_toggle_style,"down_toggle_style");
	::flixel::addons::ui::FlxUITypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addIcon") ) { return addIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { return up_style; }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return setLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return getLabel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { return over_style; }
		if (HX_FIELD_EQ(inName,"down_style") ) { return down_style; }
		if (HX_FIELD_EQ(inName,"removeIcon") ) { return removeIcon_dyn(); }
		if (HX_FIELD_EQ(inName,"changeIcon") ) { return changeIcon_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resetHelpers") ) { return resetHelpers_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { return up_toggle_style; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { return over_toggle_style; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { return down_toggle_style; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { return _noIconGraphicsBkup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"up_style") ) { up_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"over_style") ) { over_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_style") ) { down_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_style") ) { up_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_style") ) { over_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_style") ) { down_toggle_style=inValue.Cast< ::flixel::addons::ui::ButtonLabelStyle >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_noIconGraphicsBkup") ) { _noIconGraphicsBkup=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_noIconGraphicsBkup"));
	outFields->push(HX_CSTRING("up_style"));
	outFields->push(HX_CSTRING("over_style"));
	outFields->push(HX_CSTRING("down_style"));
	outFields->push(HX_CSTRING("up_toggle_style"));
	outFields->push(HX_CSTRING("over_toggle_style"));
	outFields->push(HX_CSTRING("down_toggle_style"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUIButton_obj,_noIconGraphicsBkup),HX_CSTRING("_noIconGraphicsBkup")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_style),HX_CSTRING("up_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_style),HX_CSTRING("over_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_style),HX_CSTRING("down_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,up_toggle_style),HX_CSTRING("up_toggle_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,over_toggle_style),HX_CSTRING("over_toggle_style")},
	{hx::fsObject /*::flixel::addons::ui::ButtonLabelStyle*/ ,(int)offsetof(FlxUIButton_obj,down_toggle_style),HX_CSTRING("down_toggle_style")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_noIconGraphicsBkup"),
	HX_CSTRING("up_style"),
	HX_CSTRING("over_style"),
	HX_CSTRING("down_style"),
	HX_CSTRING("up_toggle_style"),
	HX_CSTRING("over_toggle_style"),
	HX_CSTRING("down_toggle_style"),
	HX_CSTRING("setLabel"),
	HX_CSTRING("getLabel"),
	HX_CSTRING("resize"),
	HX_CSTRING("addIcon"),
	HX_CSTRING("removeIcon"),
	HX_CSTRING("changeIcon"),
	HX_CSTRING("destroy"),
	HX_CSTRING("resetHelpers"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("onUpHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIButton_obj::__mClass,"__mClass");
};

#endif

Class FlxUIButton_obj::__mClass;

void FlxUIButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIButton"), hx::TCanCast< FlxUIButton_obj> ,sStaticFields,sMemberFields,
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

void FlxUIButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

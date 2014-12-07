#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSprite
#include <flixel/interfaces/IFlxSprite.h>
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
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

Void FlxUI9SliceSprite_obj::__construct(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","new",0x6ddf7885,"flixel.addons.ui.FlxUI9SliceSprite.new","flixel/addons/ui/FlxUI9SliceSprite.hx",18,0x728ef6ec)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(Graphic,"Graphic")
HX_STACK_ARG(Rect,"Rect")
HX_STACK_ARG(Slice9,"Slice9")
HX_STACK_ARG(__o_Tile,"Tile")
HX_STACK_ARG(__o_Smooth,"Smooth")
HX_STACK_ARG(__o_Id,"Id")
HX_STACK_ARG(__o_Ratio,"Ratio")
HX_STACK_ARG(Resize_point,"Resize_point")
int Tile = __o_Tile.Default(0);
bool Smooth = __o_Smooth.Default(false);
::String Id = __o_Id.Default(HX_CSTRING(""));
Float Ratio = __o_Ratio.Default(-1);
{
	HX_STACK_LINE(33)
	this->_asset_id = HX_CSTRING("");
	HX_STACK_LINE(32)
	this->_smooth = false;
	HX_STACK_LINE(31)
	this->_tile = (int)0;
	HX_STACK_LINE(29)
	this->_slice9 = null();
	HX_STACK_LINE(72)
	super::__construct(X,Y,null());
	HX_STACK_LINE(74)
	this->_slice9 = Slice9;
	HX_STACK_LINE(75)
	this->_tile = Tile;
	HX_STACK_LINE(76)
	this->_smooth = Smooth;
	HX_STACK_LINE(78)
	this->_asset_id = HX_CSTRING("");
	HX_STACK_LINE(80)
	if (((Graphic == null()))){
		HX_STACK_LINE(81)
		Graphic = HX_CSTRING("flixel/flixel-ui/img/chrome.png");
	}
	HX_STACK_LINE(84)
	if ((::Std_obj::is(Graphic,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(85)
		this->_asset_id = Graphic;
		HX_STACK_LINE(86)
		this->_raw_pixels = null();
	}
	else{
		HX_STACK_LINE(87)
		if ((::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
			HX_STACK_LINE(88)
			this->_asset_id = Id;
			HX_STACK_LINE(89)
			this->_raw_pixels = Graphic;
		}
	}
	HX_STACK_LINE(92)
	this->set_resize_ratio(Ratio);
	HX_STACK_LINE(93)
	if (((Resize_point != null()))){
		HX_STACK_LINE(94)
		this->set_resize_point(Resize_point);
	}
	HX_STACK_LINE(97)
	this->resize(Rect->width,Rect->height);
}
;
	return null();
}

//FlxUI9SliceSprite_obj::~FlxUI9SliceSprite_obj() { }

Dynamic FlxUI9SliceSprite_obj::__CreateEmpty() { return  new FlxUI9SliceSprite_obj; }
hx::ObjectPtr< FlxUI9SliceSprite_obj > FlxUI9SliceSprite_obj::__new(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > result = new FlxUI9SliceSprite_obj();
	result->__construct(X,Y,Graphic,Rect,Slice9,__o_Tile,__o_Smooth,__o_Id,__o_Ratio,Resize_point);
	return result;}

Dynamic FlxUI9SliceSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI9SliceSprite_obj > result = new FlxUI9SliceSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

hx::Object *FlxUI9SliceSprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

Float FlxUI9SliceSprite_obj::set_resize_ratio( Float r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","set_resize_ratio",0x83be03f8,"flixel.addons.ui.FlxUI9SliceSprite.set_resize_ratio","flixel/addons/ui/FlxUI9SliceSprite.hx",101,0x728ef6ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(101)
	this->resize_ratio = r;
	HX_STACK_LINE(101)
	return r;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,set_resize_ratio,return )

::flixel::util::FlxPoint FlxUI9SliceSprite_obj::set_resize_point( ::flixel::util::FlxPoint r){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","set_resize_point",0x6629833d,"flixel.addons.ui.FlxUI9SliceSprite.set_resize_point","flixel/addons/ui/FlxUI9SliceSprite.hx",104,0x728ef6ec)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(105)
	if (((r != null()))){
		HX_STACK_LINE(106)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(106)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(106)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(106)
			point->_inPool = false;
			HX_STACK_LINE(106)
			_g = point;
		}
		HX_STACK_LINE(106)
		this->resize_point = _g;
		HX_STACK_LINE(107)
		this->resize_point->set_x(r->x);
		HX_STACK_LINE(108)
		this->resize_point->set_y(r->y);
	}
	HX_STACK_LINE(110)
	return this->resize_point;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,set_resize_point,return )

Void FlxUI9SliceSprite_obj::resize( Float w,Float h){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","resize",0x881d96ef,"flixel.addons.ui.FlxUI9SliceSprite.resize","flixel/addons/ui/FlxUI9SliceSprite.hx",113,0x728ef6ec)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_ARG(h,"h")
		HX_STACK_LINE(115)
		Float old_width = this->get_width();		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(116)
		Float old_height = this->get_height();		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(118)
		if (((this->resize_ratio > (int)0))){
			HX_STACK_LINE(119)
			Float effective_ratio = (Float(w) / Float(h));		HX_STACK_VAR(effective_ratio,"effective_ratio");
			HX_STACK_LINE(120)
			Float _g = ::Math_obj::abs((effective_ratio - this->resize_ratio));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			if (((_g > 0.0001))){
				HX_STACK_LINE(121)
				h = (w * ((Float((int)1) / Float(this->resize_ratio))));
			}
		}
		HX_STACK_LINE(125)
		if (((bool((this->_slice9 == null())) || bool((this->_slice9 == Array_obj< int >::__new()))))){
			HX_STACK_LINE(126)
			this->_slice9 = Array_obj< int >::__new().Add((int)4).Add((int)4).Add((int)7).Add((int)7);
		}
		HX_STACK_LINE(129)
		if (((::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas == null()))){
			HX_STACK_LINE(130)
			::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas = _g1;
		}
		HX_STACK_LINE(132)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_canvas->get_graphics()->clear();
		HX_STACK_LINE(134)
		int _g2 = ::Std_obj::_int(w);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(134)
		int _g3 = ::Std_obj::_int(h);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(134)
		::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,null(),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(134)
		this->_bmpCanvas = _g4;
		HX_STACK_LINE(136)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->x = (int)0;
		HX_STACK_LINE(137)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->y = (int)0;
		HX_STACK_LINE(138)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->width = w;
		HX_STACK_LINE(139)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect->height = h;
		HX_STACK_LINE(140)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::paintScale9(this->_bmpCanvas,this->_asset_id,this->_slice9,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect,this->_tile,this->_smooth,this->_raw_pixels);
		HX_STACK_LINE(142)
		int iw = ::Std_obj::_int(w);		HX_STACK_VAR(iw,"iw");
		HX_STACK_LINE(143)
		if (((iw < (int)1))){
			HX_STACK_LINE(144)
			iw = (int)1;
		}
		HX_STACK_LINE(146)
		int ih = ::Std_obj::_int(h);		HX_STACK_VAR(ih,"ih");
		HX_STACK_LINE(147)
		if (((ih < (int)1))){
			HX_STACK_LINE(148)
			ih = (int)1;
		}
		HX_STACK_LINE(152)
		::String _g5 = this->_slice9->join(HX_CSTRING(","));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(152)
		::String _g6 = ((this->_asset_id + HX_CSTRING("_")) + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(152)
		::String _g7 = (_g6 + HX_CSTRING("_"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(152)
		::String _g8 = (_g7 + iw);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(152)
		::String _g9 = (_g8 + HX_CSTRING("x"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(152)
		::String _g10 = (_g9 + ih);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(152)
		::String _g11 = (_g10 + HX_CSTRING("_"));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(152)
		::String _g12 = (_g11 + this->_tile);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(152)
		::String _g13 = (_g12 + HX_CSTRING("_"));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(152)
		::String _g14 = ::Std_obj::string(this->_smooth);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(152)
		::String key = (_g13 + _g14);		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(154)
		int _g15 = this->_bmpCanvas->get_width();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(154)
		int _g16 = this->_bmpCanvas->get_height();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(154)
		this->loadGraphic(this->_bmpCanvas,false,_g15,_g16,false,key);
		HX_STACK_LINE(156)
		Float _g17 = this->get_width();		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(156)
		Float diff_w = (_g17 - old_width);		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(157)
		Float _g18 = this->get_height();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(157)
		Float diff_h = (_g18 - old_height);		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(159)
		if (((this->resize_point != null()))){
			HX_STACK_LINE(160)
			Float delta_x = (diff_w * this->resize_point->x);		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(161)
			Float delta_y = (diff_h * this->resize_point->y);		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				::flixel::addons::ui::FlxUI9SliceSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(162)
				_g->set_x((_g->x - delta_x));
			}
			HX_STACK_LINE(163)
			{
				HX_STACK_LINE(163)
				::flixel::addons::ui::FlxUI9SliceSprite _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(163)
				_g->set_y((_g->y - delta_y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI9SliceSprite_obj,resize,(void))

int FlxUI9SliceSprite_obj::bitmapsCreated;

::openfl::_v2::display::Sprite FlxUI9SliceSprite_obj::_canvas;

bool FlxUI9SliceSprite_obj::useSectionCache;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::sectionCache;

::openfl::_v2::geom::Point FlxUI9SliceSprite_obj::_staticPoint;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::_staticRect2;

::openfl::_v2::geom::Point FlxUI9SliceSprite_obj::_staticPointZero;

::openfl::_v2::geom::Matrix FlxUI9SliceSprite_obj::_staticMatrix;

::flixel::util::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect;

::flixel::util::FlxRect FlxUI9SliceSprite_obj::_staticFlxRect2;

int FlxUI9SliceSprite_obj::TILE_NONE;

int FlxUI9SliceSprite_obj::TILE_BOTH;

int FlxUI9SliceSprite_obj::TILE_H;

int FlxUI9SliceSprite_obj::TILE_V;

::haxe::ds::StringMap FlxUI9SliceSprite_obj::_staticRects;

::openfl::_v2::geom::Rectangle FlxUI9SliceSprite_obj::getRectFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectFromString",0x5989423a,"flixel.addons.ui.FlxUI9SliceSprite.getRectFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",167,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(168)
	Array< ::String > coords = str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(169)
	::openfl::_v2::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(170)
	if (((bool((coords != null())) && bool((coords->length == (int)4))))){
		HX_STACK_LINE(171)
		int x_ = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x_,"x_");
		HX_STACK_LINE(172)
		int y_ = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y_,"y_");
		HX_STACK_LINE(173)
		int w_ = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(w_,"w_");
		HX_STACK_LINE(174)
		int h_ = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(h_,"h_");
		HX_STACK_LINE(175)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		rect = _g;
	}
	HX_STACK_LINE(177)
	return rect;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectFromString,return )

Array< int > FlxUI9SliceSprite_obj::getRectIntsFromString( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","getRectIntsFromString",0x35da5b7e,"flixel.addons.ui.FlxUI9SliceSprite.getRectIntsFromString","flixel/addons/ui/FlxUI9SliceSprite.hx",180,0x728ef6ec)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(181)
	Array< ::String > coords = str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
	HX_STACK_LINE(182)
	if (((bool((coords != null())) && bool((coords->length == (int)4))))){
		HX_STACK_LINE(183)
		int x1 = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x1,"x1");
		HX_STACK_LINE(184)
		int y1 = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y1,"y1");
		HX_STACK_LINE(185)
		int x2 = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(x2,"x2");
		HX_STACK_LINE(186)
		int y2 = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(y2,"y2");
		HX_STACK_LINE(187)
		return Array_obj< int >::__new().Add(x1).Add(y1).Add(x2).Add(y2);
	}
	HX_STACK_LINE(189)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI9SliceSprite_obj,getRectIntsFromString,return )

Void FlxUI9SliceSprite_obj::paintScale9( ::openfl::_v2::display::BitmapData g,::String assetID,Array< int > scale9,::flixel::util::FlxRect rc,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintScale9",0xf90375d2,"flixel.addons.ui.FlxUI9SliceSprite.paintScale9","flixel/addons/ui/FlxUI9SliceSprite.hx",207,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(scale9,"scale9")
	HX_STACK_ARG(rc,"rc")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(207)
		if (((scale9 != null()))){
			HX_STACK_LINE(209)
			int w;		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(210)
			int h;		HX_STACK_VAR(h,"h");
			HX_STACK_LINE(211)
			if (((raw == null()))){
				HX_STACK_LINE(212)
				int _g = ::openfl::_v2::Assets_obj::getBitmapData(assetID,null())->get_width();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(212)
				w = _g;
				HX_STACK_LINE(213)
				int _g1 = ::openfl::_v2::Assets_obj::getBitmapData(assetID,null())->get_height();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(213)
				h = _g1;
			}
			else{
				HX_STACK_LINE(215)
				int _g2 = raw->get_width();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(215)
				w = _g2;
				HX_STACK_LINE(216)
				int _g3 = raw->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(216)
				h = _g3;
			}
			HX_STACK_LINE(219)
			int x1 = scale9->__get((int)0);		HX_STACK_VAR(x1,"x1");
			HX_STACK_LINE(220)
			int y1 = scale9->__get((int)1);		HX_STACK_VAR(y1,"y1");
			HX_STACK_LINE(221)
			int x2 = scale9->__get((int)2);		HX_STACK_VAR(x2,"x2");
			HX_STACK_LINE(222)
			int y2 = scale9->__get((int)3);		HX_STACK_VAR(y2,"y2");
			HX_STACK_LINE(224)
			if (((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects == null()))){
				HX_STACK_LINE(225)
				::haxe::ds::StringMap _g4 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(225)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects = _g4;
				HX_STACK_LINE(226)
				{
					HX_STACK_LINE(226)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(226)
					{
						HX_STACK_LINE(226)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(226)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(226)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(226)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(226)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(226)
						{
							HX_STACK_LINE(226)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(226)
							_this->x = X;
							HX_STACK_LINE(226)
							_this->y = Y;
							HX_STACK_LINE(226)
							_this->width = Width;
							HX_STACK_LINE(226)
							_this->height = Height;
							HX_STACK_LINE(226)
							rect = _this;
						}
						HX_STACK_LINE(226)
						rect->_inPool = false;
						HX_STACK_LINE(226)
						value = rect;
					}
					HX_STACK_LINE(226)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top.left"),value);
				}
				HX_STACK_LINE(227)
				{
					HX_STACK_LINE(227)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(227)
					{
						HX_STACK_LINE(227)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(227)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(227)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(227)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(227)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(227)
						{
							HX_STACK_LINE(227)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(227)
							_this->x = X;
							HX_STACK_LINE(227)
							_this->y = Y;
							HX_STACK_LINE(227)
							_this->width = Width;
							HX_STACK_LINE(227)
							_this->height = Height;
							HX_STACK_LINE(227)
							rect = _this;
						}
						HX_STACK_LINE(227)
						rect->_inPool = false;
						HX_STACK_LINE(227)
						value = rect;
					}
					HX_STACK_LINE(227)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top"),value);
				}
				HX_STACK_LINE(228)
				{
					HX_STACK_LINE(228)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(228)
					{
						HX_STACK_LINE(228)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(228)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(228)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(228)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(228)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(228)
						{
							HX_STACK_LINE(228)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(228)
							_this->x = X;
							HX_STACK_LINE(228)
							_this->y = Y;
							HX_STACK_LINE(228)
							_this->width = Width;
							HX_STACK_LINE(228)
							_this->height = Height;
							HX_STACK_LINE(228)
							rect = _this;
						}
						HX_STACK_LINE(228)
						rect->_inPool = false;
						HX_STACK_LINE(228)
						value = rect;
					}
					HX_STACK_LINE(228)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("top.right"),value);
				}
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(229)
					{
						HX_STACK_LINE(229)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(229)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(229)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(229)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(229)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(229)
						{
							HX_STACK_LINE(229)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(229)
							_this->x = X;
							HX_STACK_LINE(229)
							_this->y = Y;
							HX_STACK_LINE(229)
							_this->width = Width;
							HX_STACK_LINE(229)
							_this->height = Height;
							HX_STACK_LINE(229)
							rect = _this;
						}
						HX_STACK_LINE(229)
						rect->_inPool = false;
						HX_STACK_LINE(229)
						value = rect;
					}
					HX_STACK_LINE(229)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("left"),value);
				}
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(230)
					{
						HX_STACK_LINE(230)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(230)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(230)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(230)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(230)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(230)
						{
							HX_STACK_LINE(230)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(230)
							_this->x = X;
							HX_STACK_LINE(230)
							_this->y = Y;
							HX_STACK_LINE(230)
							_this->width = Width;
							HX_STACK_LINE(230)
							_this->height = Height;
							HX_STACK_LINE(230)
							rect = _this;
						}
						HX_STACK_LINE(230)
						rect->_inPool = false;
						HX_STACK_LINE(230)
						value = rect;
					}
					HX_STACK_LINE(230)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("middle"),value);
				}
				HX_STACK_LINE(231)
				{
					HX_STACK_LINE(231)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(231)
					{
						HX_STACK_LINE(231)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(231)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(231)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(231)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(231)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(231)
						{
							HX_STACK_LINE(231)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(231)
							_this->x = X;
							HX_STACK_LINE(231)
							_this->y = Y;
							HX_STACK_LINE(231)
							_this->width = Width;
							HX_STACK_LINE(231)
							_this->height = Height;
							HX_STACK_LINE(231)
							rect = _this;
						}
						HX_STACK_LINE(231)
						rect->_inPool = false;
						HX_STACK_LINE(231)
						value = rect;
					}
					HX_STACK_LINE(231)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("right"),value);
				}
				HX_STACK_LINE(232)
				{
					HX_STACK_LINE(232)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(232)
					{
						HX_STACK_LINE(232)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(232)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(232)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(232)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(232)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(232)
						{
							HX_STACK_LINE(232)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(232)
							_this->x = X;
							HX_STACK_LINE(232)
							_this->y = Y;
							HX_STACK_LINE(232)
							_this->width = Width;
							HX_STACK_LINE(232)
							_this->height = Height;
							HX_STACK_LINE(232)
							rect = _this;
						}
						HX_STACK_LINE(232)
						rect->_inPool = false;
						HX_STACK_LINE(232)
						value = rect;
					}
					HX_STACK_LINE(232)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom.left"),value);
				}
				HX_STACK_LINE(233)
				{
					HX_STACK_LINE(233)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(233)
					{
						HX_STACK_LINE(233)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(233)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(233)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(233)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(233)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(233)
						{
							HX_STACK_LINE(233)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(233)
							_this->x = X;
							HX_STACK_LINE(233)
							_this->y = Y;
							HX_STACK_LINE(233)
							_this->width = Width;
							HX_STACK_LINE(233)
							_this->height = Height;
							HX_STACK_LINE(233)
							rect = _this;
						}
						HX_STACK_LINE(233)
						rect->_inPool = false;
						HX_STACK_LINE(233)
						value = rect;
					}
					HX_STACK_LINE(233)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom"),value);
				}
				HX_STACK_LINE(234)
				{
					HX_STACK_LINE(234)
					::flixel::util::FlxRect value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(234)
					{
						HX_STACK_LINE(234)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(234)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(234)
						Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
						HX_STACK_LINE(234)
						Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
						HX_STACK_LINE(234)
						::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(234)
							::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(234)
							_this->x = X;
							HX_STACK_LINE(234)
							_this->y = Y;
							HX_STACK_LINE(234)
							_this->width = Width;
							HX_STACK_LINE(234)
							_this->height = Height;
							HX_STACK_LINE(234)
							rect = _this;
						}
						HX_STACK_LINE(234)
						rect->_inPool = false;
						HX_STACK_LINE(234)
						value = rect;
					}
					HX_STACK_LINE(234)
					::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->set(HX_CSTRING("bottom.right"),value);
				}
			}
			HX_STACK_LINE(237)
			{
				HX_STACK_LINE(237)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(237)
				_this->x = (int)0;
				HX_STACK_LINE(237)
				_this->y = (int)0;
				HX_STACK_LINE(237)
				_this->width = x1;
				HX_STACK_LINE(237)
				_this->height = y1;
				HX_STACK_LINE(237)
				_this;
			}
			HX_STACK_LINE(238)
			{
				HX_STACK_LINE(238)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(238)
				_this->x = x1;
				HX_STACK_LINE(238)
				_this->y = (int)0;
				HX_STACK_LINE(238)
				_this->width = (x2 - x1);
				HX_STACK_LINE(238)
				_this->height = y1;
				HX_STACK_LINE(238)
				_this;
			}
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(239)
				_this->x = x2;
				HX_STACK_LINE(239)
				_this->y = (int)0;
				HX_STACK_LINE(239)
				_this->width = (w - x2);
				HX_STACK_LINE(239)
				_this->height = y1;
				HX_STACK_LINE(239)
				_this;
			}
			HX_STACK_LINE(241)
			{
				HX_STACK_LINE(241)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(241)
				_this->x = (int)0;
				HX_STACK_LINE(241)
				_this->y = y1;
				HX_STACK_LINE(241)
				_this->width = x1;
				HX_STACK_LINE(241)
				_this->height = (y2 - y1);
				HX_STACK_LINE(241)
				_this;
			}
			HX_STACK_LINE(242)
			{
				HX_STACK_LINE(242)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(242)
				_this->x = x1;
				HX_STACK_LINE(242)
				_this->y = y1;
				HX_STACK_LINE(242)
				_this->width = (x2 - x1);
				HX_STACK_LINE(242)
				_this->height = (y2 - y1);
				HX_STACK_LINE(242)
				_this;
			}
			HX_STACK_LINE(243)
			{
				HX_STACK_LINE(243)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(243)
				_this->x = x2;
				HX_STACK_LINE(243)
				_this->y = y1;
				HX_STACK_LINE(243)
				_this->width = (w - x2);
				HX_STACK_LINE(243)
				_this->height = (y2 - y1);
				HX_STACK_LINE(243)
				_this;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(245)
				_this->x = (int)0;
				HX_STACK_LINE(245)
				_this->y = y2;
				HX_STACK_LINE(245)
				_this->width = x1;
				HX_STACK_LINE(245)
				_this->height = (h - y2);
				HX_STACK_LINE(245)
				_this;
			}
			HX_STACK_LINE(246)
			{
				HX_STACK_LINE(246)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(246)
				_this->x = x1;
				HX_STACK_LINE(246)
				_this->y = y2;
				HX_STACK_LINE(246)
				_this->width = (x2 - x1);
				HX_STACK_LINE(246)
				_this->height = (h - y2);
				HX_STACK_LINE(246)
				_this;
			}
			HX_STACK_LINE(247)
			{
				HX_STACK_LINE(247)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(247)
				_this->x = x2;
				HX_STACK_LINE(247)
				_this->y = y2;
				HX_STACK_LINE(247)
				_this->width = (w - x2);
				HX_STACK_LINE(247)
				_this->height = (h - y2);
				HX_STACK_LINE(247)
				_this;
			}
			HX_STACK_LINE(264)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintCompoundBitmap(g,assetID,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRects,rc,tile,smooth,raw);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintScale9,(void))

Void FlxUI9SliceSprite_obj::paintCompoundBitmap( ::openfl::_v2::display::BitmapData g,::String assetID,::haxe::ds::StringMap sourceRects,::flixel::util::FlxRect targetRect,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintCompoundBitmap",0xb0d9501d,"flixel.addons.ui.FlxUI9SliceSprite.paintCompoundBitmap","flixel/addons/ui/FlxUI9SliceSprite.hx",268,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetID,"assetID")
	HX_STACK_ARG(sourceRects,"sourceRects")
	HX_STACK_ARG(targetRect,"targetRect")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(269)
		int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
		HX_STACK_LINE(271)
		int _g = ::Std_obj::_int(targetRect->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(271)
		targetRect->x = _g;
		HX_STACK_LINE(272)
		int _g1 = ::Std_obj::_int(targetRect->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		targetRect->y = _g1;
		HX_STACK_LINE(273)
		int _g2 = ::Std_obj::_int(targetRect->width);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(273)
		targetRect->width = _g2;
		HX_STACK_LINE(274)
		int _g3 = ::Std_obj::_int(targetRect->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(274)
		targetRect->height = _g3;
		HX_STACK_LINE(277)
		::flixel::util::FlxRect tl = sourceRects->get(HX_CSTRING("top.left"));		HX_STACK_VAR(tl,"tl");
		HX_STACK_LINE(278)
		if (((tl != null()))){
			HX_STACK_LINE(279)
			{
				HX_STACK_LINE(279)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(279)
				_this->x = (int)0;
				HX_STACK_LINE(279)
				_this->y = (int)0;
				HX_STACK_LINE(279)
				_this->width = tl->width;
				HX_STACK_LINE(279)
				_this->height = tl->height;
				HX_STACK_LINE(279)
				_this;
			}
			HX_STACK_LINE(280)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(283)
		::flixel::util::FlxRect tr = sourceRects->get(HX_CSTRING("top.right"));		HX_STACK_VAR(tr,"tr");
		HX_STACK_LINE(284)
		if (((tr != null()))){
			HX_STACK_LINE(285)
			{
				HX_STACK_LINE(285)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(285)
				_this->x = (targetRect->width - tr->width);
				HX_STACK_LINE(285)
				_this->y = (int)0;
				HX_STACK_LINE(285)
				_this->width = tr->width;
				HX_STACK_LINE(285)
				_this->height = tr->height;
				HX_STACK_LINE(285)
				_this;
			}
			HX_STACK_LINE(286)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,tr,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(289)
		::flixel::util::FlxRect t = sourceRects->get(HX_CSTRING("top"));		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(290)
		if (((t != null()))){
			HX_STACK_LINE(291)
			{
				HX_STACK_LINE(291)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(291)
				_this->x = tl->width;
				HX_STACK_LINE(291)
				_this->y = (int)0;
				HX_STACK_LINE(291)
				_this->width = ((targetRect->width - tl->width) - tr->width);
				HX_STACK_LINE(291)
				_this->height = t->height;
				HX_STACK_LINE(291)
				_this;
			}
			HX_STACK_LINE(292)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,t,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)16)),smooth,raw);
		}
		HX_STACK_LINE(296)
		::flixel::util::FlxRect bl = sourceRects->get(HX_CSTRING("bottom.left"));		HX_STACK_VAR(bl,"bl");
		HX_STACK_LINE(297)
		if (((bl != null()))){
			HX_STACK_LINE(298)
			{
				HX_STACK_LINE(298)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(298)
				_this->x = (int)0;
				HX_STACK_LINE(298)
				_this->y = (targetRect->height - bl->height);
				HX_STACK_LINE(298)
				_this->width = bl->width;
				HX_STACK_LINE(298)
				_this->height = bl->height;
				HX_STACK_LINE(298)
				_this;
			}
			HX_STACK_LINE(299)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,bl,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(302)
		::flixel::util::FlxRect br = sourceRects->get(HX_CSTRING("bottom.right"));		HX_STACK_VAR(br,"br");
		HX_STACK_LINE(303)
		if (((br != null()))){
			HX_STACK_LINE(304)
			{
				HX_STACK_LINE(304)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(304)
				_this->x = (targetRect->width - br->width);
				HX_STACK_LINE(304)
				_this->y = (targetRect->height - br->height);
				HX_STACK_LINE(304)
				_this->width = br->width;
				HX_STACK_LINE(304)
				_this->height = br->height;
				HX_STACK_LINE(304)
				_this;
			}
			HX_STACK_LINE(305)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,br,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int)0,smooth,raw);
		}
		HX_STACK_LINE(308)
		::flixel::util::FlxRect b = sourceRects->get(HX_CSTRING("bottom"));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(309)
		if (((b != null()))){
			HX_STACK_LINE(310)
			{
				HX_STACK_LINE(310)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(310)
				_this->x = bl->width;
				HX_STACK_LINE(310)
				_this->y = (targetRect->height - b->height);
				HX_STACK_LINE(310)
				_this->width = ((targetRect->width - bl->width) - br->width);
				HX_STACK_LINE(310)
				_this->height = b->height;
				HX_STACK_LINE(310)
				_this;
			}
			HX_STACK_LINE(311)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,b,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)16)),smooth,raw);
		}
		HX_STACK_LINE(315)
		::flixel::util::FlxRect l = sourceRects->get(HX_CSTRING("left"));		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(316)
		if (((l != null()))){
			HX_STACK_LINE(317)
			{
				HX_STACK_LINE(317)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(317)
				_this->x = (int)0;
				HX_STACK_LINE(317)
				_this->y = tl->height;
				HX_STACK_LINE(317)
				_this->width = l->width;
				HX_STACK_LINE(317)
				_this->height = ((targetRect->height - tl->height) - bl->height);
				HX_STACK_LINE(317)
				_this;
			}
			HX_STACK_LINE(318)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,l,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)1)),smooth,raw);
		}
		HX_STACK_LINE(321)
		::flixel::util::FlxRect r = sourceRects->get(HX_CSTRING("right"));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(322)
		if (((r != null()))){
			HX_STACK_LINE(323)
			{
				HX_STACK_LINE(323)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(323)
				_this->x = (targetRect->width - r->width);
				HX_STACK_LINE(323)
				_this->y = tr->height;
				HX_STACK_LINE(323)
				_this->width = r->width;
				HX_STACK_LINE(323)
				_this->height = ((targetRect->height - tl->height) - bl->height);
				HX_STACK_LINE(323)
				_this;
			}
			HX_STACK_LINE(324)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,r,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),(int(tile) & int((int)1)),smooth,raw);
		}
		HX_STACK_LINE(327)
		::flixel::util::FlxRect m = sourceRects->get(HX_CSTRING("middle"));		HX_STACK_VAR(m,"m");
		HX_STACK_LINE(328)
		if (((m != null()))){
			HX_STACK_LINE(329)
			{
				HX_STACK_LINE(329)
				::flixel::util::FlxRect _this = ::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(329)
				_this->x = l->width;
				HX_STACK_LINE(329)
				_this->y = t->height;
				HX_STACK_LINE(329)
				_this->width = ((targetRect->width - l->width) - r->width);
				HX_STACK_LINE(329)
				_this->height = ((targetRect->height - t->height) - b->height);
				HX_STACK_LINE(329)
				_this;
			}
			HX_STACK_LINE(330)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::paintBitmapSection(g,assetID,m,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticFlxRect2,null(),tile,smooth,raw);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(FlxUI9SliceSprite_obj,paintCompoundBitmap,(void))

Void FlxUI9SliceSprite_obj::paintBitmapSection( ::openfl::_v2::display::BitmapData g,::String assetId,::flixel::util::FlxRect src,::flixel::util::FlxRect dst,::openfl::_v2::display::BitmapData srcData,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth,::openfl::_v2::display::BitmapData raw){
int tile = __o_tile.Default(0);
bool smooth = __o_smooth.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","paintBitmapSection",0xd9a180b3,"flixel.addons.ui.FlxUI9SliceSprite.paintBitmapSection","flixel/addons/ui/FlxUI9SliceSprite.hx",334,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(assetId,"assetId")
	HX_STACK_ARG(src,"src")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(srcData,"srcData")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth,"smooth")
	HX_STACK_ARG(raw,"raw")
{
		HX_STACK_LINE(335)
		if (((srcData == null()))){
			HX_STACK_LINE(336)
			if (((raw != null()))){
				HX_STACK_LINE(337)
				srcData = raw;
			}
			else{
				HX_STACK_LINE(339)
				::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(assetId,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(339)
				srcData = _g;
			}
		}
		HX_STACK_LINE(343)
		int _g1 = ::Std_obj::_int(src->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(343)
		src->x = _g1;
		HX_STACK_LINE(344)
		int _g2 = ::Std_obj::_int(src->y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(344)
		src->y = _g2;
		HX_STACK_LINE(345)
		int _g3 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(345)
		src->width = _g3;
		HX_STACK_LINE(346)
		int _g4 = ::Std_obj::_int(src->height);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(346)
		src->height = _g4;
		HX_STACK_LINE(348)
		int _g5 = ::Std_obj::_int(dst->x);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(348)
		dst->x = _g5;
		HX_STACK_LINE(349)
		int _g6 = ::Std_obj::_int(dst->y);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(349)
		dst->y = _g6;
		HX_STACK_LINE(350)
		int _g7 = ::Std_obj::_int(dst->width);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(350)
		dst->width = _g7;
		HX_STACK_LINE(351)
		int _g8 = ::Std_obj::_int(dst->height);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(351)
		dst->height = _g8;
		HX_STACK_LINE(353)
		::openfl::_v2::display::BitmapData section = null();		HX_STACK_VAR(section,"section");
		HX_STACK_LINE(354)
		::String cacheId = null();		HX_STACK_VAR(cacheId,"cacheId");
		HX_STACK_LINE(355)
		if (((bool((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) && bool((assetId != null()))))){
			HX_STACK_LINE(356)
			if (((::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache == null()))){
				HX_STACK_LINE(357)
				::haxe::ds::StringMap _g9 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(357)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache = _g9;
			}
			HX_STACK_LINE(359)
			cacheId = (((((((((assetId + HX_CSTRING("_")) + src->x) + HX_CSTRING("_")) + src->y) + HX_CSTRING("_")) + src->width) + HX_CSTRING("_")) + src->height) + HX_CSTRING("_"));
			HX_STACK_LINE(360)
			::openfl::_v2::display::BitmapData _g10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->get(cacheId);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(360)
			section = _g10;
		}
		HX_STACK_LINE(363)
		if (((section == null()))){
			HX_STACK_LINE(364)
			int fillcolor = (int)16777215;		HX_STACK_VAR(fillcolor,"fillcolor");
			HX_STACK_LINE(365)
			int _g11 = ::Std_obj::_int(src->width);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(365)
			int _g12 = ::Std_obj::_int(src->height);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(365)
			::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::display::BitmapData_obj::__new(_g11,_g12,true,fillcolor,null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(365)
			section = _g13;
			HX_STACK_LINE(367)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = src->x;
			HX_STACK_LINE(368)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = src->y;
			HX_STACK_LINE(369)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = src->width;
			HX_STACK_LINE(370)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = src->height;
			HX_STACK_LINE(372)
			section->copyPixels(srcData,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPointZero,null(),null(),null());
			HX_STACK_LINE(374)
			if (((bool((::flixel::addons::ui::FlxUI9SliceSprite_obj::useSectionCache == true)) && bool((cacheId != null()))))){
				HX_STACK_LINE(375)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::sectionCache->set(cacheId,section);
			}
			HX_STACK_LINE(377)
			(::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapsCreated)++;
		}
		HX_STACK_LINE(380)
		if (((bool((dst->width > (int)0)) && bool((dst->height > (int)0))))){
			HX_STACK_LINE(382)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->x = dst->x;
			HX_STACK_LINE(383)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->y = dst->y;
			HX_STACK_LINE(384)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->width = dst->width;
			HX_STACK_LINE(385)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2->height = dst->height;
			HX_STACK_LINE(387)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::bitmapFillRect(g,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect2,section,tile,smooth);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(FlxUI9SliceSprite_obj,paintBitmapSection,(void))

Void FlxUI9SliceSprite_obj::bitmapFillRect( ::openfl::_v2::display::BitmapData g,::openfl::_v2::geom::Rectangle dst,::openfl::_v2::display::BitmapData section,hx::Null< int >  __o_tile,hx::Null< bool >  __o_smooth_){
int tile = __o_tile.Default(0);
bool smooth_ = __o_smooth_.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI9SliceSprite","bitmapFillRect",0x90ef4851,"flixel.addons.ui.FlxUI9SliceSprite.bitmapFillRect","flixel/addons/ui/FlxUI9SliceSprite.hx",391,0x728ef6ec)
	HX_STACK_ARG(g,"g")
	HX_STACK_ARG(dst,"dst")
	HX_STACK_ARG(section,"section")
	HX_STACK_ARG(tile,"tile")
	HX_STACK_ARG(smooth_,"smooth_")
{
		HX_STACK_LINE(398)
		int _g = ::Std_obj::_int(dst->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(398)
		int _g1 = ::Std_obj::_int(dst->height);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(398)
		::openfl::_v2::display::BitmapData final_pixels = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g1,true,(int)0,null());		HX_STACK_VAR(final_pixels,"final_pixels");
		HX_STACK_LINE(400)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->identity();
		HX_STACK_LINE(403)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->x = (int)0;
		HX_STACK_LINE(404)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->y = (int)0;
		HX_STACK_LINE(405)
		int _g2 = section->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(405)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = _g2;
		HX_STACK_LINE(406)
		int _g3 = section->get_height();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(406)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = _g3;
		HX_STACK_LINE(408)
		if (((((int(tile) & int((int)16))) == (int)0))){
			HX_STACK_LINE(409)
			int _g4 = section->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(409)
			Float _g5 = (Float(dst->width) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(409)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale(_g5,1.0);
			HX_STACK_LINE(410)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = dst->width;
		}
		HX_STACK_LINE(412)
		if (((((int(tile) & int((int)1))) == (int)0))){
			HX_STACK_LINE(413)
			int _g6 = section->get_height();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(413)
			Float _g7 = (Float(dst->height) / Float(_g6));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(413)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix->scale(1.0,_g7);
			HX_STACK_LINE(414)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height = dst->height;
		}
		HX_STACK_LINE(422)
		int _g8 = section->get_width();		HX_STACK_VAR(_g8,"_g8");
		struct _Function_1_1{
			inline static bool Block( ::openfl::_v2::display::BitmapData &section,::openfl::_v2::geom::Rectangle &dst){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",422,0x728ef6ec)
				{
					HX_STACK_LINE(422)
					int _g9 = section->get_height();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(422)
					return (_g9 == dst->height);
				}
				return null();
			}
		};
		HX_STACK_LINE(422)
		if (((  (((_g8 == dst->width))) ? bool(_Function_1_1::Block(section,dst)) : bool(false) ))){
			HX_STACK_LINE(423)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
			HX_STACK_LINE(424)
			::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
			HX_STACK_LINE(425)
			::openfl::_v2::geom::Rectangle _g10 = section->get_rect();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(425)
			final_pixels->copyPixels(section,_g10,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
		}
		else{
			HX_STACK_LINE(427)
			if ((smooth_)){
				HX_STACK_LINE(428)
				final_pixels->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),true);
			}
			else{
				HX_STACK_LINE(430)
				final_pixels->draw(section,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticMatrix,null(),null(),null(),false);
			}
		}
		HX_STACK_LINE(435)
		if (((tile != (int)0))){
			HX_STACK_LINE(439)
			int th = (int(tile) & int((int)16));		HX_STACK_VAR(th,"th");
			HX_STACK_LINE(441)
			if (((((int(tile) & int((int)16))) == (int)16))){
				HX_STACK_LINE(443)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
				HX_STACK_LINE(444)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
				HX_STACK_LINE(446)
				while((true)){
					HX_STACK_LINE(446)
					if ((!(((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x < dst->width))))){
						HX_STACK_LINE(446)
						break;
					}
					HX_STACK_LINE(447)
					hx::AddEq(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width);
					HX_STACK_LINE(450)
					final_pixels->copyPixels(final_pixels,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
				}
			}
			HX_STACK_LINE(460)
			if (((((int(tile) & int((int)1))) == (int)1))){
				HX_STACK_LINE(462)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = (int)0;
				HX_STACK_LINE(463)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = (int)0;
				HX_STACK_LINE(466)
				int _g11 = final_pixels->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(466)
				::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->width = _g11;
				HX_STACK_LINE(468)
				while((true)){
					HX_STACK_LINE(468)
					if ((!(((::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y < dst->height))))){
						HX_STACK_LINE(468)
						break;
					}
					HX_STACK_LINE(469)
					hx::AddEq(::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect->height);
					HX_STACK_LINE(473)
					final_pixels->copyPixels(final_pixels,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticRect,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(482)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->x = dst->x;
		HX_STACK_LINE(483)
		::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint->y = dst->y;
		HX_STACK_LINE(486)
		::openfl::_v2::geom::Rectangle _g12 = final_pixels->get_rect();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(486)
		g->copyPixels(final_pixels,_g12,::flixel::addons::ui::FlxUI9SliceSprite_obj::_staticPoint,null(),null(),null());
		HX_STACK_LINE(489)
		::openfl::_v2::display::BitmapData _g13 = ::flixel::util::FlxDestroyUtil_obj::dispose(final_pixels);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(489)
		final_pixels = _g13;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxUI9SliceSprite_obj,bitmapFillRect,(void))


FlxUI9SliceSprite_obj::FlxUI9SliceSprite_obj()
{
}

void FlxUI9SliceSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI9SliceSprite);
	HX_MARK_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_MARK_MEMBER_NAME(_slice9,"_slice9");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_smooth,"_smooth");
	HX_MARK_MEMBER_NAME(_asset_id,"_asset_id");
	HX_MARK_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI9SliceSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_bmpCanvas,"_bmpCanvas");
	HX_VISIT_MEMBER_NAME(_slice9,"_slice9");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_smooth,"_smooth");
	HX_VISIT_MEMBER_NAME(_asset_id,"_asset_id");
	HX_VISIT_MEMBER_NAME(_raw_pixels,"_raw_pixels");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI9SliceSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { return _tile; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { return _canvas; }
		if (HX_FIELD_EQ(inName,"_slice9") ) { return _slice9; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { return _smooth; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { return _asset_id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { return _bmpCanvas; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { return _staticRect; }
		if (HX_FIELD_EQ(inName,"paintScale9") ) { return paintScale9_dyn(); }
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { return _raw_pixels; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { return sectionCache; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { return _staticPoint; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { return _staticRect2; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { return _staticRects; }
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { return _staticMatrix; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { return bitmapsCreated; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { return _staticFlxRect; }
		if (HX_FIELD_EQ(inName,"bitmapFillRect") ) { return bitmapFillRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { return useSectionCache; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { return _staticFlxRect2; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { return _staticPointZero; }
		if (HX_FIELD_EQ(inName,"set_resize_ratio") ) { return set_resize_ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"set_resize_point") ) { return set_resize_point_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRectFromString") ) { return getRectFromString_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"paintBitmapSection") ) { return paintBitmapSection_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"paintCompoundBitmap") ) { return paintCompoundBitmap_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getRectIntsFromString") ) { return getRectIntsFromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUI9SliceSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_canvas") ) { _canvas=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9") ) { _slice9=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_smooth") ) { _smooth=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_asset_id") ) { _asset_id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_bmpCanvas") ) { _bmpCanvas=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_staticRect") ) { _staticRect=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_raw_pixels") ) { _raw_pixels=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"sectionCache") ) { sectionCache=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticPoint") ) { _staticPoint=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticRect2") ) { _staticRect2=inValue.Cast< ::openfl::_v2::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticRects") ) { _staticRects=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { if (inCallProp) return set_resize_ratio(inValue);resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { if (inCallProp) return set_resize_point(inValue);resize_point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_staticMatrix") ) { _staticMatrix=inValue.Cast< ::openfl::_v2::geom::Matrix >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bitmapsCreated") ) { bitmapsCreated=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect") ) { _staticFlxRect=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"useSectionCache") ) { useSectionCache=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_staticFlxRect2") ) { _staticFlxRect2=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_staticPointZero") ) { _staticPointZero=inValue.Cast< ::openfl::_v2::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUI9SliceSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_bmpCanvas"));
	outFields->push(HX_CSTRING("_slice9"));
	outFields->push(HX_CSTRING("_tile"));
	outFields->push(HX_CSTRING("_smooth"));
	outFields->push(HX_CSTRING("_asset_id"));
	outFields->push(HX_CSTRING("_raw_pixels"));
	outFields->push(HX_CSTRING("resize_ratio"));
	outFields->push(HX_CSTRING("resize_point"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("bitmapsCreated"),
	HX_CSTRING("_canvas"),
	HX_CSTRING("useSectionCache"),
	HX_CSTRING("sectionCache"),
	HX_CSTRING("_staticPoint"),
	HX_CSTRING("_staticRect"),
	HX_CSTRING("_staticRect2"),
	HX_CSTRING("_staticPointZero"),
	HX_CSTRING("_staticMatrix"),
	HX_CSTRING("_staticFlxRect"),
	HX_CSTRING("_staticFlxRect2"),
	HX_CSTRING("TILE_NONE"),
	HX_CSTRING("TILE_BOTH"),
	HX_CSTRING("TILE_H"),
	HX_CSTRING("TILE_V"),
	HX_CSTRING("_staticRects"),
	HX_CSTRING("getRectFromString"),
	HX_CSTRING("getRectIntsFromString"),
	HX_CSTRING("paintScale9"),
	HX_CSTRING("paintCompoundBitmap"),
	HX_CSTRING("paintBitmapSection"),
	HX_CSTRING("bitmapFillRect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_bmpCanvas),HX_CSTRING("_bmpCanvas")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_slice9),HX_CSTRING("_slice9")},
	{hx::fsInt,(int)offsetof(FlxUI9SliceSprite_obj,_tile),HX_CSTRING("_tile")},
	{hx::fsBool,(int)offsetof(FlxUI9SliceSprite_obj,_smooth),HX_CSTRING("_smooth")},
	{hx::fsString,(int)offsetof(FlxUI9SliceSprite_obj,_asset_id),HX_CSTRING("_asset_id")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxUI9SliceSprite_obj,_raw_pixels),HX_CSTRING("_raw_pixels")},
	{hx::fsFloat,(int)offsetof(FlxUI9SliceSprite_obj,resize_ratio),HX_CSTRING("resize_ratio")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUI9SliceSprite_obj,resize_point),HX_CSTRING("resize_point")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_bmpCanvas"),
	HX_CSTRING("_slice9"),
	HX_CSTRING("_tile"),
	HX_CSTRING("_smooth"),
	HX_CSTRING("_asset_id"),
	HX_CSTRING("_raw_pixels"),
	HX_CSTRING("resize_ratio"),
	HX_CSTRING("set_resize_ratio"),
	HX_CSTRING("resize_point"),
	HX_CSTRING("set_resize_point"),
	HX_CSTRING("resize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_canvas,"_canvas");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_MARK_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::bitmapsCreated,"bitmapsCreated");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_canvas,"_canvas");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::useSectionCache,"useSectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::sectionCache,"sectionCache");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPoint,"_staticPoint");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect,"_staticRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRect2,"_staticRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticPointZero,"_staticPointZero");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticMatrix,"_staticMatrix");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect,"_staticFlxRect");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticFlxRect2,"_staticFlxRect2");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_NONE,"TILE_NONE");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_BOTH,"TILE_BOTH");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_H,"TILE_H");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::TILE_V,"TILE_V");
	HX_VISIT_MEMBER_NAME(FlxUI9SliceSprite_obj::_staticRects,"_staticRects");
};

#endif

Class FlxUI9SliceSprite_obj::__mClass;

void FlxUI9SliceSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUI9SliceSprite"), hx::TCanCast< FlxUI9SliceSprite_obj> ,sStaticFields,sMemberFields,
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

void FlxUI9SliceSprite_obj::__boot()
{
	bitmapsCreated= (int)0;
	useSectionCache= true;
	_staticPoint= ::openfl::_v2::geom::Point_obj::__new(null(),null());
	_staticRect= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticRect2= ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());
	_staticPointZero= ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);
	_staticMatrix= ::openfl::_v2::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",45,0x728ef6ec)
		{
			HX_STACK_LINE(45)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(45)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(45)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(45)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(45)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(45)
				_this->x = X;
				HX_STACK_LINE(45)
				_this->y = Y;
				HX_STACK_LINE(45)
				_this->width = Width;
				HX_STACK_LINE(45)
				_this->height = Height;
				HX_STACK_LINE(45)
				rect = _this;
			}
			HX_STACK_LINE(45)
			rect->_inPool = false;
			HX_STACK_LINE(45)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI9SliceSprite.hx",46,0x728ef6ec)
		{
			HX_STACK_LINE(46)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(46)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(46)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(46)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(46)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(46)
				_this->x = X;
				HX_STACK_LINE(46)
				_this->y = Y;
				HX_STACK_LINE(46)
				_this->width = Width;
				HX_STACK_LINE(46)
				_this->height = Height;
				HX_STACK_LINE(46)
				rect = _this;
			}
			HX_STACK_LINE(46)
			rect->_inPool = false;
			HX_STACK_LINE(46)
			return rect;
		}
		return null();
	}
};
	_staticFlxRect2= _Function_0_2::Block();
	TILE_NONE= (int)0;
	TILE_BOTH= (int)17;
	TILE_H= (int)16;
	TILE_V= (int)1;
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

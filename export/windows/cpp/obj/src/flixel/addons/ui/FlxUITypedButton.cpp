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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","new",0xdcfb6819,"flixel.addons.ui.FlxUITypedButton.new","flixel/addons/ui/FlxUITypedButton.hx",22,0x55608c36)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(OnClick,"OnClick")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(743)
	this->_centerLabelOffset = null();
	HX_STACK_LINE(735)
	this->_src_h = (int)0;
	HX_STACK_LINE(734)
	this->_src_w = (int)0;
	HX_STACK_LINE(732)
	this->_no_graphic = false;
	HX_STACK_LINE(61)
	this->skipButtonUpdate = false;
	HX_STACK_LINE(54)
	this->round_labels = true;
	HX_STACK_LINE(50)
	this->down_toggle_visible = true;
	HX_STACK_LINE(49)
	this->over_toggle_visible = true;
	HX_STACK_LINE(48)
	this->up_toggle_visible = true;
	HX_STACK_LINE(46)
	this->down_visible = true;
	HX_STACK_LINE(45)
	this->over_visible = true;
	HX_STACK_LINE(44)
	this->up_visible = true;
	HX_STACK_LINE(42)
	this->down_toggle_color = (int)0;
	HX_STACK_LINE(41)
	this->over_toggle_color = (int)0;
	HX_STACK_LINE(40)
	this->up_toggle_color = (int)0;
	HX_STACK_LINE(38)
	this->down_color = (int)0;
	HX_STACK_LINE(37)
	this->over_color = (int)0;
	HX_STACK_LINE(36)
	this->up_color = (int)0;
	HX_STACK_LINE(32)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(30)
	this->toggled = false;
	HX_STACK_LINE(29)
	this->has_toggle = false;
	HX_STACK_LINE(27)
	this->tile = (int)0;
	HX_STACK_LINE(26)
	this->resize_point = null();
	HX_STACK_LINE(25)
	this->resize_ratio = (int)-1;
	HX_STACK_LINE(87)
	super::__construct(X,Y,OnClick);
	HX_STACK_LINE(89)
	::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(89)
		point->_inPool = false;
		HX_STACK_LINE(89)
		_g = point;
	}
	HX_STACK_LINE(89)
	this->_centerLabelOffset = _g;
	HX_STACK_LINE(92)
	this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >()->set_x((int)0);
	HX_STACK_LINE(93)
	this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >()->set_y((int)0);
	HX_STACK_LINE(95)
	this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >()->set_x((int)0);
	HX_STACK_LINE(96)
	this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >()->set_y((int)1);
	HX_STACK_LINE(98)
	this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->set_x((int)0);
	HX_STACK_LINE(99)
	this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->set_y((int)0);
	HX_STACK_LINE(101)
	this->labelAlphas[(int)1] = (int)1;
	HX_STACK_LINE(102)
	this->labelAlphas[(int)2] = (int)1;
	HX_STACK_LINE(103)
	this->labelAlphas[(int)0] = (int)1;
}
;
	return null();
}

//FlxUITypedButton_obj::~FlxUITypedButton_obj() { }

Dynamic FlxUITypedButton_obj::__CreateEmpty() { return  new FlxUITypedButton_obj; }
hx::ObjectPtr< FlxUITypedButton_obj > FlxUITypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic OnClick)
{  hx::ObjectPtr< FlxUITypedButton_obj > result = new FlxUITypedButton_obj();
	result->__construct(__o_X,__o_Y,OnClick);
	return result;}

Dynamic FlxUITypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITypedButton_obj > result = new FlxUITypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxUITypedButton_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::ICursorPointable_obj)) return operator ::flixel::addons::ui::interfaces::ICursorPointable_obj *();
	return super::__ToInterface(inType);
}

bool FlxUITypedButton_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_skipButtonUpdate",0xb2aa475e,"flixel.addons.ui.FlxUITypedButton.set_skipButtonUpdate","flixel/addons/ui/FlxUITypedButton.hx",62,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(63)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(64)
	return this->skipButtonUpdate;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_skipButtonUpdate,return )

Dynamic FlxUITypedButton_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_params",0x0e7dcaea,"flixel.addons.ui.FlxUITypedButton.set_params","flixel/addons/ui/FlxUITypedButton.hx",68,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(69)
	this->params = p;
	HX_STACK_LINE(70)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,set_params,return )

Void FlxUITypedButton_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","destroy",0xe7669533,"flixel.addons.ui.FlxUITypedButton.destroy","flixel/addons/ui/FlxUITypedButton.hx",73,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->resize_point);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(74)
		this->resize_point = _g;
		HX_STACK_LINE(75)
		this->super::destroy();
	}
return null();
}


Void FlxUITypedButton_obj::setAllLabelOffsets( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setAllLabelOffsets",0x57424f92,"flixel.addons.ui.FlxUITypedButton.setAllLabelOffsets","flixel/addons/ui/FlxUITypedButton.hx",112,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(113)
		Float _g = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->set_x(X);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		Float _g1 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >()->set_x(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(113)
		this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >()->set_x(_g1);
		HX_STACK_LINE(114)
		Float _g2 = this->labelOffsets->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->set_y(Y);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(114)
		Float _g3 = this->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >()->set_y(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(114)
		this->labelOffsets->__get((int)1).StaticCast< ::flixel::util::FlxPoint >()->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setAllLabelOffsets,(void))

Void FlxUITypedButton_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","update",0x163ec7f0,"flixel.addons.ui.FlxUITypedButton.update","flixel/addons/ui/FlxUITypedButton.hx",117,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(118)
		this->super::update();
		HX_STACK_LINE(121)
		if (((this->label != null()))){
			HX_STACK_LINE(123)
			this->label->__Field(HX_CSTRING("set_x"),true)(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->x));
			HX_STACK_LINE(124)
			this->label->__Field(HX_CSTRING("set_y"),true)(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->y));
			HX_STACK_LINE(126)
			if ((this->round_labels)){
				HX_STACK_LINE(127)
				int _g = ::Std_obj::_int((this->label->__Field(HX_CSTRING("x"),true) + 0.5));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(127)
				this->label->__Field(HX_CSTRING("set_x"),true)(_g);
				HX_STACK_LINE(128)
				int _g1 = ::Std_obj::_int((this->label->__Field(HX_CSTRING("y"),true) + 0.5));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(128)
				this->label->__Field(HX_CSTRING("set_y"),true)(_g1);
			}
			HX_STACK_LINE(131)
			this->label->__FieldRef(HX_CSTRING("scrollFactor")) = this->scrollFactor;
		}
		HX_STACK_LINE(134)
		if (((this->animation != null()))){
			HX_STACK_LINE(136)
			if ((this->toggled)){
				HX_STACK_LINE(137)
				this->animation->set_frameIndex(((int)3 + this->status));
			}
			else{
				HX_STACK_LINE(139)
				this->animation->set_frameIndex(this->status);
			}
		}
	}
return null();
}


Void FlxUITypedButton_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","resize",0x97b49bdb,"flixel.addons.ui.FlxUITypedButton.resize","flixel/addons/ui/FlxUITypedButton.hx",144,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(145)
		Float old_width = this->get_width();		HX_STACK_VAR(old_width,"old_width");
		HX_STACK_LINE(146)
		Float old_height = this->get_height();		HX_STACK_VAR(old_height,"old_height");
		HX_STACK_LINE(148)
		Float old_offx = (int)0;		HX_STACK_VAR(old_offx,"old_offx");
		HX_STACK_LINE(149)
		Float old_offy = (int)0;		HX_STACK_VAR(old_offy,"old_offy");
		HX_STACK_LINE(150)
		if (((this->label != null()))){
			HX_STACK_LINE(151)
			this->autoCenterLabel();
		}
		HX_STACK_LINE(154)
		if (((W == (int)0))){
			HX_STACK_LINE(154)
			W = (int)80;
		}
		HX_STACK_LINE(155)
		if (((H == (int)0))){
			HX_STACK_LINE(155)
			H = (int)20;
		}
		HX_STACK_LINE(157)
		if (((this->_slice9_assets != null()))){
			HX_STACK_LINE(158)
			int _g = ::Std_obj::_int(W);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			int _g1 = ::Std_obj::_int(H);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(158)
			this->loadGraphicSlice9(this->_slice9_assets,_g,_g1,this->_slice9_arrays,this->tile,this->resize_ratio,this->has_toggle,this->_src_w,this->_src_h,this->_frame_indeces);
		}
		else{
			HX_STACK_LINE(160)
			if ((this->_no_graphic)){
				HX_STACK_LINE(161)
				::openfl::_v2::display::BitmapData upB;		HX_STACK_VAR(upB,"upB");
				HX_STACK_LINE(162)
				if ((!(this->has_toggle))){
					HX_STACK_LINE(163)
					int _g2 = ::Std_obj::_int(W);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(163)
					int _g3 = ::Std_obj::_int((H * (int)3));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(163)
					::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(163)
					upB = _g4;
				}
				else{
					HX_STACK_LINE(165)
					int _g5 = ::Std_obj::_int(W);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(165)
					int _g6 = ::Std_obj::_int((H * (int)6));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(165)
					::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::display::BitmapData_obj::__new(_g5,_g6,true,(int)0,null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(165)
					upB = _g7;
				}
				HX_STACK_LINE(167)
				this->loadGraphicsUpOverDown(upB,null(),null());
			}
			else{
				HX_STACK_LINE(170)
				int _g8 = ::Std_obj::_int(W);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(170)
				int _g9 = ::Std_obj::_int(H);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(170)
				this->loadGraphicSlice9(null(),_g8,_g9,null(),this->tile,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(174)
		this->autoCenterLabel();
		HX_STACK_LINE(176)
		Float _g10 = this->get_width();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(176)
		Float diff_w = (_g10 - old_width);		HX_STACK_VAR(diff_w,"diff_w");
		HX_STACK_LINE(177)
		Float _g11 = this->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(177)
		Float diff_h = (_g11 - old_height);		HX_STACK_VAR(diff_h,"diff_h");
		HX_STACK_LINE(179)
		if (((this->resize_point != null()))){
			HX_STACK_LINE(180)
			Float delta_x = (diff_w * this->resize_point->x);		HX_STACK_VAR(delta_x,"delta_x");
			HX_STACK_LINE(181)
			Float delta_y = (diff_h * this->resize_point->y);		HX_STACK_VAR(delta_y,"delta_y");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(182)
				_g->set_x((_g->x - delta_x));
			}
			HX_STACK_LINE(183)
			{
				HX_STACK_LINE(183)
				::flixel::addons::ui::FlxUITypedButton _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				_g->set_y((_g->y - delta_y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,resize,(void))

Void FlxUITypedButton_obj::loadGraphicsMultiple( Array< ::String > assets,::String __o_Key){
::String Key = __o_Key.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsMultiple",0x389aa468,"flixel.addons.ui.FlxUITypedButton.loadGraphicsMultiple","flixel/addons/ui/FlxUITypedButton.hx",193,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(Key,"Key")
{
		HX_STACK_LINE(194)
		::String key = HX_CSTRING("");		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(196)
		if (((assets->length <= (int)3))){
			HX_STACK_LINE(197)
			while((true)){
				HX_STACK_LINE(197)
				if ((!(((assets->length < (int)3))))){
					HX_STACK_LINE(197)
					break;
				}
				HX_STACK_LINE(197)
				assets->push(null());
			}
			HX_STACK_LINE(198)
			if (((assets->__get((int)1) == null()))){
				HX_STACK_LINE(198)
				assets[(int)1] = assets->__get((int)0);
			}
			HX_STACK_LINE(199)
			if (((assets->__get((int)2) == null()))){
				HX_STACK_LINE(199)
				assets[(int)2] = assets->__get((int)1);
			}
			HX_STACK_LINE(200)
			::String _g = assets->join(HX_CSTRING(","));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(200)
			key = _g;
			HX_STACK_LINE(201)
			::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)0),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(201)
			::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)1),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(201)
			::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)2),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(201)
			::openfl::_v2::display::BitmapData pixels = this->assembleButtonFrames(_g1,_g2,_g3);		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(202)
			if (((Key != HX_CSTRING("")))){
				HX_STACK_LINE(204)
				key = Key;
			}
			HX_STACK_LINE(206)
			this->loadGraphicsUpOverDown(pixels,false,key);
		}
		else{
			HX_STACK_LINE(207)
			if (((assets->length <= (int)6))){
				HX_STACK_LINE(208)
				while((true)){
					HX_STACK_LINE(208)
					if ((!(((assets->length < (int)6))))){
						HX_STACK_LINE(208)
						break;
					}
					HX_STACK_LINE(208)
					assets->push(null());
				}
				HX_STACK_LINE(209)
				if (((assets->__get((int)4) == null()))){
					HX_STACK_LINE(209)
					assets[(int)4] = assets->__get((int)3);
				}
				HX_STACK_LINE(210)
				if (((assets->__get((int)5) == null()))){
					HX_STACK_LINE(210)
					assets[(int)5] = assets->__get((int)4);
				}
				HX_STACK_LINE(211)
				::String _g4 = assets->join(HX_CSTRING(","));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(211)
				key = _g4;
				HX_STACK_LINE(212)
				if (((Key != HX_CSTRING("")))){
					HX_STACK_LINE(214)
					key = Key;
				}
				HX_STACK_LINE(216)
				::openfl::_v2::display::BitmapData _g5 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)0),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(216)
				::openfl::_v2::display::BitmapData _g6 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)1),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(216)
				::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)2),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(216)
				::openfl::_v2::display::BitmapData pixels_normal = this->assembleButtonFrames(_g5,_g6,_g7);		HX_STACK_VAR(pixels_normal,"pixels_normal");
				HX_STACK_LINE(217)
				::openfl::_v2::display::BitmapData _g8 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)3),null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(217)
				::openfl::_v2::display::BitmapData _g9 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)4),null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(217)
				::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)5),null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(217)
				::openfl::_v2::display::BitmapData pixels_toggle = this->assembleButtonFrames(_g8,_g9,_g10);		HX_STACK_VAR(pixels_toggle,"pixels_toggle");
				HX_STACK_LINE(218)
				::openfl::_v2::display::BitmapData pixels = this->combineToggleBitmaps(pixels_normal,pixels_toggle);		HX_STACK_VAR(pixels,"pixels");
				HX_STACK_LINE(219)
				this->loadGraphicsUpOverDown(pixels,false,key);
				HX_STACK_LINE(220)
				pixels_normal->dispose();
				HX_STACK_LINE(221)
				pixels_toggle->dispose();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,loadGraphicsMultiple,(void))

Void FlxUITypedButton_obj::loadGraphicsUpOverDown( Dynamic asset,hx::Null< bool >  __o_for_toggle,::String key){
bool for_toggle = __o_for_toggle.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicsUpOverDown",0xbee26da9,"flixel.addons.ui.FlxUITypedButton.loadGraphicsUpOverDown","flixel/addons/ui/FlxUITypedButton.hx",232,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(key,"key")
{
		HX_STACK_LINE(233)
		this->_slice9_assets = null();
		HX_STACK_LINE(234)
		this->_slice9_arrays = null();
		HX_STACK_LINE(235)
		this->resize_ratio = (int)-1;
		HX_STACK_LINE(237)
		if ((for_toggle)){
			HX_STACK_LINE(238)
			this->has_toggle = true;
		}
		HX_STACK_LINE(241)
		::openfl::_v2::display::BitmapData upB = null();		HX_STACK_VAR(upB,"upB");
		HX_STACK_LINE(242)
		::openfl::_v2::display::BitmapData overB = null();		HX_STACK_VAR(overB,"overB");
		HX_STACK_LINE(243)
		::openfl::_v2::display::BitmapData downB = null();		HX_STACK_VAR(downB,"downB");
		HX_STACK_LINE(245)
		::openfl::_v2::display::BitmapData bd = null();		HX_STACK_VAR(bd,"bd");
		HX_STACK_LINE(247)
		if ((::Std_obj::is(asset,hx::ClassOf< ::openfl::_v2::display::BitmapData >()))){
			HX_STACK_LINE(248)
			bd = asset;
		}
		else{
			HX_STACK_LINE(249)
			if ((::Std_obj::is(asset,hx::ClassOf< ::String >()))){
				HX_STACK_LINE(250)
				::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(asset,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(250)
				bd = _g;
			}
		}
		HX_STACK_LINE(253)
		::openfl::_v2::display::BitmapData _g1 = this->grabButtonFrame(bd,(int)0,this->has_toggle,null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		upB = _g1;
		HX_STACK_LINE(254)
		::openfl::_v2::display::BitmapData _g2 = this->grabButtonFrame(bd,(int)1,this->has_toggle,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(254)
		overB = _g2;
		HX_STACK_LINE(255)
		::openfl::_v2::display::BitmapData _g3 = this->grabButtonFrame(bd,(int)2,this->has_toggle,null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(255)
		downB = _g3;
		HX_STACK_LINE(257)
		::openfl::_v2::display::BitmapData normalPixels = this->assembleButtonFrames(upB,overB,downB);		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(259)
		if ((this->has_toggle)){
			HX_STACK_LINE(260)
			::openfl::_v2::display::BitmapData _g4 = this->grabButtonFrame(bd,(int)3,true,null(),null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(260)
			upB = _g4;
			HX_STACK_LINE(261)
			::openfl::_v2::display::BitmapData _g5 = this->grabButtonFrame(bd,(int)4,true,null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(261)
			overB = _g5;
			HX_STACK_LINE(262)
			::openfl::_v2::display::BitmapData _g6 = this->grabButtonFrame(bd,(int)5,true,null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(262)
			downB = _g6;
			HX_STACK_LINE(264)
			::openfl::_v2::display::BitmapData togglePixels = this->assembleButtonFrames(upB,overB,downB);		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(265)
			::openfl::_v2::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(267)
			::openfl::_v2::display::BitmapData _g7 = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(267)
			normalPixels = _g7;
			HX_STACK_LINE(268)
			::openfl::_v2::display::BitmapData _g8 = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(268)
			togglePixels = _g8;
			HX_STACK_LINE(270)
			int _g9 = upB->get_width();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(270)
			int _g10 = upB->get_height();		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(270)
			this->loadGraphic(combinedPixels,true,_g9,_g10,false,key);
		}
		else{
			HX_STACK_LINE(272)
			int _g11 = upB->get_width();		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(272)
			int _g12 = upB->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(272)
			this->loadGraphic(normalPixels,true,_g11,_g12,false,key);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,loadGraphicsUpOverDown,(void))

Void FlxUITypedButton_obj::loadGraphicSlice9( Array< ::String > assets,hx::Null< int >  __o_W,hx::Null< int >  __o_H,Array< ::Dynamic > slice9,hx::Null< int >  __o_Tile,hx::Null< Float >  __o_Resize_Ratio,hx::Null< bool >  __o_isToggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h,Array< int > frame_indeces){
int W = __o_W.Default(80);
int H = __o_H.Default(20);
int Tile = __o_Tile.Default(0);
Float Resize_Ratio = __o_Resize_Ratio.Default(-1);
bool isToggle = __o_isToggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","loadGraphicSlice9",0xb9685fe2,"flixel.addons.ui.FlxUITypedButton.loadGraphicSlice9","flixel/addons/ui/FlxUITypedButton.hx",293,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assets,"assets")
	HX_STACK_ARG(W,"W")
	HX_STACK_ARG(H,"H")
	HX_STACK_ARG(slice9,"slice9")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(Resize_Ratio,"Resize_Ratio")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
	HX_STACK_ARG(frame_indeces,"frame_indeces")
{
		HX_STACK_LINE(295)
		if (((src_w != (int)0))){
			HX_STACK_LINE(296)
			this->_src_w = src_w;
		}
		HX_STACK_LINE(298)
		if (((src_h != (int)0))){
			HX_STACK_LINE(299)
			this->_src_h = src_h;
		}
		HX_STACK_LINE(302)
		this->tile = Tile;
		HX_STACK_LINE(304)
		this->has_toggle = isToggle;
		HX_STACK_LINE(306)
		this->resize_ratio = Resize_Ratio;
		HX_STACK_LINE(308)
		this->_slice9_assets = assets;
		HX_STACK_LINE(309)
		this->_slice9_arrays = slice9;
		HX_STACK_LINE(311)
		::String key = null();		HX_STACK_VAR(key,"key");
		HX_STACK_LINE(313)
		Array< ::Dynamic > arr_bmpData = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_bmpData,"arr_bmpData");
		HX_STACK_LINE(314)
		Array< ::Dynamic > arr_flx9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(arr_flx9,"arr_flx9");
		HX_STACK_LINE(317)
		if (((frame_indeces == null()))){
			HX_STACK_LINE(319)
			if ((this->has_toggle)){
				HX_STACK_LINE(319)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5);
			}
			else{
				HX_STACK_LINE(320)
				frame_indeces = Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2);
			}
		}
		else{
			HX_STACK_LINE(322)
			int max_index = (int)2;		HX_STACK_VAR(max_index,"max_index");
			HX_STACK_LINE(323)
			if ((this->has_toggle)){
				HX_STACK_LINE(323)
				max_index = (int)5;
			}
			HX_STACK_LINE(328)
			while((true)){
				HX_STACK_LINE(328)
				if ((!(((frame_indeces->length < (max_index + (int)1)))))){
					HX_STACK_LINE(328)
					break;
				}
				HX_STACK_LINE(329)
				frame_indeces->push((frame_indeces->length - (int)1));
			}
			HX_STACK_LINE(333)
			{
				HX_STACK_LINE(333)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(333)
				int _g = frame_indeces->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(333)
				while((true)){
					HX_STACK_LINE(333)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(333)
						break;
					}
					HX_STACK_LINE(333)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(334)
					if (((frame_indeces->__get(i) > (int)5))){
						HX_STACK_LINE(335)
						frame_indeces[i] = (int)5;
					}
					else{
						HX_STACK_LINE(336)
						if (((frame_indeces->__get(i) < (int)0))){
							HX_STACK_LINE(337)
							frame_indeces[i] = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(342)
		this->_frame_indeces = frame_indeces;
		HX_STACK_LINE(344)
		if (((W == (int)0))){
			HX_STACK_LINE(345)
			W = (int)80;
		}
		HX_STACK_LINE(347)
		if (((H == (int)0))){
			HX_STACK_LINE(348)
			H = (int)20;
		}
		HX_STACK_LINE(351)
		if (((assets == null()))){
			HX_STACK_LINE(352)
			::openfl::_v2::display::BitmapData temp;		HX_STACK_VAR(temp,"temp");
			HX_STACK_LINE(355)
			if ((!(isToggle))){
				HX_STACK_LINE(356)
				assets = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button.png"));
				HX_STACK_LINE(357)
				Array< int > _g = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(357)
				Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new().Add(_g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(357)
				slice9 = _g1;
				HX_STACK_LINE(358)
				::openfl::_v2::display::BitmapData _g2 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)0),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(358)
				temp = _g2;
				HX_STACK_LINE(359)
				int _g3 = temp->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(359)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(359)
				this->_src_w = _g4;
				HX_STACK_LINE(360)
				int _g5 = temp->get_height();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(360)
				Float _g6 = (Float(_g5) / Float((int)3));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(360)
				int _g7 = ::Std_obj::_int(_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(360)
				this->_src_h = _g7;
			}
			else{
				HX_STACK_LINE(362)
				assets = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/button_toggle.png"));
				HX_STACK_LINE(363)
				Array< int > _g8 = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(363)
				Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new().Add(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(363)
				slice9 = _g9;
				HX_STACK_LINE(364)
				::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)0),null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(364)
				temp = _g10;
				HX_STACK_LINE(365)
				int _g11 = temp->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(365)
				int _g12 = ::Std_obj::_int(_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(365)
				this->_src_w = _g12;
				HX_STACK_LINE(366)
				int _g13 = temp->get_height();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(366)
				Float _g14 = (Float(_g13) / Float((int)6));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(366)
				int _g15 = ::Std_obj::_int(_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(366)
				this->_src_h = _g15;
			}
			HX_STACK_LINE(369)
			temp = null();
		}
		HX_STACK_LINE(372)
		if (((bool(!(this->has_toggle)) && bool((assets->length <= (int)3))))){
			HX_STACK_LINE(374)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(375)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
		}
		else{
			HX_STACK_LINE(378)
			this->has_toggle = true;
			HX_STACK_LINE(379)
			arr_bmpData = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
			HX_STACK_LINE(380)
			arr_flx9 = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
		}
		HX_STACK_LINE(383)
		this->_flashRect2->width = W;
		HX_STACK_LINE(384)
		this->_flashRect2->height = H;
		HX_STACK_LINE(386)
		if (((assets->length == (int)1))){
			HX_STACK_LINE(387)
			::openfl::_v2::display::BitmapData all = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get((int)0),null());		HX_STACK_VAR(all,"all");
			HX_STACK_LINE(389)
			if (((bool((this->_src_w == (int)0)) || bool((this->_src_h == (int)0))))){
				HX_STACK_LINE(390)
				HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("Ambiguous situation! If you only provide one asset, you MUST provide src_w and src_h. Otherwise I can't tell if it's a stacked set of frames or a single frame."),null()));
			}
			else{
				HX_STACK_LINE(393)
				int _g16 = all->get_height();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(393)
				if (((_g16 > this->_src_h))){
					HX_STACK_LINE(394)
					{
						HX_STACK_LINE(394)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(394)
						int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(394)
						while((true)){
							HX_STACK_LINE(394)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(394)
								break;
							}
							HX_STACK_LINE(394)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(395)
							arr_bmpData[i] = this->grabButtonFrame(all,i,this->has_toggle,this->_src_w,this->_src_h);
						}
					}
					HX_STACK_LINE(398)
					if (((bool((slice9 != null())) && bool((slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new()))))){
						HX_STACK_LINE(401)
						{
							HX_STACK_LINE(401)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(401)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(401)
							while((true)){
								HX_STACK_LINE(401)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(401)
									break;
								}
								HX_STACK_LINE(401)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(402)
								arr_flx9[i] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,arr_bmpData->__get(i).StaticCast< ::openfl::_v2::display::BitmapData >(),this->_flashRect2,slice9->__get((int)0).StaticCast< Array< int > >(),this->tile,false,((assets->__get((int)0) + HX_CSTRING(":")) + i),this->resize_ratio,null());
								HX_STACK_LINE(403)
								arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->set_resize_point(this->resize_point);
							}
						}
						HX_STACK_LINE(407)
						{
							HX_STACK_LINE(407)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(407)
							int _g = arr_bmpData->length;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(407)
							while((true)){
								HX_STACK_LINE(407)
								if ((!(((_g1 < _g))))){
									HX_STACK_LINE(407)
									break;
								}
								HX_STACK_LINE(407)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(408)
								arr_bmpData[i] = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
							}
						}
						HX_STACK_LINE(412)
						int _g17 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g17,"_g17");
						HX_STACK_LINE(412)
						W = _g17;
						HX_STACK_LINE(413)
						int _g18 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(413)
						H = _g18;
					}
				}
				else{
					HX_STACK_LINE(416)
					arr_bmpData[(int)0] = all;
				}
			}
		}
		else{
			HX_STACK_LINE(422)
			if ((!(this->has_toggle))){
				HX_STACK_LINE(423)
				while((true)){
					HX_STACK_LINE(423)
					if ((!(((assets->length < (int)3))))){
						HX_STACK_LINE(423)
						break;
					}
					HX_STACK_LINE(424)
					assets->push(HX_CSTRING(""));
				}
			}
			else{
				HX_STACK_LINE(427)
				while((true)){
					HX_STACK_LINE(427)
					if ((!(((assets->length < (int)6))))){
						HX_STACK_LINE(427)
						break;
					}
					HX_STACK_LINE(428)
					assets->push(HX_CSTRING(""));
				}
			}
			HX_STACK_LINE(432)
			if (((assets->__get((int)0) != HX_CSTRING("")))){
				HX_STACK_LINE(433)
				if (((bool((slice9 != null())) && bool((slice9->__get((int)0).StaticCast< Array< int > >() != Array_obj< int >::__new()))))){
					HX_STACK_LINE(436)
					while((true)){
						HX_STACK_LINE(436)
						if ((!(((slice9->length < assets->length))))){
							HX_STACK_LINE(436)
							break;
						}
						HX_STACK_LINE(437)
						slice9->push(null());
					}
					HX_STACK_LINE(440)
					arr_flx9[(int)0] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,assets->__get((int)0),this->_flashRect2,slice9->__get((int)0).StaticCast< Array< int > >(),this->tile,false,HX_CSTRING(""),this->resize_ratio,null());
					HX_STACK_LINE(441)
					arr_bmpData[(int)0] = arr_flx9->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
					HX_STACK_LINE(443)
					{
						HX_STACK_LINE(443)
						int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(443)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(443)
						while((true)){
							HX_STACK_LINE(443)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(443)
								break;
							}
							HX_STACK_LINE(443)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(444)
							if (((assets->__get(i) != HX_CSTRING("")))){
								HX_STACK_LINE(445)
								arr_flx9[i] = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,assets->__get(i),this->_flashRect2,slice9->__get(i).StaticCast< Array< int > >(),this->tile,false,HX_CSTRING(""),this->resize_ratio,null());
								HX_STACK_LINE(446)
								arr_bmpData[i] = arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->get_pixels();
							}
						}
					}
					HX_STACK_LINE(451)
					int _g19 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(451)
					W = _g19;
					HX_STACK_LINE(452)
					int _g20 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(452)
					H = _g20;
				}
				else{
					HX_STACK_LINE(456)
					key = HX_CSTRING("");
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(457)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(457)
						int _g = assets->length;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(457)
						while((true)){
							HX_STACK_LINE(457)
							if ((!(((_g1 < _g))))){
								HX_STACK_LINE(457)
								break;
							}
							HX_STACK_LINE(457)
							int i = (_g1)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(458)
							arr_bmpData[i] = ::openfl::_v2::Assets_obj::getBitmapData(assets->__get(i),null());
							HX_STACK_LINE(459)
							hx::AddEq(key,assets->__get(i));
							HX_STACK_LINE(460)
							if (((i < (assets->length - (int)1)))){
								HX_STACK_LINE(461)
								hx::AddEq(key,HX_CSTRING(","));
							}
						}
					}
					HX_STACK_LINE(464)
					int _g21 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_width();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(464)
					W = _g21;
					HX_STACK_LINE(465)
					int _g22 = arr_bmpData->__get((int)0).StaticCast< ::openfl::_v2::display::BitmapData >()->get_height();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(465)
					H = _g22;
				}
			}
			else{
				HX_STACK_LINE(468)
				if (((W == (int)0))){
					HX_STACK_LINE(468)
					W = (int)80;
				}
				HX_STACK_LINE(469)
				if (((H == (int)0))){
					HX_STACK_LINE(469)
					H = (int)20;
				}
				HX_STACK_LINE(470)
				arr_bmpData[(int)0] = ::openfl::_v2::display::BitmapData_obj::__new(W,(H * (int)3),true,(int)0,null());
				HX_STACK_LINE(471)
				key = (((HX_CSTRING("Blank_") + W) + HX_CSTRING("x")) + (H * (int)3));
				HX_STACK_LINE(472)
				this->_no_graphic = true;
			}
		}
		HX_STACK_LINE(476)
		::openfl::_v2::display::BitmapData normalPixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get((int)0)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)1)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)2)).StaticCast< ::openfl::_v2::display::BitmapData >());		HX_STACK_VAR(normalPixels,"normalPixels");
		HX_STACK_LINE(480)
		if ((!(this->has_toggle))){
			HX_STACK_LINE(481)
			this->loadGraphic(normalPixels,true,W,H,false,key);
		}
		else{
			HX_STACK_LINE(483)
			::openfl::_v2::display::BitmapData togglePixels = this->assembleButtonFrames(arr_bmpData->__get(frame_indeces->__get((int)3)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)4)).StaticCast< ::openfl::_v2::display::BitmapData >(),arr_bmpData->__get(frame_indeces->__get((int)5)).StaticCast< ::openfl::_v2::display::BitmapData >());		HX_STACK_VAR(togglePixels,"togglePixels");
			HX_STACK_LINE(487)
			::openfl::_v2::display::BitmapData combinedPixels = this->combineToggleBitmaps(normalPixels,togglePixels);		HX_STACK_VAR(combinedPixels,"combinedPixels");
			HX_STACK_LINE(490)
			::openfl::_v2::display::BitmapData _g23 = ::flixel::util::FlxDestroyUtil_obj::dispose(normalPixels);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(490)
			normalPixels = _g23;
			HX_STACK_LINE(491)
			::openfl::_v2::display::BitmapData _g24 = ::flixel::util::FlxDestroyUtil_obj::dispose(togglePixels);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(491)
			togglePixels = _g24;
			HX_STACK_LINE(493)
			this->loadGraphic(combinedPixels,true,W,H,null(),null());
		}
		HX_STACK_LINE(497)
		{
			HX_STACK_LINE(497)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(497)
			int _g = arr_flx9->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(497)
			while((true)){
				HX_STACK_LINE(497)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(497)
					break;
				}
				HX_STACK_LINE(497)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(498)
				if (((arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >() != null()))){
					HX_STACK_LINE(499)
					arr_flx9->__get(i).StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >()->destroy();
					HX_STACK_LINE(500)
					arr_flx9[i] = null();
				}
			}
		}
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			if ((!(((arr_flx9->length > (int)0))))){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			arr_flx9->pop().StaticCast< ::flixel::addons::ui::FlxUI9SliceSprite >();
		}
		HX_STACK_LINE(503)
		arr_flx9 = null();
		HX_STACK_LINE(504)
		while((true)){
			HX_STACK_LINE(504)
			if ((!(((arr_bmpData->length > (int)0))))){
				HX_STACK_LINE(504)
				break;
			}
			HX_STACK_LINE(504)
			arr_bmpData->pop().StaticCast< ::openfl::_v2::display::BitmapData >();
		}
		HX_STACK_LINE(504)
		arr_bmpData = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC10(FlxUITypedButton_obj,loadGraphicSlice9,(void))

Void FlxUITypedButton_obj::autoCenterLabel( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","autoCenterLabel",0x5cc27de9,"flixel.addons.ui.FlxUITypedButton.autoCenterLabel","flixel/addons/ui/FlxUITypedButton.hx",512,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(512)
		if (((this->label != null()))){
			HX_STACK_LINE(513)
			Float offX = (int)0;		HX_STACK_VAR(offX,"offX");
			HX_STACK_LINE(514)
			Float offY = (int)0;		HX_STACK_VAR(offY,"offY");
			HX_STACK_LINE(516)
			Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(516)
			Float _g1 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(516)
			Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(516)
			offX = _g2;
			HX_STACK_LINE(518)
			if ((::Std_obj::is(this->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
				HX_STACK_LINE(519)
				::flixel::addons::ui::FlxUIText tlabel = this->label;		HX_STACK_VAR(tlabel,"tlabel");
				HX_STACK_LINE(520)
				Float _g3 = this->get_width();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(520)
				Float _g4 = tlabel->get_fieldWidth();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(520)
				Float _g5 = (_g3 - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(520)
				Float _g6 = (Float(_g5) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(520)
				offX = _g6;
				HX_STACK_LINE(521)
				Float _g7 = this->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(521)
				Float _g8 = tlabel->get_height();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(521)
				Float _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(521)
				Float _g10 = (Float(_g9) / Float((int)2));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(521)
				offY = _g10;
			}
			else{
				HX_STACK_LINE(523)
				Float _g11 = this->get_width();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(523)
				Float _g12 = this->label->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(523)
				Float _g13 = (_g11 - _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(523)
				Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(523)
				offX = _g14;
				HX_STACK_LINE(524)
				Float _g15 = this->get_height();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(524)
				Float _g16 = this->label->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(524)
				Float _g17 = (_g15 - _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(524)
				Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(524)
				offY = _g18;
			}
			HX_STACK_LINE(527)
			this->_centerLabelOffset->set_x(offX);
			HX_STACK_LINE(528)
			this->_centerLabelOffset->set_y(offY);
			HX_STACK_LINE(530)
			if ((::Std_obj::is(this->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
				HX_STACK_LINE(531)
				::flixel::addons::ui::FlxUIText t = this->label;		HX_STACK_VAR(t,"t");
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITypedButton_obj,autoCenterLabel,(void))

Void FlxUITypedButton_obj::setCenterLabelOffset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","setCenterLabelOffset",0x7858e6f7,"flixel.addons.ui.FlxUITypedButton.setCenterLabelOffset","flixel/addons/ui/FlxUITypedButton.hx",536,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(537)
		this->_centerLabelOffset->set_x(X);
		HX_STACK_LINE(538)
		this->_centerLabelOffset->set_y(Y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,setCenterLabelOffset,(void))

Void FlxUITypedButton_obj::forceStateHandler( ::String event){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","forceStateHandler",0xa487b1bd,"flixel.addons.ui.FlxUITypedButton.forceStateHandler","flixel/addons/ui/FlxUITypedButton.hx",542,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(542)
		::String _switch_1 = (event);
		if (  ( _switch_1==HX_CSTRING("out_button"))){
			HX_STACK_LINE(543)
			this->onOutHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("over_button"))){
			HX_STACK_LINE(544)
			this->onOverHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("down_button"))){
			HX_STACK_LINE(545)
			this->onDownHandler();
		}
		else if (  ( _switch_1==HX_CSTRING("click_button"))){
			HX_STACK_LINE(546)
			this->onUpHandler();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITypedButton_obj,forceStateHandler,(void))

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::grabButtonFrame( ::openfl::_v2::display::BitmapData all_frames,int button_state,hx::Null< bool >  __o_for_toggle,hx::Null< int >  __o_src_w,hx::Null< int >  __o_src_h){
bool for_toggle = __o_for_toggle.Default(false);
int src_w = __o_src_w.Default(0);
int src_h = __o_src_h.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","grabButtonFrame",0x214d85a8,"flixel.addons.ui.FlxUITypedButton.grabButtonFrame","flixel/addons/ui/FlxUITypedButton.hx",566,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(all_frames,"all_frames")
	HX_STACK_ARG(button_state,"button_state")
	HX_STACK_ARG(for_toggle,"for_toggle")
	HX_STACK_ARG(src_w,"src_w")
	HX_STACK_ARG(src_h,"src_h")
{
		HX_STACK_LINE(567)
		int h = src_h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(568)
		if (((h == (int)0))){
			HX_STACK_LINE(569)
			if ((!(for_toggle))){
				HX_STACK_LINE(570)
				int _g = all_frames->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(570)
				Float _g1 = (Float(_g) / Float((int)3));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(570)
				int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(570)
				h = _g2;
			}
			else{
				HX_STACK_LINE(572)
				int _g3 = all_frames->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(572)
				Float _g4 = (Float(_g3) / Float((int)6));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(572)
				int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(572)
				h = _g5;
			}
		}
		HX_STACK_LINE(575)
		int w = src_w;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(576)
		if (((w == (int)0))){
			HX_STACK_LINE(577)
			int _g6 = all_frames->get_width();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(577)
			w = _g6;
		}
		HX_STACK_LINE(579)
		::openfl::_v2::display::BitmapData pixels = ::openfl::_v2::display::BitmapData_obj::__new(w,h,null(),null(),null());		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(580)
		this->_flashRect->x = (int)0;
		HX_STACK_LINE(581)
		this->_flashRect->y = (button_state * h);
		HX_STACK_LINE(582)
		this->_flashRect->width = w;
		HX_STACK_LINE(583)
		this->_flashRect->height = h;
		HX_STACK_LINE(584)
		pixels->copyPixels(all_frames,this->_flashRect,this->_flashPointZero,null(),null(),null());
		HX_STACK_LINE(585)
		return pixels;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUITypedButton_obj,grabButtonFrame,return )

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::combineToggleBitmaps( ::openfl::_v2::display::BitmapData normal,::openfl::_v2::display::BitmapData toggle){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","combineToggleBitmaps",0xea818e98,"flixel.addons.ui.FlxUITypedButton.combineToggleBitmaps","flixel/addons/ui/FlxUITypedButton.hx",595,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(toggle,"toggle")
	HX_STACK_LINE(596)
	int _g = normal->get_width();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(596)
	int _g1 = normal->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(596)
	int _g2 = toggle->get_height();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(596)
	int _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(596)
	::openfl::_v2::display::BitmapData combined = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g3,null(),null(),null());		HX_STACK_VAR(combined,"combined");
	HX_STACK_LINE(598)
	::openfl::_v2::geom::Rectangle _g4 = normal->get_rect();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(598)
	combined->copyPixels(normal,_g4,this->_flashPointZero,null(),null(),null());
	HX_STACK_LINE(599)
	this->_flashPoint->x = (int)0;
	HX_STACK_LINE(600)
	int _g5 = normal->get_height();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(600)
	this->_flashPoint->y = _g5;
	HX_STACK_LINE(601)
	::openfl::_v2::geom::Rectangle _g6 = toggle->get_rect();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(601)
	combined->copyPixels(toggle,_g6,this->_flashPoint,null(),null(),null());
	HX_STACK_LINE(603)
	return combined;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITypedButton_obj,combineToggleBitmaps,return )

::openfl::_v2::display::BitmapData FlxUITypedButton_obj::assembleButtonFrames( ::openfl::_v2::display::BitmapData upB,::openfl::_v2::display::BitmapData overB,::openfl::_v2::display::BitmapData downB){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","assembleButtonFrames",0x4be9f791,"flixel.addons.ui.FlxUITypedButton.assembleButtonFrames","flixel/addons/ui/FlxUITypedButton.hx",615,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(upB,"upB")
	HX_STACK_ARG(overB,"overB")
	HX_STACK_ARG(downB,"downB")
	HX_STACK_LINE(616)
	::openfl::_v2::display::BitmapData pixels;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(618)
	if (((overB != null()))){
		HX_STACK_LINE(619)
		if (((downB != null()))){
			HX_STACK_LINE(620)
			int _g = upB->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(620)
			int _g1 = upB->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(620)
			int _g2 = (_g1 * (int)3);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(620)
			::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::display::BitmapData_obj::__new(_g,_g2,null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(620)
			pixels = _g3;
		}
		else{
			HX_STACK_LINE(622)
			int _g4 = upB->get_width();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(622)
			int _g5 = upB->get_height();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(622)
			int _g6 = (_g5 * (int)2);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(622)
			::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::display::BitmapData_obj::__new(_g4,_g6,null(),null(),null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(622)
			pixels = _g7;
		}
	}
	else{
		HX_STACK_LINE(625)
		int _g8 = upB->get_width();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(625)
		int _g9 = upB->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(625)
		::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::display::BitmapData_obj::__new(_g8,_g9,null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(625)
		pixels = _g10;
	}
	HX_STACK_LINE(628)
	::openfl::_v2::geom::Rectangle _g11 = upB->get_rect();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(628)
	pixels->copyPixels(upB,_g11,this->_flashPointZero,null(),null(),null());
	HX_STACK_LINE(630)
	if (((overB != null()))){
		HX_STACK_LINE(631)
		this->_flashPoint->x = (int)0;
		HX_STACK_LINE(632)
		int _g12 = upB->get_height();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(632)
		this->_flashPoint->y = _g12;
		HX_STACK_LINE(633)
		::openfl::_v2::geom::Rectangle _g13 = overB->get_rect();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(633)
		pixels->copyPixels(overB,_g13,this->_flashPoint,null(),null(),null());
		HX_STACK_LINE(634)
		if (((downB != null()))){
			HX_STACK_LINE(635)
			int _g14 = upB->get_height();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(635)
			int _g15 = (_g14 * (int)2);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(635)
			this->_flashPoint->y = _g15;
			HX_STACK_LINE(636)
			::openfl::_v2::geom::Rectangle _g16 = downB->get_rect();		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(636)
			pixels->copyPixels(downB,_g16,this->_flashPoint,null(),null(),null());
		}
	}
	HX_STACK_LINE(640)
	return pixels;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUITypedButton_obj,assembleButtonFrames,return )

Void FlxUITypedButton_obj::updateButton( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","updateButton",0x92a23202,"flixel.addons.ui.FlxUITypedButton.updateButton","flixel/addons/ui/FlxUITypedButton.hx",644,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(644)
		if ((!(this->skipButtonUpdate))){
			HX_STACK_LINE(645)
			this->super::updateButton();
		}
	}
return null();
}


Void FlxUITypedButton_obj::onUpHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onUpHandler",0xd4dc1e49,"flixel.addons.ui.FlxUITypedButton.onUpHandler","flixel/addons/ui/FlxUITypedButton.hx",650,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(651)
		if ((this->has_toggle)){
			HX_STACK_LINE(652)
			this->toggled = !(this->toggled);
		}
		HX_STACK_LINE(654)
		this->super::onUpHandler();
		HX_STACK_LINE(655)
		if (((this->label != null()))){
			HX_STACK_LINE(656)
			this->label->__Field(HX_CSTRING("set_color"),true)((  ((this->toggled)) ? int(this->up_toggle_color) : int(this->up_color) ));
			HX_STACK_LINE(657)
			this->label->__Field(HX_CSTRING("set_visible"),true)((  ((this->toggled)) ? bool(this->up_toggle_visible) : bool(this->up_visible) ));
		}
		HX_STACK_LINE(659)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(660)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onDownHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onDownHandler",0xf48785a2,"flixel.addons.ui.FlxUITypedButton.onDownHandler","flixel/addons/ui/FlxUITypedButton.hx",665,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(666)
		this->super::onDownHandler();
		HX_STACK_LINE(667)
		if (((this->label != null()))){
			HX_STACK_LINE(668)
			this->label->__Field(HX_CSTRING("set_color"),true)((  ((this->toggled)) ? int(this->down_toggle_color) : int(this->down_color) ));
			HX_STACK_LINE(669)
			this->label->__Field(HX_CSTRING("set_visible"),true)((  ((this->toggled)) ? bool(this->down_toggle_visible) : bool(this->down_visible) ));
		}
		HX_STACK_LINE(671)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(672)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("down_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOverHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOverHandler",0xcfefcef0,"flixel.addons.ui.FlxUITypedButton.onOverHandler","flixel/addons/ui/FlxUITypedButton.hx",677,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(678)
		this->super::onOverHandler();
		HX_STACK_LINE(679)
		if (((this->label != null()))){
			HX_STACK_LINE(680)
			this->label->__Field(HX_CSTRING("set_color"),true)((  ((this->toggled)) ? int(this->over_toggle_color) : int(this->over_color) ));
			HX_STACK_LINE(681)
			this->label->__Field(HX_CSTRING("set_visible"),true)((  ((this->toggled)) ? bool(this->over_toggle_visible) : bool(this->over_visible) ));
		}
		HX_STACK_LINE(683)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(684)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("over_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Void FlxUITypedButton_obj::onOutHandler( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","onOutHandler",0x57e35002,"flixel.addons.ui.FlxUITypedButton.onOutHandler","flixel/addons/ui/FlxUITypedButton.hx",689,0x55608c36)
		HX_STACK_THIS(this)
		HX_STACK_LINE(690)
		this->super::onOutHandler();
		HX_STACK_LINE(691)
		if (((this->label != null()))){
			HX_STACK_LINE(692)
			this->label->__Field(HX_CSTRING("set_color"),true)((  ((this->toggled)) ? int(this->up_toggle_color) : int(this->up_color) ));
			HX_STACK_LINE(693)
			this->label->__Field(HX_CSTRING("set_visible"),true)((  ((this->toggled)) ? bool(this->up_toggle_visible) : bool(this->up_visible) ));
		}
		HX_STACK_LINE(695)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(696)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("out_button"),hx::ObjectPtr<OBJ_>(this),null(),this->params);
		}
	}
return null();
}


Float FlxUITypedButton_obj::set_x( Float NewX){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_x",0x81b75354,"flixel.addons.ui.FlxUITypedButton.set_x","flixel/addons/ui/FlxUITypedButton.hx",701,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewX,"NewX")
	HX_STACK_LINE(702)
	this->super::set_x(NewX);
	HX_STACK_LINE(704)
	if (((this->label != null()))){
		HX_STACK_LINE(706)
		this->label->__Field(HX_CSTRING("set_x"),true)(((this->x + this->_centerLabelOffset->x) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->x));
		HX_STACK_LINE(708)
		if ((this->round_labels)){
			HX_STACK_LINE(709)
			int _g = ::Std_obj::_int((this->label->__Field(HX_CSTRING("x"),true) + 0.5));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(709)
			this->label->__Field(HX_CSTRING("set_x"),true)(_g);
		}
	}
	HX_STACK_LINE(713)
	return NewX;
}


Float FlxUITypedButton_obj::set_y( Float NewY){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITypedButton","set_y",0x81b75355,"flixel.addons.ui.FlxUITypedButton.set_y","flixel/addons/ui/FlxUITypedButton.hx",717,0x55608c36)
	HX_STACK_THIS(this)
	HX_STACK_ARG(NewY,"NewY")
	HX_STACK_LINE(718)
	this->super::set_y(NewY);
	HX_STACK_LINE(720)
	if (((this->label != null()))){
		HX_STACK_LINE(722)
		this->label->__Field(HX_CSTRING("set_y"),true)(((this->y + this->_centerLabelOffset->y) + this->labelOffsets->__get(this->status).StaticCast< ::flixel::util::FlxPoint >()->y));
		HX_STACK_LINE(724)
		if ((this->round_labels)){
			HX_STACK_LINE(725)
			int _g = ::Std_obj::_int((this->label->__Field(HX_CSTRING("y"),true) + 0.5));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(725)
			this->label->__Field(HX_CSTRING("set_y"),true)(_g);
		}
	}
	HX_STACK_LINE(728)
	return NewY;
}


::String FlxUITypedButton_obj::CLICK_EVENT;

::String FlxUITypedButton_obj::OVER_EVENT;

::String FlxUITypedButton_obj::DOWN_EVENT;

::String FlxUITypedButton_obj::OUT_EVENT;


FlxUITypedButton_obj::FlxUITypedButton_obj()
{
}

void FlxUITypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITypedButton);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_MARK_MEMBER_NAME(resize_point,"resize_point");
	HX_MARK_MEMBER_NAME(tile,"tile");
	HX_MARK_MEMBER_NAME(has_toggle,"has_toggle");
	HX_MARK_MEMBER_NAME(toggled,"toggled");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(up_color,"up_color");
	HX_MARK_MEMBER_NAME(over_color,"over_color");
	HX_MARK_MEMBER_NAME(down_color,"down_color");
	HX_MARK_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_MARK_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_MARK_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_MARK_MEMBER_NAME(up_visible,"up_visible");
	HX_MARK_MEMBER_NAME(over_visible,"over_visible");
	HX_MARK_MEMBER_NAME(down_visible,"down_visible");
	HX_MARK_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_MARK_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_MARK_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_MARK_MEMBER_NAME(round_labels,"round_labels");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_MARK_MEMBER_NAME(_src_w,"_src_w");
	HX_MARK_MEMBER_NAME(_src_h,"_src_h");
	HX_MARK_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_MARK_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_MARK_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_MARK_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(resize_ratio,"resize_ratio");
	HX_VISIT_MEMBER_NAME(resize_point,"resize_point");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	HX_VISIT_MEMBER_NAME(has_toggle,"has_toggle");
	HX_VISIT_MEMBER_NAME(toggled,"toggled");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(up_color,"up_color");
	HX_VISIT_MEMBER_NAME(over_color,"over_color");
	HX_VISIT_MEMBER_NAME(down_color,"down_color");
	HX_VISIT_MEMBER_NAME(up_toggle_color,"up_toggle_color");
	HX_VISIT_MEMBER_NAME(over_toggle_color,"over_toggle_color");
	HX_VISIT_MEMBER_NAME(down_toggle_color,"down_toggle_color");
	HX_VISIT_MEMBER_NAME(up_visible,"up_visible");
	HX_VISIT_MEMBER_NAME(over_visible,"over_visible");
	HX_VISIT_MEMBER_NAME(down_visible,"down_visible");
	HX_VISIT_MEMBER_NAME(up_toggle_visible,"up_toggle_visible");
	HX_VISIT_MEMBER_NAME(over_toggle_visible,"over_toggle_visible");
	HX_VISIT_MEMBER_NAME(down_toggle_visible,"down_toggle_visible");
	HX_VISIT_MEMBER_NAME(round_labels,"round_labels");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(_no_graphic,"_no_graphic");
	HX_VISIT_MEMBER_NAME(_src_w,"_src_w");
	HX_VISIT_MEMBER_NAME(_src_h,"_src_h");
	HX_VISIT_MEMBER_NAME(_frame_indeces,"_frame_indeces");
	HX_VISIT_MEMBER_NAME(_slice9_arrays,"_slice9_arrays");
	HX_VISIT_MEMBER_NAME(_slice9_assets,"_slice9_assets");
	HX_VISIT_MEMBER_NAME(_centerLabelOffset,"_centerLabelOffset");
	::flixel::ui::FlxTypedButton_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return tile; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"_src_w") ) { return _src_w; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { return _src_h; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { return toggled; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { return up_color; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { return has_toggle; }
		if (HX_FIELD_EQ(inName,"over_color") ) { return over_color; }
		if (HX_FIELD_EQ(inName,"down_color") ) { return down_color; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { return up_visible; }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onUpHandler") ) { return onUpHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { return _no_graphic; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { return resize_ratio; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { return resize_point; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { return over_visible; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { return down_visible; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { return round_labels; }
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"onOutHandler") ) { return onOutHandler_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onDownHandler") ) { return onDownHandler_dyn(); }
		if (HX_FIELD_EQ(inName,"onOverHandler") ) { return onOverHandler_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { return _frame_indeces; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { return _slice9_arrays; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { return _slice9_assets; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { return up_toggle_color; }
		if (HX_FIELD_EQ(inName,"autoCenterLabel") ) { return autoCenterLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"grabButtonFrame") ) { return grabButtonFrame_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { return over_toggle_color; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { return down_toggle_color; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { return up_toggle_visible; }
		if (HX_FIELD_EQ(inName,"loadGraphicSlice9") ) { return loadGraphicSlice9_dyn(); }
		if (HX_FIELD_EQ(inName,"forceStateHandler") ) { return forceStateHandler_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setAllLabelOffsets") ) { return setAllLabelOffsets_dyn(); }
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { return _centerLabelOffset; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { return over_toggle_visible; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { return down_toggle_visible; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"loadGraphicsMultiple") ) { return loadGraphicsMultiple_dyn(); }
		if (HX_FIELD_EQ(inName,"setCenterLabelOffset") ) { return setCenterLabelOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"combineToggleBitmaps") ) { return combineToggleBitmaps_dyn(); }
		if (HX_FIELD_EQ(inName,"assembleButtonFrames") ) { return assembleButtonFrames_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"loadGraphicsUpOverDown") ) { return loadGraphicsUpOverDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_w") ) { _src_w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_src_h") ) { _src_h=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"toggled") ) { toggled=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"up_color") ) { up_color=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"has_toggle") ) { has_toggle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_color") ) { over_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_color") ) { down_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_visible") ) { up_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_no_graphic") ) { _no_graphic=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resize_ratio") ) { resize_ratio=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resize_point") ) { resize_point=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"over_visible") ) { over_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_visible") ) { down_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"round_labels") ) { round_labels=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_frame_indeces") ) { _frame_indeces=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_arrays") ) { _slice9_arrays=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_slice9_assets") ) { _slice9_assets=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"up_toggle_color") ) { up_toggle_color=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"over_toggle_color") ) { over_toggle_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_color") ) { down_toggle_color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"up_toggle_visible") ) { up_toggle_visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_centerLabelOffset") ) { _centerLabelOffset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"over_toggle_visible") ) { over_toggle_visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"down_toggle_visible") ) { down_toggle_visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("resize_ratio"));
	outFields->push(HX_CSTRING("resize_point"));
	outFields->push(HX_CSTRING("tile"));
	outFields->push(HX_CSTRING("has_toggle"));
	outFields->push(HX_CSTRING("toggled"));
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("up_color"));
	outFields->push(HX_CSTRING("over_color"));
	outFields->push(HX_CSTRING("down_color"));
	outFields->push(HX_CSTRING("up_toggle_color"));
	outFields->push(HX_CSTRING("over_toggle_color"));
	outFields->push(HX_CSTRING("down_toggle_color"));
	outFields->push(HX_CSTRING("up_visible"));
	outFields->push(HX_CSTRING("over_visible"));
	outFields->push(HX_CSTRING("down_visible"));
	outFields->push(HX_CSTRING("up_toggle_visible"));
	outFields->push(HX_CSTRING("over_toggle_visible"));
	outFields->push(HX_CSTRING("down_toggle_visible"));
	outFields->push(HX_CSTRING("round_labels"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("_no_graphic"));
	outFields->push(HX_CSTRING("_src_w"));
	outFields->push(HX_CSTRING("_src_h"));
	outFields->push(HX_CSTRING("_frame_indeces"));
	outFields->push(HX_CSTRING("_slice9_arrays"));
	outFields->push(HX_CSTRING("_slice9_assets"));
	outFields->push(HX_CSTRING("_centerLabelOffset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("OVER_EVENT"),
	HX_CSTRING("DOWN_EVENT"),
	HX_CSTRING("OUT_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxUITypedButton_obj,id),HX_CSTRING("id")},
	{hx::fsFloat,(int)offsetof(FlxUITypedButton_obj,resize_ratio),HX_CSTRING("resize_ratio")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,resize_point),HX_CSTRING("resize_point")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,tile),HX_CSTRING("tile")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,has_toggle),HX_CSTRING("has_toggle")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,toggled),HX_CSTRING("toggled")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,up_color),HX_CSTRING("up_color")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,over_color),HX_CSTRING("over_color")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,down_color),HX_CSTRING("down_color")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,up_toggle_color),HX_CSTRING("up_toggle_color")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,over_toggle_color),HX_CSTRING("over_toggle_color")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,down_toggle_color),HX_CSTRING("down_toggle_color")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_visible),HX_CSTRING("up_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_visible),HX_CSTRING("over_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_visible),HX_CSTRING("down_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,up_toggle_visible),HX_CSTRING("up_toggle_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,over_toggle_visible),HX_CSTRING("over_toggle_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,down_toggle_visible),HX_CSTRING("down_toggle_visible")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,round_labels),HX_CSTRING("round_labels")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITypedButton_obj,params),HX_CSTRING("params")},
	{hx::fsBool,(int)offsetof(FlxUITypedButton_obj,_no_graphic),HX_CSTRING("_no_graphic")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_w),HX_CSTRING("_src_w")},
	{hx::fsInt,(int)offsetof(FlxUITypedButton_obj,_src_h),HX_CSTRING("_src_h")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxUITypedButton_obj,_frame_indeces),HX_CSTRING("_frame_indeces")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_arrays),HX_CSTRING("_slice9_arrays")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITypedButton_obj,_slice9_assets),HX_CSTRING("_slice9_assets")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITypedButton_obj,_centerLabelOffset),HX_CSTRING("_centerLabelOffset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("resize_ratio"),
	HX_CSTRING("resize_point"),
	HX_CSTRING("tile"),
	HX_CSTRING("has_toggle"),
	HX_CSTRING("toggled"),
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("up_color"),
	HX_CSTRING("over_color"),
	HX_CSTRING("down_color"),
	HX_CSTRING("up_toggle_color"),
	HX_CSTRING("over_toggle_color"),
	HX_CSTRING("down_toggle_color"),
	HX_CSTRING("up_visible"),
	HX_CSTRING("over_visible"),
	HX_CSTRING("down_visible"),
	HX_CSTRING("up_toggle_visible"),
	HX_CSTRING("over_toggle_visible"),
	HX_CSTRING("down_toggle_visible"),
	HX_CSTRING("round_labels"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("destroy"),
	HX_CSTRING("setAllLabelOffsets"),
	HX_CSTRING("update"),
	HX_CSTRING("resize"),
	HX_CSTRING("loadGraphicsMultiple"),
	HX_CSTRING("loadGraphicsUpOverDown"),
	HX_CSTRING("loadGraphicSlice9"),
	HX_CSTRING("autoCenterLabel"),
	HX_CSTRING("setCenterLabelOffset"),
	HX_CSTRING("forceStateHandler"),
	HX_CSTRING("grabButtonFrame"),
	HX_CSTRING("combineToggleBitmaps"),
	HX_CSTRING("assembleButtonFrames"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("onUpHandler"),
	HX_CSTRING("onDownHandler"),
	HX_CSTRING("onOverHandler"),
	HX_CSTRING("onOutHandler"),
	HX_CSTRING("set_x"),
	HX_CSTRING("set_y"),
	HX_CSTRING("_no_graphic"),
	HX_CSTRING("_src_w"),
	HX_CSTRING("_src_h"),
	HX_CSTRING("_frame_indeces"),
	HX_CSTRING("_slice9_arrays"),
	HX_CSTRING("_slice9_assets"),
	HX_CSTRING("_centerLabelOffset"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OVER_EVENT,"OVER_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::DOWN_EVENT,"DOWN_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITypedButton_obj::OUT_EVENT,"OUT_EVENT");
};

#endif

Class FlxUITypedButton_obj::__mClass;

void FlxUITypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUITypedButton"), hx::TCanCast< FlxUITypedButton_obj> ,sStaticFields,sMemberFields,
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

void FlxUITypedButton_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_button");
	OVER_EVENT= HX_CSTRING("over_button");
	DOWN_EVENT= HX_CSTRING("down_button");
	OUT_EVENT= HX_CSTRING("out_button");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

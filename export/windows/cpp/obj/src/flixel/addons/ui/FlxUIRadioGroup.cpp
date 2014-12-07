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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
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
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIRadioGroup_obj::__construct(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","new",0xb1b15e6b,"flixel.addons.ui.FlxUIRadioGroup.new","flixel/addons/ui/FlxUIRadioGroup.hx",12,0x807a4586)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
HX_STACK_ARG(ids_,"ids_")
HX_STACK_ARG(labels_,"labels_")
HX_STACK_ARG(callback_,"callback_")
HX_STACK_ARG(__o_y_space_,"y_space_")
HX_STACK_ARG(__o_width_,"width_")
HX_STACK_ARG(__o_height_,"height_")
HX_STACK_ARG(__o_label_width_,"label_width_")
Float y_space_ = __o_y_space_.Default(25);
int width_ = __o_width_.Default(100);
int height_ = __o_height_.Default(20);
int label_width_ = __o_label_width_.Default(100);
{
	HX_STACK_LINE(230)
	this->_clickable = true;
	HX_STACK_LINE(228)
	this->_selected = (int)0;
	HX_STACK_LINE(227)
	this->_y_space = (int)25;
	HX_STACK_LINE(225)
	this->_height = (int)20;
	HX_STACK_LINE(224)
	this->_width = (int)100;
	HX_STACK_LINE(223)
	this->_label_width = (int)100;
	HX_STACK_LINE(53)
	super::__construct(null(),null());
	HX_STACK_LINE(54)
	this->_y_space = y_space_;
	HX_STACK_LINE(55)
	this->_width = width_;
	HX_STACK_LINE(56)
	this->_height = height_;
	HX_STACK_LINE(57)
	this->_label_width = label_width_;
	HX_STACK_LINE(58)
	this->set_x(X);
	HX_STACK_LINE(59)
	this->set_y(Y);
	HX_STACK_LINE(60)
	this->callback = callback_;
	HX_STACK_LINE(61)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	this->_list_radios = _g;
	HX_STACK_LINE(62)
	this->updateRadios(ids_,labels_);
	HX_STACK_LINE(63)
	this->loadGraphics(null(),null());
}
;
	return null();
}

//FlxUIRadioGroup_obj::~FlxUIRadioGroup_obj() { }

Dynamic FlxUIRadioGroup_obj::__CreateEmpty() { return  new FlxUIRadioGroup_obj; }
hx::ObjectPtr< FlxUIRadioGroup_obj > FlxUIRadioGroup_obj::__new(Float X,Float Y,Array< ::String > ids_,Array< ::String > labels_,Dynamic callback_,hx::Null< Float >  __o_y_space_,hx::Null< int >  __o_width_,hx::Null< int >  __o_height_,hx::Null< int >  __o_label_width_)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > result = new FlxUIRadioGroup_obj();
	result->__construct(X,Y,ids_,labels_,callback_,__o_y_space_,__o_width_,__o_height_,__o_label_width_);
	return result;}

Dynamic FlxUIRadioGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIRadioGroup_obj > result = new FlxUIRadioGroup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

hx::Object *FlxUIRadioGroup_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

bool FlxUIRadioGroup_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_skipButtonUpdate",0x2de214cc,"flixel.addons.ui.FlxUIRadioGroup.set_skipButtonUpdate","flixel/addons/ui/FlxUIRadioGroup.hx",22,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(24)
	::flixel::addons::ui::FlxUICheckBox fcb;		HX_STACK_VAR(fcb,"fcb");
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(25)
			::flixel::addons::ui::FlxUICheckBox fcb1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(fcb1,"fcb1");
			HX_STACK_LINE(25)
			++(_g);
			HX_STACK_LINE(26)
			fcb1->set_skipButtonUpdate(b);
		}
	}
	HX_STACK_LINE(28)
	return this->skipButtonUpdate;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_skipButtonUpdate,return )

Dynamic FlxUIRadioGroup_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_params",0x363b22d8,"flixel.addons.ui.FlxUIRadioGroup.set_params","flixel/addons/ui/FlxUIRadioGroup.hx",34,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(35)
	this->params = p;
	HX_STACK_LINE(36)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_params,return )

Void FlxUIRadioGroup_obj::loadGraphics( Dynamic Box,Dynamic Dot){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","loadGraphics",0x1884bda6,"flixel.addons.ui.FlxUIRadioGroup.loadGraphics","flixel/addons/ui/FlxUIRadioGroup.hx",66,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Box,"Box")
		HX_STACK_ARG(Dot,"Dot")
		HX_STACK_LINE(67)
		if (((Box != null()))){
			HX_STACK_LINE(68)
			this->_box_asset = Box;
		}
		else{
			HX_STACK_LINE(70)
			this->_box_asset = HX_CSTRING("flixel/flixel-ui/img/radio.png");
		}
		HX_STACK_LINE(72)
		if (((Dot != null()))){
			HX_STACK_LINE(73)
			this->_dot_asset = Dot;
		}
		else{
			HX_STACK_LINE(75)
			this->_dot_asset = HX_CSTRING("flixel/flixel-ui/img/radio_dot.png");
		}
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(79)
				c->box->loadGraphic(this->_box_asset,true,null(),null(),null(),null());
				HX_STACK_LINE(80)
				c->mark->loadGraphic(this->_dot_asset,null(),null(),null(),null(),null());
			}
		}
		HX_STACK_LINE(82)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,loadGraphics,(void))

Void FlxUIRadioGroup_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","destroy",0x842b1c85,"flixel.addons.ui.FlxUIRadioGroup.destroy","flixel/addons/ui/FlxUIRadioGroup.hx",85,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		if (((this->_list_radios != null()))){
			HX_STACK_LINE(87)
			::flixel::addons::ui::U_obj::clearArray(this->_list_radios);
		}
		HX_STACK_LINE(89)
		this->_ids = null();
		HX_STACK_LINE(90)
		this->_labels = null();
		HX_STACK_LINE(91)
		this->super::destroy();
	}
return null();
}


bool FlxUIRadioGroup_obj::updateLabel( int i,::String label_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateLabel",0x24428836,"flixel.addons.ui.FlxUIRadioGroup.updateLabel","flixel/addons/ui/FlxUIRadioGroup.hx",94,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(label_,"label_")
	HX_STACK_LINE(95)
	if (((i >= this->_list_radios->length))){
		HX_STACK_LINE(95)
		return false;
	}
	HX_STACK_LINE(96)
	this->_labels[i] = label_;
	HX_STACK_LINE(97)
	::flixel::addons::ui::FlxUICheckBox c = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(98)
	if (((c != null()))){
		HX_STACK_LINE(99)
		c->button->set_width(this->_label_width);
		HX_STACK_LINE(100)
		c->set_text(label_);
	}
	HX_STACK_LINE(102)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateLabel,return )

bool FlxUIRadioGroup_obj::updateId( int i,::String id_){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateId",0xc8a6c459,"flixel.addons.ui.FlxUIRadioGroup.updateId","flixel/addons/ui/FlxUIRadioGroup.hx",105,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(id_,"id_")
	HX_STACK_LINE(106)
	if (((i >= this->_list_radios->length))){
		HX_STACK_LINE(106)
		return false;
	}
	HX_STACK_LINE(107)
	this->_ids[i] = id_;
	HX_STACK_LINE(108)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateId,return )

Void FlxUIRadioGroup_obj::show( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","show",0xccd19092,"flixel.addons.ui.FlxUIRadioGroup.show","flixel/addons/ui/FlxUIRadioGroup.hx",112,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(112)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(112)
		Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(112)
		while((true)){
			HX_STACK_LINE(112)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(112)
				break;
			}
			HX_STACK_LINE(112)
			::flixel::FlxSprite fo = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(112)
			++(_g);
			HX_STACK_LINE(113)
			fo->set_visible(b);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,show,(void))

Void FlxUIRadioGroup_obj::updateRadios( Array< ::String > ids_,Array< ::String > labels_){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","updateRadios",0xfd6e4a96,"flixel.addons.ui.FlxUIRadioGroup.updateRadios","flixel/addons/ui/FlxUIRadioGroup.hx",117,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ids_,"ids_")
		HX_STACK_ARG(labels_,"labels_")
		HX_STACK_LINE(118)
		this->_ids = ids_;
		HX_STACK_LINE(119)
		this->_labels = labels_;
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while((true)){
				HX_STACK_LINE(120)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(120)
					break;
				}
				HX_STACK_LINE(120)
				::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(121)
				c->set_visible(false);
			}
		}
		HX_STACK_LINE(123)
		this->_refreshRadios();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,updateRadios,(void))

bool FlxUIRadioGroup_obj::get_clickable( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_clickable",0xc69c2b84,"flixel.addons.ui.FlxUIRadioGroup.get_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",128,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(128)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_clickable,return )

bool FlxUIRadioGroup_obj::set_clickable( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_clickable",0x0ba20d90,"flixel.addons.ui.FlxUIRadioGroup.set_clickable","flixel/addons/ui/FlxUIRadioGroup.hx",129,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(130)
	this->_clickable = b;
	HX_STACK_LINE(131)
	{
		HX_STACK_LINE(131)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(131)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(131)
			++(_g);
			HX_STACK_LINE(132)
			c->set_active(b);
		}
	}
	HX_STACK_LINE(134)
	return this->_clickable;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_clickable,return )

int FlxUIRadioGroup_obj::get_selectedIndex( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedIndex",0x2e506d59,"flixel.addons.ui.FlxUIRadioGroup.get_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",137,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedIndex,return )

int FlxUIRadioGroup_obj::set_selectedIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedIndex",0x51be4565,"flixel.addons.ui.FlxUIRadioGroup.set_selectedIndex","flixel/addons/ui/FlxUIRadioGroup.hx",138,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(139)
	this->_selected = i;
	HX_STACK_LINE(140)
	int j = (int)0;		HX_STACK_VAR(j,"j");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		while((true)){
			HX_STACK_LINE(141)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(141)
				break;
			}
			HX_STACK_LINE(141)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(141)
			++(_g);
			HX_STACK_LINE(142)
			c->set_checked(false);
			HX_STACK_LINE(143)
			if (((j == i))){
				HX_STACK_LINE(144)
				c->set_checked(true);
			}
			HX_STACK_LINE(146)
			(j)++;
		}
	}
	HX_STACK_LINE(148)
	return this->_selected;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedIndex,return )

::String FlxUIRadioGroup_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedLabel",0xdfeae03b,"flixel.addons.ui.FlxUIRadioGroup.get_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",151,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	return this->_labels->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedLabel,return )

::String FlxUIRadioGroup_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedLabel",0x0358b847,"flixel.addons.ui.FlxUIRadioGroup.set_selectedLabel","flixel/addons/ui/FlxUIRadioGroup.hx",152,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(153)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(154)
	{
		HX_STACK_LINE(154)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(154)
		while((true)){
			HX_STACK_LINE(154)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(154)
				break;
			}
			HX_STACK_LINE(154)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(154)
			++(_g);
			HX_STACK_LINE(155)
			c->set_checked(false);
			HX_STACK_LINE(156)
			if (((this->_labels->__get(i) == str))){
				HX_STACK_LINE(157)
				this->_selected = i;
				HX_STACK_LINE(158)
				c->set_checked(true);
			}
			HX_STACK_LINE(160)
			(i)++;
		}
	}
	HX_STACK_LINE(162)
	return this->_labels->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedLabel,return )

::String FlxUIRadioGroup_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","get_selectedId",0x00916734,"flixel.addons.ui.FlxUIRadioGroup.get_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",165,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_LINE(165)
	return this->_ids->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,get_selectedId,return )

::String FlxUIRadioGroup_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","set_selectedId",0x20b14fa8,"flixel.addons.ui.FlxUIRadioGroup.set_selectedId","flixel/addons/ui/FlxUIRadioGroup.hx",166,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(167)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(168)
	{
		HX_STACK_LINE(168)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(168)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(168)
		while((true)){
			HX_STACK_LINE(168)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(168)
				break;
			}
			HX_STACK_LINE(168)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(168)
			++(_g);
			HX_STACK_LINE(169)
			c->set_checked(false);
			HX_STACK_LINE(170)
			if (((this->_ids->__get(i) == str))){
				HX_STACK_LINE(171)
				this->_selected = i;
				HX_STACK_LINE(172)
				c->set_checked(true);
			}
			HX_STACK_LINE(174)
			(i)++;
		}
	}
	HX_STACK_LINE(176)
	return this->_ids->__get(this->_selected);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,set_selectedId,return )

::flixel::util::FlxPoint FlxUIRadioGroup_obj::setLineScroll( int scroll,int max_items){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","setLineScroll",0x8e2ebb2e,"flixel.addons.ui.FlxUIRadioGroup.setLineScroll","flixel/addons/ui/FlxUIRadioGroup.hx",188,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(scroll,"scroll")
	HX_STACK_ARG(max_items,"max_items")
	HX_STACK_LINE(189)
	int i = (int)1;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(190)
	Float yy = this->y;		HX_STACK_VAR(yy,"yy");
	HX_STACK_LINE(191)
	int more_above = (int)0;		HX_STACK_VAR(more_above,"more_above");
	HX_STACK_LINE(192)
	int more_below = (int)0;		HX_STACK_VAR(more_below,"more_below");
	HX_STACK_LINE(193)
	{
		HX_STACK_LINE(193)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(193)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(193)
		while((true)){
			HX_STACK_LINE(193)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(193)
				break;
			}
			HX_STACK_LINE(193)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(193)
			++(_g);
			HX_STACK_LINE(194)
			if (((i <= scroll))){
				HX_STACK_LINE(195)
				c->set_visible(false);
				HX_STACK_LINE(196)
				(more_above)++;
			}
			else{
				HX_STACK_LINE(197)
				if (((i > (scroll + max_items)))){
					HX_STACK_LINE(198)
					c->set_visible(false);
					HX_STACK_LINE(199)
					(more_below)++;
				}
				else{
					HX_STACK_LINE(201)
					int _g2 = ::Std_obj::_int(this->x);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(201)
					c->set_x(_g2);
					HX_STACK_LINE(202)
					int _g11 = ::Std_obj::_int(yy);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(202)
					c->set_y(_g11);
					HX_STACK_LINE(203)
					hx::AddEq(yy,this->_y_space);
					HX_STACK_LINE(204)
					c->set_visible(true);
				}
			}
			HX_STACK_LINE(206)
			(i)++;
		}
	}
	HX_STACK_LINE(208)
	::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(more_above,more_below);		HX_STACK_VAR(point,"point");
	HX_STACK_LINE(208)
	point->_inPool = false;
	HX_STACK_LINE(208)
	return point;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,setLineScroll,return )

Void FlxUIRadioGroup_obj::_refreshRadios( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_refreshRadios",0xb14e4769,"flixel.addons.ui.FlxUIRadioGroup._refreshRadios","flixel/addons/ui/FlxUIRadioGroup.hx",237,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_LINE(238)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(239)
		Float yy = (int)0;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(240)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			Array< ::String > _g1 = this->_ids;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::String id = _g1->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(241)
				++(_g);
				HX_STACK_LINE(242)
				::String label = HX_CSTRING("");		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(243)
				if (((bool((this->_labels != null())) && bool((this->_labels->length > i))))){
					HX_STACK_LINE(244)
					label = this->_labels->__get(i);
				}
				else{
					HX_STACK_LINE(246)
					label = ((HX_CSTRING("<") + id) + HX_CSTRING(">"));
				}
				HX_STACK_LINE(248)
				::flixel::addons::ui::FlxUICheckBox c;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(249)
				if (((this->_list_radios->length > i))){
					HX_STACK_LINE(250)
					c = this->_list_radios->__get(i).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();
					HX_STACK_LINE(251)
					c->set_visible(true);
					HX_STACK_LINE(252)
					c->set_text(label);
					HX_STACK_LINE(253)
					if (((i == (int)0))){
						HX_STACK_LINE(254)
						xx = c->x;
						HX_STACK_LINE(255)
						yy = c->y;
					}
				}
				else{
					HX_STACK_LINE(258)
					::flixel::addons::ui::FlxUICheckBox _g2 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,this->_box_asset,this->_dot_asset,label,this->_label_width,Dynamic( Array_obj<Dynamic>::__new().Add(id).Add(false)),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(258)
					c = _g2;
					HX_STACK_LINE(259)
					c->broadcastToFlxUI = false;
					HX_STACK_LINE(260)
					Dynamic _g11;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(260)
					{
						HX_STACK_LINE(260)
						Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->_onCheckBoxEvent_dyn()));		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(260)
						Array< ::Dynamic > a1 = Array_obj< ::Dynamic >::__new().Add(c);		HX_STACK_VAR(a1,"a1");

						HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_5_1,Array< ::Dynamic >,a1,Dynamic,f)
						Void run(){
							HX_STACK_FRAME("*","_Function_5_1",0x5203f63b,"*._Function_5_1","flixel/addons/ui/FlxUIRadioGroup.hx",260,0x807a4586)
							{
								HX_STACK_LINE(260)
								return null(f->__GetItem((int)0)(a1->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUICheckBox >()).Cast< Void >());
							}
							return null();
						}
						HX_END_LOCAL_FUNC0((void))

						HX_STACK_LINE(260)
						_g11 =  Dynamic(new _Function_5_1(a1,f));
					}
					HX_STACK_LINE(260)
					c->callback = _g11;
					HX_STACK_LINE(261)
					int _g21 = ::Std_obj::_int(xx);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(261)
					c->set_x(_g21);
					HX_STACK_LINE(262)
					int _g3 = ::Std_obj::_int(yy);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(262)
					c->set_y(_g3);
					HX_STACK_LINE(264)
					this->add(c);
					HX_STACK_LINE(265)
					c->set_text(label);
					HX_STACK_LINE(266)
					this->_list_radios->push(c);
				}
				HX_STACK_LINE(268)
				hx::AddEq(yy,this->_y_space);
				HX_STACK_LINE(269)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIRadioGroup_obj,_refreshRadios,(void))

Void FlxUIRadioGroup_obj::_onCheckBoxEvent( ::flixel::addons::ui::FlxUICheckBox checkBox){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onCheckBoxEvent",0xc5d5ffee,"flixel.addons.ui.FlxUIRadioGroup._onCheckBoxEvent","flixel/addons/ui/FlxUIRadioGroup.hx",274,0x807a4586)
		HX_STACK_THIS(this)
		HX_STACK_ARG(checkBox,"checkBox")
		HX_STACK_LINE(274)
		this->_onClick(checkBox,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIRadioGroup_obj,_onCheckBoxEvent,(void))

bool FlxUIRadioGroup_obj::_onClick( ::flixel::addons::ui::FlxUICheckBox checkBox,bool doCallback){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIRadioGroup","_onClick",0x69011e3f,"flixel.addons.ui.FlxUIRadioGroup._onClick","flixel/addons/ui/FlxUIRadioGroup.hx",277,0x807a4586)
	HX_STACK_THIS(this)
	HX_STACK_ARG(checkBox,"checkBox")
	HX_STACK_ARG(doCallback,"doCallback")
	HX_STACK_LINE(278)
	if ((!(this->_clickable))){
		HX_STACK_LINE(278)
		return false;
	}
	HX_STACK_LINE(280)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(281)
	{
		HX_STACK_LINE(281)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(281)
		Array< ::Dynamic > _g1 = this->_list_radios;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(281)
		while((true)){
			HX_STACK_LINE(281)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(281)
				break;
			}
			HX_STACK_LINE(281)
			::flixel::addons::ui::FlxUICheckBox c = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUICheckBox >();		HX_STACK_VAR(c,"c");
			HX_STACK_LINE(281)
			++(_g);
			HX_STACK_LINE(282)
			c->set_checked(false);
			HX_STACK_LINE(283)
			if (((checkBox == c))){
				HX_STACK_LINE(284)
				this->_selected = i;
				HX_STACK_LINE(285)
				c->set_checked(true);
			}
			HX_STACK_LINE(287)
			(i)++;
		}
	}
	HX_STACK_LINE(290)
	if ((doCallback)){
		HX_STACK_LINE(291)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(292)
			::String _g = this->get_selectedId();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(292)
			this->callback(_g);
		}
		HX_STACK_LINE(295)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(296)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_radio_group"),hx::ObjectPtr<OBJ_>(this),this->_ids->__get(this->_selected),this->params);
		}
	}
	HX_STACK_LINE(299)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRadioGroup_obj,_onClick,return )

::String FlxUIRadioGroup_obj::CLICK_EVENT;


FlxUIRadioGroup_obj::FlxUIRadioGroup_obj()
{
}

void FlxUIRadioGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRadioGroup);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(_box_asset,"_box_asset");
	HX_MARK_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_MARK_MEMBER_NAME(_labels,"_labels");
	HX_MARK_MEMBER_NAME(_ids,"_ids");
	HX_MARK_MEMBER_NAME(_label_width,"_label_width");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_y_space,"_y_space");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_clickable,"_clickable");
	HX_MARK_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRadioGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(_box_asset,"_box_asset");
	HX_VISIT_MEMBER_NAME(_dot_asset,"_dot_asset");
	HX_VISIT_MEMBER_NAME(_labels,"_labels");
	HX_VISIT_MEMBER_NAME(_ids,"_ids");
	HX_VISIT_MEMBER_NAME(_label_width,"_label_width");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_y_space,"_y_space");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_clickable,"_clickable");
	HX_VISIT_MEMBER_NAME(_list_radios,"_list_radios");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIRadioGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"_ids") ) { return _ids; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"_width") ) { return _width; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_labels") ) { return _labels; }
		if (HX_FIELD_EQ(inName,"_height") ) { return _height; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"updateId") ) { return updateId_dyn(); }
		if (HX_FIELD_EQ(inName,"_y_space") ) { return _y_space; }
		if (HX_FIELD_EQ(inName,"_onClick") ) { return _onClick_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return get_clickable(); }
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { return _box_asset; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { return _dot_asset; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { return _clickable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateLabel") ) { return updateLabel_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadGraphics") ) { return loadGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRadios") ) { return updateRadios_dyn(); }
		if (HX_FIELD_EQ(inName,"_label_width") ) { return _label_width; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { return _list_radios; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return get_selectedIndex(); }
		if (HX_FIELD_EQ(inName,"get_clickable") ) { return get_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"set_clickable") ) { return set_clickable_dyn(); }
		if (HX_FIELD_EQ(inName,"setLineScroll") ) { return setLineScroll_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"_refreshRadios") ) { return _refreshRadios_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"_onCheckBoxEvent") ) { return _onCheckBoxEvent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedIndex") ) { return get_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedIndex") ) { return set_selectedIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIRadioGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ids") ) { _ids=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_labels") ) { _labels=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_y_space") ) { _y_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clickable") ) { return set_clickable(inValue); }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return set_selectedId(inValue); }
		if (HX_FIELD_EQ(inName,"_box_asset") ) { _box_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dot_asset") ) { _dot_asset=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_clickable") ) { _clickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_label_width") ) { _label_width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_list_radios") ) { _list_radios=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return set_selectedLabel(inValue); }
		if (HX_FIELD_EQ(inName,"selectedIndex") ) { return set_selectedIndex(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIRadioGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("clickable"));
	outFields->push(HX_CSTRING("selectedId"));
	outFields->push(HX_CSTRING("selectedLabel"));
	outFields->push(HX_CSTRING("selectedIndex"));
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("params"));
	outFields->push(HX_CSTRING("_box_asset"));
	outFields->push(HX_CSTRING("_dot_asset"));
	outFields->push(HX_CSTRING("_labels"));
	outFields->push(HX_CSTRING("_ids"));
	outFields->push(HX_CSTRING("_label_width"));
	outFields->push(HX_CSTRING("_width"));
	outFields->push(HX_CSTRING("_height"));
	outFields->push(HX_CSTRING("_y_space"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("_clickable"));
	outFields->push(HX_CSTRING("_list_radios"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,callback),HX_CSTRING("callback")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,params),HX_CSTRING("params")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_box_asset),HX_CSTRING("_box_asset")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIRadioGroup_obj,_dot_asset),HX_CSTRING("_dot_asset")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_labels),HX_CSTRING("_labels")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_ids),HX_CSTRING("_ids")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_label_width),HX_CSTRING("_label_width")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_width),HX_CSTRING("_width")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_height),HX_CSTRING("_height")},
	{hx::fsFloat,(int)offsetof(FlxUIRadioGroup_obj,_y_space),HX_CSTRING("_y_space")},
	{hx::fsInt,(int)offsetof(FlxUIRadioGroup_obj,_selected),HX_CSTRING("_selected")},
	{hx::fsBool,(int)offsetof(FlxUIRadioGroup_obj,_clickable),HX_CSTRING("_clickable")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIRadioGroup_obj,_list_radios),HX_CSTRING("_list_radios")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("callback"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("loadGraphics"),
	HX_CSTRING("destroy"),
	HX_CSTRING("updateLabel"),
	HX_CSTRING("updateId"),
	HX_CSTRING("show"),
	HX_CSTRING("updateRadios"),
	HX_CSTRING("get_clickable"),
	HX_CSTRING("set_clickable"),
	HX_CSTRING("get_selectedIndex"),
	HX_CSTRING("set_selectedIndex"),
	HX_CSTRING("get_selectedLabel"),
	HX_CSTRING("set_selectedLabel"),
	HX_CSTRING("get_selectedId"),
	HX_CSTRING("set_selectedId"),
	HX_CSTRING("setLineScroll"),
	HX_CSTRING("_box_asset"),
	HX_CSTRING("_dot_asset"),
	HX_CSTRING("_labels"),
	HX_CSTRING("_ids"),
	HX_CSTRING("_label_width"),
	HX_CSTRING("_width"),
	HX_CSTRING("_height"),
	HX_CSTRING("_y_space"),
	HX_CSTRING("_selected"),
	HX_CSTRING("_clickable"),
	HX_CSTRING("_list_radios"),
	HX_CSTRING("_refreshRadios"),
	HX_CSTRING("_onCheckBoxEvent"),
	HX_CSTRING("_onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIRadioGroup_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

Class FlxUIRadioGroup_obj::__mClass;

void FlxUIRadioGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIRadioGroup"), hx::TCanCast< FlxUIRadioGroup_obj> ,sStaticFields,sMemberFields,
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

void FlxUIRadioGroup_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_radio_group");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

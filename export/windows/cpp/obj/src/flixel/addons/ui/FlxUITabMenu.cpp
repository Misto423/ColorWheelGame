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
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUITabMenu_obj::__construct(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,Dynamic tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","new",0xc82b8b31,"flixel.addons.ui.FlxUITabMenu.new","flixel/addons/ui/FlxUITabMenu.hx",19,0x21d3489e)
HX_STACK_THIS(this)
HX_STACK_ARG(back_,"back_")
HX_STACK_ARG(tabs_,"tabs_")
HX_STACK_ARG(tab_ids_and_labels_,"tab_ids_and_labels_")
HX_STACK_ARG(tab_offset,"tab_offset")
HX_STACK_ARG(__o_stretch_tabs,"stretch_tabs")
HX_STACK_ARG(tab_spacing,"tab_spacing")
HX_STACK_ARG(tab_stacking,"tab_stacking")
Dynamic stretch_tabs = __o_stretch_tabs.Default(false);
{
	HX_STACK_LINE(275)
	this->_selected_tab = (int)-1;
	HX_STACK_LINE(274)
	this->_selected_tab_id = HX_CSTRING("");
	HX_STACK_LINE(272)
	this->_tab_offset = null();
	HX_STACK_LINE(271)
	this->_tab_stacking = null();
	HX_STACK_LINE(270)
	this->_tab_spacing = null();
	HX_STACK_LINE(269)
	this->_stretch_tabs = false;
	HX_STACK_LINE(105)
	super::__construct(null(),null());
	HX_STACK_LINE(107)
	if (((back_ == null()))){
		HX_STACK_LINE(109)
		::openfl::_v2::geom::Rectangle _g = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,(int)200,(int)200);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		::flixel::addons::ui::FlxUI9SliceSprite _g1 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/chrome_flat.png"),_g,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		back_ = _g1;
	}
	HX_STACK_LINE(112)
	this->_back = back_;
	HX_STACK_LINE(113)
	this->add(this->_back);
	HX_STACK_LINE(115)
	if (((tabs_ == null()))){
		HX_STACK_LINE(116)
		if (((tab_ids_and_labels_ != null()))){
			HX_STACK_LINE(117)
			Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(117)
			tabs_ = _g2;
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(120)
				while((true)){
					HX_STACK_LINE(120)
					if ((!(((_g < tab_ids_and_labels_->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(120)
						break;
					}
					HX_STACK_LINE(120)
					Dynamic tdata = tab_ids_and_labels_->__GetItem(_g);		HX_STACK_VAR(tdata,"tdata");
					HX_STACK_LINE(120)
					++(_g);
					HX_STACK_LINE(122)
					::flixel::addons::ui::FlxUIButton fb = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,tdata->__Field(HX_CSTRING("label"),true),null());		HX_STACK_VAR(fb,"fb");
					HX_STACK_LINE(125)
					fb->up_color = (int)16777215;
					HX_STACK_LINE(126)
					fb->down_color = (int)16777215;
					HX_STACK_LINE(127)
					fb->over_color = (int)16777215;
					HX_STACK_LINE(128)
					fb->up_toggle_color = (int)16777215;
					HX_STACK_LINE(129)
					fb->down_toggle_color = (int)16777215;
					HX_STACK_LINE(130)
					fb->over_toggle_color = (int)16777215;
					HX_STACK_LINE(132)
					fb->label->__Field(HX_CSTRING("set_color"),true)((int)16777215);
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						::flixel::addons::ui::FlxUIText _this = fb->label;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(133)
						int Color = (int)0;		HX_STACK_VAR(Color,"Color");
						HX_STACK_LINE(133)
						Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
						HX_STACK_LINE(133)
						Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
						HX_STACK_LINE(133)
						_this->set_borderStyle((int)2);
						HX_STACK_LINE(133)
						_this->set_borderColor(Color);
						HX_STACK_LINE(133)
						_this->set_borderSize(Size);
						HX_STACK_LINE(133)
						_this->set_borderQuality(Quality);
					}
					HX_STACK_LINE(135)
					fb->id = tdata->__Field(HX_CSTRING("id"),true);
					HX_STACK_LINE(138)
					Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
					HX_STACK_LINE(139)
					Array< int > slice9tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(slice9tab,"slice9tab");
					HX_STACK_LINE(140)
					Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab).Add(slice9tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
					HX_STACK_LINE(141)
					fb->loadGraphicSlice9(graphic_ids,(int)0,(int)0,slice9_ids,(int)0,(int)-1,true,null(),null(),null());
					HX_STACK_LINE(142)
					tabs_->push(fb);
				}
			}
		}
	}
	HX_STACK_LINE(147)
	this->_tabs = tabs_;
	HX_STACK_LINE(148)
	this->_stretch_tabs = stretch_tabs;
	HX_STACK_LINE(149)
	this->_tab_spacing = tab_spacing;
	HX_STACK_LINE(150)
	this->_tab_stacking = tab_stacking;
	HX_STACK_LINE(151)
	if (((this->_tab_stacking == null()))){
		HX_STACK_LINE(152)
		this->_tab_stacking = Array_obj< ::String >::__new().Add(HX_CSTRING("front")).Add(HX_CSTRING("back"));
	}
	HX_STACK_LINE(154)
	this->_tab_offset = tab_offset;
	HX_STACK_LINE(156)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(157)
	::flixel::addons::ui::FlxUIButton tab;		HX_STACK_VAR(tab,"tab");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		while((true)){
			HX_STACK_LINE(158)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(158)
				break;
			}
			HX_STACK_LINE(158)
			::flixel::addons::ui::FlxUIButton tab1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab1,"tab1");
			HX_STACK_LINE(158)
			++(_g);
			HX_STACK_LINE(159)
			this->add(tab1);
			HX_STACK_LINE(160)
			Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->_onTabEvent_dyn()));		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(160)
				Array< ::String > id = Array_obj< ::String >::__new().Add(tab1->id);		HX_STACK_VAR(id,"id");

				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_4_1,Dynamic,f,Array< ::String >,id)
				Void run(){
					HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","flixel/addons/ui/FlxUITabMenu.hx",160,0x21d3489e)
					{
						HX_STACK_LINE(160)
						return null(f->__GetItem((int)0)(id->__get((int)0)).Cast< Void >());
					}
					return null();
				}
				HX_END_LOCAL_FUNC0((void))

				HX_STACK_LINE(160)
				_g3 =  Dynamic(new _Function_4_1(f,id));
			}
			HX_STACK_LINE(160)
			tab1->onUp->callback = _g3;
			HX_STACK_LINE(161)
			(i)++;
		}
	}
	HX_STACK_LINE(164)
	this->distributeTabs();
	HX_STACK_LINE(166)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(166)
	this->_tab_groups = _g4;
}
;
	return null();
}

//FlxUITabMenu_obj::~FlxUITabMenu_obj() { }

Dynamic FlxUITabMenu_obj::__CreateEmpty() { return  new FlxUITabMenu_obj; }
hx::ObjectPtr< FlxUITabMenu_obj > FlxUITabMenu_obj::__new(::flixel::FlxSprite back_,Array< ::Dynamic > tabs_,Dynamic tab_ids_and_labels_,::flixel::util::FlxPoint tab_offset,Dynamic __o_stretch_tabs,Dynamic tab_spacing,Array< ::String > tab_stacking)
{  hx::ObjectPtr< FlxUITabMenu_obj > result = new FlxUITabMenu_obj();
	result->__construct(back_,tabs_,tab_ids_and_labels_,tab_offset,__o_stretch_tabs,tab_spacing,tab_stacking);
	return result;}

Dynamic FlxUITabMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUITabMenu_obj > result = new FlxUITabMenu_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

hx::Object *FlxUITabMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IResizable_obj)) return operator ::flixel::addons::ui::interfaces::IResizable_obj *();
	return super::__ToInterface(inType);
}

Void FlxUITabMenu_obj::getEvent( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getEvent",0x34184733,"flixel.addons.ui.FlxUITabMenu.getEvent","flixel/addons/ui/FlxUITabMenu.hx",28,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getEvent,(void))

Dynamic FlxUITabMenu_obj::getRequest( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getRequest",0xde0916a8,"flixel.addons.ui.FlxUITabMenu.getRequest","flixel/addons/ui/FlxUITabMenu.hx",34,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUITabMenu_obj,getRequest,return )

bool FlxUITabMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_skipButtonUpdate",0x94812946,"flixel.addons.ui.FlxUITabMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUITabMenu.hx",40,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(41)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(42)
	::flixel::addons::ui::FlxUIButton tab;		HX_STACK_VAR(tab,"tab");
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			::flixel::addons::ui::FlxUIButton tab1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab1,"tab1");
			HX_STACK_LINE(43)
			++(_g);
			HX_STACK_LINE(44)
			tab1->set_skipButtonUpdate(b);
		}
	}
	HX_STACK_LINE(46)
	::flixel::addons::ui::FlxUIGroup group;		HX_STACK_VAR(group,"group");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		while((true)){
			HX_STACK_LINE(47)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(47)
				break;
			}
			HX_STACK_LINE(47)
			::flixel::addons::ui::FlxUIGroup group1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(47)
			++(_g);
			HX_STACK_LINE(48)
			::flixel::FlxSprite sprite;		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(49)
				Array< ::Dynamic > _g3 = group1->group->members;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(49)
				while((true)){
					HX_STACK_LINE(49)
					if ((!(((_g2 < _g3->length))))){
						HX_STACK_LINE(49)
						break;
					}
					HX_STACK_LINE(49)
					::flixel::FlxSprite sprite1 = _g3->__get(_g2).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite1,"sprite1");
					HX_STACK_LINE(49)
					++(_g2);
					HX_STACK_LINE(50)
					if ((::Std_obj::is(sprite1,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >()))){
						HX_STACK_LINE(51)
						::flixel::addons::ui::interfaces::IFlxUIClickable widget = sprite1;		HX_STACK_VAR(widget,"widget");
						HX_STACK_LINE(52)
						widget->__Field(HX_CSTRING("set_skipButtonUpdate"),true)(b);
					}
				}
			}
		}
	}
	HX_STACK_LINE(56)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_skipButtonUpdate,return )

Float FlxUITabMenu_obj::get_width( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_width",0x5c713fee,"flixel.addons.ui.FlxUITabMenu.get_width","flixel/addons/ui/FlxUITabMenu.hx",62,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->_back->get_width();
}


Float FlxUITabMenu_obj::get_height( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_height",0x3cf628ff,"flixel.addons.ui.FlxUITabMenu.get_height","flixel/addons/ui/FlxUITabMenu.hx",65,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	::flixel::addons::ui::FlxUIButton fbt = this->getFirstTab();		HX_STACK_VAR(fbt,"fbt");
	HX_STACK_LINE(67)
	if (((fbt != null()))){
		HX_STACK_LINE(68)
		Float _g = this->_back->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		Float _g1 = (this->_back->y + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		return (_g1 - fbt->y);
	}
	HX_STACK_LINE(70)
	return this->_back->get_height();
}


Void FlxUITabMenu_obj::resize( Float W,Float H){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","resize",0xfcd977c3,"flixel.addons.ui.FlxUITabMenu.resize","flixel/addons/ui/FlxUITabMenu.hx",73,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(W,"W")
		HX_STACK_ARG(H,"H")
		HX_STACK_LINE(74)
		::flixel::addons::ui::interfaces::IResizable ir;		HX_STACK_VAR(ir,"ir");
		HX_STACK_LINE(75)
		if ((::Std_obj::is(this->_back,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(76)
			ir = this->_back;
			HX_STACK_LINE(77)
			::flixel::addons::ui::FlxUIButton fbt = this->getFirstTab();		HX_STACK_VAR(fbt,"fbt");
			HX_STACK_LINE(78)
			if (((fbt != null()))){
				HX_STACK_LINE(79)
				Float _g = fbt->get_height();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				Float _g1 = (H - _g);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(79)
				ir->resize(W,_g1);
			}
			else{
				HX_STACK_LINE(81)
				ir->resize(W,H);
			}
		}
		HX_STACK_LINE(84)
		this->distributeTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,resize,(void))

int FlxUITabMenu_obj::get_selected_tab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab",0xa5609649,"flixel.addons.ui.FlxUITabMenu.get_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",88,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(88)
	return this->_selected_tab;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab,return )

int FlxUITabMenu_obj::set_selected_tab( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab",0xfba283bd,"flixel.addons.ui.FlxUITabMenu.set_selected_tab","flixel/addons/ui/FlxUITabMenu.hx",89,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(90)
	this->showTabInt(i);
	HX_STACK_LINE(91)
	return this->_selected_tab;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab,return )

::String FlxUITabMenu_obj::get_selected_tab_id( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","get_selected_tab_id",0x4d2a2f51,"flixel.addons.ui.FlxUITabMenu.get_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",95,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(95)
	return this->_selected_tab_id;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,get_selected_tab_id,return )

::String FlxUITabMenu_obj::set_selected_tab_id( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","set_selected_tab_id",0x89c7225d,"flixel.addons.ui.FlxUITabMenu.set_selected_tab_id","flixel/addons/ui/FlxUITabMenu.hx",96,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(97)
	this->showTabId(str);
	HX_STACK_LINE(98)
	return this->_selected_tab_id;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,set_selected_tab_id,return )

Void FlxUITabMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","destroy",0x0282244b,"flixel.addons.ui.FlxUITabMenu.destroy","flixel/addons/ui/FlxUITabMenu.hx",169,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		this->super::destroy();
		HX_STACK_LINE(171)
		::flixel::addons::ui::U_obj::clearArray(this->_tab_groups);
		HX_STACK_LINE(172)
		::flixel::addons::ui::U_obj::clearArray(this->_tabs);
		HX_STACK_LINE(173)
		this->_back = null();
		HX_STACK_LINE(174)
		this->_tabs = null();
		HX_STACK_LINE(175)
		this->_tab_groups = null();
	}
return null();
}


::flixel::addons::ui::FlxUIButton FlxUITabMenu_obj::getTab( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTab",0x9785b12e,"flixel.addons.ui.FlxUITabMenu.getTab","flixel/addons/ui/FlxUITabMenu.hx",178,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(179)
	if (((id != null()))){
		HX_STACK_LINE(180)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(180)
		while((true)){
			HX_STACK_LINE(180)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(180)
				break;
			}
			HX_STACK_LINE(180)
			::flixel::addons::ui::FlxUIButton tab = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab,"tab");
			HX_STACK_LINE(180)
			++(_g);
			HX_STACK_LINE(181)
			if (((tab->id == id))){
				HX_STACK_LINE(182)
				return tab;
			}
		}
	}
	HX_STACK_LINE(186)
	if (((index != null()))){
		HX_STACK_LINE(187)
		if (((index < this->_tabs->length))){
			HX_STACK_LINE(188)
			return this->_tabs->__get(index).StaticCast< ::flixel::addons::ui::FlxUIButton >();
		}
	}
	HX_STACK_LINE(191)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTab,return )

::flixel::addons::ui::FlxUIGroup FlxUITabMenu_obj::getTabGroup( ::String id,Dynamic index){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getTabGroup",0xc2c56b31,"flixel.addons.ui.FlxUITabMenu.getTabGroup","flixel/addons/ui/FlxUITabMenu.hx",194,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(195)
	::flixel::addons::ui::FlxUIGroup tabGroup;		HX_STACK_VAR(tabGroup,"tabGroup");
	HX_STACK_LINE(196)
	if (((id != null()))){
		HX_STACK_LINE(197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(197)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(197)
		while((true)){
			HX_STACK_LINE(197)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(197)
				break;
			}
			HX_STACK_LINE(197)
			::flixel::addons::ui::FlxUIGroup tabGroup1 = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(tabGroup1,"tabGroup1");
			HX_STACK_LINE(197)
			++(_g);
			HX_STACK_LINE(198)
			if (((tabGroup1->id == id))){
				HX_STACK_LINE(199)
				return tabGroup1;
			}
		}
	}
	HX_STACK_LINE(203)
	if (((index != null()))){
		HX_STACK_LINE(204)
		if (((index < this->_tab_groups->length))){
			HX_STACK_LINE(205)
			return this->_tab_groups->__get(index).StaticCast< ::flixel::addons::ui::FlxUIGroup >();
		}
	}
	HX_STACK_LINE(208)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,getTabGroup,return )

Void FlxUITabMenu_obj::addGroup( ::flixel::addons::ui::FlxUIGroup g){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","addGroup",0x71ce48ed,"flixel.addons.ui.FlxUITabMenu.addGroup","flixel/addons/ui/FlxUITabMenu.hx",211,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(212)
		if (((g == hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(213)
			return null();
		}
		HX_STACK_LINE(216)
		if ((!(this->hasThis(g)))){
			HX_STACK_LINE(217)
			g->set_y((this->_back->y - this->y));
			HX_STACK_LINE(218)
			this->add(g);
			HX_STACK_LINE(219)
			this->_tab_groups->push(g);
		}
		HX_STACK_LINE(223)
		this->_showOnlyGroup(HX_CSTRING(""));
		HX_STACK_LINE(226)
		if (((this->_tab_groups->length == (int)1))){
			HX_STACK_LINE(227)
			this->set_selected_tab((int)0);
		}
		HX_STACK_LINE(231)
		if (((this->_selected_tab != (int)-1))){
			HX_STACK_LINE(232)
			this->set_selected_tab(this->_selected_tab);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,addGroup,(void))

Void FlxUITabMenu_obj::_onTabEvent( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_onTabEvent",0x28e25eb4,"flixel.addons.ui.FlxUITabMenu._onTabEvent","flixel/addons/ui/FlxUITabMenu.hx",236,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(237)
		this->showTabId(id);
		HX_STACK_LINE(238)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(239)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("tab_menu_click"),hx::ObjectPtr<OBJ_>(this),id,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_onTabEvent,(void))

Void FlxUITabMenu_obj::showTabId( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabId",0x87ad2ce4,"flixel.addons.ui.FlxUITabMenu.showTabId","flixel/addons/ui/FlxUITabMenu.hx",243,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(245)
		this->_selected_tab = (int)-1;
		HX_STACK_LINE(246)
		this->_selected_tab_id = HX_CSTRING("");
		HX_STACK_LINE(248)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				::flixel::addons::ui::FlxUIButton tab = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(250)
				tab->toggled = false;
				HX_STACK_LINE(251)
				tab->forceStateHandler(HX_CSTRING("out_button"));
				HX_STACK_LINE(252)
				if (((tab->id == id))){
					HX_STACK_LINE(253)
					tab->toggled = true;
					HX_STACK_LINE(254)
					this->_selected_tab_id = id;
					HX_STACK_LINE(255)
					this->_selected_tab = i;
				}
				HX_STACK_LINE(257)
				(i)++;
			}
		}
		HX_STACK_LINE(260)
		this->_showOnlyGroup(id);
		HX_STACK_LINE(261)
		this->stackTabs();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabId,(void))

Void FlxUITabMenu_obj::stackTabs( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","stackTabs",0x2659b577,"flixel.addons.ui.FlxUITabMenu.stackTabs","flixel/addons/ui/FlxUITabMenu.hx",277,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(278)
		Float _backx = this->_back->x;		HX_STACK_VAR(_backx,"_backx");
		HX_STACK_LINE(279)
		Float _backy = this->_back->y;		HX_STACK_VAR(_backy,"_backy");
		HX_STACK_LINE(281)
		Array< ::Dynamic > _tabPts = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_tabPts,"_tabPts");
		HX_STACK_LINE(283)
		this->remove(this->_back,true);
		HX_STACK_LINE(285)
		{
			HX_STACK_LINE(285)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(285)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(285)
			while((true)){
				HX_STACK_LINE(285)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(285)
					break;
				}
				HX_STACK_LINE(285)
				::flixel::addons::ui::FlxUIButton tab = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(285)
				++(_g);
				HX_STACK_LINE(286)
				if ((tab->toggled)){
					HX_STACK_LINE(287)
					::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(287)
					{
						HX_STACK_LINE(287)
						::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(tab->x,tab->y);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(287)
						point->_inPool = false;
						HX_STACK_LINE(287)
						_g2 = point;
					}
					HX_STACK_LINE(287)
					_tabPts->push(_g2);
					HX_STACK_LINE(288)
					this->remove(tab,true);
				}
			}
		}
		HX_STACK_LINE(292)
		this->add(this->_back);
		HX_STACK_LINE(294)
		{
			HX_STACK_LINE(294)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(294)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(294)
			while((true)){
				HX_STACK_LINE(294)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(294)
					break;
				}
				HX_STACK_LINE(294)
				::flixel::addons::ui::FlxUIButton tab = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(294)
				++(_g);
				HX_STACK_LINE(295)
				if ((tab->toggled)){
					HX_STACK_LINE(296)
					this->add(tab);
					HX_STACK_LINE(297)
					tab->set_x(_tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->x);
					HX_STACK_LINE(298)
					tab->set_y(_tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->y);
					HX_STACK_LINE(299)
					_tabPts->__get((int)0).StaticCast< ::flixel::util::FlxPoint >()->put();
					HX_STACK_LINE(300)
					_tabPts->splice((int)0,(int)1);
				}
			}
		}
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				::flixel::addons::ui::FlxUIGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group,"group");
				HX_STACK_LINE(305)
				++(_g);
				HX_STACK_LINE(306)
				Float tempX = group->x;		HX_STACK_VAR(tempX,"tempX");
				HX_STACK_LINE(307)
				Float tempY = group->y;		HX_STACK_VAR(tempY,"tempY");
				HX_STACK_LINE(308)
				this->remove(group,true);
				HX_STACK_LINE(309)
				this->add(group);
				HX_STACK_LINE(310)
				group->set_x(tempX);
				HX_STACK_LINE(311)
				group->set_y(tempY);
			}
		}
		HX_STACK_LINE(314)
		this->_back->set_x(_backx);
		HX_STACK_LINE(315)
		this->_back->set_y(_backy);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,stackTabs,(void))

int FlxUITabMenu_obj::sortTabs( ::flixel::addons::ui::FlxUIButton a,::flixel::addons::ui::FlxUIButton b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","sortTabs",0xaeee7a8b,"flixel.addons.ui.FlxUITabMenu.sortTabs","flixel/addons/ui/FlxUITabMenu.hx",318,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(319)
	if (((a->id < b->id))){
		HX_STACK_LINE(320)
		return (int)-1;
	}
	else{
		HX_STACK_LINE(321)
		if (((a->id > b->id))){
			HX_STACK_LINE(322)
			return (int)1;
		}
	}
	HX_STACK_LINE(324)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUITabMenu_obj,sortTabs,return )

Void FlxUITabMenu_obj::showTabInt( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","showTabInt",0x2fda23c6,"flixel.addons.ui.FlxUITabMenu.showTabInt","flixel/addons/ui/FlxUITabMenu.hx",328,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(328)
		if (((bool((bool((i >= (int)0)) && bool((this->_tabs != null())))) && bool((this->_tabs->length > i))))){
			HX_STACK_LINE(329)
			::flixel::addons::ui::FlxUIButton _tab = this->_tabs->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(_tab,"_tab");
			HX_STACK_LINE(330)
			::String id = _tab->id;		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(331)
			this->showTabId(id);
		}
		else{
			HX_STACK_LINE(333)
			this->showTabId(HX_CSTRING(""));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,showTabInt,(void))

Void FlxUITabMenu_obj::_showOnlyGroup( ::String id){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","_showOnlyGroup",0xbe9f6e86,"flixel.addons.ui.FlxUITabMenu._showOnlyGroup","flixel/addons/ui/FlxUITabMenu.hx",338,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_LINE(338)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(338)
		Array< ::Dynamic > _g1 = this->_tab_groups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(338)
		while((true)){
			HX_STACK_LINE(338)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(338)
				break;
			}
			HX_STACK_LINE(338)
			::flixel::addons::ui::FlxUIGroup group = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIGroup >();		HX_STACK_VAR(group,"group");
			HX_STACK_LINE(338)
			++(_g);
			HX_STACK_LINE(339)
			if (((group->id == id))){
				HX_STACK_LINE(340)
				bool _g2 = group->set_active(true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(340)
				group->set_visible(_g2);
			}
			else{
				HX_STACK_LINE(342)
				bool _g11 = group->set_active(false);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(342)
				group->set_visible(_g11);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUITabMenu_obj,_showOnlyGroup,(void))

::flixel::addons::ui::FlxUIButton FlxUITabMenu_obj::getFirstTab( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","getFirstTab",0xab440e8c,"flixel.addons.ui.FlxUITabMenu.getFirstTab","flixel/addons/ui/FlxUITabMenu.hx",347,0x21d3489e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(348)
	::flixel::addons::ui::FlxUIButton _the_tab = null();		HX_STACK_VAR(_the_tab,"_the_tab");
	HX_STACK_LINE(349)
	if (((bool((this->_tabs != null())) && bool((this->_tabs->length > (int)0))))){
		HX_STACK_LINE(350)
		_the_tab = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >();
	}
	HX_STACK_LINE(352)
	return _the_tab;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,getFirstTab,return )

Void FlxUITabMenu_obj::distributeTabs( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUITabMenu","distributeTabs",0xcf609f0e,"flixel.addons.ui.FlxUITabMenu.distributeTabs","flixel/addons/ui/FlxUITabMenu.hx",355,0x21d3489e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(356)
		Float xx = (int)0;		HX_STACK_VAR(xx,"xx");
		HX_STACK_LINE(358)
		Float tab_width = (int)0;		HX_STACK_VAR(tab_width,"tab_width");
		HX_STACK_LINE(360)
		Float diff_size = (int)0;		HX_STACK_VAR(diff_size,"diff_size");
		HX_STACK_LINE(361)
		if ((this->_stretch_tabs)){
			HX_STACK_LINE(362)
			Float _g = this->_back->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(362)
			Float _g1 = (Float(_g) / Float(this->_tabs->length));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(362)
			tab_width = _g1;
			HX_STACK_LINE(363)
			int _g2 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(363)
			Float tot_size = (_g2 * this->_tabs->length);		HX_STACK_VAR(tot_size,"tot_size");
			HX_STACK_LINE(364)
			Float _g3 = this->_back->get_width();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(364)
			if (((tot_size < _g3))){
				HX_STACK_LINE(365)
				Float _g4 = this->_back->get_width();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(365)
				Float _g5 = (_g4 - tot_size);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(365)
				diff_size = _g5;
			}
		}
		HX_STACK_LINE(369)
		this->_tabs->sort(this->sortTabs_dyn());
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			Array< ::Dynamic > _g1 = this->_tabs;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::flixel::addons::ui::FlxUIButton tab = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(tab,"tab");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(373)
				tab->set_x((this->x + xx));
				HX_STACK_LINE(374)
				tab->set_y(this->y);
				HX_STACK_LINE(376)
				if (((this->_tab_offset != null()))){
					HX_STACK_LINE(377)
					{
						HX_STACK_LINE(377)
						::flixel::addons::ui::FlxUIButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(377)
						_g2->set_x((_g2->x + this->_tab_offset->x));
					}
					HX_STACK_LINE(378)
					{
						HX_STACK_LINE(378)
						::flixel::addons::ui::FlxUIButton _g2 = tab;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(378)
						_g2->set_y((_g2->y + this->_tab_offset->y));
					}
				}
				HX_STACK_LINE(381)
				if ((this->_stretch_tabs)){
					HX_STACK_LINE(382)
					if (((diff_size > (int)0))){
						HX_STACK_LINE(383)
						Float _g6 = tab->get_height();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(383)
						tab->resize((tab_width + (int)1),_g6);
						HX_STACK_LINE(384)
						int _g7 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(384)
						int _g8 = (_g7 + (int)1);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(384)
						hx::AddEq(xx,_g8);
						HX_STACK_LINE(385)
						hx::SubEq(diff_size,(int)1);
					}
					else{
						HX_STACK_LINE(387)
						Float _g9 = tab->get_height();		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(387)
						tab->resize(tab_width,_g9);
						HX_STACK_LINE(388)
						int _g10 = ::Std_obj::_int(tab_width);		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(388)
						hx::AddEq(xx,_g10);
					}
				}
				else{
					HX_STACK_LINE(391)
					if (((this->_tab_spacing != null()))){
						HX_STACK_LINE(392)
						Float _g11 = tab->get_width();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(392)
						Float _g12 = (_g11 + this->_tab_spacing);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(392)
						hx::AddEq(xx,_g12);
					}
					else{
						HX_STACK_LINE(394)
						Float _g13 = tab->get_width();		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(394)
						hx::AddEq(xx,_g13);
					}
				}
			}
		}
		HX_STACK_LINE(399)
		if (((bool((bool((this->_tabs != null())) && bool((this->_tabs->length > (int)0)))) && bool((this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >() != null()))))){
			HX_STACK_LINE(400)
			Float _g14 = this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >()->get_height();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(400)
			Float _g15 = (this->_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >()->y + _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(400)
			Float _g16 = (_g15 - (int)2);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(400)
			this->_back->set_y(_g16);
			HX_STACK_LINE(401)
			if (((this->_tab_offset != null()))){
				HX_STACK_LINE(402)
				::flixel::FlxSprite _g = this->_back;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(402)
				_g->set_y((_g->y - this->_tab_offset->y));
			}
		}
		HX_STACK_LINE(406)
		this->calcBounds();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUITabMenu_obj,distributeTabs,(void))

::String FlxUITabMenu_obj::CLICK_EVENT;

::String FlxUITabMenu_obj::STACK_FRONT;

::String FlxUITabMenu_obj::STACK_BACK;


FlxUITabMenu_obj::FlxUITabMenu_obj()
{
}

void FlxUITabMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUITabMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_back,"_back");
	HX_MARK_MEMBER_NAME(_tabs,"_tabs");
	HX_MARK_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_MARK_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_MARK_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_MARK_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_MARK_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_MARK_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_MARK_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUITabMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_back,"_back");
	HX_VISIT_MEMBER_NAME(_tabs,"_tabs");
	HX_VISIT_MEMBER_NAME(_tab_groups,"_tab_groups");
	HX_VISIT_MEMBER_NAME(_stretch_tabs,"_stretch_tabs");
	HX_VISIT_MEMBER_NAME(_tab_spacing,"_tab_spacing");
	HX_VISIT_MEMBER_NAME(_tab_stacking,"_tab_stacking");
	HX_VISIT_MEMBER_NAME(_tab_offset,"_tab_offset");
	HX_VISIT_MEMBER_NAME(_selected_tab_id,"_selected_tab_id");
	HX_VISIT_MEMBER_NAME(_selected_tab,"_selected_tab");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUITabMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { return _back; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { return _tabs; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"getTab") ) { return getTab_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addGroup") ) { return addGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"sortTabs") ) { return sortTabs_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabId") ) { return showTabId_dyn(); }
		if (HX_FIELD_EQ(inName,"stackTabs") ) { return stackTabs_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		if (HX_FIELD_EQ(inName,"showTabInt") ) { return showTabInt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getTabGroup") ) { return getTabGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_onTabEvent") ) { return _onTabEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { return _tab_groups; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { return _tab_offset; }
		if (HX_FIELD_EQ(inName,"getFirstTab") ) { return getFirstTab_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { return get_selected_tab(); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { return _tab_spacing; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { return _stretch_tabs; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { return _tab_stacking; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { return _selected_tab; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_showOnlyGroup") ) { return _showOnlyGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"distributeTabs") ) { return distributeTabs_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { return get_selected_tab_id(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		if (HX_FIELD_EQ(inName,"get_selected_tab") ) { return get_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab") ) { return set_selected_tab_dyn(); }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { return _selected_tab_id; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_selected_tab_id") ) { return get_selected_tab_id_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selected_tab_id") ) { return set_selected_tab_id_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUITabMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_back") ) { _back=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tabs") ) { _tabs=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_tab_groups") ) { _tab_groups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_offset") ) { _tab_offset=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selected_tab") ) { return set_selected_tab(inValue); }
		if (HX_FIELD_EQ(inName,"_tab_spacing") ) { _tab_spacing=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_stretch_tabs") ) { _stretch_tabs=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tab_stacking") ) { _tab_stacking=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab") ) { _selected_tab=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selected_tab_id") ) { return set_selected_tab_id(inValue); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected_tab_id") ) { _selected_tab_id=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUITabMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("selected_tab"));
	outFields->push(HX_CSTRING("selected_tab_id"));
	outFields->push(HX_CSTRING("_back"));
	outFields->push(HX_CSTRING("_tabs"));
	outFields->push(HX_CSTRING("_tab_groups"));
	outFields->push(HX_CSTRING("_stretch_tabs"));
	outFields->push(HX_CSTRING("_tab_spacing"));
	outFields->push(HX_CSTRING("_tab_stacking"));
	outFields->push(HX_CSTRING("_tab_offset"));
	outFields->push(HX_CSTRING("_selected_tab_id"));
	outFields->push(HX_CSTRING("_selected_tab"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("STACK_FRONT"),
	HX_CSTRING("STACK_BACK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUITabMenu_obj,_back),HX_CSTRING("_back")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITabMenu_obj,_tabs),HX_CSTRING("_tabs")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_groups),HX_CSTRING("_tab_groups")},
	{hx::fsBool,(int)offsetof(FlxUITabMenu_obj,_stretch_tabs),HX_CSTRING("_stretch_tabs")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_spacing),HX_CSTRING("_tab_spacing")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_stacking),HX_CSTRING("_tab_stacking")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxUITabMenu_obj,_tab_offset),HX_CSTRING("_tab_offset")},
	{hx::fsString,(int)offsetof(FlxUITabMenu_obj,_selected_tab_id),HX_CSTRING("_selected_tab_id")},
	{hx::fsInt,(int)offsetof(FlxUITabMenu_obj,_selected_tab),HX_CSTRING("_selected_tab")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getEvent"),
	HX_CSTRING("getRequest"),
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	HX_CSTRING("resize"),
	HX_CSTRING("get_selected_tab"),
	HX_CSTRING("set_selected_tab"),
	HX_CSTRING("get_selected_tab_id"),
	HX_CSTRING("set_selected_tab_id"),
	HX_CSTRING("destroy"),
	HX_CSTRING("getTab"),
	HX_CSTRING("getTabGroup"),
	HX_CSTRING("addGroup"),
	HX_CSTRING("_onTabEvent"),
	HX_CSTRING("showTabId"),
	HX_CSTRING("_back"),
	HX_CSTRING("_tabs"),
	HX_CSTRING("_tab_groups"),
	HX_CSTRING("_stretch_tabs"),
	HX_CSTRING("_tab_spacing"),
	HX_CSTRING("_tab_stacking"),
	HX_CSTRING("_tab_offset"),
	HX_CSTRING("_selected_tab_id"),
	HX_CSTRING("_selected_tab"),
	HX_CSTRING("stackTabs"),
	HX_CSTRING("sortTabs"),
	HX_CSTRING("showTabInt"),
	HX_CSTRING("_showOnlyGroup"),
	HX_CSTRING("getFirstTab"),
	HX_CSTRING("distributeTabs"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_MARK_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::CLICK_EVENT,"CLICK_EVENT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_FRONT,"STACK_FRONT");
	HX_VISIT_MEMBER_NAME(FlxUITabMenu_obj::STACK_BACK,"STACK_BACK");
};

#endif

Class FlxUITabMenu_obj::__mClass;

void FlxUITabMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUITabMenu"), hx::TCanCast< FlxUITabMenu_obj> ,sStaticFields,sMemberFields,
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

void FlxUITabMenu_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("tab_menu_click");
	STACK_FRONT= HX_CSTRING("front");
	STACK_BACK= HX_CSTRING("back");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

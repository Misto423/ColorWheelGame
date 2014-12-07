#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownHeader
#include <flixel/addons/ui/FlxUIDropDownHeader.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#include <flixel/addons/ui/FlxUIDropDownMenu.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUIRadioGroup
#include <flixel/addons/ui/FlxUIRadioGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITabMenu
#include <flixel/addons/ui/FlxUITabMenu.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITileTest
#include <flixel/addons/ui/FlxUITileTest.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
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
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
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
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
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

Void FlxUI_obj::__construct(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUI","new",0x89fff7c7,"flixel.addons.ui.FlxUI.new","flixel/addons/ui/FlxUI.hx",44,0xf354486a)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(ptr,"ptr")
HX_STACK_ARG(superIndex_,"superIndex_")
HX_STACK_ARG(tongue_,"tongue_")
{
	HX_STACK_LINE(734)
	this->_safe_input_delay_elapsed = 0.0;
	HX_STACK_LINE(729)
	this->_curr_mode = HX_CSTRING("");
	HX_STACK_LINE(76)
	this->getTextFallback = null();
	HX_STACK_LINE(52)
	this->failed_by = (int)0;
	HX_STACK_LINE(51)
	this->failed = false;
	HX_STACK_LINE(49)
	this->safe_input_delay_time = 0.01;
	HX_STACK_LINE(48)
	this->do_safe_input_delay = true;
	HX_STACK_LINE(191)
	super::__construct(null(),null());
	HX_STACK_LINE(192)
	this->_ptr_tongue = tongue_;
	HX_STACK_LINE(196)
	this->_ptr = ptr;
	HX_STACK_LINE(197)
	if (((superIndex_ != null()))){
		HX_STACK_LINE(198)
		this->setSuperIndex(superIndex_);
	}
	HX_STACK_LINE(200)
	if (((data != null()))){
		HX_STACK_LINE(201)
		this->load(data);
	}
}
;
	return null();
}

//FlxUI_obj::~FlxUI_obj() { }

Dynamic FlxUI_obj::__CreateEmpty() { return  new FlxUI_obj; }
hx::ObjectPtr< FlxUI_obj > FlxUI_obj::__new(::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IEventGetter ptr,::flixel::addons::ui::FlxUI superIndex_,::flixel::addons::ui::interfaces::IFireTongue tongue_)
{  hx::ObjectPtr< FlxUI_obj > result = new FlxUI_obj();
	result->__construct(data,ptr,superIndex_,tongue_);
	return result;}

Dynamic FlxUI_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUI_obj > result = new FlxUI_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

hx::Object *FlxUI_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::addons::ui::interfaces::IEventGetter_obj)) return operator ::flixel::addons::ui::interfaces::IEventGetter_obj *();
	return super::__ToInterface(inType);
}

::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::get_tongue( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_tongue",0x7aee5906,"flixel.addons.ui.FlxUI.get_tongue","flixel/addons/ui/FlxUI.hx",55,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->_ptr_tongue;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_tongue,return )

::flixel::addons::ui::interfaces::IFireTongue FlxUI_obj::set_tongue( ::flixel::addons::ui::interfaces::IFireTongue t){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_tongue",0x7e6bf77a,"flixel.addons.ui.FlxUI.set_tongue","flixel/addons/ui/FlxUI.hx",57,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	this->_ptr_tongue = t;
	HX_STACK_LINE(59)
	this->_tongueSet(this->group->members,t);
	HX_STACK_LINE(60)
	return this->_ptr_tongue;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_tongue,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::set_focus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_focus",0xbe69d6e2,"flixel.addons.ui.FlxUI.set_focus","flixel/addons/ui/FlxUI.hx",64,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(widget,"widget")
	HX_STACK_LINE(65)
	if (((this->focus != null()))){
		HX_STACK_LINE(66)
		this->onFocusLost(this->focus);
	}
	HX_STACK_LINE(68)
	this->focus = widget;
	HX_STACK_LINE(69)
	if (((this->focus != null()))){
		HX_STACK_LINE(70)
		this->onFocus(this->focus);
	}
	HX_STACK_LINE(72)
	return widget;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_focus,return )

Void FlxUI_obj::_tongueSet( Array< ::Dynamic > list,::flixel::addons::ui::interfaces::IFireTongue tongue){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_tongueSet",0x62471f78,"flixel.addons.ui.FlxUI._tongueSet","flixel/addons/ui/FlxUI.hx",86,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(list,"list")
		HX_STACK_ARG(tongue,"tongue")
		HX_STACK_LINE(86)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(86)
		while((true)){
			HX_STACK_LINE(86)
			if ((!(((_g < list->length))))){
				HX_STACK_LINE(86)
				break;
			}
			HX_STACK_LINE(86)
			::flixel::FlxSprite fs = list->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fs,"fs");
			HX_STACK_LINE(86)
			++(_g);
			HX_STACK_LINE(87)
			if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >()))){
				HX_STACK_LINE(88)
				::flixel::addons::ui::FlxUIGroup g;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(88)
				g = hx::TCast< flixel::addons::ui::FlxUIGroup >::cast(fs);
				HX_STACK_LINE(89)
				this->_tongueSet(g->group->members,tongue);
			}
			else{
				HX_STACK_LINE(90)
				if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::addons::ui::FlxUI >()))){
					HX_STACK_LINE(91)
					::flixel::addons::ui::FlxUI fu;		HX_STACK_VAR(fu,"fu");
					HX_STACK_LINE(91)
					fu = hx::TCast< flixel::addons::ui::FlxUI >::cast(fs);
					HX_STACK_LINE(92)
					fu->set_tongue(tongue);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_tongueSet,(void))

Void FlxUI_obj::callEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","callEvent",0x94ea5143,"flixel.addons.ui.FlxUI.callEvent","flixel/addons/ui/FlxUI.hx",171,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(171)
		this->getEvent(id,sender,data,params);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,callEvent,(void))

Void FlxUI_obj::getEvent( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","getEvent",0xd6447add,"flixel.addons.ui.FlxUI.getEvent","flixel/addons/ui/FlxUI.hx",175,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(175)
		if (((this->_ptr != null()))){
			HX_STACK_LINE(176)
			this->_ptr->getEvent(id,sender,data,params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getEvent,(void))

Dynamic FlxUI_obj::getRequest( ::String id,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getRequest",0x8a6908d2,"flixel.addons.ui.FlxUI.getRequest","flixel/addons/ui/FlxUI.hx",180,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(181)
	if (((this->_ptr != null()))){
		HX_STACK_LINE(182)
		return this->_ptr->getRequest(id,sender,data,params);
	}
	HX_STACK_LINE(184)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getRequest,return )

Void FlxUI_obj::onFocus( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocus",0x59586520,"flixel.addons.ui.FlxUI.onFocus","flixel/addons/ui/FlxUI.hx",206,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(206)
		if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
			HX_STACK_LINE(208)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(208)
			Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(208)
			while((true)){
				HX_STACK_LINE(208)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(208)
					break;
				}
				HX_STACK_LINE(208)
				::flixel::FlxSprite asset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(208)
				++(_g);
				HX_STACK_LINE(209)
				this->setWidgetSuppression(asset,widget,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocus,(void))

Void FlxUI_obj::setWidgetSuppression( ::flixel::FlxSprite asset,::flixel::addons::ui::interfaces::IFlxUIWidget butNotThisOne,hx::Null< bool >  __o_suppressed){
bool suppressed = __o_suppressed.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setWidgetSuppression",0x343faf06,"flixel.addons.ui.FlxUI.setWidgetSuppression","flixel/addons/ui/FlxUI.hx",215,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(butNotThisOne,"butNotThisOne")
	HX_STACK_ARG(suppressed,"suppressed")
{
		HX_STACK_LINE(215)
		if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIClickable >()))){
			HX_STACK_LINE(216)
			bool skip = false;		HX_STACK_VAR(skip,"skip");
			HX_STACK_LINE(217)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
				HX_STACK_LINE(218)
				::flixel::addons::ui::FlxUIDropDownMenu ddasset = asset;		HX_STACK_VAR(ddasset,"ddasset");
				HX_STACK_LINE(219)
				if (((ddasset == butNotThisOne))){
					HX_STACK_LINE(220)
					skip = true;
				}
			}
			HX_STACK_LINE(223)
			if ((!(skip))){
				HX_STACK_LINE(224)
				::flixel::addons::ui::interfaces::IFlxUIClickable ibtn = asset;		HX_STACK_VAR(ibtn,"ibtn");
				HX_STACK_LINE(225)
				ibtn->__Field(HX_CSTRING("set_skipButtonUpdate"),true)(suppressed);
			}
		}
		else{
			HX_STACK_LINE(227)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::addons::ui::FlxUIGroup >()))){
				HX_STACK_LINE(228)
				::flixel::addons::ui::FlxUIGroup g = asset;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(229)
				{
					HX_STACK_LINE(229)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(229)
					Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(229)
					while((true)){
						HX_STACK_LINE(229)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(229)
							break;
						}
						HX_STACK_LINE(229)
						::flixel::FlxSprite groupAsset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(groupAsset,"groupAsset");
						HX_STACK_LINE(229)
						++(_g);
						HX_STACK_LINE(230)
						this->setWidgetSuppression(groupAsset,butNotThisOne,suppressed);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,setWidgetSuppression,(void))

Void FlxUI_obj::onFocusLost( ::flixel::addons::ui::interfaces::IFlxUIWidget widget){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","onFocusLost",0xfd524b24,"flixel.addons.ui.FlxUI.onFocusLost","flixel/addons/ui/FlxUI.hx",241,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(widget,"widget")
		HX_STACK_LINE(241)
		if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::FlxUIDropDownMenu >()))){
			HX_STACK_LINE(245)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(245)
			Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(245)
			while((true)){
				HX_STACK_LINE(245)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(245)
					break;
				}
				HX_STACK_LINE(245)
				::flixel::FlxSprite asset = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(asset,"asset");
				HX_STACK_LINE(245)
				++(_g);
				HX_STACK_LINE(246)
				this->setWidgetSuppression(asset,null(),false);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,onFocusLost,(void))

Void FlxUI_obj::setSuperIndex( ::flixel::addons::ui::FlxUI flxUI){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","setSuperIndex",0x53bc1800,"flixel.addons.ui.FlxUI.setSuperIndex","flixel/addons/ui/FlxUI.hx",257,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flxUI,"flxUI")
		HX_STACK_LINE(257)
		this->_superIndexUI = flxUI;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,setSuperIndex,(void))

Void FlxUI_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","update",0x5c40b902,"flixel.addons.ui.FlxUI.update","flixel/addons/ui/FlxUI.hx",260,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		if ((this->do_safe_input_delay)){
			HX_STACK_LINE(262)
			hx::AddEq(this->_safe_input_delay_elapsed,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(263)
			if (((this->_safe_input_delay_elapsed > this->safe_input_delay_time))){
				HX_STACK_LINE(264)
				this->do_safe_input_delay = false;
			}
			else{
				HX_STACK_LINE(266)
				return null();
			}
		}
		HX_STACK_LINE(270)
		this->super::update();
	}
return null();
}


::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::removeAsset( ::String key,hx::Null< bool >  __o_destroy){
bool destroy = __o_destroy.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","removeAsset",0xe039ad73,"flixel.addons.ui.FlxUI.removeAsset","flixel/addons/ui/FlxUI.hx",280,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(destroy,"destroy")
{
		HX_STACK_LINE(281)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->getAsset(key,false);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(282)
		if (((asset != null()))){
			HX_STACK_LINE(283)
			this->replaceInGroup(asset,null(),true);
			HX_STACK_LINE(284)
			this->_asset_index->remove(key);
		}
		HX_STACK_LINE(286)
		if ((destroy)){
			HX_STACK_LINE(287)
			asset->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(288)
			asset = null();
		}
		HX_STACK_LINE(290)
		return asset;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,removeAsset,return )

bool FlxUI_obj::addAsset( ::flixel::addons::ui::interfaces::IFlxUIWidget asset,::String key,::String __o_group_id,hx::Null< bool >  __o_recursive){
::String group_id = __o_group_id.Default(HX_CSTRING(""));
bool recursive = __o_recursive.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","addAsset",0xa03f3348,"flixel.addons.ui.FlxUI.addAsset","flixel/addons/ui/FlxUI.hx",301,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(asset,"asset")
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(group_id,"group_id")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(302)
		if ((this->_asset_index->exists(key))){
			HX_STACK_LINE(303)
			return false;
		}
		HX_STACK_LINE(306)
		::flixel::addons::ui::FlxUIGroup g = this->getGroup(group_id,recursive);		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(307)
		if (((g != null()))){
			HX_STACK_LINE(308)
			g->add(asset);
		}
		else{
			HX_STACK_LINE(310)
			this->add(asset);
		}
		HX_STACK_LINE(313)
		this->_asset_index->set(key,asset);
		HX_STACK_LINE(315)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,addAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::replaceAsset( ::String key,::flixel::addons::ui::interfaces::IFlxUIWidget replace,hx::Null< bool >  __o_center_x,hx::Null< bool >  __o_center_y,hx::Null< bool >  __o_destroy_old){
bool center_x = __o_center_x.Default(true);
bool center_y = __o_center_y.Default(true);
bool destroy_old = __o_destroy_old.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceAsset",0xb0d588d5,"flixel.addons.ui.FlxUI.replaceAsset","flixel/addons/ui/FlxUI.hx",326,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(center_x,"center_x")
	HX_STACK_ARG(center_y,"center_y")
	HX_STACK_ARG(destroy_old,"destroy_old")
{
		HX_STACK_LINE(328)
		::flixel::addons::ui::interfaces::IFlxUIWidget original = this->getAsset(key,false);		HX_STACK_VAR(original,"original");
		HX_STACK_LINE(330)
		if (((original != null()))){
			HX_STACK_LINE(332)
			if ((!(center_x))){
				HX_STACK_LINE(333)
				replace->__Field(HX_CSTRING("set_x"),true)(original->__Field(HX_CSTRING("x"),true));
			}
			else{
				HX_STACK_LINE(335)
				Float _g = original->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(335)
				Float _g1 = replace->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(335)
				Float _g2 = (_g - _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(335)
				Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(335)
				Float _g4 = (original->__Field(HX_CSTRING("x"),true) + _g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(335)
				replace->__Field(HX_CSTRING("set_x"),true)(_g4);
			}
			HX_STACK_LINE(337)
			if ((!(center_y))){
				HX_STACK_LINE(338)
				replace->__Field(HX_CSTRING("set_y"),true)(original->__Field(HX_CSTRING("y"),true));
			}
			else{
				HX_STACK_LINE(340)
				Float _g5 = original->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(340)
				Float _g6 = replace->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(340)
				Float _g7 = (_g5 - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(340)
				Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(340)
				Float _g9 = (original->__Field(HX_CSTRING("y"),true) + _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(340)
				replace->__Field(HX_CSTRING("set_y"),true)(_g9);
			}
			HX_STACK_LINE(344)
			this->replaceInGroup(original,replace,null());
			HX_STACK_LINE(347)
			this->_asset_index->remove(key);
			HX_STACK_LINE(350)
			this->_asset_index->set(key,replace);
			HX_STACK_LINE(353)
			if ((destroy_old)){
				HX_STACK_LINE(354)
				original->__Field(HX_CSTRING("destroy"),true)();
				HX_STACK_LINE(355)
				original = null();
			}
		}
		HX_STACK_LINE(359)
		return original;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,replaceAsset,return )

Void FlxUI_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","destroy",0xe31793e1,"flixel.addons.ui.FlxUI.destroy","flixel/addons/ui/FlxUI.hx",368,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(369)
		if (((this->_group_index != null()))){
			HX_STACK_LINE(370)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_group_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_group_index->remove(key);
			}
			HX_STACK_LINE(372)
			this->_group_index = null();
		}
		HX_STACK_LINE(374)
		if (((this->_asset_index != null()))){
			HX_STACK_LINE(375)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_asset_index->remove(key);
			}
			HX_STACK_LINE(377)
			this->_asset_index = null();
		}
		HX_STACK_LINE(379)
		if (((this->_definition_index != null()))){
			HX_STACK_LINE(380)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_definition_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				this->_definition_index->remove(key);
			}
			HX_STACK_LINE(382)
			this->_definition_index = null();
		}
		HX_STACK_LINE(384)
		this->_superIndexUI = null();
		HX_STACK_LINE(385)
		this->_ptr_tongue = null();
		HX_STACK_LINE(386)
		this->super::destroy();
	}
return null();
}


Void FlxUI_obj::load( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","load",0x34adecdf,"flixel.addons.ui.FlxUI.load","flixel/addons/ui/FlxUI.hx",395,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(396)
		::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(396)
		this->_group_index = _g;
		HX_STACK_LINE(397)
		::haxe::ds::StringMap _g1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(397)
		this->_asset_index = _g1;
		HX_STACK_LINE(398)
		::haxe::ds::StringMap _g2 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(398)
		this->_definition_index = _g2;
		HX_STACK_LINE(399)
		::haxe::ds::StringMap _g3 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(399)
		this->_mode_index = _g3;
		HX_STACK_LINE(402)
		if (((data != null()))){
			HX_STACK_LINE(404)
			this->_data = data;
			HX_STACK_LINE(408)
			if ((data->hasNode->resolve(HX_CSTRING("include")))){
				HX_STACK_LINE(409)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("include"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast inc_data = __it->next();
					{
						HX_STACK_LINE(410)
						::String inc_id = inc_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(inc_id,"inc_id");
						HX_STACK_LINE(411)
						::haxe::xml::Fast inc_xml = ::flixel::addons::ui::U_obj::xml(inc_id,null(),null(),null());		HX_STACK_VAR(inc_xml,"inc_xml");
						HX_STACK_LINE(412)
						if (((inc_xml != null()))){
							HX_STACK_LINE(413)
							for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(inc_xml->nodes->resolve(HX_CSTRING("definition"))->iterator());  __it->hasNext(); ){
								::haxe::xml::Fast def_data = __it->next();
								{
									HX_STACK_LINE(415)
									::String _g4 = def_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(415)
									::String def_id = (HX_CSTRING("include:") + _g4);		HX_STACK_VAR(def_id,"def_id");
									HX_STACK_LINE(416)
									this->_definition_index->set(def_id,def_data);
								}
;
							}
						}
					}
;
				}
			}
			HX_STACK_LINE(428)
			if ((data->hasNode->resolve(HX_CSTRING("definition")))){
				HX_STACK_LINE(429)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("definition"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast def_data = __it->next();
					{
						HX_STACK_LINE(430)
						::String def_id = def_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(def_id,"def_id");
						HX_STACK_LINE(431)
						this->_definition_index->set(def_id,def_data);
					}
;
				}
			}
			HX_STACK_LINE(437)
			if ((data->hasNode->resolve(HX_CSTRING("mode")))){
				HX_STACK_LINE(438)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("mode"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast mode_data = __it->next();
					{
						HX_STACK_LINE(439)
						::haxe::xml::Fast mode_data2 = this->applyNodeConditionals(mode_data);		HX_STACK_VAR(mode_data2,"mode_data2");
						HX_STACK_LINE(440)
						::String mode_id = mode_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(mode_id,"mode_id");
						HX_STACK_LINE(442)
						this->_mode_index->set(mode_id,mode_data2);
					}
;
				}
			}
			HX_STACK_LINE(447)
			if ((data->hasNode->resolve(HX_CSTRING("group")))){
				HX_STACK_LINE(448)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("group"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast group_data = __it->next();
					{
						HX_STACK_LINE(451)
						::String id = group_data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(id,"id");
						HX_STACK_LINE(452)
						::flixel::addons::ui::FlxUIGroup tempGroup = ::flixel::addons::ui::FlxUIGroup_obj::__new(null(),null());		HX_STACK_VAR(tempGroup,"tempGroup");
						HX_STACK_LINE(453)
						tempGroup->id = id;
						HX_STACK_LINE(454)
						this->_group_index->set(id,tempGroup);
						HX_STACK_LINE(455)
						this->add(tempGroup);
					}
;
				}
			}
			HX_STACK_LINE(459)
			::Xml _g5 = data->x->firstElement();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(459)
			if (((_g5 != null()))){
				HX_STACK_LINE(461)
				::Xml node;		HX_STACK_VAR(node,"node");
				HX_STACK_LINE(462)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
					::Xml node1 = __it->next();
					{
						HX_STACK_LINE(464)
						::String type = node1->get_nodeName();		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(465)
						type.toLowerCase();
						HX_STACK_LINE(466)
						::haxe::xml::Fast obj = ::haxe::xml::Fast_obj::__new(node1);		HX_STACK_VAR(obj,"obj");
						HX_STACK_LINE(467)
						::String group_id = HX_CSTRING("");		HX_STACK_VAR(group_id,"group_id");
						HX_STACK_LINE(468)
						::flixel::addons::ui::FlxUIGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
						HX_STACK_LINE(470)
						::String thing_id = ::flixel::addons::ui::U_obj::xml_str(obj->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(thing_id,"thing_id");
						HX_STACK_LINE(473)
						if ((obj->has->resolve(HX_CSTRING("group")))){
							HX_STACK_LINE(474)
							::String _g6 = obj->att->resolve(HX_CSTRING("group"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(474)
							group_id = _g6;
							HX_STACK_LINE(475)
							::flixel::addons::ui::FlxUIGroup _g7 = this->getGroup(group_id,null());		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(475)
							tempGroup = _g7;
						}
						HX_STACK_LINE(479)
						::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->_loadThing(type,obj);		HX_STACK_VAR(thing,"thing");
						HX_STACK_LINE(481)
						if (((thing != null()))){
							HX_STACK_LINE(482)
							if (((tempGroup != null()))){
								HX_STACK_LINE(483)
								tempGroup->add(thing);
							}
							else{
								HX_STACK_LINE(485)
								this->add(thing);
							}
							HX_STACK_LINE(488)
							this->_loadPosition(obj,thing);
							HX_STACK_LINE(490)
							if (((bool((thing_id != null())) && bool((thing_id != HX_CSTRING("")))))){
								HX_STACK_LINE(491)
								this->_asset_index->set(thing_id,thing);
							}
						}
					}
;
				}
			}
			HX_STACK_LINE(498)
			this->_postLoad(data);
		}
		else{
			HX_STACK_LINE(501)
			this->_onFinishLoad();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,load,(void))

Void FlxUI_obj::_postLoad( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoad",0xe07320ac,"flixel.addons.ui.FlxUI._postLoad","flixel/addons/ui/FlxUI.hx",507,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(509)
		::Xml _g = data->x->firstElement();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(509)
		if (((_g != null()))){
			HX_STACK_LINE(511)
			::Xml node;		HX_STACK_VAR(node,"node");
			HX_STACK_LINE(512)
			for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
				::Xml node1 = __it->next();
				{
					HX_STACK_LINE(514)
					::String _g1 = node1->get_nodeName().toLowerCase();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(514)
					::haxe::xml::Fast _g2 = ::haxe::xml::Fast_obj::__new(node1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(514)
					this->_postLoadThing(_g1,_g2);
				}
;
			}
		}
		HX_STACK_LINE(518)
		if ((data->hasNode->resolve(HX_CSTRING("mode")))){
			HX_STACK_LINE(519)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("mode"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast mode_node = __it->next();
				{
					HX_STACK_LINE(520)
					bool is_default = ::flixel::addons::ui::U_obj::xml_bool(mode_node->x,HX_CSTRING("is_default"),null());		HX_STACK_VAR(is_default,"is_default");
					HX_STACK_LINE(521)
					if ((is_default)){
						HX_STACK_LINE(522)
						::String mode_id = ::flixel::addons::ui::U_obj::xml_str(mode_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(mode_id,"mode_id");
						HX_STACK_LINE(523)
						this->setMode(mode_id,null());
						HX_STACK_LINE(524)
						break;
					}
				}
;
			}
		}
		HX_STACK_LINE(529)
		if (((this->_failure_checks != null()))){
			HX_STACK_LINE(530)
			{
				HX_STACK_LINE(530)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(530)
				Array< ::Dynamic > _g11 = this->_failure_checks;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(530)
				while((true)){
					HX_STACK_LINE(530)
					if ((!(((_g1 < _g11->length))))){
						HX_STACK_LINE(530)
						break;
					}
					HX_STACK_LINE(530)
					::haxe::xml::Fast data1 = _g11->__get(_g1).StaticCast< ::haxe::xml::Fast >();		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(530)
					++(_g1);
					HX_STACK_LINE(531)
					if ((this->_checkFailure(data1))){
						HX_STACK_LINE(532)
						this->failed = true;
						HX_STACK_LINE(533)
						break;
					}
				}
			}
			HX_STACK_LINE(536)
			::flixel::addons::ui::U_obj::clearArraySoft(this->_failure_checks);
			HX_STACK_LINE(537)
			this->_failure_checks = null();
		}
		HX_STACK_LINE(540)
		this->_onFinishLoad();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_postLoad,(void))

::String FlxUI_obj::get_currMode( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","get_currMode",0xd78f9337,"flixel.addons.ui.FlxUI.get_currMode","flixel/addons/ui/FlxUI.hx",544,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(544)
	return this->_curr_mode;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,get_currMode,return )

::String FlxUI_obj::set_currMode( ::String m){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","set_currMode",0xec88b6ab,"flixel.addons.ui.FlxUI.set_currMode","flixel/addons/ui/FlxUI.hx",545,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(m,"m")
	HX_STACK_LINE(545)
	this->setMode(m,null());
	HX_STACK_LINE(545)
	return this->_curr_mode;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,set_currMode,return )

Void FlxUI_obj::setMode( ::String mode_id,::String __o_target_id){
::String target_id = __o_target_id.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","setMode",0xcc767b0c,"flixel.addons.ui.FlxUI.setMode","flixel/addons/ui/FlxUI.hx",553,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mode_id,"mode_id")
	HX_STACK_ARG(target_id,"target_id")
{
		HX_STACK_LINE(554)
		if (((this->_curr_mode == mode_id))){
			HX_STACK_LINE(556)
			return null();
		}
		HX_STACK_LINE(558)
		::haxe::xml::Fast mode = this->getMode(mode_id,null());		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(559)
		this->_curr_mode = mode_id;
		HX_STACK_LINE(560)
		::String id = HX_CSTRING("");		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(561)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing;		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(562)
		if (((target_id == HX_CSTRING("")))){
			HX_STACK_LINE(563)
			if (((mode != null()))){
				HX_STACK_LINE(565)
				::Xml xml;		HX_STACK_VAR(xml,"xml");
				HX_STACK_LINE(566)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(mode->get_elements());  __it->hasNext(); ){
					::haxe::xml::Fast node = __it->next();
					{
						HX_STACK_LINE(568)
						::haxe::xml::Fast node2 = this->applyNodeConditionals(node);		HX_STACK_VAR(node2,"node2");
						HX_STACK_LINE(569)
						xml = node2->x;
						HX_STACK_LINE(571)
						::String nodeName = xml->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
						HX_STACK_LINE(573)
						::String _switch_1 = (nodeName);
						if (  ( _switch_1==HX_CSTRING("show"))){
							HX_STACK_LINE(575)
							::String _g = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(575)
							this->showThing(_g,true);
						}
						else if (  ( _switch_1==HX_CSTRING("hide"))){
							HX_STACK_LINE(577)
							::String _g1 = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(577)
							this->showThing(_g1,false);
						}
						else if (  ( _switch_1==HX_CSTRING("align"))){
							HX_STACK_LINE(579)
							this->_alignThing(node2);
						}
						else if (  ( _switch_1==HX_CSTRING("change"))){
							HX_STACK_LINE(581)
							this->_changeThing(node2);
						}
						else if (  ( _switch_1==HX_CSTRING("position"))){
							HX_STACK_LINE(583)
							::String _g2 = ::flixel::addons::ui::U_obj::xml_str(xml,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(583)
							id = _g2;
							HX_STACK_LINE(584)
							::flixel::addons::ui::interfaces::IFlxUIWidget _g3 = this->getAsset(id,null());		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(584)
							thing = _g3;
							HX_STACK_LINE(585)
							if (((thing != null()))){
								HX_STACK_LINE(586)
								this->_loadPosition(node2,thing);
							}
						}
					}
;
				}
			}
		}
		else{
			HX_STACK_LINE(592)
			::flixel::addons::ui::interfaces::IFlxUIWidget target = this->getAsset(target_id,null());		HX_STACK_VAR(target,"target");
			HX_STACK_LINE(593)
			if (((  (((target != null()))) ? bool(::Std_obj::is(target,hx::ClassOf< ::flixel::addons::ui::FlxUI >())) : bool(false) ))){
				HX_STACK_LINE(594)
				::flixel::addons::ui::FlxUI targetUI;		HX_STACK_VAR(targetUI,"targetUI");
				HX_STACK_LINE(594)
				targetUI = hx::TCast< flixel::addons::ui::FlxUI >::cast(target);
				HX_STACK_LINE(595)
				targetUI->setMode(mode_id,HX_CSTRING(""));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,setMode,(void))

Void FlxUI_obj::showThing( ::String id,hx::Null< bool >  __o_b){
bool b = __o_b.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","showThing",0xd0d41c58,"flixel.addons.ui.FlxUI.showThing","flixel/addons/ui/FlxUI.hx",600,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_ARG(b,"b")
{
		HX_STACK_LINE(601)
		int _g = id.indexOf(HX_CSTRING(","),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(601)
		if (((_g != (int)-1))){
			HX_STACK_LINE(602)
			Array< ::String > ids = id.split(HX_CSTRING(","));		HX_STACK_VAR(ids,"ids");
			HX_STACK_LINE(603)
			{
				HX_STACK_LINE(603)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(603)
				while((true)){
					HX_STACK_LINE(603)
					if ((!(((_g1 < ids->length))))){
						HX_STACK_LINE(603)
						break;
					}
					HX_STACK_LINE(603)
					::String each_id = ids->__get(_g1);		HX_STACK_VAR(each_id,"each_id");
					HX_STACK_LINE(603)
					++(_g1);
					HX_STACK_LINE(604)
					::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(each_id,null());		HX_STACK_VAR(thing,"thing");
					HX_STACK_LINE(605)
					if (((thing != null()))){
						HX_STACK_LINE(606)
						thing->__Field(HX_CSTRING("set_visible"),true)(b);
					}
				}
			}
		}
		else{
			HX_STACK_LINE(610)
			if (((id != HX_CSTRING("*")))){
				HX_STACK_LINE(611)
				::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
				HX_STACK_LINE(612)
				if (((thing != null()))){
					HX_STACK_LINE(613)
					thing->__Field(HX_CSTRING("set_visible"),true)(b);
				}
			}
			else{
				HX_STACK_LINE(616)
				for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_asset_index->keys());  __it->hasNext(); ){
					::String asset_id = __it->next();
					if (((asset_id != HX_CSTRING("*")))){
						HX_STACK_LINE(618)
						this->showThing(asset_id,b);
					}
;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,showThing,(void))

::flixel::addons::ui::FlxUIGroup FlxUI_obj::getGroup( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getGroup",0xfa746602,"flixel.addons.ui.FlxUI.getGroup","flixel/addons/ui/FlxUI.hx",627,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(628)
		::flixel::addons::ui::FlxUIGroup tempGroup = this->_group_index->get(key);		HX_STACK_VAR(tempGroup,"tempGroup");
		HX_STACK_LINE(629)
		if (((bool((bool((tempGroup == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(630)
			return this->_superIndexUI->getGroup(key,recursive);
		}
		HX_STACK_LINE(632)
		return tempGroup;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getGroup,return )

::flixel::text::FlxText FlxUI_obj::getFlxText( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getFlxText",0x55e507c2,"flixel.addons.ui.FlxUI.getFlxText","flixel/addons/ui/FlxUI.hx",635,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(636)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->getAsset(key,recursive);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(637)
		if (((asset != null()))){
			HX_STACK_LINE(638)
			if ((::Std_obj::is(asset,hx::ClassOf< ::flixel::text::FlxText >()))){
				HX_STACK_LINE(639)
				return hx::TCast< flixel::text::FlxText >::cast(asset);
			}
		}
		HX_STACK_LINE(642)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getFlxText,return )

bool FlxUI_obj::hasAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","hasAsset",0xb33a576f,"flixel.addons.ui.FlxUI.hasAsset","flixel/addons/ui/FlxUI.hx",645,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(646)
		if ((this->_asset_index->exists(key))){
			HX_STACK_LINE(647)
			return true;
		}
		HX_STACK_LINE(649)
		if (((bool(recursive) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(650)
			return this->_superIndexUI->hasAsset(key,recursive);
		}
		HX_STACK_LINE(652)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,hasAsset,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::getAsset( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getAsset",0x86b91cb3,"flixel.addons.ui.FlxUI.getAsset","flixel/addons/ui/FlxUI.hx",655,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(656)
		::flixel::addons::ui::interfaces::IFlxUIWidget asset = this->_asset_index->get(key);		HX_STACK_VAR(asset,"asset");
		HX_STACK_LINE(657)
		if (((bool((bool((asset == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(658)
			return this->_superIndexUI->getAsset(key,recursive);
		}
		HX_STACK_LINE(660)
		return asset;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getAsset,return )

::haxe::xml::Fast FlxUI_obj::getMode( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getMode",0xd974ea00,"flixel.addons.ui.FlxUI.getMode","flixel/addons/ui/FlxUI.hx",663,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(664)
		::haxe::xml::Fast mode = this->_mode_index->get(key);		HX_STACK_VAR(mode,"mode");
		HX_STACK_LINE(665)
		if (((bool((bool((mode == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(666)
			return this->_superIndexUI->getMode(key,recursive);
		}
		HX_STACK_LINE(668)
		return mode;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getMode,return )

::flixel::addons::ui::ButtonLabelStyle FlxUI_obj::getLabelStyleFromDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLabelStyleFromDefinition",0xade61a37,"flixel.addons.ui.FlxUI.getLabelStyleFromDefinition","flixel/addons/ui/FlxUI.hx",671,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(672)
		::haxe::xml::Fast definition = this->getDefinition(key,recursive);		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(673)
		if (((definition != null()))){
			HX_STACK_LINE(674)
			::flixel::addons::ui::FontDef fontDef = this->_loadFontDef(definition);		HX_STACK_VAR(fontDef,"fontDef");
			HX_STACK_LINE(675)
			::String align = ::flixel::addons::ui::U_obj::xml_str(definition->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(675)
			if (((align == HX_CSTRING("")))){
				HX_STACK_LINE(675)
				align = null();
			}
			HX_STACK_LINE(676)
			int color = this->_loadColor(definition,null(),null());		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(677)
			::flixel::addons::ui::BorderDef border = this->_loadBorder(definition);		HX_STACK_VAR(border,"border");
			HX_STACK_LINE(678)
			return ::flixel::addons::ui::ButtonLabelStyle_obj::__new(fontDef,align,color,border);
		}
		HX_STACK_LINE(680)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getLabelStyleFromDefinition,return )

::haxe::xml::Fast FlxUI_obj::getDefinition( ::String key,hx::Null< bool >  __o_recursive){
bool recursive = __o_recursive.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getDefinition",0xdd003ff0,"flixel.addons.ui.FlxUI.getDefinition","flixel/addons/ui/FlxUI.hx",683,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(key,"key")
	HX_STACK_ARG(recursive,"recursive")
{
		HX_STACK_LINE(684)
		::haxe::xml::Fast definition = this->_definition_index->get(key);		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(685)
		if (((bool((bool((definition == null())) && bool(recursive))) && bool((this->_superIndexUI != null()))))){
			HX_STACK_LINE(686)
			::haxe::xml::Fast _g = this->_superIndexUI->getDefinition(key,recursive);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(686)
			definition = _g;
		}
		HX_STACK_LINE(688)
		if (((definition == null()))){
			HX_STACK_LINE(689)
			int _g1 = key.indexOf(HX_CSTRING("include:"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(689)
			if (((_g1 == (int)-1))){
				HX_STACK_LINE(692)
				::haxe::xml::Fast _g2 = this->getDefinition((HX_CSTRING("include:") + key),recursive);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(692)
				definition = _g2;
			}
		}
		HX_STACK_LINE(695)
		return definition;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,getDefinition,return )

Void FlxUI_obj::replaceInGroup( ::flixel::FlxSprite original,::flixel::FlxSprite replace,hx::Null< bool >  __o_splice){
bool splice = __o_splice.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","replaceInGroup",0xb7beeb3f,"flixel.addons.ui.FlxUI.replaceInGroup","flixel/addons/ui/FlxUI.hx",745,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(original,"original")
	HX_STACK_ARG(replace,"replace")
	HX_STACK_ARG(splice,"splice")
{
		HX_STACK_LINE(748)
		if (((this->_group_index != null()))){
			HX_STACK_LINE(749)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_group_index->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(750)
					::flixel::addons::ui::FlxUIGroup tempGroup = this->_group_index->get(key);		HX_STACK_VAR(tempGroup,"tempGroup");
					HX_STACK_LINE(751)
					if (((tempGroup->group->members != null()))){
						HX_STACK_LINE(752)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(753)
						{
							HX_STACK_LINE(753)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(753)
							Array< ::Dynamic > _g1 = tempGroup->group->members;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(753)
							while((true)){
								HX_STACK_LINE(753)
								if ((!(((_g < _g1->length))))){
									HX_STACK_LINE(753)
									break;
								}
								HX_STACK_LINE(753)
								::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
								HX_STACK_LINE(753)
								++(_g);
								HX_STACK_LINE(754)
								if (((member != null()))){
									HX_STACK_LINE(755)
									if (((member == original))){
										HX_STACK_LINE(756)
										hx::IndexRef((tempGroup->group->members).mPtr,i) = replace;
										HX_STACK_LINE(757)
										if (((replace == null()))){
											HX_STACK_LINE(758)
											if ((splice)){
												HX_STACK_LINE(759)
												tempGroup->group->members->__Field(HX_CSTRING("splice"),true)(i,(int)1);
												HX_STACK_LINE(760)
												(i)--;
											}
										}
										HX_STACK_LINE(763)
										return null();
									}
									HX_STACK_LINE(765)
									(i)++;
								}
							}
						}
					}
				}
;
			}
		}
		HX_STACK_LINE(773)
		if (((this->group->members != null()))){
			HX_STACK_LINE(774)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(775)
			{
				HX_STACK_LINE(775)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(775)
				Array< ::Dynamic > _g1 = this->group->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(775)
				while((true)){
					HX_STACK_LINE(775)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(775)
						break;
					}
					HX_STACK_LINE(775)
					::flixel::FlxSprite member = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(member,"member");
					HX_STACK_LINE(775)
					++(_g);
					HX_STACK_LINE(776)
					if (((member != null()))){
						HX_STACK_LINE(777)
						if (((member == original))){
							HX_STACK_LINE(778)
							hx::IndexRef((this->group->members).mPtr,i) = replace;
							HX_STACK_LINE(779)
							if (((replace == null()))){
								HX_STACK_LINE(780)
								if ((splice)){
									HX_STACK_LINE(781)
									this->group->members->__Field(HX_CSTRING("splice"),true)(i,(int)1);
									HX_STACK_LINE(782)
									(i)--;
								}
							}
							HX_STACK_LINE(785)
							return null();
						}
					}
					HX_STACK_LINE(788)
					(i)++;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,replaceInGroup,(void))

::haxe::xml::Fast FlxUI_obj::applyNodeConditionals( ::haxe::xml::Fast info){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeConditionals",0x57bfbe44,"flixel.addons.ui.FlxUI.applyNodeConditionals","flixel/addons/ui/FlxUI.hx",795,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(info,"info")
	HX_STACK_LINE(796)
	if (((  ((!(info->hasNode->resolve(HX_CSTRING("locale"))))) ? bool(info->hasNode->resolve(HX_CSTRING("haxedef"))) : bool(true) ))){
		HX_STACK_LINE(797)
		::String _g = info->x->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(797)
		::Xml _g1 = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(797)
		::haxe::xml::Fast _g2 = ::haxe::xml::Fast_obj::__new(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(797)
		info = _g2;
		HX_STACK_LINE(799)
		if ((info->hasNode->resolve(HX_CSTRING("locale")))){
			HX_STACK_LINE(800)
			::haxe::xml::Fast _g3 = this->applyNodeChanges(info,HX_CSTRING("locale"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(800)
			info = _g3;
		}
		HX_STACK_LINE(803)
		if ((info->hasNode->resolve(HX_CSTRING("haxedef")))){
			HX_STACK_LINE(804)
			::haxe::xml::Fast _g4 = this->applyNodeChanges(info,HX_CSTRING("haxedef"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(804)
			info = _g4;
		}
	}
	HX_STACK_LINE(807)
	return info;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,applyNodeConditionals,return )

::haxe::xml::Fast FlxUI_obj::applyNodeChanges( ::haxe::xml::Fast data,::String nodeName){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","applyNodeChanges",0x1f7e448c,"flixel.addons.ui.FlxUI.applyNodeChanges","flixel/addons/ui/FlxUI.hx",816,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(nodeName,"nodeName")
	HX_STACK_LINE(819)
	::String nodeValue = HX_CSTRING("");		HX_STACK_VAR(nodeValue,"nodeValue");
	HX_STACK_LINE(822)
	if (((nodeName == HX_CSTRING("locale")))){
		HX_STACK_LINE(823)
		if (((this->_ptr_tongue == null()))){
			HX_STACK_LINE(824)
			return data;
		}
		HX_STACK_LINE(826)
		::String _g = this->_ptr_tongue->get_locale().toLowerCase();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(826)
		nodeValue = _g;
	}
	HX_STACK_LINE(830)
	bool haxedef = false;		HX_STACK_VAR(haxedef,"haxedef");
	HX_STACK_LINE(831)
	if (((nodeName == HX_CSTRING("haxedef")))){
		HX_STACK_LINE(832)
		haxedef = true;
	}
	HX_STACK_LINE(835)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(nodeName)->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast cNode = __it->next();
		{
			HX_STACK_LINE(836)
			::String cid = ::flixel::addons::ui::U_obj::xml_str(cNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(cid,"cid");
			HX_STACK_LINE(838)
			if ((haxedef)){
				HX_STACK_LINE(839)
				nodeValue = HX_CSTRING("");
				HX_STACK_LINE(840)
				if ((::flixel::addons::ui::U_obj::checkHaxedef(cid))){
					HX_STACK_LINE(841)
					nodeValue = cid;
				}
			}
			HX_STACK_LINE(845)
			if (((cid == nodeValue))){
				HX_STACK_LINE(846)
				if ((cNode->hasNode->resolve(HX_CSTRING("change")))){
					HX_STACK_LINE(847)
					for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(cNode->nodes->resolve(HX_CSTRING("change"))->iterator());  __it->hasNext(); ){
						::haxe::xml::Fast change = __it->next();
						{
							HX_STACK_LINE(848)
							::Xml xml;		HX_STACK_VAR(xml,"xml");
							HX_STACK_LINE(849)
							for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(change->x->attributes());  __it->hasNext(); ){
								::String att = __it->next();
								{
									HX_STACK_LINE(850)
									::String value = change->x->get(att);		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(851)
									data->x->set(att,value);
								}
;
							}
						}
;
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(858)
	return data;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,applyNodeChanges,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadThing( ::String type,::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadThing",0x7ce5f322,"flixel.addons.ui.FlxUI._loadThing","flixel/addons/ui/FlxUI.hx",861,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(862)
	::String use_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
	HX_STACK_LINE(863)
	::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
	HX_STACK_LINE(864)
	if (((use_def != HX_CSTRING("")))){
		HX_STACK_LINE(865)
		::haxe::xml::Fast _g = this->getDefinition(use_def,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(865)
		definition = _g;
	}
	HX_STACK_LINE(868)
	::haxe::xml::Fast info = ::flixel::addons::ui::FlxUI_obj::consolidateData(data,definition);		HX_STACK_VAR(info,"info");
	HX_STACK_LINE(869)
	::haxe::xml::Fast _g1 = this->applyNodeConditionals(info);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(869)
	info = _g1;
	HX_STACK_LINE(871)
	::String _switch_2 = (type);
	if (  ( _switch_2==HX_CSTRING("region"))){
		HX_STACK_LINE(872)
		return this->_loadRegion(info);
	}
	else if (  ( _switch_2==HX_CSTRING("chrome")) ||  ( _switch_2==HX_CSTRING("nineslicesprite")) ||  ( _switch_2==HX_CSTRING("nine_slice_sprite")) ||  ( _switch_2==HX_CSTRING("nineslice")) ||  ( _switch_2==HX_CSTRING("nine_slice"))){
		HX_STACK_LINE(873)
		return this->_load9SliceSprite(info,null());
	}
	else if (  ( _switch_2==HX_CSTRING("tile_test"))){
		HX_STACK_LINE(874)
		return this->_loadTileTest(info);
	}
	else if (  ( _switch_2==HX_CSTRING("line"))){
		HX_STACK_LINE(875)
		return this->_loadLine(info);
	}
	else if (  ( _switch_2==HX_CSTRING("sprite"))){
		HX_STACK_LINE(876)
		return this->_loadSprite(info);
	}
	else if (  ( _switch_2==HX_CSTRING("text"))){
		HX_STACK_LINE(877)
		return this->_loadText(info);
	}
	else if (  ( _switch_2==HX_CSTRING("numeric_stepper"))){
		HX_STACK_LINE(878)
		return this->_loadNumericStepper(info,null());
	}
	else if (  ( _switch_2==HX_CSTRING("button"))){
		HX_STACK_LINE(879)
		return this->_loadButton(info,null(),null(),null());
	}
	else if (  ( _switch_2==HX_CSTRING("button_toggle"))){
		HX_STACK_LINE(880)
		return this->_loadButton(info,true,true,null());
	}
	else if (  ( _switch_2==HX_CSTRING("tab_menu"))){
		HX_STACK_LINE(882)
		return this->_loadTabMenu(info);
	}
	else if (  ( _switch_2==HX_CSTRING("dropdown_menu")) ||  ( _switch_2==HX_CSTRING("dropdown")) ||  ( _switch_2==HX_CSTRING("pulldown")) ||  ( _switch_2==HX_CSTRING("pulldown_menu"))){
		HX_STACK_LINE(885)
		return this->_loadDropDownMenu(info);
	}
	else if (  ( _switch_2==HX_CSTRING("checkbox"))){
		HX_STACK_LINE(887)
		return this->_loadCheckBox(info);
	}
	else if (  ( _switch_2==HX_CSTRING("radio_group"))){
		HX_STACK_LINE(888)
		return this->_loadRadioGroup(info);
	}
	else if (  ( _switch_2==HX_CSTRING("layout")) ||  ( _switch_2==HX_CSTRING("ui"))){
		HX_STACK_LINE(889)
		return this->_loadLayout(info);
	}
	else if (  ( _switch_2==HX_CSTRING("failure"))){
		HX_STACK_LINE(890)
		if (((this->_failure_checks == null()))){
			HX_STACK_LINE(890)
			Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(890)
			this->_failure_checks = _g2;
		}
		HX_STACK_LINE(891)
		this->_failure_checks->push(data);
		HX_STACK_LINE(892)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("align"))){
		HX_STACK_LINE(893)
		this->_alignThing(data);
		HX_STACK_LINE(894)
		return null();
	}
	else if (  ( _switch_2==HX_CSTRING("mode")) ||  ( _switch_2==HX_CSTRING("include")) ||  ( _switch_2==HX_CSTRING("group")) ||  ( _switch_2==HX_CSTRING("load_if"))){
		HX_STACK_LINE(896)
		return null();
	}
	else  {
		HX_STACK_LINE(900)
		::flixel::addons::ui::interfaces::IFlxUIWidget result = this->_ptr->getRequest((HX_CSTRING("ui_get:") + type),hx::ObjectPtr<OBJ_>(this),info,null());		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(901)
		return result;
	}
;
;
	HX_STACK_LINE(903)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadThing,return )

Float FlxUI_obj::_loadX( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadX",0x4a11c1ac,"flixel.addons.ui.FlxUI._loadX","flixel/addons/ui/FlxUI.hx",908,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(908)
		return this->_loadWidth(data,default_,HX_CSTRING("x"));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadX,return )

Float FlxUI_obj::_loadY( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadY",0x4a11c1ad,"flixel.addons.ui.FlxUI._loadY","flixel/addons/ui/FlxUI.hx",912,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(912)
		return this->_loadHeight(data,default_,HX_CSTRING("y"));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadY,return )

Float FlxUI_obj::_loadWidth( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_CSTRING("width"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadWidth",0x37bf213a,"flixel.addons.ui.FlxUI._loadWidth","flixel/addons/ui/FlxUI.hx",915,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(916)
		::String _g = ::Std_obj::string(default_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(916)
		::String ws = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,_g);		HX_STACK_VAR(ws,"ws");
		HX_STACK_LINE(917)
		return this->_getDataSize(HX_CSTRING("w"),ws,default_);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadWidth,return )

Float FlxUI_obj::_loadHeight( ::haxe::xml::Fast data,hx::Null< Float >  __o_default_,::String __o_str){
Float default_ = __o_default_.Default(10);
::String str = __o_str.Default(HX_CSTRING("height"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadHeight",0x45cd6a33,"flixel.addons.ui.FlxUI._loadHeight","flixel/addons/ui/FlxUI.hx",920,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(default_,"default_")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(921)
		::String _g = ::Std_obj::string(default_);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(921)
		::String hs = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,_g);		HX_STACK_VAR(hs,"hs");
		HX_STACK_LINE(922)
		return this->_getDataSize(HX_CSTRING("h"),hs,default_);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadHeight,return )

::flixel::util::FlxPoint FlxUI_obj::_loadCompass( ::haxe::xml::Fast data,::String __o_str){
::String str = __o_str.Default(HX_CSTRING("resize_point"));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCompass",0x511db9c6,"flixel.addons.ui.FlxUI._loadCompass","flixel/addons/ui/FlxUI.hx",925,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(str,"str")
{
		HX_STACK_LINE(926)
		::String cs = ::flixel::addons::ui::U_obj::xml_str(data->x,str,true,HX_CSTRING("nw"));		HX_STACK_VAR(cs,"cs");
		HX_STACK_LINE(927)
		::flixel::util::FlxPoint fp;		HX_STACK_VAR(fp,"fp");
		HX_STACK_LINE(927)
		{
			HX_STACK_LINE(927)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(927)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(927)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(927)
			point->_inPool = false;
			HX_STACK_LINE(927)
			fp = point;
		}
		HX_STACK_LINE(928)
		::String _switch_3 = (cs);
		if (  ( _switch_3==HX_CSTRING("nw")) ||  ( _switch_3==HX_CSTRING("ul"))){
			HX_STACK_LINE(929)
			fp->set_x((int)0);
			HX_STACK_LINE(929)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("n")) ||  ( _switch_3==HX_CSTRING("u"))){
			HX_STACK_LINE(930)
			fp->set_x(0.5);
			HX_STACK_LINE(930)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("ne")) ||  ( _switch_3==HX_CSTRING("ur"))){
			HX_STACK_LINE(931)
			fp->set_x((int)1);
			HX_STACK_LINE(931)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("e")) ||  ( _switch_3==HX_CSTRING("r"))){
			HX_STACK_LINE(932)
			fp->set_x((int)1);
			HX_STACK_LINE(932)
			fp->set_y(0.5);
		}
		else if (  ( _switch_3==HX_CSTRING("se")) ||  ( _switch_3==HX_CSTRING("lr"))){
			HX_STACK_LINE(933)
			fp->set_x((int)1);
			HX_STACK_LINE(933)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("s"))){
			HX_STACK_LINE(934)
			fp->set_x(0.5);
			HX_STACK_LINE(934)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("sw")) ||  ( _switch_3==HX_CSTRING("ll"))){
			HX_STACK_LINE(935)
			fp->set_x((int)0);
			HX_STACK_LINE(935)
			fp->set_y((int)1);
		}
		else if (  ( _switch_3==HX_CSTRING("w"))){
			HX_STACK_LINE(936)
			fp->set_x(0.5);
			HX_STACK_LINE(936)
			fp->set_y((int)0);
		}
		else if (  ( _switch_3==HX_CSTRING("m")) ||  ( _switch_3==HX_CSTRING("c")) ||  ( _switch_3==HX_CSTRING("mid")) ||  ( _switch_3==HX_CSTRING("center"))){
			HX_STACK_LINE(937)
			fp->set_x(0.5);
			HX_STACK_LINE(937)
			fp->set_y(0.5);
		}
		HX_STACK_LINE(939)
		return fp;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadCompass,return )

Void FlxUI_obj::_changeParamsThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeParamsThing",0x3feee472,"flixel.addons.ui.FlxUI._changeParamsThing","flixel/addons/ui/FlxUI.hx",942,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(943)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(944)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(945)
		if (((thing == null()))){
			HX_STACK_LINE(946)
			return null();
		}
		HX_STACK_LINE(949)
		if ((!(::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >())))){
			HX_STACK_LINE(950)
			return null();
		}
		HX_STACK_LINE(953)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(954)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >()))){
		}
		HX_STACK_LINE(957)
		::flixel::addons::ui::interfaces::IHasParams ihp = thing;		HX_STACK_VAR(ihp,"ihp");
		HX_STACK_LINE(958)
		Dynamic _g13;		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(958)
		{
			HX_STACK_LINE(958)
			Dynamic params = null();		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(958)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(958)
				Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(958)
				params = _g;
				HX_STACK_LINE(958)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(958)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(958)
						::String _g1 = type.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(958)
						type = _g1;
						HX_STACK_LINE(958)
						::String _switch_4 = (type);
						if (  ( _switch_4==HX_CSTRING("string"))){
							HX_STACK_LINE(958)
							::String _g2 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(958)
							::String _g3 = ::String(_g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(958)
							params->__Field(HX_CSTRING("push"),true)(_g3);
						}
						else if (  ( _switch_4==HX_CSTRING("int"))){
							HX_STACK_LINE(958)
							::String _g4 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(958)
							Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(958)
							params->__Field(HX_CSTRING("push"),true)(_g5);
						}
						else if (  ( _switch_4==HX_CSTRING("float"))){
							HX_STACK_LINE(958)
							::String _g6 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(958)
							Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(958)
							params->__Field(HX_CSTRING("push"),true)(_g7);
						}
						else if (  ( _switch_4==HX_CSTRING("color")) ||  ( _switch_4==HX_CSTRING("hex"))){
							HX_STACK_LINE(958)
							int _g12;		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(958)
							{
								HX_STACK_LINE(958)
								::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(958)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(958)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(958)
								int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(958)
								int _g8 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(958)
								if (((_g8 != (int)0))){
									HX_STACK_LINE(958)
									if ((!(safe))){
										HX_STACK_LINE(958)
										HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
									}
									else{
										HX_STACK_LINE(958)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(958)
								if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
									HX_STACK_LINE(958)
									if ((!(safe))){
										HX_STACK_LINE(958)
										HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
									}
									else{
										HX_STACK_LINE(958)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(958)
								if (((return_val == (int)-1))){
									HX_STACK_LINE(958)
									::String _g9 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(958)
									str = _g9;
									HX_STACK_LINE(958)
									if (((str.length == (int)6))){
										HX_STACK_LINE(958)
										str = (HX_CSTRING("FF") + str);
									}
									HX_STACK_LINE(958)
									int _g11;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(958)
									{
										HX_STACK_LINE(958)
										int length = str.length;		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(958)
										int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
										HX_STACK_LINE(958)
										int sum = (int)0;		HX_STACK_VAR(sum,"sum");
										HX_STACK_LINE(958)
										int i1 = (length - (int)1);		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(958)
										while((true)){
											HX_STACK_LINE(958)
											if ((!(((i1 >= (int)0))))){
												HX_STACK_LINE(958)
												break;
											}
											HX_STACK_LINE(958)
											::String char_hex = str.substr(i1,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
											HX_STACK_LINE(958)
											int char_int;		HX_STACK_VAR(char_int,"char_int");
											HX_STACK_LINE(958)
											{
												HX_STACK_LINE(958)
												int val = (int)-1;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(958)
												::String _switch_5 = (char_hex);
												if (  ( _switch_5==HX_CSTRING("0")) ||  ( _switch_5==HX_CSTRING("1")) ||  ( _switch_5==HX_CSTRING("2")) ||  ( _switch_5==HX_CSTRING("3")) ||  ( _switch_5==HX_CSTRING("4")) ||  ( _switch_5==HX_CSTRING("5")) ||  ( _switch_5==HX_CSTRING("6")) ||  ( _switch_5==HX_CSTRING("7")) ||  ( _switch_5==HX_CSTRING("8")) ||  ( _switch_5==HX_CSTRING("9")) ||  ( _switch_5==HX_CSTRING("10"))){
													HX_STACK_LINE(958)
													Dynamic _g10 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(958)
													val = _g10;
												}
												else if (  ( _switch_5==HX_CSTRING("A")) ||  ( _switch_5==HX_CSTRING("a"))){
													HX_STACK_LINE(958)
													val = (int)10;
												}
												else if (  ( _switch_5==HX_CSTRING("B")) ||  ( _switch_5==HX_CSTRING("b"))){
													HX_STACK_LINE(958)
													val = (int)11;
												}
												else if (  ( _switch_5==HX_CSTRING("C")) ||  ( _switch_5==HX_CSTRING("c"))){
													HX_STACK_LINE(958)
													val = (int)12;
												}
												else if (  ( _switch_5==HX_CSTRING("D")) ||  ( _switch_5==HX_CSTRING("d"))){
													HX_STACK_LINE(958)
													val = (int)13;
												}
												else if (  ( _switch_5==HX_CSTRING("E")) ||  ( _switch_5==HX_CSTRING("e"))){
													HX_STACK_LINE(958)
													val = (int)14;
												}
												else if (  ( _switch_5==HX_CSTRING("F")) ||  ( _switch_5==HX_CSTRING("f"))){
													HX_STACK_LINE(958)
													val = (int)15;
												}
												HX_STACK_LINE(958)
												if (((val == (int)-1))){
													HX_STACK_LINE(958)
													HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
												}
												HX_STACK_LINE(958)
												char_int = val;
											}
											HX_STACK_LINE(958)
											hx::AddEq(sum,(char_int * place_mult));
											HX_STACK_LINE(958)
											hx::MultEq(place_mult,(int)16);
											HX_STACK_LINE(958)
											(i1)--;
										}
										HX_STACK_LINE(958)
										_g11 = sum;
									}
									HX_STACK_LINE(958)
									return_val = _g11;
								}
								HX_STACK_LINE(958)
								_g12 = return_val;
							}
							HX_STACK_LINE(958)
							params->__Field(HX_CSTRING("push"),true)(_g12);
						}
					}
;
				}
			}
			HX_STACK_LINE(958)
			_g13 = params;
		}
		HX_STACK_LINE(958)
		ihp->set_params(_g13);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeParamsThing,(void))

Void FlxUI_obj::_changeThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_changeThing",0x32661218,"flixel.addons.ui.FlxUI._changeThing","flixel/addons/ui/FlxUI.hx",961,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(962)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(963)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(964)
		if (((thing == null()))){
			HX_STACK_LINE(965)
			return null();
		}
		HX_STACK_LINE(968)
		Float new_width = (int)-1;		HX_STACK_VAR(new_width,"new_width");
		HX_STACK_LINE(969)
		Float new_height = (int)-1;		HX_STACK_VAR(new_height,"new_height");
		HX_STACK_LINE(971)
		::String context = HX_CSTRING("");		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(972)
		::String code = HX_CSTRING("");		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(974)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(data->x->attributes());  __it->hasNext(); ){
			::String attribute = __it->next();
			::String _switch_6 = (attribute);
			if (  ( _switch_6==HX_CSTRING("text"))){
				HX_STACK_LINE(976)
				if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
					HX_STACK_LINE(977)
					::String text = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("text"),null(),null());		HX_STACK_VAR(text,"text");
					HX_STACK_LINE(978)
					::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(978)
					context = _g;
					HX_STACK_LINE(979)
					::flixel::addons::ui::FlxUIText t = thing;		HX_STACK_VAR(t,"t");
					HX_STACK_LINE(980)
					::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(980)
					code = _g1;
					HX_STACK_LINE(981)
					::String _g2 = this->getText(text,context,true,code);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(981)
					t->set_text(_g2);
				}
			}
			else if (  ( _switch_6==HX_CSTRING("label"))){
				HX_STACK_LINE(983)
				::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
				HX_STACK_LINE(984)
				::String _g3 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(984)
				context = _g3;
				HX_STACK_LINE(985)
				::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(985)
				code = _g4;
				HX_STACK_LINE(986)
				::String _g5 = this->getText(label,context,true,code);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(986)
				label = _g5;
				HX_STACK_LINE(987)
				if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::ILabeled >()))){
					HX_STACK_LINE(988)
					::flixel::addons::ui::interfaces::ILabeled b = thing;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(989)
					b->getLabel()->set_text(label);
				}
			}
			else if (  ( _switch_6==HX_CSTRING("width"))){
				HX_STACK_LINE(991)
				Float _g6 = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(991)
				new_width = _g6;
			}
			else if (  ( _switch_6==HX_CSTRING("height"))){
				HX_STACK_LINE(992)
				Float _g7 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(992)
				new_height = _g7;
			}
;
		}
		HX_STACK_LINE(995)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(996)
			::flixel::addons::ui::interfaces::IResizable ir = thing;		HX_STACK_VAR(ir,"ir");
			HX_STACK_LINE(997)
			if (((bool((new_width != (int)-1)) || bool((new_height != (int)-1))))){
				HX_STACK_LINE(998)
				if (((new_width == (int)-1))){
					HX_STACK_LINE(998)
					Float _g8 = ir->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(998)
					new_width = _g8;
				}
				HX_STACK_LINE(999)
				if (((new_height == (int)-1))){
					HX_STACK_LINE(999)
					Float _g9 = ir->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(999)
					new_height = _g9;
				}
				HX_STACK_LINE(1000)
				ir->resize(new_width,new_height);
			}
		}
		HX_STACK_LINE(1004)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1005)
			if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IHasParams >()))){
				HX_STACK_LINE(1006)
				::flixel::addons::ui::interfaces::IHasParams ihp = thing;		HX_STACK_VAR(ihp,"ihp");
				HX_STACK_LINE(1007)
				Dynamic _g23;		HX_STACK_VAR(_g23,"_g23");
				HX_STACK_LINE(1007)
				{
					HX_STACK_LINE(1007)
					Dynamic params = null();		HX_STACK_VAR(params,"params");
					HX_STACK_LINE(1007)
					if ((data->hasNode->resolve(HX_CSTRING("param")))){
						HX_STACK_LINE(1007)
						Dynamic _g10 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(1007)
						params = _g10;
						HX_STACK_LINE(1007)
						for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
							::haxe::xml::Fast param = __it->next();
							if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
								HX_STACK_LINE(1007)
								::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
								HX_STACK_LINE(1007)
								::String _g11 = type.toLowerCase();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(1007)
								type = _g11;
								HX_STACK_LINE(1007)
								::String _switch_7 = (type);
								if (  ( _switch_7==HX_CSTRING("string"))){
									HX_STACK_LINE(1007)
									::String _g12 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(1007)
									::String _g13 = ::String(_g12);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(1007)
									params->__Field(HX_CSTRING("push"),true)(_g13);
								}
								else if (  ( _switch_7==HX_CSTRING("int"))){
									HX_STACK_LINE(1007)
									::String _g14 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(1007)
									Dynamic _g15 = ::Std_obj::parseInt(_g14);		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(1007)
									params->__Field(HX_CSTRING("push"),true)(_g15);
								}
								else if (  ( _switch_7==HX_CSTRING("float"))){
									HX_STACK_LINE(1007)
									::String _g16 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(1007)
									Float _g17 = ::Std_obj::parseFloat(_g16);		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(1007)
									params->__Field(HX_CSTRING("push"),true)(_g17);
								}
								else if (  ( _switch_7==HX_CSTRING("color")) ||  ( _switch_7==HX_CSTRING("hex"))){
									HX_STACK_LINE(1007)
									int _g22;		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(1007)
									{
										HX_STACK_LINE(1007)
										::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
										HX_STACK_LINE(1007)
										bool safe = false;		HX_STACK_VAR(safe,"safe");
										HX_STACK_LINE(1007)
										int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
										HX_STACK_LINE(1007)
										int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
										HX_STACK_LINE(1007)
										int _g18 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g18,"_g18");
										HX_STACK_LINE(1007)
										if (((_g18 != (int)0))){
											HX_STACK_LINE(1007)
											if ((!(safe))){
												HX_STACK_LINE(1007)
												HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
											}
											else{
												HX_STACK_LINE(1007)
												return_val = default_color;
											}
										}
										HX_STACK_LINE(1007)
										if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
											HX_STACK_LINE(1007)
											if ((!(safe))){
												HX_STACK_LINE(1007)
												HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
											}
											else{
												HX_STACK_LINE(1007)
												return_val = default_color;
											}
										}
										HX_STACK_LINE(1007)
										if (((return_val == (int)-1))){
											HX_STACK_LINE(1007)
											::String _g19 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g19,"_g19");
											HX_STACK_LINE(1007)
											str = _g19;
											HX_STACK_LINE(1007)
											if (((str.length == (int)6))){
												HX_STACK_LINE(1007)
												str = (HX_CSTRING("FF") + str);
											}
											HX_STACK_LINE(1007)
											int _g21;		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(1007)
											{
												HX_STACK_LINE(1007)
												int length = str.length;		HX_STACK_VAR(length,"length");
												HX_STACK_LINE(1007)
												int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
												HX_STACK_LINE(1007)
												int sum = (int)0;		HX_STACK_VAR(sum,"sum");
												HX_STACK_LINE(1007)
												int i = (length - (int)1);		HX_STACK_VAR(i,"i");
												HX_STACK_LINE(1007)
												while((true)){
													HX_STACK_LINE(1007)
													if ((!(((i >= (int)0))))){
														HX_STACK_LINE(1007)
														break;
													}
													HX_STACK_LINE(1007)
													::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
													HX_STACK_LINE(1007)
													int char_int;		HX_STACK_VAR(char_int,"char_int");
													HX_STACK_LINE(1007)
													{
														HX_STACK_LINE(1007)
														int val = (int)-1;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1007)
														::String _switch_8 = (char_hex);
														if (  ( _switch_8==HX_CSTRING("0")) ||  ( _switch_8==HX_CSTRING("1")) ||  ( _switch_8==HX_CSTRING("2")) ||  ( _switch_8==HX_CSTRING("3")) ||  ( _switch_8==HX_CSTRING("4")) ||  ( _switch_8==HX_CSTRING("5")) ||  ( _switch_8==HX_CSTRING("6")) ||  ( _switch_8==HX_CSTRING("7")) ||  ( _switch_8==HX_CSTRING("8")) ||  ( _switch_8==HX_CSTRING("9")) ||  ( _switch_8==HX_CSTRING("10"))){
															HX_STACK_LINE(1007)
															Dynamic _g20 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g20,"_g20");
															HX_STACK_LINE(1007)
															val = _g20;
														}
														else if (  ( _switch_8==HX_CSTRING("A")) ||  ( _switch_8==HX_CSTRING("a"))){
															HX_STACK_LINE(1007)
															val = (int)10;
														}
														else if (  ( _switch_8==HX_CSTRING("B")) ||  ( _switch_8==HX_CSTRING("b"))){
															HX_STACK_LINE(1007)
															val = (int)11;
														}
														else if (  ( _switch_8==HX_CSTRING("C")) ||  ( _switch_8==HX_CSTRING("c"))){
															HX_STACK_LINE(1007)
															val = (int)12;
														}
														else if (  ( _switch_8==HX_CSTRING("D")) ||  ( _switch_8==HX_CSTRING("d"))){
															HX_STACK_LINE(1007)
															val = (int)13;
														}
														else if (  ( _switch_8==HX_CSTRING("E")) ||  ( _switch_8==HX_CSTRING("e"))){
															HX_STACK_LINE(1007)
															val = (int)14;
														}
														else if (  ( _switch_8==HX_CSTRING("F")) ||  ( _switch_8==HX_CSTRING("f"))){
															HX_STACK_LINE(1007)
															val = (int)15;
														}
														HX_STACK_LINE(1007)
														if (((val == (int)-1))){
															HX_STACK_LINE(1007)
															HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
														}
														HX_STACK_LINE(1007)
														char_int = val;
													}
													HX_STACK_LINE(1007)
													hx::AddEq(sum,(char_int * place_mult));
													HX_STACK_LINE(1007)
													hx::MultEq(place_mult,(int)16);
													HX_STACK_LINE(1007)
													(i)--;
												}
												HX_STACK_LINE(1007)
												_g21 = sum;
											}
											HX_STACK_LINE(1007)
											return_val = _g21;
										}
										HX_STACK_LINE(1007)
										_g22 = return_val;
									}
									HX_STACK_LINE(1007)
									params->__Field(HX_CSTRING("push"),true)(_g22);
								}
							}
;
						}
					}
					HX_STACK_LINE(1007)
					_g23 = params;
				}
				HX_STACK_LINE(1007)
				ihp->set_params(_g23);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_changeThing,(void))

Void FlxUI_obj::_alignThing( ::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_alignThing",0x37322a6f,"flixel.addons.ui.FlxUI._alignThing","flixel/addons/ui/FlxUI.hx",1014,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1015)
		::String datastr = data->x->toString();		HX_STACK_VAR(datastr,"datastr");
		HX_STACK_LINE(1016)
		if ((data->hasNode->resolve(HX_CSTRING("objects")))){
			HX_STACK_LINE(1017)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("objects"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast objectNode = __it->next();
				{
					HX_STACK_LINE(1018)
					Array< ::String > objects = ::flixel::addons::ui::U_obj::xml_str(objectNode->x,HX_CSTRING("value"),true,HX_CSTRING("")).split(HX_CSTRING(","));		HX_STACK_VAR(objects,"objects");
					HX_STACK_LINE(1020)
					::String axis = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("axis"),true,null());		HX_STACK_VAR(axis,"axis");
					HX_STACK_LINE(1021)
					Float spacing = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("spacing"),(int)-1);		HX_STACK_VAR(spacing,"spacing");
					HX_STACK_LINE(1022)
					bool resize = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("resize"),null());		HX_STACK_VAR(resize,"resize");
					HX_STACK_LINE(1024)
					::flixel::util::FlxPoint bounds;		HX_STACK_VAR(bounds,"bounds");
					HX_STACK_LINE(1024)
					{
						HX_STACK_LINE(1024)
						::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)-1,(int)-1);		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(1024)
						point->_inPool = false;
						HX_STACK_LINE(1024)
						bounds = point;
					}
					HX_STACK_LINE(1026)
					if (((bool((axis != HX_CSTRING("horizontal"))) && bool((axis != HX_CSTRING("vertical")))))){
						HX_STACK_LINE(1027)
						HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._alignThing(): axis must be \"horizontal\" or \"vertical\"!"),null()));
						HX_STACK_LINE(1028)
						return null();
					}
					HX_STACK_LINE(1031)
					if ((data->hasNode->resolve(HX_CSTRING("bounds")))){
						HX_STACK_LINE(1032)
						Float bound_range = (int)-1;		HX_STACK_VAR(bound_range,"bound_range");
						HX_STACK_LINE(1034)
						if (((axis == HX_CSTRING("horizontal")))){
							HX_STACK_LINE(1035)
							::String _g = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("left"),null(),null());		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1035)
							Float _g1 = this->_getDataSize(HX_CSTRING("w"),_g,(int)-1);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(1035)
							bounds->set_x(_g1);
							HX_STACK_LINE(1036)
							::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("right"),null(),null());		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(1036)
							Float _g3 = this->_getDataSize(HX_CSTRING("w"),_g2,(int)-1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(1036)
							bounds->set_y(_g3);
						}
						else{
							HX_STACK_LINE(1037)
							if (((axis == HX_CSTRING("vertical")))){
								HX_STACK_LINE(1038)
								::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("top"),null(),null());		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(1038)
								Float _g5 = this->_getDataSize(HX_CSTRING("h"),_g4,(int)-1);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(1038)
								bounds->set_x(_g5);
								HX_STACK_LINE(1039)
								::String _g6 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("bounds"))->x,HX_CSTRING("bottom"),null(),null());		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(1039)
								Float _g7 = this->_getDataSize(HX_CSTRING("h"),_g6,(int)-1);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1039)
								bounds->set_y(_g7);
							}
						}
						HX_STACK_LINE(1042)
						if (((bool((bounds->x != (int)-1)) && bool((bounds->y != (int)-1))))){
							HX_STACK_LINE(1043)
							if (((bounds->y <= bounds->x))){
								HX_STACK_LINE(1045)
								return null();
							}
						}
						else{
							HX_STACK_LINE(1049)
							return null();
						}
						HX_STACK_LINE(1052)
						this->_doAlign(objects,axis,spacing,resize,bounds);
						HX_STACK_LINE(1054)
						if (((  ((!(((  ((!(data->hasNode->resolve(HX_CSTRING("anchor"))))) ? bool(data->has->resolve(HX_CSTRING("x"))) : bool(true) ))))) ? bool(data->has->resolve(HX_CSTRING("y"))) : bool(true) ))){
							HX_STACK_LINE(1055)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(1055)
							while((true)){
								HX_STACK_LINE(1055)
								if ((!(((_g < objects->length))))){
									HX_STACK_LINE(1055)
									break;
								}
								HX_STACK_LINE(1055)
								::String object = objects->__get(_g);		HX_STACK_VAR(object,"object");
								HX_STACK_LINE(1055)
								++(_g);
								HX_STACK_LINE(1056)
								::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(object,null());		HX_STACK_VAR(thing,"thing");
								HX_STACK_LINE(1057)
								this->_loadPosition(data,thing);
							}
						}
					}
					else{
						HX_STACK_LINE(1062)
						HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._alignThing(): <bounds> node not found!"),null()));
						HX_STACK_LINE(1063)
						return null();
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(1067)
			HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("FlxUI._alignThing(): <objects> node not found!"),null()));
			HX_STACK_LINE(1068)
			return null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_alignThing,(void))

Void FlxUI_obj::_doAlign( Array< ::String > objects,::String axis,Float spacing,bool resize,::flixel::util::FlxPoint bounds){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doAlign",0x8f1f33f4,"flixel.addons.ui.FlxUI._doAlign","flixel/addons/ui/FlxUI.hx",1072,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(objects,"objects")
		HX_STACK_ARG(axis,"axis")
		HX_STACK_ARG(spacing,"spacing")
		HX_STACK_ARG(resize,"resize")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1073)
		Float total_spacing = (int)0;		HX_STACK_VAR(total_spacing,"total_spacing");
		HX_STACK_LINE(1074)
		Float total_size = (int)0;		HX_STACK_VAR(total_size,"total_size");
		HX_STACK_LINE(1076)
		Float bound_range = (bounds->y - bounds->x);		HX_STACK_VAR(bound_range,"bound_range");
		HX_STACK_LINE(1078)
		Float spaces = (objects->length - (int)1);		HX_STACK_VAR(spaces,"spaces");
		HX_STACK_LINE(1079)
		Float space_size = (int)0;		HX_STACK_VAR(space_size,"space_size");
		HX_STACK_LINE(1080)
		Float object_size = (int)0;		HX_STACK_VAR(object_size,"object_size");
		HX_STACK_LINE(1082)
		::String size_prop = HX_CSTRING("width");		HX_STACK_VAR(size_prop,"size_prop");
		HX_STACK_LINE(1083)
		::String pos_prop = HX_CSTRING("x");		HX_STACK_VAR(pos_prop,"pos_prop");
		HX_STACK_LINE(1084)
		if (((axis == HX_CSTRING("vertical")))){
			HX_STACK_LINE(1085)
			size_prop = HX_CSTRING("height");
			HX_STACK_LINE(1086)
			pos_prop = HX_CSTRING("y");
		}
		HX_STACK_LINE(1090)
		{
			HX_STACK_LINE(1090)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1090)
			while((true)){
				HX_STACK_LINE(1090)
				if ((!(((_g < objects->length))))){
					HX_STACK_LINE(1090)
					break;
				}
				HX_STACK_LINE(1090)
				::String id = objects->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1090)
				++(_g);
				HX_STACK_LINE(1091)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = this->getAsset(id,null());		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1093)
				Float theval = (int)0;		HX_STACK_VAR(theval,"theval");
				HX_STACK_LINE(1095)
				::String _switch_9 = (size_prop);
				if (  ( _switch_9==HX_CSTRING("width"))){
					HX_STACK_LINE(1096)
					Float _g1 = widget->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1096)
					theval = _g1;
				}
				else if (  ( _switch_9==HX_CSTRING("height"))){
					HX_STACK_LINE(1097)
					Float _g1 = widget->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1097)
					theval = _g1;
				}
				HX_STACK_LINE(1100)
				hx::AddEq(total_size,theval);
			}
		}
		HX_STACK_LINE(1103)
		if (((resize == false))){
			HX_STACK_LINE(1104)
			total_spacing = (bound_range - total_size);
			HX_STACK_LINE(1105)
			space_size = (Float(total_spacing) / Float(spaces));
		}
		else{
			HX_STACK_LINE(1107)
			space_size = spacing;
			HX_STACK_LINE(1108)
			total_spacing = (spacing * spaces);
			HX_STACK_LINE(1109)
			object_size = (Float(((bound_range - total_spacing))) / Float(objects->length));
		}
		HX_STACK_LINE(1112)
		int _g2 = ::Std_obj::_int(object_size);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1112)
		object_size = _g2;
		HX_STACK_LINE(1113)
		int _g3 = ::Std_obj::_int(space_size);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1113)
		space_size = _g3;
		HX_STACK_LINE(1115)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1116)
		Float last_pos = bounds->x;		HX_STACK_VAR(last_pos,"last_pos");
		HX_STACK_LINE(1117)
		{
			HX_STACK_LINE(1117)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1117)
			while((true)){
				HX_STACK_LINE(1117)
				if ((!(((_g < objects->length))))){
					HX_STACK_LINE(1117)
					break;
				}
				HX_STACK_LINE(1117)
				::String id = objects->__get(_g);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(1117)
				++(_g);
				HX_STACK_LINE(1118)
				::flixel::addons::ui::interfaces::IFlxUIWidget widget = this->getAsset(id,null());		HX_STACK_VAR(widget,"widget");
				HX_STACK_LINE(1119)
				Float pos = last_pos;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(1120)
				if ((!(resize))){
					HX_STACK_LINE(1121)
					::String _switch_10 = (size_prop);
					if (  ( _switch_10==HX_CSTRING("width"))){
						HX_STACK_LINE(1122)
						Float _g4 = widget->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1122)
						object_size = _g4;
					}
					else if (  ( _switch_10==HX_CSTRING("height"))){
						HX_STACK_LINE(1123)
						Float _g5 = widget->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1123)
						object_size = _g5;
					}
				}
				else{
					HX_STACK_LINE(1127)
					if ((::Std_obj::is(widget,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
						HX_STACK_LINE(1128)
						::flixel::addons::ui::interfaces::IResizable widgetr = widget;		HX_STACK_VAR(widgetr,"widgetr");
						HX_STACK_LINE(1129)
						if (((axis == HX_CSTRING("vertical")))){
							HX_STACK_LINE(1130)
							Float _g6 = widgetr->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(1130)
							widgetr->resize(_g6,object_size);
						}
						else{
							HX_STACK_LINE(1131)
							if (((axis == HX_CSTRING("horizontal")))){
								HX_STACK_LINE(1132)
								Float _g7 = widgetr->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(1132)
								widgetr->resize(object_size,_g7);
							}
						}
					}
				}
				HX_STACK_LINE(1136)
				last_pos = ((pos + object_size) + space_size);
				HX_STACK_LINE(1138)
				::String _switch_11 = (pos_prop);
				if (  ( _switch_11==HX_CSTRING("x"))){
					HX_STACK_LINE(1139)
					widget->__Field(HX_CSTRING("set_x"),true)(pos);
				}
				else if (  ( _switch_11==HX_CSTRING("y"))){
					HX_STACK_LINE(1140)
					widget->__Field(HX_CSTRING("set_y"),true)(pos);
				}
				HX_STACK_LINE(1143)
				(i)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxUI_obj,_doAlign,(void))

bool FlxUI_obj::_checkFailure( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_checkFailure",0x7b6fc968,"flixel.addons.ui.FlxUI._checkFailure","flixel/addons/ui/FlxUI.hx",1147,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1148)
	::String target = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("target"),true,null());		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(1149)
	::String property = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("property"),true,null());		HX_STACK_VAR(property,"property");
	HX_STACK_LINE(1150)
	::String compare = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("compare"),true,null());		HX_STACK_VAR(compare,"compare");
	HX_STACK_LINE(1151)
	::String value = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("value"),true,null());		HX_STACK_VAR(value,"value");
	HX_STACK_LINE(1153)
	::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(target,null());		HX_STACK_VAR(thing,"thing");
	HX_STACK_LINE(1155)
	if (((thing == null()))){
		HX_STACK_LINE(1156)
		return false;
	}
	HX_STACK_LINE(1159)
	Float prop_f = (int)0;		HX_STACK_VAR(prop_f,"prop_f");
	HX_STACK_LINE(1160)
	Float val_f = (int)0;		HX_STACK_VAR(val_f,"val_f");
	HX_STACK_LINE(1162)
	Float p = ::flixel::addons::ui::U_obj::perc_to_float(value);		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(1164)
	::String _switch_12 = (property);
	if (  ( _switch_12==HX_CSTRING("w")) ||  ( _switch_12==HX_CSTRING("width"))){
		HX_STACK_LINE(1165)
		Float _g = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1165)
		prop_f = _g;
	}
	else if (  ( _switch_12==HX_CSTRING("h")) ||  ( _switch_12==HX_CSTRING("height"))){
		HX_STACK_LINE(1166)
		Float _g1 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1166)
		prop_f = _g1;
	}
	HX_STACK_LINE(1169)
	if ((::Math_obj::isNaN(p))){
		HX_STACK_LINE(1170)
		if ((::flixel::addons::ui::U_obj::isStrNum(value))){
			HX_STACK_LINE(1171)
			Float _g2 = ::Std_obj::parseFloat(value);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1171)
			val_f = _g2;
		}
		else{
			HX_STACK_LINE(1173)
			return false;
		}
	}
	else{
		HX_STACK_LINE(1176)
		::String _switch_13 = (property);
		if (  ( _switch_13==HX_CSTRING("w")) ||  ( _switch_13==HX_CSTRING("width"))){
			HX_STACK_LINE(1177)
			int _g3 = this->thisWidth();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1177)
			Float _g4 = (p * _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1177)
			val_f = _g4;
		}
		else if (  ( _switch_13==HX_CSTRING("h")) ||  ( _switch_13==HX_CSTRING("height"))){
			HX_STACK_LINE(1178)
			int _g5 = this->thisHeight();		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1178)
			Float _g6 = (p * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1178)
			val_f = _g6;
		}
	}
	HX_STACK_LINE(1182)
	bool return_val = false;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(1184)
	::String _switch_14 = (compare);
	if (  ( _switch_14==HX_CSTRING("<"))){
		HX_STACK_LINE(1185)
		if (((prop_f < val_f))){
			HX_STACK_LINE(1186)
			this->failed_by = (val_f - prop_f);
			HX_STACK_LINE(1187)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_CSTRING(">"))){
		HX_STACK_LINE(1189)
		if (((prop_f > val_f))){
			HX_STACK_LINE(1190)
			this->failed_by = (prop_f - val_f);
			HX_STACK_LINE(1191)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_CSTRING("=")) ||  ( _switch_14==HX_CSTRING("=="))){
		HX_STACK_LINE(1193)
		if (((prop_f == val_f))){
			HX_STACK_LINE(1194)
			Float _g7 = ::Math_obj::abs((prop_f - val_f));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1194)
			this->failed_by = _g7;
			HX_STACK_LINE(1195)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_CSTRING("<="))){
		HX_STACK_LINE(1197)
		if (((prop_f <= val_f))){
			HX_STACK_LINE(1198)
			this->failed_by = (val_f - prop_f);
			HX_STACK_LINE(1199)
			return_val = true;
		}
	}
	else if (  ( _switch_14==HX_CSTRING(">="))){
		HX_STACK_LINE(1201)
		if (((prop_f >= val_f))){
			HX_STACK_LINE(1202)
			this->failed_by = (prop_f - val_f);
			HX_STACK_LINE(1203)
			return_val = true;
		}
	}
	HX_STACK_LINE(1207)
	return return_val;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_checkFailure,return )

Void FlxUI_obj::_resizeThing( ::flixel::addons::ui::interfaces::IResizable fo_r,Dynamic bounds){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_resizeThing",0x4ba3eb14,"flixel.addons.ui.FlxUI._resizeThing","flixel/addons/ui/FlxUI.hx",1211,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fo_r,"fo_r")
		HX_STACK_ARG(bounds,"bounds")
		HX_STACK_LINE(1212)
		bool do_resize = false;		HX_STACK_VAR(do_resize,"do_resize");
		HX_STACK_LINE(1213)
		Float ww = fo_r->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(ww,"ww");
		HX_STACK_LINE(1214)
		Float hh = fo_r->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(hh,"hh");
		HX_STACK_LINE(1216)
		if (((ww < bounds->__Field(HX_CSTRING("min_width"),true)))){
			HX_STACK_LINE(1217)
			do_resize = true;
			HX_STACK_LINE(1218)
			ww = bounds->__Field(HX_CSTRING("min_width"),true);
		}
		else{
			HX_STACK_LINE(1219)
			if (((ww > bounds->__Field(HX_CSTRING("max_width"),true)))){
				HX_STACK_LINE(1220)
				do_resize = true;
				HX_STACK_LINE(1221)
				ww = bounds->__Field(HX_CSTRING("max_width"),true);
			}
		}
		HX_STACK_LINE(1224)
		if (((hh < bounds->__Field(HX_CSTRING("min_height"),true)))){
			HX_STACK_LINE(1225)
			do_resize = true;
			HX_STACK_LINE(1226)
			hh = bounds->__Field(HX_CSTRING("min_height"),true);
		}
		else{
			HX_STACK_LINE(1227)
			if (((hh > bounds->__Field(HX_CSTRING("max_height"),true)))){
				HX_STACK_LINE(1228)
				do_resize = true;
				HX_STACK_LINE(1229)
				hh = bounds->__Field(HX_CSTRING("max_height"),true);
			}
		}
		HX_STACK_LINE(1232)
		if ((do_resize)){
			HX_STACK_LINE(1233)
			fo_r->resize(ww,hh);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_resizeThing,(void))

Void FlxUI_obj::_postLoadThing( ::String type,::haxe::xml::Fast data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_postLoadThing",0x7251e7a2,"flixel.addons.ui.FlxUI._postLoadThing","flixel/addons/ui/FlxUI.hx",1237,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(1239)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1240)
		::flixel::addons::ui::interfaces::IFlxUIWidget thing = this->getAsset(id,null());		HX_STACK_VAR(thing,"thing");
		HX_STACK_LINE(1242)
		if (((type == HX_CSTRING("align")))){
			HX_STACK_LINE(1243)
			this->_alignThing(data);
		}
		HX_STACK_LINE(1246)
		if (((thing == null()))){
			HX_STACK_LINE(1247)
			return null();
		}
		HX_STACK_LINE(1250)
		::String use_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
		HX_STACK_LINE(1251)
		::haxe::xml::Fast definition = null();		HX_STACK_VAR(definition,"definition");
		HX_STACK_LINE(1252)
		if (((use_def != HX_CSTRING("")))){
			HX_STACK_LINE(1253)
			::haxe::xml::Fast _g = this->getDefinition(use_def,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1253)
			definition = _g;
		}
		HX_STACK_LINE(1256)
		if ((::Std_obj::is(thing,hx::ClassOf< ::flixel::addons::ui::interfaces::IResizable >()))){
			HX_STACK_LINE(1258)
			Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
			HX_STACK_LINE(1260)
			if (((bounds != null()))){
				HX_STACK_LINE(1261)
				::flixel::addons::ui::interfaces::IResizable _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1261)
				_g1 = hx::TCast< flixel::addons::ui::interfaces::IResizable >::cast(thing);
				HX_STACK_LINE(1261)
				this->_resizeThing(_g1,bounds);
			}
		}
		HX_STACK_LINE(1265)
		{
			HX_STACK_LINE(1265)
			{
				HX_STACK_LINE(1265)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1265)
				_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + -(thing->__Field(HX_CSTRING("x"),true))));
			}
			HX_STACK_LINE(1265)
			{
				HX_STACK_LINE(1265)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1265)
				_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + -(thing->__Field(HX_CSTRING("y"),true))));
			}
		}
		HX_STACK_LINE(1266)
		this->_loadPosition(data,thing);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_postLoadThing,(void))

::flixel::addons::ui::FlxUITileTest FlxUI_obj::_loadTileTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileTest",0xb7577bec,"flixel.addons.ui.FlxUI._loadTileTest","flixel/addons/ui/FlxUI.hx",1269,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1271)
	int tiles_w = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("tiles_w"),(int)2);		HX_STACK_VAR(tiles_w,"tiles_w");
	HX_STACK_LINE(1272)
	int tiles_h = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("tiles_h"),(int)2);		HX_STACK_VAR(tiles_h,"tiles_h");
	HX_STACK_LINE(1273)
	Float w = this->_loadWidth(data,null(),null());		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(1274)
	Float h = this->_loadHeight(data,null(),null());		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(1277)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(1279)
	if (((w < bounds->__Field(HX_CSTRING("min_width"),true)))){
		HX_STACK_LINE(1279)
		w = bounds->__Field(HX_CSTRING("min_width"),true);
	}
	HX_STACK_LINE(1280)
	if (((h < bounds->__Field(HX_CSTRING("min_height"),true)))){
		HX_STACK_LINE(1280)
		h = bounds->__Field(HX_CSTRING("min_height"),true);
	}
	HX_STACK_LINE(1282)
	int tileWidth = ::Std_obj::_int((Float(w) / Float(tiles_w)));		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(1283)
	int tileHeight = ::Std_obj::_int((Float(h) / Float(tiles_h)));		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(1285)
	if (((tileWidth < tileHeight))){
		HX_STACK_LINE(1285)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1286)
		if (((tileHeight < tileWidth))){
			HX_STACK_LINE(1286)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1288)
	Float totalw = (tileWidth * tiles_w);		HX_STACK_VAR(totalw,"totalw");
	HX_STACK_LINE(1289)
	Float totalh = (tileHeight * tiles_h);		HX_STACK_VAR(totalh,"totalh");
	HX_STACK_LINE(1291)
	if (((totalw > bounds->__Field(HX_CSTRING("max_width"),true)))){
		HX_STACK_LINE(1291)
		int _g = ::Std_obj::_int((Float(bounds->__Field(HX_CSTRING("max_width"),true)) / Float(tiles_w)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1291)
		tileWidth = _g;
	}
	HX_STACK_LINE(1292)
	if (((totalh > bounds->__Field(HX_CSTRING("max_height"),true)))){
		HX_STACK_LINE(1292)
		int _g1 = ::Std_obj::_int((Float(bounds->__Field(HX_CSTRING("max_height"),true)) / Float(tiles_h)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1292)
		tileHeight = _g1;
	}
	HX_STACK_LINE(1294)
	if (((tileWidth < tileHeight))){
		HX_STACK_LINE(1294)
		tileHeight = tileWidth;
	}
	else{
		HX_STACK_LINE(1295)
		if (((tileHeight < tileWidth))){
			HX_STACK_LINE(1295)
			tileWidth = tileHeight;
		}
	}
	HX_STACK_LINE(1297)
	if (((tileWidth < (int)2))){
		HX_STACK_LINE(1297)
		tileWidth = (int)2;
	}
	HX_STACK_LINE(1298)
	if (((tileHeight < (int)2))){
		HX_STACK_LINE(1298)
		tileHeight = (int)2;
	}
	HX_STACK_LINE(1300)
	::flixel::addons::ui::FlxUITileTest ftt = ::flixel::addons::ui::FlxUITileTest_obj::__new((int)0,(int)0,tileWidth,tileHeight,tiles_w,tiles_h,null(),null());		HX_STACK_VAR(ftt,"ftt");
	HX_STACK_LINE(1301)
	return ftt;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileTest,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadText( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadText",0x9815c3f9,"flixel.addons.ui.FlxUI._loadText","flixel/addons/ui/FlxUI.hx",1304,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1306)
	::String text = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("text"),null(),null());		HX_STACK_VAR(text,"text");
	HX_STACK_LINE(1307)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1308)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1309)
	::String _g = this->getText(text,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1309)
	text = _g;
	HX_STACK_LINE(1311)
	Float _g1 = this->_loadWidth(data,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1311)
	int W = ::Std_obj::_int(_g1);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1313)
	::String the_font = this->_loadFontFace(data);		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(1315)
	bool input = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("input"),null());		HX_STACK_VAR(input,"input");
	HX_STACK_LINE(1317)
	::String align = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("align"),null(),null());		HX_STACK_VAR(align,"align");
	HX_STACK_LINE(1317)
	if (((align == HX_CSTRING("")))){
		HX_STACK_LINE(1317)
		align = null();
	}
	HX_STACK_LINE(1318)
	int size = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("size"),null());		HX_STACK_VAR(size,"size");
	HX_STACK_LINE(1318)
	if (((size == (int)0))){
		HX_STACK_LINE(1318)
		size = (int)8;
	}
	HX_STACK_LINE(1319)
	int color = this->_loadColor(data,null(),null());		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(1321)
	::flixel::addons::ui::BorderDef border = this->_loadBorder(data);		HX_STACK_VAR(border,"border");
	HX_STACK_LINE(1323)
	int backgroundColor;		HX_STACK_VAR(backgroundColor,"backgroundColor");
	HX_STACK_LINE(1323)
	{
		HX_STACK_LINE(1323)
		::String str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("background"),true,HX_CSTRING("0x00000000"));		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(1323)
		int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
		HX_STACK_LINE(1323)
		int _g2 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1323)
		if (((_g2 != (int)0))){
			HX_STACK_LINE(1323)
			return_val = (int)0;
		}
		HX_STACK_LINE(1323)
		if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
			HX_STACK_LINE(1323)
			return_val = (int)0;
		}
		HX_STACK_LINE(1323)
		if (((return_val == (int)-1))){
			HX_STACK_LINE(1323)
			::String _g3 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1323)
			str = _g3;
			HX_STACK_LINE(1323)
			if (((str.length == (int)6))){
				HX_STACK_LINE(1323)
				str = (HX_CSTRING("FF") + str);
			}
			HX_STACK_LINE(1323)
			int _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1323)
			{
				HX_STACK_LINE(1323)
				int length = str.length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(1323)
				int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
				HX_STACK_LINE(1323)
				int sum = (int)0;		HX_STACK_VAR(sum,"sum");
				HX_STACK_LINE(1323)
				int i = (length - (int)1);		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(1323)
				while((true)){
					HX_STACK_LINE(1323)
					if ((!(((i >= (int)0))))){
						HX_STACK_LINE(1323)
						break;
					}
					HX_STACK_LINE(1323)
					::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
					HX_STACK_LINE(1323)
					int char_int;		HX_STACK_VAR(char_int,"char_int");
					HX_STACK_LINE(1323)
					{
						HX_STACK_LINE(1323)
						int val = (int)-1;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1323)
						::String _switch_15 = (char_hex);
						if (  ( _switch_15==HX_CSTRING("0")) ||  ( _switch_15==HX_CSTRING("1")) ||  ( _switch_15==HX_CSTRING("2")) ||  ( _switch_15==HX_CSTRING("3")) ||  ( _switch_15==HX_CSTRING("4")) ||  ( _switch_15==HX_CSTRING("5")) ||  ( _switch_15==HX_CSTRING("6")) ||  ( _switch_15==HX_CSTRING("7")) ||  ( _switch_15==HX_CSTRING("8")) ||  ( _switch_15==HX_CSTRING("9")) ||  ( _switch_15==HX_CSTRING("10"))){
							HX_STACK_LINE(1323)
							Dynamic _g4 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(1323)
							val = _g4;
						}
						else if (  ( _switch_15==HX_CSTRING("A")) ||  ( _switch_15==HX_CSTRING("a"))){
							HX_STACK_LINE(1323)
							val = (int)10;
						}
						else if (  ( _switch_15==HX_CSTRING("B")) ||  ( _switch_15==HX_CSTRING("b"))){
							HX_STACK_LINE(1323)
							val = (int)11;
						}
						else if (  ( _switch_15==HX_CSTRING("C")) ||  ( _switch_15==HX_CSTRING("c"))){
							HX_STACK_LINE(1323)
							val = (int)12;
						}
						else if (  ( _switch_15==HX_CSTRING("D")) ||  ( _switch_15==HX_CSTRING("d"))){
							HX_STACK_LINE(1323)
							val = (int)13;
						}
						else if (  ( _switch_15==HX_CSTRING("E")) ||  ( _switch_15==HX_CSTRING("e"))){
							HX_STACK_LINE(1323)
							val = (int)14;
						}
						else if (  ( _switch_15==HX_CSTRING("F")) ||  ( _switch_15==HX_CSTRING("f"))){
							HX_STACK_LINE(1323)
							val = (int)15;
						}
						HX_STACK_LINE(1323)
						if (((val == (int)-1))){
							HX_STACK_LINE(1323)
							HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
						}
						HX_STACK_LINE(1323)
						char_int = val;
					}
					HX_STACK_LINE(1323)
					hx::AddEq(sum,(char_int * place_mult));
					HX_STACK_LINE(1323)
					hx::MultEq(place_mult,(int)16);
					HX_STACK_LINE(1323)
					(i)--;
				}
				HX_STACK_LINE(1323)
				_g5 = sum;
			}
			HX_STACK_LINE(1323)
			return_val = _g5;
		}
		HX_STACK_LINE(1323)
		backgroundColor = return_val;
	}
	HX_STACK_LINE(1325)
	::flixel::addons::ui::interfaces::IFlxUIWidget ft;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(1326)
	if (((input == false))){
		HX_STACK_LINE(1327)
		::flixel::addons::ui::FlxUIText ftu = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,W,text,size,null());		HX_STACK_VAR(ftu,"ftu");
		HX_STACK_LINE(1328)
		ftu->setFormat(the_font,size,color,align,null(),null(),null());
		HX_STACK_LINE(1329)
		border->apply(ftu);
		HX_STACK_LINE(1330)
		{
			HX_STACK_LINE(1330)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(1330)
			ftu->calcFrame(true);
		}
		HX_STACK_LINE(1331)
		ft = ftu;
	}
	else{
		HX_STACK_LINE(1333)
		::flixel::addons::ui::FlxUIInputText fti = ::flixel::addons::ui::FlxUIInputText_obj::__new((int)0,(int)0,W,text,size,color,backgroundColor,null());		HX_STACK_VAR(fti,"fti");
		HX_STACK_LINE(1334)
		fti->setFormat(the_font,size,color,align,null(),null(),null());
		HX_STACK_LINE(1335)
		border->apply(fti);
		HX_STACK_LINE(1336)
		{
			HX_STACK_LINE(1336)
			bool Force = false;		HX_STACK_VAR(Force,"Force");
			HX_STACK_LINE(1336)
			fti->calcFrame(true);
		}
		HX_STACK_LINE(1337)
		ft = fti;
	}
	HX_STACK_LINE(1339)
	return ft;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadText,return )

::flixel::addons::ui::FlxUIRadioGroup FlxUI_obj::_loadRadioGroup( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRadioGroup",0x22b21c90,"flixel.addons.ui.FlxUI._loadRadioGroup","flixel/addons/ui/FlxUI.hx",1379,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1380)
	::flixel::addons::ui::FlxUIRadioGroup frg = null();		HX_STACK_VAR(frg,"frg");
	HX_STACK_LINE(1382)
	::String dot_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("dot_src"),true,null());		HX_STACK_VAR(dot_src,"dot_src");
	HX_STACK_LINE(1383)
	::String radio_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("radio_src"),true,null());		HX_STACK_VAR(radio_src,"radio_src");
	HX_STACK_LINE(1385)
	Array< ::String > labels = Array_obj< ::String >::__new();		HX_STACK_VAR(labels,"labels");
	HX_STACK_LINE(1386)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(1388)
	int W = this->_loadWidth(data,(int)11,HX_CSTRING("radio_width"));		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(1389)
	int H = this->_loadHeight(data,(int)11,HX_CSTRING("radio_height"));		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(1391)
	int labelW = this->_loadWidth(data,(int)100,HX_CSTRING("label_width"));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1393)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("radio"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast radioNode = __it->next();
		{
			HX_STACK_LINE(1394)
			::String id = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
			HX_STACK_LINE(1395)
			::String label = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
			HX_STACK_LINE(1397)
			::String context = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
			HX_STACK_LINE(1398)
			::String code = ::flixel::addons::ui::U_obj::xml_str(radioNode->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
			HX_STACK_LINE(1399)
			::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1399)
			label = _g;
			HX_STACK_LINE(1401)
			ids->push(id);
			HX_STACK_LINE(1402)
			labels->push(label);
		}
;
	}
	HX_STACK_LINE(1405)
	Float y_space = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("y_space"),(int)25);		HX_STACK_VAR(y_space,"y_space");
	HX_STACK_LINE(1407)
	Dynamic params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1407)
	{
		HX_STACK_LINE(1407)
		Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1407)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1407)
			Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1407)
			params1 = _g1;
			HX_STACK_LINE(1407)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast param = __it->next();
				if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
					HX_STACK_LINE(1407)
					::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1407)
					::String _g2 = type.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1407)
					type = _g2;
					HX_STACK_LINE(1407)
					::String _switch_16 = (type);
					if (  ( _switch_16==HX_CSTRING("string"))){
						HX_STACK_LINE(1407)
						::String _g3 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1407)
						::String _g4 = ::String(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1407)
						params1->__Field(HX_CSTRING("push"),true)(_g4);
					}
					else if (  ( _switch_16==HX_CSTRING("int"))){
						HX_STACK_LINE(1407)
						::String _g5 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1407)
						Dynamic _g6 = ::Std_obj::parseInt(_g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1407)
						params1->__Field(HX_CSTRING("push"),true)(_g6);
					}
					else if (  ( _switch_16==HX_CSTRING("float"))){
						HX_STACK_LINE(1407)
						::String _g7 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1407)
						Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(1407)
						params1->__Field(HX_CSTRING("push"),true)(_g8);
					}
					else if (  ( _switch_16==HX_CSTRING("color")) ||  ( _switch_16==HX_CSTRING("hex"))){
						HX_STACK_LINE(1407)
						int _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1407)
						{
							HX_STACK_LINE(1407)
							::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(1407)
							bool safe = false;		HX_STACK_VAR(safe,"safe");
							HX_STACK_LINE(1407)
							int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
							HX_STACK_LINE(1407)
							int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
							HX_STACK_LINE(1407)
							int _g9 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1407)
							if (((_g9 != (int)0))){
								HX_STACK_LINE(1407)
								if ((!(safe))){
									HX_STACK_LINE(1407)
									HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
								}
								else{
									HX_STACK_LINE(1407)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1407)
							if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
								HX_STACK_LINE(1407)
								if ((!(safe))){
									HX_STACK_LINE(1407)
									HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
								}
								else{
									HX_STACK_LINE(1407)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1407)
							if (((return_val == (int)-1))){
								HX_STACK_LINE(1407)
								::String _g10 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(1407)
								str = _g10;
								HX_STACK_LINE(1407)
								if (((str.length == (int)6))){
									HX_STACK_LINE(1407)
									str = (HX_CSTRING("FF") + str);
								}
								HX_STACK_LINE(1407)
								int _g12;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(1407)
								{
									HX_STACK_LINE(1407)
									int length = str.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1407)
									int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
									HX_STACK_LINE(1407)
									int sum = (int)0;		HX_STACK_VAR(sum,"sum");
									HX_STACK_LINE(1407)
									int i = (length - (int)1);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1407)
									while((true)){
										HX_STACK_LINE(1407)
										if ((!(((i >= (int)0))))){
											HX_STACK_LINE(1407)
											break;
										}
										HX_STACK_LINE(1407)
										::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
										HX_STACK_LINE(1407)
										int char_int;		HX_STACK_VAR(char_int,"char_int");
										HX_STACK_LINE(1407)
										{
											HX_STACK_LINE(1407)
											int val = (int)-1;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1407)
											::String _switch_17 = (char_hex);
											if (  ( _switch_17==HX_CSTRING("0")) ||  ( _switch_17==HX_CSTRING("1")) ||  ( _switch_17==HX_CSTRING("2")) ||  ( _switch_17==HX_CSTRING("3")) ||  ( _switch_17==HX_CSTRING("4")) ||  ( _switch_17==HX_CSTRING("5")) ||  ( _switch_17==HX_CSTRING("6")) ||  ( _switch_17==HX_CSTRING("7")) ||  ( _switch_17==HX_CSTRING("8")) ||  ( _switch_17==HX_CSTRING("9")) ||  ( _switch_17==HX_CSTRING("10"))){
												HX_STACK_LINE(1407)
												Dynamic _g11 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(1407)
												val = _g11;
											}
											else if (  ( _switch_17==HX_CSTRING("A")) ||  ( _switch_17==HX_CSTRING("a"))){
												HX_STACK_LINE(1407)
												val = (int)10;
											}
											else if (  ( _switch_17==HX_CSTRING("B")) ||  ( _switch_17==HX_CSTRING("b"))){
												HX_STACK_LINE(1407)
												val = (int)11;
											}
											else if (  ( _switch_17==HX_CSTRING("C")) ||  ( _switch_17==HX_CSTRING("c"))){
												HX_STACK_LINE(1407)
												val = (int)12;
											}
											else if (  ( _switch_17==HX_CSTRING("D")) ||  ( _switch_17==HX_CSTRING("d"))){
												HX_STACK_LINE(1407)
												val = (int)13;
											}
											else if (  ( _switch_17==HX_CSTRING("E")) ||  ( _switch_17==HX_CSTRING("e"))){
												HX_STACK_LINE(1407)
												val = (int)14;
											}
											else if (  ( _switch_17==HX_CSTRING("F")) ||  ( _switch_17==HX_CSTRING("f"))){
												HX_STACK_LINE(1407)
												val = (int)15;
											}
											HX_STACK_LINE(1407)
											if (((val == (int)-1))){
												HX_STACK_LINE(1407)
												HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
											}
											HX_STACK_LINE(1407)
											char_int = val;
										}
										HX_STACK_LINE(1407)
										hx::AddEq(sum,(char_int * place_mult));
										HX_STACK_LINE(1407)
										hx::MultEq(place_mult,(int)16);
										HX_STACK_LINE(1407)
										(i)--;
									}
									HX_STACK_LINE(1407)
									_g12 = sum;
								}
								HX_STACK_LINE(1407)
								return_val = _g12;
							}
							HX_STACK_LINE(1407)
							_g13 = return_val;
						}
						HX_STACK_LINE(1407)
						params1->__Field(HX_CSTRING("push"),true)(_g13);
					}
				}
;
			}
		}
		HX_STACK_LINE(1407)
		params = params1;
	}
	HX_STACK_LINE(1409)
	::String radio_asset = null();		HX_STACK_VAR(radio_asset,"radio_asset");
	HX_STACK_LINE(1410)
	if (((radio_src != HX_CSTRING("")))){
		HX_STACK_LINE(1411)
		::String _g14 = ::flixel::addons::ui::U_obj::gfx(radio_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(1411)
		radio_asset = _g14;
	}
	HX_STACK_LINE(1414)
	Dynamic dot_asset = null();		HX_STACK_VAR(dot_asset,"dot_asset");
	HX_STACK_LINE(1415)
	if (((dot_src != HX_CSTRING("")))){
		HX_STACK_LINE(1416)
		::String _g15 = ::flixel::addons::ui::U_obj::gfx(dot_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(1416)
		dot_asset = _g15;
	}
	HX_STACK_LINE(1422)
	::flixel::addons::ui::FlxUIRadioGroup _g16 = ::flixel::addons::ui::FlxUIRadioGroup_obj::__new((int)0,(int)0,ids,labels,null(),y_space,W,H,labelW);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(1422)
	frg = _g16;
	HX_STACK_LINE(1423)
	frg->set_params(params);
	HX_STACK_LINE(1425)
	if (((bool((radio_asset != HX_CSTRING(""))) && bool((radio_asset != null()))))){
		HX_STACK_LINE(1426)
		frg->loadGraphics(radio_asset,dot_asset);
	}
	HX_STACK_LINE(1429)
	int text_x = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1430)
	int text_y = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1432)
	{
		HX_STACK_LINE(1432)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1432)
		Array< ::Dynamic > _g1 = frg->group->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1432)
		while((true)){
			HX_STACK_LINE(1432)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(1432)
				break;
			}
			HX_STACK_LINE(1432)
			::flixel::FlxSprite fo = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fo,"fo");
			HX_STACK_LINE(1432)
			++(_g);
			HX_STACK_LINE(1433)
			if (((fo != null()))){
				HX_STACK_LINE(1434)
				if ((::Std_obj::is(fo,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >()))){
					HX_STACK_LINE(1435)
					::flixel::addons::ui::FlxUICheckBox fc;		HX_STACK_VAR(fc,"fc");
					HX_STACK_LINE(1435)
					fc = hx::TCast< flixel::addons::ui::FlxUICheckBox >::cast(fo);
					HX_STACK_LINE(1436)
					this->formatButtonText(data,fc);
					HX_STACK_LINE(1437)
					fc->set_textX(text_x);
					HX_STACK_LINE(1438)
					fc->set_textY(text_y);
				}
			}
		}
	}
	HX_STACK_LINE(1443)
	return frg;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRadioGroup,return )

::flixel::addons::ui::FlxUICheckBox FlxUI_obj::_loadCheckBox( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadCheckBox",0xdd35176f,"flixel.addons.ui.FlxUI._loadCheckBox","flixel/addons/ui/FlxUI.hx",1446,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1447)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(1448)
	::flixel::addons::ui::FlxUICheckBox fc = null();		HX_STACK_VAR(fc,"fc");
	HX_STACK_LINE(1450)
	::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1451)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1452)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1454)
	bool checked = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("checked"),false);		HX_STACK_VAR(checked,"checked");
	HX_STACK_LINE(1456)
	::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1456)
	label = _g;
	HX_STACK_LINE(1458)
	int labelW = this->_loadWidth(data,(int)100,HX_CSTRING("label_width"));		HX_STACK_VAR(labelW,"labelW");
	HX_STACK_LINE(1460)
	::String check_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("check_src"),true,null());		HX_STACK_VAR(check_src,"check_src");
	HX_STACK_LINE(1461)
	::String box_src = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("box_src"),true,null());		HX_STACK_VAR(box_src,"box_src");
	HX_STACK_LINE(1463)
	Dynamic params;		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(1463)
	{
		HX_STACK_LINE(1463)
		Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
		HX_STACK_LINE(1463)
		if ((data->hasNode->resolve(HX_CSTRING("param")))){
			HX_STACK_LINE(1463)
			Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1463)
			params1 = _g1;
			HX_STACK_LINE(1463)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast param = __it->next();
				if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
					HX_STACK_LINE(1463)
					::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(1463)
					::String _g2 = type.toLowerCase();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1463)
					type = _g2;
					HX_STACK_LINE(1463)
					::String _switch_18 = (type);
					if (  ( _switch_18==HX_CSTRING("string"))){
						HX_STACK_LINE(1463)
						::String _g3 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1463)
						::String _g4 = ::String(_g3);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(1463)
						params1->__Field(HX_CSTRING("push"),true)(_g4);
					}
					else if (  ( _switch_18==HX_CSTRING("int"))){
						HX_STACK_LINE(1463)
						::String _g5 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(1463)
						Dynamic _g6 = ::Std_obj::parseInt(_g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1463)
						params1->__Field(HX_CSTRING("push"),true)(_g6);
					}
					else if (  ( _switch_18==HX_CSTRING("float"))){
						HX_STACK_LINE(1463)
						::String _g7 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1463)
						Float _g8 = ::Std_obj::parseFloat(_g7);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(1463)
						params1->__Field(HX_CSTRING("push"),true)(_g8);
					}
					else if (  ( _switch_18==HX_CSTRING("color")) ||  ( _switch_18==HX_CSTRING("hex"))){
						HX_STACK_LINE(1463)
						int _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1463)
						{
							HX_STACK_LINE(1463)
							::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
							HX_STACK_LINE(1463)
							bool safe = false;		HX_STACK_VAR(safe,"safe");
							HX_STACK_LINE(1463)
							int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
							HX_STACK_LINE(1463)
							int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
							HX_STACK_LINE(1463)
							int _g9 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1463)
							if (((_g9 != (int)0))){
								HX_STACK_LINE(1463)
								if ((!(safe))){
									HX_STACK_LINE(1463)
									HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
								}
								else{
									HX_STACK_LINE(1463)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1463)
							if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
								HX_STACK_LINE(1463)
								if ((!(safe))){
									HX_STACK_LINE(1463)
									HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
								}
								else{
									HX_STACK_LINE(1463)
									return_val = default_color;
								}
							}
							HX_STACK_LINE(1463)
							if (((return_val == (int)-1))){
								HX_STACK_LINE(1463)
								::String _g10 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(1463)
								str = _g10;
								HX_STACK_LINE(1463)
								if (((str.length == (int)6))){
									HX_STACK_LINE(1463)
									str = (HX_CSTRING("FF") + str);
								}
								HX_STACK_LINE(1463)
								int _g12;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(1463)
								{
									HX_STACK_LINE(1463)
									int length = str.length;		HX_STACK_VAR(length,"length");
									HX_STACK_LINE(1463)
									int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
									HX_STACK_LINE(1463)
									int sum = (int)0;		HX_STACK_VAR(sum,"sum");
									HX_STACK_LINE(1463)
									int i = (length - (int)1);		HX_STACK_VAR(i,"i");
									HX_STACK_LINE(1463)
									while((true)){
										HX_STACK_LINE(1463)
										if ((!(((i >= (int)0))))){
											HX_STACK_LINE(1463)
											break;
										}
										HX_STACK_LINE(1463)
										::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
										HX_STACK_LINE(1463)
										int char_int;		HX_STACK_VAR(char_int,"char_int");
										HX_STACK_LINE(1463)
										{
											HX_STACK_LINE(1463)
											int val = (int)-1;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1463)
											::String _switch_19 = (char_hex);
											if (  ( _switch_19==HX_CSTRING("0")) ||  ( _switch_19==HX_CSTRING("1")) ||  ( _switch_19==HX_CSTRING("2")) ||  ( _switch_19==HX_CSTRING("3")) ||  ( _switch_19==HX_CSTRING("4")) ||  ( _switch_19==HX_CSTRING("5")) ||  ( _switch_19==HX_CSTRING("6")) ||  ( _switch_19==HX_CSTRING("7")) ||  ( _switch_19==HX_CSTRING("8")) ||  ( _switch_19==HX_CSTRING("9")) ||  ( _switch_19==HX_CSTRING("10"))){
												HX_STACK_LINE(1463)
												Dynamic _g11 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g11,"_g11");
												HX_STACK_LINE(1463)
												val = _g11;
											}
											else if (  ( _switch_19==HX_CSTRING("A")) ||  ( _switch_19==HX_CSTRING("a"))){
												HX_STACK_LINE(1463)
												val = (int)10;
											}
											else if (  ( _switch_19==HX_CSTRING("B")) ||  ( _switch_19==HX_CSTRING("b"))){
												HX_STACK_LINE(1463)
												val = (int)11;
											}
											else if (  ( _switch_19==HX_CSTRING("C")) ||  ( _switch_19==HX_CSTRING("c"))){
												HX_STACK_LINE(1463)
												val = (int)12;
											}
											else if (  ( _switch_19==HX_CSTRING("D")) ||  ( _switch_19==HX_CSTRING("d"))){
												HX_STACK_LINE(1463)
												val = (int)13;
											}
											else if (  ( _switch_19==HX_CSTRING("E")) ||  ( _switch_19==HX_CSTRING("e"))){
												HX_STACK_LINE(1463)
												val = (int)14;
											}
											else if (  ( _switch_19==HX_CSTRING("F")) ||  ( _switch_19==HX_CSTRING("f"))){
												HX_STACK_LINE(1463)
												val = (int)15;
											}
											HX_STACK_LINE(1463)
											if (((val == (int)-1))){
												HX_STACK_LINE(1463)
												HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
											}
											HX_STACK_LINE(1463)
											char_int = val;
										}
										HX_STACK_LINE(1463)
										hx::AddEq(sum,(char_int * place_mult));
										HX_STACK_LINE(1463)
										hx::MultEq(place_mult,(int)16);
										HX_STACK_LINE(1463)
										(i)--;
									}
									HX_STACK_LINE(1463)
									_g12 = sum;
								}
								HX_STACK_LINE(1463)
								return_val = _g12;
							}
							HX_STACK_LINE(1463)
							_g13 = return_val;
						}
						HX_STACK_LINE(1463)
						params1->__Field(HX_CSTRING("push"),true)(_g13);
					}
				}
;
			}
		}
		HX_STACK_LINE(1463)
		params = params1;
	}
	HX_STACK_LINE(1465)
	::String box_asset = null();		HX_STACK_VAR(box_asset,"box_asset");
	HX_STACK_LINE(1466)
	::String check_asset = null();		HX_STACK_VAR(check_asset,"check_asset");
	HX_STACK_LINE(1468)
	if (((box_src != HX_CSTRING("")))){
		HX_STACK_LINE(1469)
		::String _g14 = ::flixel::addons::ui::U_obj::gfx(box_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(1469)
		box_asset = _g14;
	}
	HX_STACK_LINE(1471)
	if (((check_src != HX_CSTRING("")))){
		HX_STACK_LINE(1472)
		::String _g15 = ::flixel::addons::ui::U_obj::gfx(check_src,null(),null(),null(),null(),null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(1472)
		check_asset = _g15;
	}
	HX_STACK_LINE(1475)
	::flixel::addons::ui::FlxUICheckBox _g16 = ::flixel::addons::ui::FlxUICheckBox_obj::__new((int)0,(int)0,box_asset,check_asset,label,labelW,params,null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(1475)
	fc = _g16;
	HX_STACK_LINE(1476)
	this->formatButtonText(data,fc);
	HX_STACK_LINE(1478)
	int text_x = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(text_x,"text_x");
	HX_STACK_LINE(1479)
	int text_y = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(text_y,"text_y");
	HX_STACK_LINE(1481)
	fc->set_textX(text_x);
	HX_STACK_LINE(1482)
	fc->set_textY(text_y);
	HX_STACK_LINE(1484)
	fc->set_text(label);
	HX_STACK_LINE(1486)
	fc->set_checked(checked);
	HX_STACK_LINE(1488)
	return fc;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadCheckBox,return )

::flixel::addons::ui::FlxUIDropDownMenu FlxUI_obj::_loadDropDownMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadDropDownMenu",0xfcc3a1bc,"flixel.addons.ui.FlxUI._loadDropDownMenu","flixel/addons/ui/FlxUI.hx",1492,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1517)
	::flixel::addons::ui::FlxUIDropDownMenu fud = null();		HX_STACK_VAR(fud,"fud");
	HX_STACK_LINE(1519)
	::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
	HX_STACK_LINE(1520)
	::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
	HX_STACK_LINE(1521)
	::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
	HX_STACK_LINE(1522)
	::String _g = this->getText(label,context,true,code);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1522)
	label = _g;
	HX_STACK_LINE(1524)
	::String back_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("back_def"),true,null());		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(1525)
	::String panel_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("panel_def"),true,null());		HX_STACK_VAR(panel_def,"panel_def");
	HX_STACK_LINE(1526)
	::String button_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("button_def"),true,null());		HX_STACK_VAR(button_def,"button_def");
	HX_STACK_LINE(1527)
	::String label_def = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label_def"),true,null());		HX_STACK_VAR(label_def,"label_def");
	HX_STACK_LINE(1529)
	::flixel::FlxSprite back_asset = null();		HX_STACK_VAR(back_asset,"back_asset");
	HX_STACK_LINE(1530)
	::flixel::addons::ui::FlxUI9SliceSprite panel_asset = null();		HX_STACK_VAR(panel_asset,"panel_asset");
	HX_STACK_LINE(1531)
	::flixel::addons::ui::FlxUISpriteButton button_asset = null();		HX_STACK_VAR(button_asset,"button_asset");
	HX_STACK_LINE(1532)
	::flixel::addons::ui::FlxUIText label_asset = null();		HX_STACK_VAR(label_asset,"label_asset");
	HX_STACK_LINE(1534)
	if (((back_def != HX_CSTRING("")))){
		HX_STACK_LINE(1535)
		::haxe::xml::Fast _g1 = this->getDefinition(back_def,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1535)
		::flixel::addons::ui::FlxUISprite _g2 = this->_loadSprite(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1535)
		back_asset = _g2;
	}
	HX_STACK_LINE(1538)
	if (((panel_def != HX_CSTRING("")))){
		HX_STACK_LINE(1539)
		::haxe::xml::Fast _g3 = this->getDefinition(panel_def,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1539)
		::flixel::addons::ui::FlxUI9SliceSprite _g4 = this->_load9SliceSprite(_g3,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1539)
		panel_asset = _g4;
	}
	HX_STACK_LINE(1542)
	if (((button_def != HX_CSTRING("")))){
		HX_STACK_LINE(1543)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(1544)
			::haxe::xml::Fast _g5 = this->getDefinition(button_def,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1544)
			::flixel::addons::ui::FlxUISpriteButton _g6 = this->_loadButton(_g5,false,false,null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(1544)
			button_asset = _g6;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(1547)
					button_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
	HX_STACK_LINE(1551)
	if (((label_def != HX_CSTRING("")))){
		HX_STACK_LINE(1552)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(1553)
			::haxe::xml::Fast _g7 = this->getDefinition(label_def,null());		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(1553)
			::flixel::addons::ui::FlxUIText _g8 = this->_loadText(_g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(1553)
			label_asset = _g8;
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(1556)
					label_asset = null();
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
		HX_STACK_LINE(1558)
		if (((bool((label_asset != null())) && bool((label != HX_CSTRING("")))))){
			HX_STACK_LINE(1559)
			label_asset->set_text(label);
		}
	}
	HX_STACK_LINE(1563)
	Array< ::Dynamic > asset_list = null();		HX_STACK_VAR(asset_list,"asset_list");
	HX_STACK_LINE(1564)
	Array< ::Dynamic > data_list = null();		HX_STACK_VAR(data_list,"data_list");
	HX_STACK_LINE(1566)
	if ((data->hasNode->resolve(HX_CSTRING("data")))){
		HX_STACK_LINE(1567)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("data"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast dataNode = __it->next();
			{
				HX_STACK_LINE(1568)
				if (((data_list == null()))){
					HX_STACK_LINE(1569)
					Array< ::Dynamic > _g9 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1569)
					data_list = _g9;
				}
				HX_STACK_LINE(1571)
				::String _g10 = ::flixel::addons::ui::U_obj::xml_str(dataNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(1571)
				::String _g11 = ::flixel::addons::ui::U_obj::xml_str(dataNode->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(1571)
				::flixel::addons::ui::StrIdLabel idl = ::flixel::addons::ui::StrIdLabel_obj::__new(_g10,_g11);		HX_STACK_VAR(idl,"idl");
				HX_STACK_LINE(1572)
				data_list->push(idl);
			}
;
		}
	}
	else{
		HX_STACK_LINE(1574)
		if ((data->hasNode->resolve(HX_CSTRING("asset")))){
			HX_STACK_LINE(1575)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("asset"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast assetNode = __it->next();
				{
					HX_STACK_LINE(1576)
					if (((asset_list == null()))){
						HX_STACK_LINE(1577)
						Array< ::Dynamic > _g12 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(1577)
						asset_list = _g12;
					}
					HX_STACK_LINE(1579)
					::String def_id = ::flixel::addons::ui::U_obj::xml_str(assetNode->x,HX_CSTRING("def"),true,null());		HX_STACK_VAR(def_id,"def_id");
					HX_STACK_LINE(1580)
					::String id = ::flixel::addons::ui::U_obj::xml_str(assetNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
					HX_STACK_LINE(1581)
					::flixel::addons::ui::FlxUIButton asset = null();		HX_STACK_VAR(asset,"asset");
					HX_STACK_LINE(1583)
					try
					{
					HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
					{
						HX_STACK_LINE(1584)
						::haxe::xml::Fast _g13 = this->getDefinition(def_id,null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(1584)
						::flixel::addons::ui::FlxUIButton _g14 = this->_loadButton(_g13,false,null(),null());		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(1584)
						asset = _g14;
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::openfl::errors::Error >() ){
							HX_STACK_BEGIN_CATCH
							::openfl::errors::Error e = __e;{
								HX_STACK_LINE(1586)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
					HX_STACK_LINE(1589)
					if (((asset != null()))){
						HX_STACK_LINE(1590)
						asset->id = id;
						HX_STACK_LINE(1591)
						if (((asset_list == null()))){
							HX_STACK_LINE(1592)
							Array< ::Dynamic > _g15 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g15,"_g15");
							HX_STACK_LINE(1592)
							asset_list = _g15;
						}
						HX_STACK_LINE(1594)
						asset_list->push(asset);
					}
				}
;
			}
		}
	}
	HX_STACK_LINE(1599)
	::flixel::addons::ui::FlxUIDropDownHeader header = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new((int)120,back_asset,label_asset,button_asset);		HX_STACK_VAR(header,"header");
	HX_STACK_LINE(1600)
	::flixel::addons::ui::FlxUIDropDownMenu _g16 = ::flixel::addons::ui::FlxUIDropDownMenu_obj::__new((int)0,(int)0,data_list,null(),header,panel_asset,asset_list,null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(1600)
	fud = _g16;
	HX_STACK_LINE(1602)
	return fud;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadDropDownMenu,return )

bool FlxUI_obj::_loadTest( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTest",0x9815bf9e,"flixel.addons.ui.FlxUI._loadTest","flixel/addons/ui/FlxUI.hx",1605,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1606)
	if ((data->hasNode->resolve(HX_CSTRING("load_if")))){
		HX_STACK_LINE(1607)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("load_if"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node = __it->next();
			{
				HX_STACK_LINE(1608)
				Float aspect_ratio = ::flixel::addons::ui::U_obj::xml_f(node->x,HX_CSTRING("aspect_ratio"),(int)-1);		HX_STACK_VAR(aspect_ratio,"aspect_ratio");
				HX_STACK_LINE(1609)
				if (((aspect_ratio != (int)-1))){
					HX_STACK_LINE(1610)
					Float tolerance = ::flixel::addons::ui::U_obj::xml_f(node->x,HX_CSTRING("tolerance"),0.1);		HX_STACK_VAR(tolerance,"tolerance");
					HX_STACK_LINE(1611)
					Float _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1611)
					_g = hx::TCast< Float >::cast(::flixel::FlxG_obj::width);
					HX_STACK_LINE(1611)
					Float _g1;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1611)
					_g1 = hx::TCast< Float >::cast(::flixel::FlxG_obj::height);
					HX_STACK_LINE(1611)
					Float screen_ratio = (Float(_g) / Float(_g1));		HX_STACK_VAR(screen_ratio,"screen_ratio");
					HX_STACK_LINE(1612)
					Float diff = ::Math_obj::abs((screen_ratio - aspect_ratio));		HX_STACK_VAR(diff,"diff");
					HX_STACK_LINE(1613)
					if (((diff > tolerance))){
						HX_STACK_LINE(1614)
						return false;
					}
				}
				HX_STACK_LINE(1618)
				::String haxeDef = ::flixel::addons::ui::U_obj::xml_str(node->x,HX_CSTRING("haxedef"),true,HX_CSTRING(""));		HX_STACK_VAR(haxeDef,"haxeDef");
				HX_STACK_LINE(1619)
				bool haxeVal = ::flixel::addons::ui::U_obj::xml_bool(node->x,HX_CSTRING("value"),true);		HX_STACK_VAR(haxeVal,"haxeVal");
				HX_STACK_LINE(1621)
				if (((haxeDef != HX_CSTRING("")))){
					HX_STACK_LINE(1622)
					bool defValue = false;		HX_STACK_VAR(defValue,"defValue");
					HX_STACK_LINE(1623)
					::String _switch_20 = (haxeDef);
					if (  ( _switch_20==HX_CSTRING("3ds"))){
					}
					else if (  ( _switch_20==HX_CSTRING("wiiu"))){
					}
					else if (  ( _switch_20==HX_CSTRING("vita"))){
					}
					else if (  ( _switch_20==HX_CSTRING("ps4"))){
					}
					HX_STACK_LINE(1641)
					return (defValue == haxeVal);
				}
			}
;
		}
	}
	HX_STACK_LINE(1645)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTest,return )

::flixel::addons::ui::FlxUI FlxUI_obj::_loadLayout( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLayout",0x9c3a10f6,"flixel.addons.ui.FlxUI._loadLayout","flixel/addons/ui/FlxUI.hx",1648,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1650)
	if ((this->_loadTest(data))){
		HX_STACK_LINE(1652)
		::String id = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(1653)
		::flixel::addons::ui::FlxUI _ui = ::flixel::addons::ui::FlxUI_obj::__new(data,hx::ObjectPtr<OBJ_>(this),hx::ObjectPtr<OBJ_>(this),this->_ptr_tongue);		HX_STACK_VAR(_ui,"_ui");
		HX_STACK_LINE(1654)
		_ui->id = id;
		HX_STACK_LINE(1656)
		return _ui;
	}
	HX_STACK_LINE(1659)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLayout,return )

::flixel::addons::ui::FlxUITabMenu FlxUI_obj::_loadTabMenu( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTabMenu",0x0e83bac8,"flixel.addons.ui.FlxUI._loadTabMenu","flixel/addons/ui/FlxUI.hx",1662,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1664)
	::String back_def_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("back_def"),null(),null());		HX_STACK_VAR(back_def_str,"back_def_str");
	HX_STACK_LINE(1665)
	::haxe::xml::Fast back_def = this->getDefinition(back_def_str,null());		HX_STACK_VAR(back_def,"back_def");
	HX_STACK_LINE(1666)
	if (((back_def == null()))){
		HX_STACK_LINE(1667)
		back_def = data;
	}
	HX_STACK_LINE(1670)
	::haxe::xml::Fast _g = ::flixel::addons::ui::FlxUI_obj::consolidateData(back_def,data);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1670)
	back_def = _g;
	HX_STACK_LINE(1671)
	::flixel::addons::ui::FlxUI9SliceSprite back = this->_load9SliceSprite(back_def,HX_CSTRING("tab_menu"));		HX_STACK_VAR(back,"back");
	HX_STACK_LINE(1673)
	::haxe::xml::Fast tab_def = null();		HX_STACK_VAR(tab_def,"tab_def");
	HX_STACK_LINE(1675)
	bool stretch_tabs = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("stretch_tabs"),false);		HX_STACK_VAR(stretch_tabs,"stretch_tabs");
	HX_STACK_LINE(1677)
	::String stackToggled = HX_CSTRING("front");		HX_STACK_VAR(stackToggled,"stackToggled");
	HX_STACK_LINE(1678)
	::String stackUntoggled = HX_CSTRING("back");		HX_STACK_VAR(stackUntoggled,"stackUntoggled");
	HX_STACK_LINE(1680)
	if ((data->hasNode->resolve(HX_CSTRING("stacking")))){
		HX_STACK_LINE(1681)
		::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("stacking"))->x,HX_CSTRING("toggled"),true,HX_CSTRING("front"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1681)
		stackToggled = _g1;
		HX_STACK_LINE(1682)
		::String _g2 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("stacking"))->x,HX_CSTRING("untoggled"),true,HX_CSTRING("back"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1682)
		stackUntoggled = _g2;
	}
	HX_STACK_LINE(1685)
	::String tab_spacing_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("spacing"),true,HX_CSTRING(""));		HX_STACK_VAR(tab_spacing_str,"tab_spacing_str");
	HX_STACK_LINE(1686)
	Dynamic tab_spacing = null();		HX_STACK_VAR(tab_spacing,"tab_spacing");
	HX_STACK_LINE(1687)
	if (((tab_spacing_str != HX_CSTRING("")))){
		HX_STACK_LINE(1688)
		Float _g3 = ::Std_obj::parseFloat(tab_spacing_str);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1688)
		tab_spacing = _g3;
	}
	HX_STACK_LINE(1692)
	Float tab_x = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("tab_x"),(int)0);		HX_STACK_VAR(tab_x,"tab_x");
	HX_STACK_LINE(1693)
	Float tab_y = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("tab_y"),(int)0);		HX_STACK_VAR(tab_y,"tab_y");
	HX_STACK_LINE(1694)
	::flixel::util::FlxPoint tab_offset;		HX_STACK_VAR(tab_offset,"tab_offset");
	HX_STACK_LINE(1694)
	{
		HX_STACK_LINE(1694)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(tab_x,tab_y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1694)
		point->_inPool = false;
		HX_STACK_LINE(1694)
		tab_offset = point;
	}
	HX_STACK_LINE(1696)
	::String tab_def_str = HX_CSTRING("");		HX_STACK_VAR(tab_def_str,"tab_def_str");
	HX_STACK_LINE(1698)
	if ((data->hasNode->resolve(HX_CSTRING("tab")))){
		HX_STACK_LINE(1699)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("tab"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast tabNode = __it->next();
			{
				HX_STACK_LINE(1700)
				::String temp = ::flixel::addons::ui::U_obj::xml_str(tabNode->x,HX_CSTRING("use_def"),null(),null());		HX_STACK_VAR(temp,"temp");
				HX_STACK_LINE(1701)
				if (((temp != HX_CSTRING("")))){
					HX_STACK_LINE(1702)
					tab_def_str = temp;
				}
			}
;
		}
		HX_STACK_LINE(1705)
		if (((tab_def_str != HX_CSTRING("")))){
			HX_STACK_LINE(1706)
			::haxe::xml::Fast _g4 = this->getDefinition(tab_def_str,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1706)
			tab_def = _g4;
		}
		else{
			HX_STACK_LINE(1708)
			::haxe::xml::Fast _g5 = data->node->resolve(HX_CSTRING("tab"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1708)
			tab_def = _g5;
		}
	}
	HX_STACK_LINE(1712)
	Array< ::Dynamic > list_tabs = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(list_tabs,"list_tabs");
	HX_STACK_LINE(1714)
	::String id = HX_CSTRING("");		HX_STACK_VAR(id,"id");
	HX_STACK_LINE(1716)
	if ((data->hasNode->resolve(HX_CSTRING("tab")))){
		HX_STACK_LINE(1717)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("tab"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast tab_node = __it->next();
			{
				HX_STACK_LINE(1718)
				::String _g6 = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(1718)
				id = _g6;
				HX_STACK_LINE(1720)
				if (((id != HX_CSTRING("")))){
					HX_STACK_LINE(1721)
					::String label = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
					HX_STACK_LINE(1722)
					::String context = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
					HX_STACK_LINE(1723)
					::String code = ::flixel::addons::ui::U_obj::xml_str(tab_node->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
					HX_STACK_LINE(1724)
					::String _g7 = this->getText(label,context,true,code);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1724)
					label = _g7;
					HX_STACK_LINE(1726)
					::String _g8 = this->getText(label,context,true,code);		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1726)
					label = _g8;
					HX_STACK_LINE(1728)
					::haxe::xml::Fast tab_info = ::flixel::addons::ui::FlxUI_obj::consolidateData(tab_node,tab_def);		HX_STACK_VAR(tab_info,"tab_info");
					HX_STACK_LINE(1729)
					::flixel::addons::ui::FlxUIButton tab = this->_loadButton(tab_info,true,true,HX_CSTRING("tab_menu"));		HX_STACK_VAR(tab,"tab");
					HX_STACK_LINE(1730)
					tab->id = id;
					HX_STACK_LINE(1731)
					list_tabs->push(tab);
				}
			}
;
		}
	}
	HX_STACK_LINE(1736)
	if (((list_tabs->length > (int)0))){
		HX_STACK_LINE(1737)
		if (((  ((!(((tab_def == null()))))) ? bool(!(tab_def->hasNode->resolve(HX_CSTRING("text")))) : bool(true) ))){
			HX_STACK_LINE(1738)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1738)
			while((true)){
				HX_STACK_LINE(1738)
				if ((!(((_g1 < list_tabs->length))))){
					HX_STACK_LINE(1738)
					break;
				}
				HX_STACK_LINE(1738)
				::flixel::addons::ui::FlxUIButton t = list_tabs->__get(_g1).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1738)
				++(_g1);
				HX_STACK_LINE(1739)
				t->label->__Field(HX_CSTRING("set_color"),true)((int)16777215);
				HX_STACK_LINE(1740)
				{
					HX_STACK_LINE(1740)
					::flixel::addons::ui::FlxUIText _this = t->label;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(1740)
					int Color = (int)0;		HX_STACK_VAR(Color,"Color");
					HX_STACK_LINE(1740)
					Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
					HX_STACK_LINE(1740)
					Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
					HX_STACK_LINE(1740)
					_this->set_borderStyle((int)2);
					HX_STACK_LINE(1740)
					_this->set_borderColor(Color);
					HX_STACK_LINE(1740)
					_this->set_borderSize(Size);
					HX_STACK_LINE(1740)
					_this->set_borderQuality(Quality);
				}
			}
		}
		HX_STACK_LINE(1744)
		if (((  ((!(((tab_def == null()))))) ? bool(!(tab_def->has->resolve(HX_CSTRING("width")))) : bool(true) ))){
			HX_STACK_LINE(1745)
			stretch_tabs = true;
		}
	}
	HX_STACK_LINE(1750)
	Array< ::String > tab_stacking = Array_obj< ::String >::__new().Add(stackToggled).Add(stackUntoggled);		HX_STACK_VAR(tab_stacking,"tab_stacking");
	HX_STACK_LINE(1752)
	::flixel::addons::ui::FlxUITabMenu fg = ::flixel::addons::ui::FlxUITabMenu_obj::__new(back,list_tabs,null(),tab_offset,stretch_tabs,tab_spacing,tab_stacking);		HX_STACK_VAR(fg,"fg");
	HX_STACK_LINE(1754)
	if ((data->hasNode->resolve(HX_CSTRING("group")))){
		HX_STACK_LINE(1755)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("group"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast group_node = __it->next();
			{
				HX_STACK_LINE(1756)
				::String _g9 = ::flixel::addons::ui::U_obj::xml_str(group_node->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(1756)
				id = _g9;
				HX_STACK_LINE(1757)
				::flixel::addons::ui::FlxUI _ui = ::flixel::addons::ui::FlxUI_obj::__new(group_node,fg,hx::ObjectPtr<OBJ_>(this),this->_ptr_tongue);		HX_STACK_VAR(_ui,"_ui");
				HX_STACK_LINE(1758)
				if (((bool((list_tabs != null())) && bool((list_tabs->length > (int)0))))){
					HX_STACK_LINE(1759)
					::flixel::addons::ui::FlxUI _g1 = _ui;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1759)
					Float _g10 = list_tabs->__get((int)0).StaticCast< ::flixel::addons::ui::FlxUIButton >()->get_height();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1759)
					Float _g11 = (_g1->y + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(1759)
					_g1->set_y(_g11);
				}
				HX_STACK_LINE(1761)
				_ui->id = id;
				HX_STACK_LINE(1762)
				fg->addGroup(_ui);
			}
;
		}
	}
	HX_STACK_LINE(1768)
	return fg;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTabMenu,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadNumericStepper( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback){
bool setCallback = __o_setCallback.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadNumericStepper",0x27747c10,"flixel.addons.ui.FlxUI._loadNumericStepper","flixel/addons/ui/FlxUI.hx",1771,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
{
		HX_STACK_LINE(1783)
		Float stepSize = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("step"),(int)1);		HX_STACK_VAR(stepSize,"stepSize");
		HX_STACK_LINE(1784)
		Float defaultValue = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("value"),(int)0);		HX_STACK_VAR(defaultValue,"defaultValue");
		HX_STACK_LINE(1785)
		Float min = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("min"),(int)0);		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(1786)
		Float max = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("max"),(int)10);		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1787)
		int decimals = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("decimals"),(int)0);		HX_STACK_VAR(decimals,"decimals");
		HX_STACK_LINE(1789)
		::flixel::text::FlxText theText = null();		HX_STACK_VAR(theText,"theText");
		HX_STACK_LINE(1790)
		::flixel::addons::ui::FlxUITypedButton buttPlus = null();		HX_STACK_VAR(buttPlus,"buttPlus");
		HX_STACK_LINE(1791)
		::flixel::addons::ui::FlxUITypedButton buttMinus = null();		HX_STACK_VAR(buttMinus,"buttMinus");
		HX_STACK_LINE(1792)
		::flixel::addons::ui::FlxUISprite bkg = null();		HX_STACK_VAR(bkg,"bkg");
		HX_STACK_LINE(1794)
		if ((data->hasNode->resolve(HX_CSTRING("text")))){
			HX_STACK_LINE(1795)
			::haxe::xml::Fast _g = data->node->resolve(HX_CSTRING("text"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1795)
			::flixel::text::FlxText _g1 = this->_loadText(_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1795)
			theText = _g1;
		}
		HX_STACK_LINE(1797)
		if ((data->hasNode->resolve(HX_CSTRING("plus")))){
			HX_STACK_LINE(1798)
			::haxe::xml::Fast _g2 = data->node->resolve(HX_CSTRING("plus"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1798)
			::flixel::addons::ui::FlxUITypedButton _g3 = this->_loadButton(_g2,null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1798)
			buttPlus = _g3;
		}
		HX_STACK_LINE(1800)
		if ((data->hasNode->resolve(HX_CSTRING("minus")))){
			HX_STACK_LINE(1801)
			::haxe::xml::Fast _g4 = data->node->resolve(HX_CSTRING("minus"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1801)
			::flixel::addons::ui::FlxUITypedButton _g5 = this->_loadButton(_g4,null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1801)
			buttMinus = _g5;
		}
		HX_STACK_LINE(1804)
		::flixel::addons::ui::FlxUINumericStepper ns = ::flixel::addons::ui::FlxUINumericStepper_obj::__new((int)0,(int)0,stepSize,defaultValue,min,max,decimals,(int)1,theText,buttPlus,buttMinus);		HX_STACK_VAR(ns,"ns");
		HX_STACK_LINE(1806)
		if ((setCallback)){
			HX_STACK_LINE(1807)
			Dynamic params;		HX_STACK_VAR(params,"params");
			HX_STACK_LINE(1807)
			{
				HX_STACK_LINE(1807)
				Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
				HX_STACK_LINE(1807)
				if ((data->hasNode->resolve(HX_CSTRING("param")))){
					HX_STACK_LINE(1807)
					Dynamic _g6 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1807)
					params1 = _g6;
					HX_STACK_LINE(1807)
					for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
						::haxe::xml::Fast param = __it->next();
						if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
							HX_STACK_LINE(1807)
							::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
							HX_STACK_LINE(1807)
							::String _g7 = type.toLowerCase();		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1807)
							type = _g7;
							HX_STACK_LINE(1807)
							::String _switch_21 = (type);
							if (  ( _switch_21==HX_CSTRING("string"))){
								HX_STACK_LINE(1807)
								::String _g8 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(1807)
								::String _g9 = ::String(_g8);		HX_STACK_VAR(_g9,"_g9");
								HX_STACK_LINE(1807)
								params1->__Field(HX_CSTRING("push"),true)(_g9);
							}
							else if (  ( _switch_21==HX_CSTRING("int"))){
								HX_STACK_LINE(1807)
								::String _g10 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g10,"_g10");
								HX_STACK_LINE(1807)
								Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(1807)
								params1->__Field(HX_CSTRING("push"),true)(_g11);
							}
							else if (  ( _switch_21==HX_CSTRING("float"))){
								HX_STACK_LINE(1807)
								::String _g12 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(1807)
								Float _g13 = ::Std_obj::parseFloat(_g12);		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(1807)
								params1->__Field(HX_CSTRING("push"),true)(_g13);
							}
							else if (  ( _switch_21==HX_CSTRING("color")) ||  ( _switch_21==HX_CSTRING("hex"))){
								HX_STACK_LINE(1807)
								int _g18;		HX_STACK_VAR(_g18,"_g18");
								HX_STACK_LINE(1807)
								{
									HX_STACK_LINE(1807)
									::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
									HX_STACK_LINE(1807)
									bool safe = false;		HX_STACK_VAR(safe,"safe");
									HX_STACK_LINE(1807)
									int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
									HX_STACK_LINE(1807)
									int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
									HX_STACK_LINE(1807)
									int _g14 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(1807)
									if (((_g14 != (int)0))){
										HX_STACK_LINE(1807)
										if ((!(safe))){
											HX_STACK_LINE(1807)
											HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
										}
										else{
											HX_STACK_LINE(1807)
											return_val = default_color;
										}
									}
									HX_STACK_LINE(1807)
									if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
										HX_STACK_LINE(1807)
										if ((!(safe))){
											HX_STACK_LINE(1807)
											HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
										}
										else{
											HX_STACK_LINE(1807)
											return_val = default_color;
										}
									}
									HX_STACK_LINE(1807)
									if (((return_val == (int)-1))){
										HX_STACK_LINE(1807)
										::String _g15 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g15,"_g15");
										HX_STACK_LINE(1807)
										str = _g15;
										HX_STACK_LINE(1807)
										if (((str.length == (int)6))){
											HX_STACK_LINE(1807)
											str = (HX_CSTRING("FF") + str);
										}
										HX_STACK_LINE(1807)
										int _g17;		HX_STACK_VAR(_g17,"_g17");
										HX_STACK_LINE(1807)
										{
											HX_STACK_LINE(1807)
											int length = str.length;		HX_STACK_VAR(length,"length");
											HX_STACK_LINE(1807)
											int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
											HX_STACK_LINE(1807)
											int sum = (int)0;		HX_STACK_VAR(sum,"sum");
											HX_STACK_LINE(1807)
											int i = (length - (int)1);		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(1807)
											while((true)){
												HX_STACK_LINE(1807)
												if ((!(((i >= (int)0))))){
													HX_STACK_LINE(1807)
													break;
												}
												HX_STACK_LINE(1807)
												::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
												HX_STACK_LINE(1807)
												int char_int;		HX_STACK_VAR(char_int,"char_int");
												HX_STACK_LINE(1807)
												{
													HX_STACK_LINE(1807)
													int val = (int)-1;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(1807)
													::String _switch_22 = (char_hex);
													if (  ( _switch_22==HX_CSTRING("0")) ||  ( _switch_22==HX_CSTRING("1")) ||  ( _switch_22==HX_CSTRING("2")) ||  ( _switch_22==HX_CSTRING("3")) ||  ( _switch_22==HX_CSTRING("4")) ||  ( _switch_22==HX_CSTRING("5")) ||  ( _switch_22==HX_CSTRING("6")) ||  ( _switch_22==HX_CSTRING("7")) ||  ( _switch_22==HX_CSTRING("8")) ||  ( _switch_22==HX_CSTRING("9")) ||  ( _switch_22==HX_CSTRING("10"))){
														HX_STACK_LINE(1807)
														Dynamic _g16 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g16,"_g16");
														HX_STACK_LINE(1807)
														val = _g16;
													}
													else if (  ( _switch_22==HX_CSTRING("A")) ||  ( _switch_22==HX_CSTRING("a"))){
														HX_STACK_LINE(1807)
														val = (int)10;
													}
													else if (  ( _switch_22==HX_CSTRING("B")) ||  ( _switch_22==HX_CSTRING("b"))){
														HX_STACK_LINE(1807)
														val = (int)11;
													}
													else if (  ( _switch_22==HX_CSTRING("C")) ||  ( _switch_22==HX_CSTRING("c"))){
														HX_STACK_LINE(1807)
														val = (int)12;
													}
													else if (  ( _switch_22==HX_CSTRING("D")) ||  ( _switch_22==HX_CSTRING("d"))){
														HX_STACK_LINE(1807)
														val = (int)13;
													}
													else if (  ( _switch_22==HX_CSTRING("E")) ||  ( _switch_22==HX_CSTRING("e"))){
														HX_STACK_LINE(1807)
														val = (int)14;
													}
													else if (  ( _switch_22==HX_CSTRING("F")) ||  ( _switch_22==HX_CSTRING("f"))){
														HX_STACK_LINE(1807)
														val = (int)15;
													}
													HX_STACK_LINE(1807)
													if (((val == (int)-1))){
														HX_STACK_LINE(1807)
														HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
													}
													HX_STACK_LINE(1807)
													char_int = val;
												}
												HX_STACK_LINE(1807)
												hx::AddEq(sum,(char_int * place_mult));
												HX_STACK_LINE(1807)
												hx::MultEq(place_mult,(int)16);
												HX_STACK_LINE(1807)
												(i)--;
											}
											HX_STACK_LINE(1807)
											_g17 = sum;
										}
										HX_STACK_LINE(1807)
										return_val = _g17;
									}
									HX_STACK_LINE(1807)
									_g18 = return_val;
								}
								HX_STACK_LINE(1807)
								params1->__Field(HX_CSTRING("push"),true)(_g18);
							}
						}
;
					}
				}
				HX_STACK_LINE(1807)
				params = params1;
			}
			HX_STACK_LINE(1808)
			ns->set_params(params);
		}
		HX_STACK_LINE(1811)
		return ns;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadNumericStepper,return )

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_loadButton( ::haxe::xml::Fast data,hx::Null< bool >  __o_setCallback,hx::Null< bool >  __o_isToggle,::String __o_load_code){
bool setCallback = __o_setCallback.Default(true);
bool isToggle = __o_isToggle.Default(false);
::String load_code = __o_load_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadButton",0x1d61c43e,"flixel.addons.ui.FlxUI._loadButton","flixel/addons/ui/FlxUI.hx",1814,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(setCallback,"setCallback")
	HX_STACK_ARG(isToggle,"isToggle")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(1815)
		::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(1816)
		::flixel::addons::ui::interfaces::IFlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
		HX_STACK_LINE(1818)
		Float resize_ratio = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("resize_ratio"),(int)-1);		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(1819)
		::flixel::util::FlxPoint resize_point = this->_loadCompass(data,HX_CSTRING("resize_point"));		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(1820)
		bool isVis = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("visible"),true);		HX_STACK_VAR(isVis,"isVis");
		HX_STACK_LINE(1822)
		::String label = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("label"),null(),null());		HX_STACK_VAR(label,"label");
		HX_STACK_LINE(1824)
		::flixel::addons::ui::FlxUISprite sprite = null();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(1826)
		if ((data->hasNode->resolve(HX_CSTRING("sprite")))){
			HX_STACK_LINE(1827)
			::haxe::xml::Fast _g = data->node->resolve(HX_CSTRING("sprite"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1827)
			::flixel::addons::ui::FlxUISprite _g1 = this->_loadThing(HX_CSTRING("sprite"),_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1827)
			sprite = _g1;
		}
		HX_STACK_LINE(1830)
		::String context = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("context"),true,HX_CSTRING("ui"));		HX_STACK_VAR(context,"context");
		HX_STACK_LINE(1831)
		::String code = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("code"),true,HX_CSTRING(""));		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(1833)
		::String _g2 = this->getText(label,context,true,code);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1833)
		label = _g2;
		HX_STACK_LINE(1835)
		Float _g3 = this->_loadWidth(data,(int)0,HX_CSTRING("width"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1835)
		int W = ::Std_obj::_int(_g3);		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(1836)
		Float _g4 = this->_loadHeight(data,(int)0,HX_CSTRING("height"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(1836)
		int H = ::Std_obj::_int(_g4);		HX_STACK_VAR(H,"H");
		HX_STACK_LINE(1838)
		Dynamic params;		HX_STACK_VAR(params,"params");
		HX_STACK_LINE(1838)
		{
			HX_STACK_LINE(1838)
			Dynamic params1 = null();		HX_STACK_VAR(params1,"params1");
			HX_STACK_LINE(1838)
			if ((data->hasNode->resolve(HX_CSTRING("param")))){
				HX_STACK_LINE(1838)
				Dynamic _g5 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1838)
				params1 = _g5;
				HX_STACK_LINE(1838)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast param = __it->next();
					if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
						HX_STACK_LINE(1838)
						::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
						HX_STACK_LINE(1838)
						::String _g6 = type.toLowerCase();		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1838)
						type = _g6;
						HX_STACK_LINE(1838)
						::String _switch_23 = (type);
						if (  ( _switch_23==HX_CSTRING("string"))){
							HX_STACK_LINE(1838)
							::String _g7 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(1838)
							::String _g8 = ::String(_g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(1838)
							params1->__Field(HX_CSTRING("push"),true)(_g8);
						}
						else if (  ( _switch_23==HX_CSTRING("int"))){
							HX_STACK_LINE(1838)
							::String _g9 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(1838)
							Dynamic _g10 = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(1838)
							params1->__Field(HX_CSTRING("push"),true)(_g10);
						}
						else if (  ( _switch_23==HX_CSTRING("float"))){
							HX_STACK_LINE(1838)
							::String _g11 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(1838)
							Float _g12 = ::Std_obj::parseFloat(_g11);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(1838)
							params1->__Field(HX_CSTRING("push"),true)(_g12);
						}
						else if (  ( _switch_23==HX_CSTRING("color")) ||  ( _switch_23==HX_CSTRING("hex"))){
							HX_STACK_LINE(1838)
							int _g17;		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(1838)
							{
								HX_STACK_LINE(1838)
								::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
								HX_STACK_LINE(1838)
								bool safe = false;		HX_STACK_VAR(safe,"safe");
								HX_STACK_LINE(1838)
								int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
								HX_STACK_LINE(1838)
								int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
								HX_STACK_LINE(1838)
								int _g13 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(1838)
								if (((_g13 != (int)0))){
									HX_STACK_LINE(1838)
									if ((!(safe))){
										HX_STACK_LINE(1838)
										HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
									}
									else{
										HX_STACK_LINE(1838)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1838)
								if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
									HX_STACK_LINE(1838)
									if ((!(safe))){
										HX_STACK_LINE(1838)
										HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
									}
									else{
										HX_STACK_LINE(1838)
										return_val = default_color;
									}
								}
								HX_STACK_LINE(1838)
								if (((return_val == (int)-1))){
									HX_STACK_LINE(1838)
									::String _g14 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(1838)
									str = _g14;
									HX_STACK_LINE(1838)
									if (((str.length == (int)6))){
										HX_STACK_LINE(1838)
										str = (HX_CSTRING("FF") + str);
									}
									HX_STACK_LINE(1838)
									int _g16;		HX_STACK_VAR(_g16,"_g16");
									HX_STACK_LINE(1838)
									{
										HX_STACK_LINE(1838)
										int length = str.length;		HX_STACK_VAR(length,"length");
										HX_STACK_LINE(1838)
										int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
										HX_STACK_LINE(1838)
										int sum = (int)0;		HX_STACK_VAR(sum,"sum");
										HX_STACK_LINE(1838)
										int i = (length - (int)1);		HX_STACK_VAR(i,"i");
										HX_STACK_LINE(1838)
										while((true)){
											HX_STACK_LINE(1838)
											if ((!(((i >= (int)0))))){
												HX_STACK_LINE(1838)
												break;
											}
											HX_STACK_LINE(1838)
											::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
											HX_STACK_LINE(1838)
											int char_int;		HX_STACK_VAR(char_int,"char_int");
											HX_STACK_LINE(1838)
											{
												HX_STACK_LINE(1838)
												int val = (int)-1;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(1838)
												::String _switch_24 = (char_hex);
												if (  ( _switch_24==HX_CSTRING("0")) ||  ( _switch_24==HX_CSTRING("1")) ||  ( _switch_24==HX_CSTRING("2")) ||  ( _switch_24==HX_CSTRING("3")) ||  ( _switch_24==HX_CSTRING("4")) ||  ( _switch_24==HX_CSTRING("5")) ||  ( _switch_24==HX_CSTRING("6")) ||  ( _switch_24==HX_CSTRING("7")) ||  ( _switch_24==HX_CSTRING("8")) ||  ( _switch_24==HX_CSTRING("9")) ||  ( _switch_24==HX_CSTRING("10"))){
													HX_STACK_LINE(1838)
													Dynamic _g15 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g15,"_g15");
													HX_STACK_LINE(1838)
													val = _g15;
												}
												else if (  ( _switch_24==HX_CSTRING("A")) ||  ( _switch_24==HX_CSTRING("a"))){
													HX_STACK_LINE(1838)
													val = (int)10;
												}
												else if (  ( _switch_24==HX_CSTRING("B")) ||  ( _switch_24==HX_CSTRING("b"))){
													HX_STACK_LINE(1838)
													val = (int)11;
												}
												else if (  ( _switch_24==HX_CSTRING("C")) ||  ( _switch_24==HX_CSTRING("c"))){
													HX_STACK_LINE(1838)
													val = (int)12;
												}
												else if (  ( _switch_24==HX_CSTRING("D")) ||  ( _switch_24==HX_CSTRING("d"))){
													HX_STACK_LINE(1838)
													val = (int)13;
												}
												else if (  ( _switch_24==HX_CSTRING("E")) ||  ( _switch_24==HX_CSTRING("e"))){
													HX_STACK_LINE(1838)
													val = (int)14;
												}
												else if (  ( _switch_24==HX_CSTRING("F")) ||  ( _switch_24==HX_CSTRING("f"))){
													HX_STACK_LINE(1838)
													val = (int)15;
												}
												HX_STACK_LINE(1838)
												if (((val == (int)-1))){
													HX_STACK_LINE(1838)
													HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
												}
												HX_STACK_LINE(1838)
												char_int = val;
											}
											HX_STACK_LINE(1838)
											hx::AddEq(sum,(char_int * place_mult));
											HX_STACK_LINE(1838)
											hx::MultEq(place_mult,(int)16);
											HX_STACK_LINE(1838)
											(i)--;
										}
										HX_STACK_LINE(1838)
										_g16 = sum;
									}
									HX_STACK_LINE(1838)
									return_val = _g16;
								}
								HX_STACK_LINE(1838)
								_g17 = return_val;
							}
							HX_STACK_LINE(1838)
							params1->__Field(HX_CSTRING("push"),true)(_g17);
						}
					}
;
				}
			}
			HX_STACK_LINE(1838)
			params = params1;
		}
		HX_STACK_LINE(1840)
		if (((sprite == null()))){
			HX_STACK_LINE(1841)
			::flixel::addons::ui::FlxUIButton _g18 = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,label,null());		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(1841)
			fb = _g18;
		}
		else{
			HX_STACK_LINE(1843)
			::flixel::group::FlxSpriteGroup tempGroup = null();		HX_STACK_VAR(tempGroup,"tempGroup");
			HX_STACK_LINE(1845)
			if (((label != HX_CSTRING("")))){
				HX_STACK_LINE(1848)
				::flixel::addons::ui::FlxUIText labelTxt = ::flixel::addons::ui::FlxUIText_obj::__new((int)0,(int)0,(int)80,label,(int)8,null());		HX_STACK_VAR(labelTxt,"labelTxt");
				HX_STACK_LINE(1849)
				labelTxt->setFormat(null(),(int)8,(int)3355443,HX_CSTRING("center"),null(),null(),null());
				HX_STACK_LINE(1851)
				::flixel::group::FlxSpriteGroup _g19 = ::flixel::group::FlxSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(1851)
				tempGroup = _g19;
				HX_STACK_LINE(1853)
				tempGroup->add(sprite);
				HX_STACK_LINE(1854)
				tempGroup->add(labelTxt);
				HX_STACK_LINE(1856)
				::flixel::addons::ui::FlxUISpriteButton _g20 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,tempGroup,null());		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(1856)
				fb = _g20;
			}
			else{
				HX_STACK_LINE(1860)
				::flixel::addons::ui::FlxUISpriteButton _g21 = ::flixel::addons::ui::FlxUISpriteButton_obj::__new((int)0,(int)0,sprite,null());		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(1860)
				fb = _g21;
			}
		}
		HX_STACK_LINE(1863)
		fb->__FieldRef(HX_CSTRING("resize_ratio")) = resize_ratio;
		HX_STACK_LINE(1864)
		fb->__FieldRef(HX_CSTRING("resize_point")) = resize_point;
		HX_STACK_LINE(1866)
		if ((setCallback)){
			HX_STACK_LINE(1867)
			fb->__Field(HX_CSTRING("set_params"),true)(params);
		}
		HX_STACK_LINE(1872)
		if ((data->hasNode->resolve(HX_CSTRING("graphic")))){
			HX_STACK_LINE(1874)
			bool blank = ::flixel::addons::ui::U_obj::xml_bool(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("blank"),null());		HX_STACK_VAR(blank,"blank");
			HX_STACK_LINE(1876)
			if ((blank)){
				HX_STACK_LINE(1881)
				fb->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")),W,H,null(),(int)0,resize_ratio,null(),null(),null(),null());
			}
			else{
				HX_STACK_LINE(1886)
				Array< ::String > graphic_ids = null();		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(1887)
				Array< ::Dynamic > slice9_ids = null();		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(1888)
				Array< int > frames = null();		HX_STACK_VAR(frames,"frames");
				HX_STACK_LINE(1890)
				if ((isToggle)){
					HX_STACK_LINE(1891)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING(""));
					HX_STACK_LINE(1892)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null()).Add(null()).Add(null()).Add(null());
				}
				else{
					HX_STACK_LINE(1894)
					graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("")).Add(HX_CSTRING("")).Add(HX_CSTRING(""));
					HX_STACK_LINE(1895)
					slice9_ids = Array_obj< ::Dynamic >::__new().Add(null()).Add(null()).Add(null());
				}
				HX_STACK_LINE(1899)
				int src_w = ::flixel::addons::ui::U_obj::xml_i(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("src_w"),(int)0);		HX_STACK_VAR(src_w,"src_w");
				HX_STACK_LINE(1900)
				int src_h = ::flixel::addons::ui::U_obj::xml_i(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("src_h"),(int)0);		HX_STACK_VAR(src_h,"src_h");
				HX_STACK_LINE(1901)
				int tile;		HX_STACK_VAR(tile,"tile");
				HX_STACK_LINE(1901)
				{
					HX_STACK_LINE(1901)
					::haxe::xml::Fast data1 = data->node->resolve(HX_CSTRING("graphic"));		HX_STACK_VAR(data1,"data1");
					HX_STACK_LINE(1901)
					::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data1->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
					HX_STACK_LINE(1901)
					int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
					HX_STACK_LINE(1901)
					::String _switch_25 = (tileStr);
					if (  ( _switch_25==HX_CSTRING("true")) ||  ( _switch_25==HX_CSTRING("both")) ||  ( _switch_25==HX_CSTRING("all")) ||  ( _switch_25==HX_CSTRING("hv")) ||  ( _switch_25==HX_CSTRING("vh"))){
						HX_STACK_LINE(1901)
						tile1 = (int)17;
					}
					else if (  ( _switch_25==HX_CSTRING("h")) ||  ( _switch_25==HX_CSTRING("horizontal"))){
						HX_STACK_LINE(1901)
						tile1 = (int)16;
					}
					else if (  ( _switch_25==HX_CSTRING("v")) ||  ( _switch_25==HX_CSTRING("vertical"))){
						HX_STACK_LINE(1901)
						tile1 = (int)1;
					}
					HX_STACK_LINE(1901)
					tile = tile1;
				}
				HX_STACK_LINE(1904)
				::String frame_str = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("graphic"))->x,HX_CSTRING("frames"),true,null());		HX_STACK_VAR(frame_str,"frame_str");
				HX_STACK_LINE(1905)
				if (((frame_str != HX_CSTRING("")))){
					HX_STACK_LINE(1906)
					Array< int > _g22 = Array_obj< int >::__new();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(1906)
					frames = _g22;
					HX_STACK_LINE(1907)
					Array< ::String > arr = frame_str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
					HX_STACK_LINE(1908)
					{
						HX_STACK_LINE(1908)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1908)
						while((true)){
							HX_STACK_LINE(1908)
							if ((!(((_g < arr->length))))){
								HX_STACK_LINE(1908)
								break;
							}
							HX_STACK_LINE(1908)
							::String numstr = arr->__get(_g);		HX_STACK_VAR(numstr,"numstr");
							HX_STACK_LINE(1908)
							++(_g);
							HX_STACK_LINE(1909)
							Dynamic _g23 = ::Std_obj::parseInt(numstr);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(1909)
							frames->push(_g23);
						}
					}
				}
				HX_STACK_LINE(1913)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("graphic"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast graphicNode = __it->next();
					{
						HX_STACK_LINE(1914)
						::String graphic_id = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(graphic_id,"graphic_id");
						HX_STACK_LINE(1915)
						::String image = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("image"),null(),null());		HX_STACK_VAR(image,"image");
						HX_STACK_LINE(1916)
						::String _g24 = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("slice9"),null(),null());		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(1916)
						Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(_g24);		HX_STACK_VAR(slice9,"slice9");
						HX_STACK_LINE(1917)
						int _g25;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(1917)
						{
							HX_STACK_LINE(1917)
							::String tileStr = ::flixel::addons::ui::U_obj::xml_str(graphicNode->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
							HX_STACK_LINE(1917)
							int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
							HX_STACK_LINE(1917)
							::String _switch_26 = (tileStr);
							if (  ( _switch_26==HX_CSTRING("true")) ||  ( _switch_26==HX_CSTRING("both")) ||  ( _switch_26==HX_CSTRING("all")) ||  ( _switch_26==HX_CSTRING("hv")) ||  ( _switch_26==HX_CSTRING("vh"))){
								HX_STACK_LINE(1917)
								tile1 = (int)17;
							}
							else if (  ( _switch_26==HX_CSTRING("h")) ||  ( _switch_26==HX_CSTRING("horizontal"))){
								HX_STACK_LINE(1917)
								tile1 = (int)16;
							}
							else if (  ( _switch_26==HX_CSTRING("v")) ||  ( _switch_26==HX_CSTRING("vertical"))){
								HX_STACK_LINE(1917)
								tile1 = (int)1;
							}
							HX_STACK_LINE(1917)
							_g25 = tile1;
						}
						HX_STACK_LINE(1917)
						tile = _g25;
						HX_STACK_LINE(1919)
						bool toggleState = ::flixel::addons::ui::U_obj::xml_bool(graphicNode->x,HX_CSTRING("toggle"),null());		HX_STACK_VAR(toggleState,"toggleState");
						HX_STACK_LINE(1920)
						toggleState = (bool(toggleState) && bool(isToggle));
						HX_STACK_LINE(1922)
						::String _switch_27 = (graphic_id);
						if (  ( _switch_27==HX_CSTRING("inactive")) ||  ( _switch_27==HX_CSTRING("")) ||  ( _switch_27==HX_CSTRING("normal")) ||  ( _switch_27==HX_CSTRING("up"))){
							HX_STACK_LINE(1924)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(1925)
								if ((!(toggleState))){
									HX_STACK_LINE(1926)
									graphic_ids[(int)0] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(1928)
									graphic_ids[(int)3] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(1931)
							slice9_ids[(int)0] = slice9;
						}
						else if (  ( _switch_27==HX_CSTRING("active")) ||  ( _switch_27==HX_CSTRING("highlight")) ||  ( _switch_27==HX_CSTRING("hilight")) ||  ( _switch_27==HX_CSTRING("over")) ||  ( _switch_27==HX_CSTRING("hover"))){
							HX_STACK_LINE(1933)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(1934)
								if ((!(toggleState))){
									HX_STACK_LINE(1935)
									graphic_ids[(int)1] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(1937)
									graphic_ids[(int)4] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(1940)
							slice9_ids[(int)1] = slice9;
						}
						else if (  ( _switch_27==HX_CSTRING("down")) ||  ( _switch_27==HX_CSTRING("pressed")) ||  ( _switch_27==HX_CSTRING("pushed"))){
							HX_STACK_LINE(1942)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(1943)
								if ((!(toggleState))){
									HX_STACK_LINE(1944)
									graphic_ids[(int)2] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
								else{
									HX_STACK_LINE(1946)
									graphic_ids[(int)5] = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());
								}
							}
							HX_STACK_LINE(1949)
							slice9_ids[(int)2] = slice9;
						}
						else if (  ( _switch_27==HX_CSTRING("all"))){
							HX_STACK_LINE(1951)
							if (((image != HX_CSTRING("")))){
								HX_STACK_LINE(1952)
								::String _g26 = ::flixel::addons::ui::U_obj::gfx(image,null(),null(),null(),null(),null());		HX_STACK_VAR(_g26,"_g26");
								HX_STACK_LINE(1952)
								Array< ::String > _g27 = Array_obj< ::String >::__new().Add(_g26);		HX_STACK_VAR(_g27,"_g27");
								HX_STACK_LINE(1952)
								graphic_ids = _g27;
							}
							HX_STACK_LINE(1954)
							slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9);
							HX_STACK_LINE(1955)
							if (((bool((src_w == (int)0)) || bool((src_h == (int)0))))){
								HX_STACK_LINE(1956)
								::openfl::_v2::display::BitmapData temp = ::openfl::_v2::Assets_obj::getBitmapData(graphic_ids->__get((int)0),null());		HX_STACK_VAR(temp,"temp");
								HX_STACK_LINE(1957)
								int _g28 = temp->get_width();		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(1957)
								src_w = _g28;
								HX_STACK_LINE(1958)
								if ((isToggle)){
									HX_STACK_LINE(1959)
									int _g29 = temp->get_height();		HX_STACK_VAR(_g29,"_g29");
									HX_STACK_LINE(1959)
									Float _g30 = (Float(_g29) / Float((int)6));		HX_STACK_VAR(_g30,"_g30");
									HX_STACK_LINE(1959)
									int _g31 = ::Std_obj::_int(_g30);		HX_STACK_VAR(_g31,"_g31");
									HX_STACK_LINE(1959)
									src_h = _g31;
								}
								else{
									HX_STACK_LINE(1961)
									int _g32 = temp->get_height();		HX_STACK_VAR(_g32,"_g32");
									HX_STACK_LINE(1961)
									Float _g33 = (Float(_g32) / Float((int)3));		HX_STACK_VAR(_g33,"_g33");
									HX_STACK_LINE(1961)
									int _g34 = ::Std_obj::_int(_g33);		HX_STACK_VAR(_g34,"_g34");
									HX_STACK_LINE(1961)
									src_h = _g34;
								}
							}
						}
						HX_STACK_LINE(1966)
						if (((graphic_ids->__get((int)0) != HX_CSTRING("")))){
							HX_STACK_LINE(1967)
							if (((graphic_ids->length >= (int)3))){
								HX_STACK_LINE(1968)
								if (((graphic_ids->__get((int)1) == HX_CSTRING("")))){
									HX_STACK_LINE(1969)
									graphic_ids[(int)1] = graphic_ids->__get((int)0);
								}
								HX_STACK_LINE(1971)
								if (((graphic_ids->__get((int)2) == HX_CSTRING("")))){
									HX_STACK_LINE(1972)
									graphic_ids[(int)2] = graphic_ids->__get((int)1);
								}
								HX_STACK_LINE(1974)
								if (((graphic_ids->length >= (int)6))){
									HX_STACK_LINE(1975)
									if (((graphic_ids->__get((int)3) == HX_CSTRING("")))){
										HX_STACK_LINE(1976)
										graphic_ids[(int)3] = graphic_ids->__get((int)0);
									}
									HX_STACK_LINE(1978)
									if (((graphic_ids->__get((int)4) == HX_CSTRING("")))){
										HX_STACK_LINE(1979)
										graphic_ids[(int)4] = graphic_ids->__get((int)1);
									}
									HX_STACK_LINE(1981)
									if (((graphic_ids->__get((int)5) == HX_CSTRING("")))){
										HX_STACK_LINE(1982)
										graphic_ids[(int)5] = graphic_ids->__get((int)2);
									}
								}
							}
						}
					}
;
				}
				HX_STACK_LINE(1990)
				fb->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,tile,resize_ratio,isToggle,src_w,src_h,frames);
			}
		}
		else{
			HX_STACK_LINE(1993)
			if (((load_code == HX_CSTRING("tab_menu")))){
				HX_STACK_LINE(1995)
				Array< ::String > graphic_ids = Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab_back.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png")).Add(HX_CSTRING("flixel/flixel-ui/img/tab.png"));		HX_STACK_VAR(graphic_ids,"graphic_ids");
				HX_STACK_LINE(1996)
				Array< int > slice9_tab = ::flixel::util::FlxStringUtil_obj::toIntArray(HX_CSTRING("6,6,11,11"));		HX_STACK_VAR(slice9_tab,"slice9_tab");
				HX_STACK_LINE(1997)
				Array< ::Dynamic > slice9_ids = Array_obj< ::Dynamic >::__new().Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab).Add(slice9_tab);		HX_STACK_VAR(slice9_ids,"slice9_ids");
				HX_STACK_LINE(2000)
				if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
					HX_STACK_LINE(2001)
					::flixel::addons::ui::FlxUIButton fbui = fb;		HX_STACK_VAR(fbui,"fbui");
					HX_STACK_LINE(2002)
					fbui->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
				}
				else{
					HX_STACK_LINE(2003)
					if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
						HX_STACK_LINE(2004)
						::flixel::addons::ui::FlxUISpriteButton fbuis = fb;		HX_STACK_VAR(fbuis,"fbuis");
						HX_STACK_LINE(2005)
						fbuis->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
					}
					else{
						HX_STACK_LINE(2007)
						fb->loadGraphicSlice9(graphic_ids,W,H,slice9_ids,(int)0,resize_ratio,isToggle,null(),null(),null());
					}
				}
			}
			else{
				HX_STACK_LINE(2011)
				if (((bool((W > (int)0)) && bool((H > (int)0))))){
					HX_STACK_LINE(2012)
					fb->loadGraphicSlice9(null(),W,H,null(),(int)0,resize_ratio,isToggle,null(),null(),null());
				}
			}
		}
		HX_STACK_LINE(2019)
		if (((sprite == null()))){
			HX_STACK_LINE(2020)
			if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
				HX_STACK_LINE(2021)
				this->formatButtonText(data,fb);
			}
			else{
				HX_STACK_LINE(2023)
				if (((load_code == HX_CSTRING("tab_menu")))){
					HX_STACK_LINE(2024)
					fb->__FieldRef(HX_CSTRING("up_color")) = (int)16777215;
					HX_STACK_LINE(2025)
					fb->__FieldRef(HX_CSTRING("down_color")) = (int)16777215;
					HX_STACK_LINE(2026)
					fb->__FieldRef(HX_CSTRING("over_color")) = (int)16777215;
					HX_STACK_LINE(2027)
					fb->__FieldRef(HX_CSTRING("up_toggle_color")) = (int)16777215;
					HX_STACK_LINE(2028)
					fb->__FieldRef(HX_CSTRING("down_toggle_color")) = (int)16777215;
					HX_STACK_LINE(2029)
					fb->__FieldRef(HX_CSTRING("over_toggle_color")) = (int)16777215;
				}
				else{
					HX_STACK_LINE(2033)
					fb->autoCenterLabel();
				}
			}
		}
		HX_STACK_LINE(2038)
		if (((bool((sprite != null())) && bool((label != HX_CSTRING("")))))){
			HX_STACK_LINE(2039)
			if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
				HX_STACK_LINE(2040)
				this->formatButtonText(data,fb);
			}
		}
		HX_STACK_LINE(2044)
		int text_x = (int)0;		HX_STACK_VAR(text_x,"text_x");
		HX_STACK_LINE(2045)
		int text_y = (int)0;		HX_STACK_VAR(text_y,"text_y");
		HX_STACK_LINE(2046)
		::String _g35 = data->x->get(HX_CSTRING("text_x"));		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(2046)
		if (((_g35 != null()))){
			HX_STACK_LINE(2047)
			int _g36 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_x"),null());		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(2047)
			text_x = _g36;
		}
		else{
			HX_STACK_LINE(2048)
			::String _g37 = data->x->get(HX_CSTRING("label_x"));		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(2048)
			if (((_g37 != null()))){
				HX_STACK_LINE(2049)
				int _g38 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("label_x"),null());		HX_STACK_VAR(_g38,"_g38");
				HX_STACK_LINE(2049)
				text_x = _g38;
			}
		}
		HX_STACK_LINE(2051)
		::String _g39 = data->x->get(HX_CSTRING("text_y"));		HX_STACK_VAR(_g39,"_g39");
		HX_STACK_LINE(2051)
		if (((_g39 != null()))){
			HX_STACK_LINE(2052)
			int _g40 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("text_y"),null());		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(2052)
			text_y = _g40;
		}
		else{
			HX_STACK_LINE(2053)
			::String _g41 = data->x->get(HX_CSTRING("label_y"));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(2053)
			if (((_g41 != null()))){
				HX_STACK_LINE(2054)
				int _g42 = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("label_y"),null());		HX_STACK_VAR(_g42,"_g42");
				HX_STACK_LINE(2054)
				text_y = _g42;
			}
		}
		HX_STACK_LINE(2057)
		if ((::Std_obj::is(fb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
			HX_STACK_LINE(2059)
			::flixel::addons::ui::FlxUISpriteButton fbs = fb;		HX_STACK_VAR(fbs,"fbs");
			HX_STACK_LINE(2060)
			::flixel::group::FlxSpriteGroup g = fbs->label;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(2061)
			{
				HX_STACK_LINE(2061)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2061)
				Array< ::Dynamic > _g1 = g->group->members;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2061)
				while((true)){
					HX_STACK_LINE(2061)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(2061)
						break;
					}
					HX_STACK_LINE(2061)
					::flixel::FlxSprite sprite1 = _g1->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(sprite1,"sprite1");
					HX_STACK_LINE(2061)
					++(_g);
					HX_STACK_LINE(2063)
					if ((::Std_obj::is(sprite1,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
						HX_STACK_LINE(2066)
						{
							HX_STACK_LINE(2066)
							::flixel::util::FlxPoint _g21 = sprite1->offset;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(2066)
							_g21->set_x((_g21->x - text_x));
						}
						HX_STACK_LINE(2067)
						{
							HX_STACK_LINE(2067)
							::flixel::util::FlxPoint _g21 = sprite1->offset;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(2067)
							_g21->set_y((_g21->y - text_y));
						}
						HX_STACK_LINE(2068)
						break;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(2074)
			::flixel::addons::ui::FlxUIButton fbu = fb;		HX_STACK_VAR(fbu,"fbu");
			HX_STACK_LINE(2076)
			{
				HX_STACK_LINE(2076)
				::flixel::util::FlxPoint _g = fbu->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2076)
				_g->set_x((_g->x - text_x));
			}
			HX_STACK_LINE(2077)
			{
				HX_STACK_LINE(2077)
				::flixel::util::FlxPoint _g = fbu->label->__Field(HX_CSTRING("offset"),true);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2077)
				_g->set_y((_g->y - text_y));
			}
		}
		HX_STACK_LINE(2080)
		fb->__Field(HX_CSTRING("set_visible"),true)(isVis);
		HX_STACK_LINE(2082)
		return fb;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,_loadButton,return )

::flixel::addons::ui::FlxUIRegion FlxUI_obj::_loadRegion( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadRegion",0x440e2340,"flixel.addons.ui.FlxUI._loadRegion","flixel/addons/ui/FlxUI.hx",2093,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2094)
	Float _g = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2094)
	int w = ::Std_obj::_int(_g);		HX_STACK_VAR(w,"w");
	HX_STACK_LINE(2095)
	Float _g1 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2095)
	int h = ::Std_obj::_int(_g1);		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(2096)
	return ::flixel::addons::ui::FlxUIRegion_obj::__new((int)0,(int)0,w,h);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadRegion,return )

::flixel::addons::ui::FlxUI9SliceSprite FlxUI_obj::_load9SliceSprite( ::haxe::xml::Fast data,::String __o_load_code){
::String load_code = __o_load_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_load9SliceSprite",0xb0d2f56a,"flixel.addons.ui.FlxUI._load9SliceSprite","flixel/addons/ui/FlxUI.hx",2099,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(load_code,"load_code")
{
		HX_STACK_LINE(2100)
		::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
		HX_STACK_LINE(2101)
		::flixel::addons::ui::FlxUI9SliceSprite f9s = null();		HX_STACK_VAR(f9s,"f9s");
		HX_STACK_LINE(2103)
		Float resize_ratio = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("resize_ratio"),(int)-1);		HX_STACK_VAR(resize_ratio,"resize_ratio");
		HX_STACK_LINE(2104)
		::flixel::util::FlxPoint resize_point = this->_loadCompass(data,HX_CSTRING("resize_point"));		HX_STACK_VAR(resize_point,"resize_point");
		HX_STACK_LINE(2107)
		Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(2109)
		::String _g3;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2109)
		{
			HX_STACK_LINE(2109)
			::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(2109)
			bool test = true;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(2109)
			::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(2109)
			::String _g = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2109)
			if (((_g != null()))){
				HX_STACK_LINE(2109)
				::String _g1 = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2109)
				str = _g1;
				HX_STACK_LINE(2109)
				if (((bool((str == HX_CSTRING(""))) || bool((str == null()))))){
					HX_STACK_LINE(2109)
					str = HX_CSTRING("");
				}
				else{
					HX_STACK_LINE(2109)
					::String _g2 = ::flixel::addons::ui::U_obj::gfx(str,null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2109)
					str = _g2;
					HX_STACK_LINE(2109)
					if ((test)){
						HX_STACK_LINE(2109)
						try
						{
						HX_STACK_CATCHABLE(::String, 0);
						{
							HX_STACK_LINE(2109)
							::openfl::_v2::display::BitmapData testbmp = ::openfl::_v2::Assets_obj::getBitmapData(str,null());		HX_STACK_VAR(testbmp,"testbmp");
							HX_STACK_LINE(2109)
							if (((testbmp == null()))){
								HX_STACK_LINE(2109)
								HX_STACK_DO_THROW(HX_CSTRING("couldn't load bmp \"src\""));
							}
							HX_STACK_LINE(2109)
							testbmp = null();
						}
						}
						catch(Dynamic __e){
							if (__e.IsClass< ::String >() ){
								HX_STACK_BEGIN_CATCH
								::String msg = __e;{
									HX_STACK_LINE(2109)
									Dynamic();
								}
							}
							else {
							    HX_STACK_DO_THROW(__e);
							}
						}
					}
				}
			}
			HX_STACK_LINE(2109)
			_g3 = str;
		}
		HX_STACK_LINE(2109)
		src = _g3;
		HX_STACK_LINE(2110)
		if (((src == HX_CSTRING("")))){
			HX_STACK_LINE(2110)
			src = null();
		}
		HX_STACK_LINE(2112)
		if (((src == null()))){
			HX_STACK_LINE(2113)
			if (((load_code == HX_CSTRING("tab_menu")))){
				HX_STACK_LINE(2114)
				src = HX_CSTRING("flixel/flixel-ui/img/chrome_flat.png");
			}
		}
		HX_STACK_LINE(2118)
		::openfl::_v2::geom::Rectangle rc;		HX_STACK_VAR(rc,"rc");
		HX_STACK_LINE(2119)
		Float _g4 = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2119)
		int rect_w = ::Std_obj::_int(_g4);		HX_STACK_VAR(rect_w,"rect_w");
		HX_STACK_LINE(2120)
		Float _g5 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2120)
		int rect_h = ::Std_obj::_int(_g5);		HX_STACK_VAR(rect_h,"rect_h");
		HX_STACK_LINE(2122)
		if (((bounds != null()))){
			HX_STACK_LINE(2123)
			if (((rect_w < bounds->__Field(HX_CSTRING("min_width"),true)))){
				HX_STACK_LINE(2123)
				int _g6 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(2123)
				rect_w = _g6;
			}
			else{
				HX_STACK_LINE(2124)
				if (((rect_w > bounds->__Field(HX_CSTRING("max_width"),true)))){
					HX_STACK_LINE(2124)
					rect_w = bounds->__Field(HX_CSTRING("max_width"),true);
				}
			}
			HX_STACK_LINE(2126)
			if (((rect_h < bounds->__Field(HX_CSTRING("min_height"),true)))){
				HX_STACK_LINE(2126)
				int _g7 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_height"),true));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(2126)
				rect_h = _g7;
			}
			else{
				HX_STACK_LINE(2127)
				if (((rect_h > bounds->__Field(HX_CSTRING("max_height"),true)))){
					HX_STACK_LINE(2127)
					int _g8 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2127)
					rect_h = _g8;
				}
			}
		}
		HX_STACK_LINE(2129)
		if (((bool((rect_w == (int)0)) || bool((rect_h == (int)0))))){
			HX_STACK_LINE(2130)
			return null();
		}
		HX_STACK_LINE(2133)
		::openfl::_v2::geom::Rectangle rc1 = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,rect_w,rect_h);		HX_STACK_VAR(rc1,"rc1");
		HX_STACK_LINE(2134)
		::String _g9 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("slice9"),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(2134)
		Array< int > slice9 = ::flixel::util::FlxStringUtil_obj::toIntArray(_g9);		HX_STACK_VAR(slice9,"slice9");
		HX_STACK_LINE(2136)
		bool smooth = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("smooth"),false);		HX_STACK_VAR(smooth,"smooth");
		HX_STACK_LINE(2138)
		int tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2138)
		{
			HX_STACK_LINE(2138)
			::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
			HX_STACK_LINE(2138)
			int tile1 = (int)0;		HX_STACK_VAR(tile1,"tile1");
			HX_STACK_LINE(2138)
			::String _switch_28 = (tileStr);
			if (  ( _switch_28==HX_CSTRING("true")) ||  ( _switch_28==HX_CSTRING("both")) ||  ( _switch_28==HX_CSTRING("all")) ||  ( _switch_28==HX_CSTRING("hv")) ||  ( _switch_28==HX_CSTRING("vh"))){
				HX_STACK_LINE(2138)
				tile1 = (int)17;
			}
			else if (  ( _switch_28==HX_CSTRING("h")) ||  ( _switch_28==HX_CSTRING("horizontal"))){
				HX_STACK_LINE(2138)
				tile1 = (int)16;
			}
			else if (  ( _switch_28==HX_CSTRING("v")) ||  ( _switch_28==HX_CSTRING("vertical"))){
				HX_STACK_LINE(2138)
				tile1 = (int)1;
			}
			HX_STACK_LINE(2138)
			tile = tile1;
		}
		HX_STACK_LINE(2140)
		::flixel::addons::ui::FlxUI9SliceSprite _g10 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,src,rc1,slice9,tile,smooth,HX_CSTRING(""),resize_ratio,resize_point);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(2140)
		f9s = _g10;
		HX_STACK_LINE(2142)
		return f9s;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_load9SliceSprite,return )

int FlxUI_obj::_loadTileRule( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadTileRule",0xb6112c96,"flixel.addons.ui.FlxUI._loadTileRule","flixel/addons/ui/FlxUI.hx",2145,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2146)
	::String tileStr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("tile"),true,HX_CSTRING(""));		HX_STACK_VAR(tileStr,"tileStr");
	HX_STACK_LINE(2147)
	int tile = (int)0;		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(2148)
	::String _switch_29 = (tileStr);
	if (  ( _switch_29==HX_CSTRING("true")) ||  ( _switch_29==HX_CSTRING("both")) ||  ( _switch_29==HX_CSTRING("all")) ||  ( _switch_29==HX_CSTRING("hv")) ||  ( _switch_29==HX_CSTRING("vh"))){
		HX_STACK_LINE(2149)
		tile = (int)17;
	}
	else if (  ( _switch_29==HX_CSTRING("h")) ||  ( _switch_29==HX_CSTRING("horizontal"))){
		HX_STACK_LINE(2150)
		tile = (int)16;
	}
	else if (  ( _switch_29==HX_CSTRING("v")) ||  ( _switch_29==HX_CSTRING("vertical"))){
		HX_STACK_LINE(2151)
		tile = (int)1;
	}
	HX_STACK_LINE(2153)
	return tile;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadTileRule,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadLine( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadLine",0x92cf0f40,"flixel.addons.ui.FlxUI._loadLine","flixel/addons/ui/FlxUI.hx",2156,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2157)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2158)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2160)
	::String axis = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("axis"),true,HX_CSTRING("horizontal"));		HX_STACK_VAR(axis,"axis");
	HX_STACK_LINE(2161)
	int thickness = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("thickness"),(int)1);		HX_STACK_VAR(thickness,"thickness");
	HX_STACK_LINE(2164)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2166)
	if (((bounds == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2167,0xf354486a)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("min_width") , ::Math_obj::NEGATIVE_INFINITY,false);
					__result->Add(HX_CSTRING("min_height") , ::Math_obj::NEGATIVE_INFINITY,false);
					__result->Add(HX_CSTRING("max_width") , ::Math_obj::POSITIVE_INFINITY,false);
					__result->Add(HX_CSTRING("max_height") , ::Math_obj::POSITIVE_INFINITY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(2167)
		bounds = _Function_2_1::Block();
	}
	HX_STACK_LINE(2169)
	::String _switch_30 = (axis);
	if (  ( _switch_30==HX_CSTRING("h")) ||  ( _switch_30==HX_CSTRING("horz")) ||  ( _switch_30==HX_CSTRING("horizontal"))){
		HX_STACK_LINE(2170)
		bounds->__FieldRef(HX_CSTRING("max_height")) = thickness;
		HX_STACK_LINE(2170)
		bounds->__FieldRef(HX_CSTRING("min_height")) = thickness;
	}
	else if (  ( _switch_30==HX_CSTRING("v")) ||  ( _switch_30==HX_CSTRING("vert")) ||  ( _switch_30==HX_CSTRING("vertical"))){
		HX_STACK_LINE(2171)
		bounds->__FieldRef(HX_CSTRING("max_width")) = thickness;
		HX_STACK_LINE(2171)
		bounds->__FieldRef(HX_CSTRING("min_width")) = thickness;
	}
	HX_STACK_LINE(2174)
	Float _g = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2174)
	int W = ::Std_obj::_int(_g);		HX_STACK_VAR(W,"W");
	HX_STACK_LINE(2175)
	Float _g1 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2175)
	int H = ::Std_obj::_int(_g1);		HX_STACK_VAR(H,"H");
	HX_STACK_LINE(2177)
	if (((bounds != null()))){
		HX_STACK_LINE(2178)
		if (((W < bounds->__Field(HX_CSTRING("min_width"),true)))){
			HX_STACK_LINE(2178)
			int _g2 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2178)
			W = _g2;
		}
		else{
			HX_STACK_LINE(2179)
			if (((W > bounds->__Field(HX_CSTRING("max_width"),true)))){
				HX_STACK_LINE(2179)
				int _g3 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_width"),true));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2179)
				W = _g3;
			}
		}
		HX_STACK_LINE(2180)
		if (((H < bounds->__Field(HX_CSTRING("min_height"),true)))){
			HX_STACK_LINE(2180)
			int _g4 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2180)
			H = _g4;
		}
		else{
			HX_STACK_LINE(2181)
			if (((H > bounds->__Field(HX_CSTRING("max_height"),true)))){
				HX_STACK_LINE(2181)
				int _g5 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(2181)
				H = _g5;
			}
		}
	}
	HX_STACK_LINE(2184)
	::String cstr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color"),true,HX_CSTRING("0xff000000"));		HX_STACK_VAR(cstr,"cstr");
	HX_STACK_LINE(2185)
	int C = (int)0;		HX_STACK_VAR(C,"C");
	HX_STACK_LINE(2186)
	if (((cstr != HX_CSTRING("")))){
		HX_STACK_LINE(2187)
		int _g10;		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(2187)
		{
			HX_STACK_LINE(2187)
			::String str = cstr;		HX_STACK_VAR(str,"str");
			HX_STACK_LINE(2187)
			bool safe = false;		HX_STACK_VAR(safe,"safe");
			HX_STACK_LINE(2187)
			int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
			HX_STACK_LINE(2187)
			int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
			HX_STACK_LINE(2187)
			int _g6 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2187)
			if (((_g6 != (int)0))){
				HX_STACK_LINE(2187)
				if ((!(safe))){
					HX_STACK_LINE(2187)
					HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
				}
				else{
					HX_STACK_LINE(2187)
					return_val = default_color;
				}
			}
			HX_STACK_LINE(2187)
			if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
				HX_STACK_LINE(2187)
				if ((!(safe))){
					HX_STACK_LINE(2187)
					HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
				}
				else{
					HX_STACK_LINE(2187)
					return_val = default_color;
				}
			}
			HX_STACK_LINE(2187)
			if (((return_val == (int)-1))){
				HX_STACK_LINE(2187)
				::String _g7 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(2187)
				str = _g7;
				HX_STACK_LINE(2187)
				if (((str.length == (int)6))){
					HX_STACK_LINE(2187)
					str = (HX_CSTRING("FF") + str);
				}
				HX_STACK_LINE(2187)
				int _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(2187)
				{
					HX_STACK_LINE(2187)
					int length = str.length;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(2187)
					int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
					HX_STACK_LINE(2187)
					int sum = (int)0;		HX_STACK_VAR(sum,"sum");
					HX_STACK_LINE(2187)
					int i = (length - (int)1);		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(2187)
					while((true)){
						HX_STACK_LINE(2187)
						if ((!(((i >= (int)0))))){
							HX_STACK_LINE(2187)
							break;
						}
						HX_STACK_LINE(2187)
						::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
						HX_STACK_LINE(2187)
						int char_int;		HX_STACK_VAR(char_int,"char_int");
						HX_STACK_LINE(2187)
						{
							HX_STACK_LINE(2187)
							int val = (int)-1;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(2187)
							::String _switch_31 = (char_hex);
							if (  ( _switch_31==HX_CSTRING("0")) ||  ( _switch_31==HX_CSTRING("1")) ||  ( _switch_31==HX_CSTRING("2")) ||  ( _switch_31==HX_CSTRING("3")) ||  ( _switch_31==HX_CSTRING("4")) ||  ( _switch_31==HX_CSTRING("5")) ||  ( _switch_31==HX_CSTRING("6")) ||  ( _switch_31==HX_CSTRING("7")) ||  ( _switch_31==HX_CSTRING("8")) ||  ( _switch_31==HX_CSTRING("9")) ||  ( _switch_31==HX_CSTRING("10"))){
								HX_STACK_LINE(2187)
								Dynamic _g8 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(2187)
								val = _g8;
							}
							else if (  ( _switch_31==HX_CSTRING("A")) ||  ( _switch_31==HX_CSTRING("a"))){
								HX_STACK_LINE(2187)
								val = (int)10;
							}
							else if (  ( _switch_31==HX_CSTRING("B")) ||  ( _switch_31==HX_CSTRING("b"))){
								HX_STACK_LINE(2187)
								val = (int)11;
							}
							else if (  ( _switch_31==HX_CSTRING("C")) ||  ( _switch_31==HX_CSTRING("c"))){
								HX_STACK_LINE(2187)
								val = (int)12;
							}
							else if (  ( _switch_31==HX_CSTRING("D")) ||  ( _switch_31==HX_CSTRING("d"))){
								HX_STACK_LINE(2187)
								val = (int)13;
							}
							else if (  ( _switch_31==HX_CSTRING("E")) ||  ( _switch_31==HX_CSTRING("e"))){
								HX_STACK_LINE(2187)
								val = (int)14;
							}
							else if (  ( _switch_31==HX_CSTRING("F")) ||  ( _switch_31==HX_CSTRING("f"))){
								HX_STACK_LINE(2187)
								val = (int)15;
							}
							HX_STACK_LINE(2187)
							if (((val == (int)-1))){
								HX_STACK_LINE(2187)
								HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
							}
							HX_STACK_LINE(2187)
							char_int = val;
						}
						HX_STACK_LINE(2187)
						hx::AddEq(sum,(char_int * place_mult));
						HX_STACK_LINE(2187)
						hx::MultEq(place_mult,(int)16);
						HX_STACK_LINE(2187)
						(i)--;
					}
					HX_STACK_LINE(2187)
					_g9 = sum;
				}
				HX_STACK_LINE(2187)
				return_val = _g9;
			}
			HX_STACK_LINE(2187)
			_g10 = return_val;
		}
		HX_STACK_LINE(2187)
		C = _g10;
	}
	HX_STACK_LINE(2189)
	::flixel::addons::ui::FlxUISprite _g11 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(2189)
	fs = _g11;
	HX_STACK_LINE(2190)
	fs->makeGraphic(W,H,C,null(),null());
	HX_STACK_LINE(2192)
	return fs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadLine,return )

::flixel::addons::ui::FlxUISprite FlxUI_obj::_loadSprite( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadSprite",0x07173e51,"flixel.addons.ui.FlxUI._loadSprite","flixel/addons/ui/FlxUI.hx",2195,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2196)
	::String src = HX_CSTRING("");		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(2197)
	::flixel::addons::ui::FlxUISprite fs = null();		HX_STACK_VAR(fs,"fs");
	HX_STACK_LINE(2199)
	::String _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(2199)
	{
		HX_STACK_LINE(2199)
		::Xml data1 = data->x;		HX_STACK_VAR(data1,"data1");
		HX_STACK_LINE(2199)
		bool test = true;		HX_STACK_VAR(test,"test");
		HX_STACK_LINE(2199)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(2199)
		::String _g = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2199)
		if (((_g != null()))){
			HX_STACK_LINE(2199)
			::String _g1 = data1->get(HX_CSTRING("src"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2199)
			str = _g1;
			HX_STACK_LINE(2199)
			if (((bool((str == HX_CSTRING(""))) || bool((str == null()))))){
				HX_STACK_LINE(2199)
				str = HX_CSTRING("");
			}
			else{
				HX_STACK_LINE(2199)
				::String _g2 = ::flixel::addons::ui::U_obj::gfx(str,null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2199)
				str = _g2;
				HX_STACK_LINE(2199)
				if ((test)){
					HX_STACK_LINE(2199)
					try
					{
					HX_STACK_CATCHABLE(::String, 0);
					{
						HX_STACK_LINE(2199)
						::openfl::_v2::display::BitmapData testbmp = ::openfl::_v2::Assets_obj::getBitmapData(str,null());		HX_STACK_VAR(testbmp,"testbmp");
						HX_STACK_LINE(2199)
						if (((testbmp == null()))){
							HX_STACK_LINE(2199)
							HX_STACK_DO_THROW(HX_CSTRING("couldn't load bmp \"src\""));
						}
						HX_STACK_LINE(2199)
						testbmp = null();
					}
					}
					catch(Dynamic __e){
						if (__e.IsClass< ::String >() ){
							HX_STACK_BEGIN_CATCH
							::String msg = __e;{
								HX_STACK_LINE(2199)
								Dynamic();
							}
						}
						else {
						    HX_STACK_DO_THROW(__e);
						}
					}
				}
			}
		}
		HX_STACK_LINE(2199)
		_g3 = str;
	}
	HX_STACK_LINE(2199)
	src = _g3;
	HX_STACK_LINE(2202)
	Dynamic bounds = this->calcMaxMinSize(data,null(),null());		HX_STACK_VAR(bounds,"bounds");
	HX_STACK_LINE(2204)
	if (((src != HX_CSTRING("")))){
		HX_STACK_LINE(2205)
		::flixel::addons::ui::FlxUISprite _g4 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,src);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(2205)
		fs = _g4;
	}
	else{
		HX_STACK_LINE(2207)
		Float _g5 = this->_loadWidth(data,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(2207)
		int W = ::Std_obj::_int(_g5);		HX_STACK_VAR(W,"W");
		HX_STACK_LINE(2208)
		Float _g6 = this->_loadHeight(data,null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(2208)
		int H = ::Std_obj::_int(_g6);		HX_STACK_VAR(H,"H");
		HX_STACK_LINE(2210)
		if (((bounds != null()))){
			HX_STACK_LINE(2211)
			if (((W < bounds->__Field(HX_CSTRING("min_width"),true)))){
				HX_STACK_LINE(2211)
				int _g7 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("min_width"),true));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(2211)
				W = _g7;
			}
			else{
				HX_STACK_LINE(2212)
				if (((W > bounds->__Field(HX_CSTRING("max_width"),true)))){
					HX_STACK_LINE(2212)
					int _g8 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_width"),true));		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2212)
					W = _g8;
				}
			}
			HX_STACK_LINE(2213)
			if (((H < bounds->__Field(HX_CSTRING("min_height"),true)))){
				HX_STACK_LINE(2213)
				int _g9 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(2213)
				H = _g9;
			}
			else{
				HX_STACK_LINE(2214)
				if (((H > bounds->__Field(HX_CSTRING("max_height"),true)))){
					HX_STACK_LINE(2214)
					int _g10 = ::Std_obj::_int(bounds->__Field(HX_CSTRING("max_height"),true));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(2214)
					H = _g10;
				}
			}
		}
		HX_STACK_LINE(2217)
		::String cstr = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("color"),null(),null());		HX_STACK_VAR(cstr,"cstr");
		HX_STACK_LINE(2218)
		int C = (int)0;		HX_STACK_VAR(C,"C");
		HX_STACK_LINE(2219)
		if (((cstr != HX_CSTRING("")))){
			HX_STACK_LINE(2220)
			int _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(2220)
			{
				HX_STACK_LINE(2220)
				::String str = cstr;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2220)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(2220)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2220)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2220)
				int _g11 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2220)
				if (((_g11 != (int)0))){
					HX_STACK_LINE(2220)
					if ((!(safe))){
						HX_STACK_LINE(2220)
						HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
					}
					else{
						HX_STACK_LINE(2220)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2220)
				if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
					HX_STACK_LINE(2220)
					if ((!(safe))){
						HX_STACK_LINE(2220)
						HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
					}
					else{
						HX_STACK_LINE(2220)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2220)
				if (((return_val == (int)-1))){
					HX_STACK_LINE(2220)
					::String _g12 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(2220)
					str = _g12;
					HX_STACK_LINE(2220)
					if (((str.length == (int)6))){
						HX_STACK_LINE(2220)
						str = (HX_CSTRING("FF") + str);
					}
					HX_STACK_LINE(2220)
					int _g14;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(2220)
					{
						HX_STACK_LINE(2220)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2220)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2220)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2220)
						int i = (length - (int)1);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2220)
						while((true)){
							HX_STACK_LINE(2220)
							if ((!(((i >= (int)0))))){
								HX_STACK_LINE(2220)
								break;
							}
							HX_STACK_LINE(2220)
							::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2220)
							int char_int;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2220)
							{
								HX_STACK_LINE(2220)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2220)
								::String _switch_32 = (char_hex);
								if (  ( _switch_32==HX_CSTRING("0")) ||  ( _switch_32==HX_CSTRING("1")) ||  ( _switch_32==HX_CSTRING("2")) ||  ( _switch_32==HX_CSTRING("3")) ||  ( _switch_32==HX_CSTRING("4")) ||  ( _switch_32==HX_CSTRING("5")) ||  ( _switch_32==HX_CSTRING("6")) ||  ( _switch_32==HX_CSTRING("7")) ||  ( _switch_32==HX_CSTRING("8")) ||  ( _switch_32==HX_CSTRING("9")) ||  ( _switch_32==HX_CSTRING("10"))){
									HX_STACK_LINE(2220)
									Dynamic _g13 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(2220)
									val = _g13;
								}
								else if (  ( _switch_32==HX_CSTRING("A")) ||  ( _switch_32==HX_CSTRING("a"))){
									HX_STACK_LINE(2220)
									val = (int)10;
								}
								else if (  ( _switch_32==HX_CSTRING("B")) ||  ( _switch_32==HX_CSTRING("b"))){
									HX_STACK_LINE(2220)
									val = (int)11;
								}
								else if (  ( _switch_32==HX_CSTRING("C")) ||  ( _switch_32==HX_CSTRING("c"))){
									HX_STACK_LINE(2220)
									val = (int)12;
								}
								else if (  ( _switch_32==HX_CSTRING("D")) ||  ( _switch_32==HX_CSTRING("d"))){
									HX_STACK_LINE(2220)
									val = (int)13;
								}
								else if (  ( _switch_32==HX_CSTRING("E")) ||  ( _switch_32==HX_CSTRING("e"))){
									HX_STACK_LINE(2220)
									val = (int)14;
								}
								else if (  ( _switch_32==HX_CSTRING("F")) ||  ( _switch_32==HX_CSTRING("f"))){
									HX_STACK_LINE(2220)
									val = (int)15;
								}
								HX_STACK_LINE(2220)
								if (((val == (int)-1))){
									HX_STACK_LINE(2220)
									HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
								}
								HX_STACK_LINE(2220)
								char_int = val;
							}
							HX_STACK_LINE(2220)
							hx::AddEq(sum,(char_int * place_mult));
							HX_STACK_LINE(2220)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2220)
							(i)--;
						}
						HX_STACK_LINE(2220)
						_g14 = sum;
					}
					HX_STACK_LINE(2220)
					return_val = _g14;
				}
				HX_STACK_LINE(2220)
				_g15 = return_val;
			}
			HX_STACK_LINE(2220)
			C = _g15;
		}
		HX_STACK_LINE(2222)
		::flixel::addons::ui::FlxUISprite _g16 = ::flixel::addons::ui::FlxUISprite_obj::__new((int)0,(int)0,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(2222)
		fs = _g16;
		HX_STACK_LINE(2223)
		fs->makeGraphic(W,H,C,null(),null());
	}
	HX_STACK_LINE(2226)
	return fs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadSprite,return )

int FlxUI_obj::thisWidth( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisWidth",0xcbb0796f,"flixel.addons.ui.FlxUI.thisWidth","flixel/addons/ui/FlxUI.hx",2231,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2231)
	return ::flixel::FlxG_obj::width;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisWidth,return )

int FlxUI_obj::thisHeight( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","thisHeight",0x2509405e,"flixel.addons.ui.FlxUI.thisHeight","flixel/addons/ui/FlxUI.hx",2239,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(2239)
	return ::flixel::FlxG_obj::height;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,thisHeight,return )

Float FlxUI_obj::_getAnchorPos( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,::String axis,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getAnchorPos",0xe6674faf,"flixel.addons.ui.FlxUI._getAnchorPos","flixel/addons/ui/FlxUI.hx",2245,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(axis,"axis")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2246)
	::String _switch_33 = (str);
	if (  ( _switch_33==HX_CSTRING(""))){
		HX_STACK_LINE(2247)
		return (int)0;
	}
	else if (  ( _switch_33==HX_CSTRING("left"))){
		HX_STACK_LINE(2248)
		return (int)0;
	}
	else if (  ( _switch_33==HX_CSTRING("right"))){
		HX_STACK_LINE(2249)
		return this->thisWidth();
	}
	else if (  ( _switch_33==HX_CSTRING("center"))){
		HX_STACK_LINE(2251)
		if (((axis == HX_CSTRING("x")))){
			HX_STACK_LINE(2251)
			int _g = this->thisWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2251)
			return (Float(_g) / Float((int)2));
		}
		else{
			HX_STACK_LINE(2252)
			if (((axis == HX_CSTRING("y")))){
				HX_STACK_LINE(2252)
				int _g1 = this->thisHeight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2252)
				return (Float(_g1) / Float((int)2));
			}
		}
	}
	else if (  ( _switch_33==HX_CSTRING("top")) ||  ( _switch_33==HX_CSTRING("up"))){
		HX_STACK_LINE(2253)
		return (int)0;
	}
	else if (  ( _switch_33==HX_CSTRING("bottom")) ||  ( _switch_33==HX_CSTRING("down"))){
		HX_STACK_LINE(2254)
		return this->thisHeight();
	}
	else  {
		HX_STACK_LINE(2256)
		Float perc = ::flixel::addons::ui::U_obj::perc_to_float(str);		HX_STACK_VAR(perc,"perc");
		HX_STACK_LINE(2257)
		if ((!(::Math_obj::isNaN(perc)))){
			HX_STACK_LINE(2258)
			if (((axis == HX_CSTRING("x")))){
				HX_STACK_LINE(2259)
				int _g2 = this->thisWidth();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2259)
				return (perc * _g2);
			}
			else{
				HX_STACK_LINE(2260)
				if (((axis == HX_CSTRING("y")))){
					HX_STACK_LINE(2261)
					int _g3 = this->thisHeight();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(2261)
					return (perc * _g3);
				}
			}
		}
		else{
			HX_STACK_LINE(2264)
			::EReg r = ::EReg_obj::__new(HX_CSTRING("[\\w]+\\.[\\w]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(2265)
			::String property = HX_CSTRING("");		HX_STACK_VAR(property,"property");
			HX_STACK_LINE(2267)
			if ((r->match(str))){
				HX_STACK_LINE(2268)
				::String wh = HX_CSTRING("");		HX_STACK_VAR(wh,"wh");
				HX_STACK_LINE(2269)
				if (((axis == HX_CSTRING("x")))){
					HX_STACK_LINE(2269)
					wh = HX_CSTRING("w");
				}
				HX_STACK_LINE(2270)
				if (((axis == HX_CSTRING("y")))){
					HX_STACK_LINE(2270)
					wh = HX_CSTRING("h");
				}
				HX_STACK_LINE(2271)
				Float assetValue = this->_getStretch((int)1,wh,str);		HX_STACK_VAR(assetValue,"assetValue");
				HX_STACK_LINE(2272)
				return assetValue;
			}
		}
	}
;
;
	HX_STACK_LINE(2307)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getAnchorPos,return )

Dynamic FlxUI_obj::calcMaxMinSize( ::haxe::xml::Fast data,Dynamic width,Dynamic height){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","calcMaxMinSize",0x437b661d,"flixel.addons.ui.FlxUI.calcMaxMinSize","flixel/addons/ui/FlxUI.hx",2310,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(2311)
	Float min_w = (int)0;		HX_STACK_VAR(min_w,"min_w");
	HX_STACK_LINE(2312)
	Float min_h = (int)0;		HX_STACK_VAR(min_h,"min_h");
	HX_STACK_LINE(2313)
	Float max_w = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(max_w,"max_w");
	HX_STACK_LINE(2314)
	Float max_h = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(max_h,"max_h");
	HX_STACK_LINE(2315)
	Float temp_min_w = (int)0;		HX_STACK_VAR(temp_min_w,"temp_min_w");
	HX_STACK_LINE(2316)
	Float temp_min_h = (int)0;		HX_STACK_VAR(temp_min_h,"temp_min_h");
	HX_STACK_LINE(2317)
	Float temp_max_w = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(temp_max_w,"temp_max_w");
	HX_STACK_LINE(2318)
	Float temp_max_h = ::Math_obj::POSITIVE_INFINITY;		HX_STACK_VAR(temp_max_h,"temp_max_h");
	HX_STACK_LINE(2320)
	if ((data->hasNode->resolve(HX_CSTRING("exact_size")))){
		HX_STACK_LINE(2321)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("exact_size"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast exactNode = __it->next();
			{
				HX_STACK_LINE(2322)
				::String exact_w_str = ::flixel::addons::ui::U_obj::xml_str(exactNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(exact_w_str,"exact_w_str");
				HX_STACK_LINE(2323)
				::String exact_h_str = ::flixel::addons::ui::U_obj::xml_str(exactNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(exact_h_str,"exact_h_str");
				HX_STACK_LINE(2324)
				Float _g = this->_getDataSize(HX_CSTRING("w"),exact_w_str,(int)0);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2324)
				min_w = _g;
				HX_STACK_LINE(2325)
				Float _g1 = this->_getDataSize(HX_CSTRING("h"),exact_h_str,(int)0);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2325)
				min_h = _g1;
				HX_STACK_LINE(2326)
				max_w = min_w;
				HX_STACK_LINE(2327)
				max_h = min_h;
			}
;
		}
	}
	else{
		HX_STACK_LINE(2329)
		if ((data->hasNode->resolve(HX_CSTRING("min_size")))){
			HX_STACK_LINE(2330)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("min_size"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast minNode = __it->next();
				{
					HX_STACK_LINE(2331)
					::String min_w_str = ::flixel::addons::ui::U_obj::xml_str(minNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(min_w_str,"min_w_str");
					HX_STACK_LINE(2332)
					::String min_h_str = ::flixel::addons::ui::U_obj::xml_str(minNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(min_h_str,"min_h_str");
					HX_STACK_LINE(2333)
					Float _g2 = this->_getDataSize(HX_CSTRING("w"),min_w_str,(int)0);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2333)
					temp_min_w = _g2;
					HX_STACK_LINE(2334)
					Float _g3 = this->_getDataSize(HX_CSTRING("h"),min_h_str,(int)0);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(2334)
					temp_min_h = _g3;
					HX_STACK_LINE(2335)
					if (((temp_min_w > min_w))){
						HX_STACK_LINE(2336)
						min_w = temp_min_w;
					}
					HX_STACK_LINE(2338)
					if (((temp_min_h > min_h))){
						HX_STACK_LINE(2339)
						min_h = temp_min_h;
					}
				}
;
			}
		}
		else{
			HX_STACK_LINE(2342)
			if ((data->hasNode->resolve(HX_CSTRING("max_size")))){
				HX_STACK_LINE(2343)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("max_size"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast maxNode = __it->next();
					{
						HX_STACK_LINE(2344)
						::String max_w_str = ::flixel::addons::ui::U_obj::xml_str(maxNode->x,HX_CSTRING("width"),null(),null());		HX_STACK_VAR(max_w_str,"max_w_str");
						HX_STACK_LINE(2345)
						::String max_h_str = ::flixel::addons::ui::U_obj::xml_str(maxNode->x,HX_CSTRING("height"),null(),null());		HX_STACK_VAR(max_h_str,"max_h_str");
						HX_STACK_LINE(2346)
						Float _g4 = this->_getDataSize(HX_CSTRING("w"),max_w_str,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(2346)
						temp_max_w = _g4;
						HX_STACK_LINE(2347)
						Float _g5 = this->_getDataSize(HX_CSTRING("h"),max_h_str,::Math_obj::POSITIVE_INFINITY);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(2347)
						temp_max_h = _g5;
						HX_STACK_LINE(2348)
						if (((temp_max_w < max_w))){
							HX_STACK_LINE(2349)
							max_w = temp_max_w;
						}
						HX_STACK_LINE(2351)
						if (((temp_max_h < max_h))){
							HX_STACK_LINE(2352)
							max_h = temp_max_h;
						}
					}
;
				}
			}
			else{
				HX_STACK_LINE(2356)
				return null();
			}
		}
	}
	HX_STACK_LINE(2359)
	if (((width != null()))){
		HX_STACK_LINE(2360)
		if (((width > min_w))){
			HX_STACK_LINE(2360)
			min_w = width;
		}
		HX_STACK_LINE(2361)
		if (((width < max_w))){
			HX_STACK_LINE(2361)
			max_w = width;
		}
	}
	HX_STACK_LINE(2363)
	if (((height != null()))){
		HX_STACK_LINE(2364)
		if (((height > min_h))){
			HX_STACK_LINE(2364)
			min_h = height;
		}
		HX_STACK_LINE(2365)
		if (((height < max_h))){
			HX_STACK_LINE(2365)
			max_h = height;
		}
	}
	HX_STACK_LINE(2370)
	if (((max_w <= (int)0))){
		HX_STACK_LINE(2370)
		max_w = ::Math_obj::POSITIVE_INFINITY;
	}
	HX_STACK_LINE(2371)
	if (((max_h <= (int)0))){
		HX_STACK_LINE(2371)
		max_h = ::Math_obj::POSITIVE_INFINITY;
	}
	struct _Function_1_1{
		inline static Dynamic Block( Float &max_w,Float &max_h,Float &min_w,Float &min_h){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2373,0xf354486a)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("min_width") , min_w,false);
				__result->Add(HX_CSTRING("min_height") , min_h,false);
				__result->Add(HX_CSTRING("max_width") , max_w,false);
				__result->Add(HX_CSTRING("max_height") , max_h,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(2373)
	return _Function_1_1::Block(max_w,max_h,min_w,min_h);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,calcMaxMinSize,return )

Float FlxUI_obj::_getDataSize( ::String target,::String str,hx::Null< Float >  __o_default_){
Float default_ = __o_default_.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getDataSize",0xaed2247b,"flixel.addons.ui.FlxUI._getDataSize","flixel/addons/ui/FlxUI.hx",2376,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(default_,"default_")
{
		HX_STACK_LINE(2378)
		if ((::flixel::addons::ui::U_obj::isStrNum(str))){
			HX_STACK_LINE(2379)
			return ::Std_obj::parseFloat(str);
		}
		HX_STACK_LINE(2382)
		Float percf = ::flixel::addons::ui::U_obj::perc_to_float(str);		HX_STACK_VAR(percf,"percf");
		HX_STACK_LINE(2383)
		if ((!(::Math_obj::isNaN(percf)))){
			HX_STACK_LINE(2384)
			::String _switch_34 = (target);
			if (  ( _switch_34==HX_CSTRING("w")) ||  ( _switch_34==HX_CSTRING("width"))){
				HX_STACK_LINE(2385)
				int _g = this->thisWidth();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2385)
				return (_g * percf);
			}
			else if (  ( _switch_34==HX_CSTRING("h")) ||  ( _switch_34==HX_CSTRING("height"))){
				HX_STACK_LINE(2386)
				int _g1 = this->thisHeight();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2386)
				return (_g1 * percf);
			}
		}
		else{
			HX_STACK_LINE(2389)
			int _g2 = str.indexOf(HX_CSTRING("stretch:"),null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2389)
			if (((_g2 == (int)0))){
				HX_STACK_LINE(2390)
				::String _g3 = ::StringTools_obj::replace(str,HX_CSTRING("stretch:"),HX_CSTRING(""));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(2390)
				str = _g3;
				HX_STACK_LINE(2391)
				Array< ::String > arr = str.split(HX_CSTRING(","));		HX_STACK_VAR(arr,"arr");
				HX_STACK_LINE(2392)
				Float stretch_0 = this->_getStretch((int)0,target,arr->__get((int)0));		HX_STACK_VAR(stretch_0,"stretch_0");
				HX_STACK_LINE(2393)
				Float stretch_1 = this->_getStretch((int)1,target,arr->__get((int)1));		HX_STACK_VAR(stretch_1,"stretch_1");
				HX_STACK_LINE(2394)
				if (((bool((stretch_0 != (int)-1)) && bool((stretch_1 != (int)-1))))){
					HX_STACK_LINE(2395)
					return (stretch_1 - stretch_0);
				}
				else{
					HX_STACK_LINE(2397)
					return default_;
				}
			}
			else{
				HX_STACK_LINE(2399)
				int _g4 = str.indexOf(HX_CSTRING("asset:"),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(2399)
				if (((_g4 == (int)0))){
					HX_STACK_LINE(2400)
					::String _g5 = ::StringTools_obj::replace(str,HX_CSTRING("asset:"),HX_CSTRING(""));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2400)
					str = _g5;
					HX_STACK_LINE(2401)
					Float assetValue = this->_getStretch((int)1,target,str);		HX_STACK_VAR(assetValue,"assetValue");
					HX_STACK_LINE(2402)
					return assetValue;
				}
				else{
					HX_STACK_LINE(2404)
					::EReg r = ::EReg_obj::__new(HX_CSTRING("[\\w]+\\.[\\w]+"),HX_CSTRING(""));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(2405)
					if ((r->match(str))){
						HX_STACK_LINE(2406)
						Float assetValue = this->_getStretch((int)1,target,str);		HX_STACK_VAR(assetValue,"assetValue");
						HX_STACK_LINE(2407)
						return assetValue;
					}
				}
			}
		}
		HX_STACK_LINE(2412)
		return default_;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getDataSize,return )

Dynamic FlxUI_obj::_getOperation( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getOperation",0x2685c1b7,"flixel.addons.ui.FlxUI._getOperation","flixel/addons/ui/FlxUI.hx",2423,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2424)
	Array< ::String > list = Array_obj< ::String >::__new().Add(HX_CSTRING("+")).Add(HX_CSTRING("-")).Add(HX_CSTRING("*")).Add(HX_CSTRING("/")).Add(HX_CSTRING("^"));		HX_STACK_VAR(list,"list");
	HX_STACK_LINE(2425)
	Array< ::String > temp = null();		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(2427)
	{
		HX_STACK_LINE(2427)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2427)
		while((true)){
			HX_STACK_LINE(2427)
			if ((!(((_g < list->length))))){
				HX_STACK_LINE(2427)
				break;
			}
			HX_STACK_LINE(2427)
			::String _operator = list->__get(_g);		HX_STACK_VAR(_operator,"operator");
			HX_STACK_LINE(2427)
			++(_g);
			HX_STACK_LINE(2428)
			int _g1 = str.indexOf(_operator,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2428)
			if (((_g1 != (int)-1))){
				HX_STACK_LINE(2429)
				Array< ::String > _g11 = str.split(_operator);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2429)
				temp = _g11;
				HX_STACK_LINE(2430)
				if (((bool((temp != null())) && bool((temp->length == (int)2))))){
					HX_STACK_LINE(2431)
					Float f = ::Std_obj::parseFloat(temp->__get((int)1));		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(2432)
					if (((bool((f == (int)0)) && bool((temp->__get((int)1) != HX_CSTRING("0")))))){
						HX_STACK_LINE(2433)
						return null();
					}
					else{
						HX_STACK_LINE(2435)
						return Dynamic( Array_obj<Dynamic>::__new().Add(temp->__get((int)0)).Add(_operator).Add(f));
					}
				}
			}
		}
	}
	HX_STACK_LINE(2441)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_getOperation,return )

Float FlxUI_obj::_doOperation( Float value,::String _operator,Float operand){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_doOperation",0xf65624d6,"flixel.addons.ui.FlxUI._doOperation","flixel/addons/ui/FlxUI.hx",2444,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_operator,"operator")
	HX_STACK_ARG(operand,"operand")
	HX_STACK_LINE(2445)
	::String _switch_35 = (_operator);
	if (  ( _switch_35==HX_CSTRING("+"))){
		HX_STACK_LINE(2446)
		return (value + operand);
	}
	else if (  ( _switch_35==HX_CSTRING("-"))){
		HX_STACK_LINE(2447)
		return (value - operand);
	}
	else if (  ( _switch_35==HX_CSTRING("/"))){
		HX_STACK_LINE(2448)
		return (Float(value) / Float(operand));
	}
	else if (  ( _switch_35==HX_CSTRING("*"))){
		HX_STACK_LINE(2449)
		return (value * operand);
	}
	else if (  ( _switch_35==HX_CSTRING("^"))){
		HX_STACK_LINE(2450)
		return ::Math_obj::pow(value,operand);
	}
	HX_STACK_LINE(2452)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_doOperation,return )

Float FlxUI_obj::_getStretch( int index,::String target,::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_getStretch",0xd40af795,"flixel.addons.ui.FlxUI._getStretch","flixel/addons/ui/FlxUI.hx",2455,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(2456)
	Dynamic arr = null();		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(2457)
	::String prop = HX_CSTRING("");		HX_STACK_VAR(prop,"prop");
	HX_STACK_LINE(2458)
	::String _operator = HX_CSTRING("");		HX_STACK_VAR(_operator,"operator");
	HX_STACK_LINE(2459)
	Float operand = (int)0;		HX_STACK_VAR(operand,"operand");
	HX_STACK_LINE(2461)
	Dynamic _g = this->_getOperation(str);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2461)
	arr = _g;
	HX_STACK_LINE(2462)
	if (((arr != null()))){
		HX_STACK_LINE(2463)
		str = arr->__GetItem((int)0);
		HX_STACK_LINE(2464)
		_operator = arr->__GetItem((int)1);
		HX_STACK_LINE(2465)
		operand = arr->__GetItem((int)2);
	}
	HX_STACK_LINE(2468)
	int _g1 = str.indexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(2468)
	if (((_g1 != (int)-1))){
		HX_STACK_LINE(2469)
		Array< ::String > _g2 = str.split(HX_CSTRING("."));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2469)
		arr = _g2;
		HX_STACK_LINE(2470)
		str = arr->__GetItem((int)0);
		HX_STACK_LINE(2471)
		prop = arr->__GetItem((int)1);
	}
	HX_STACK_LINE(2474)
	::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(str,null());		HX_STACK_VAR(other,"other");
	HX_STACK_LINE(2476)
	Float return_val = (int)0;		HX_STACK_VAR(return_val,"return_val");
	HX_STACK_LINE(2478)
	if (((other == null()))){
		HX_STACK_LINE(2479)
		::String _switch_36 = (str);
		if (  ( _switch_36==HX_CSTRING("top")) ||  ( _switch_36==HX_CSTRING("up"))){
			HX_STACK_LINE(2480)
			return_val = (int)0;
		}
		else if (  ( _switch_36==HX_CSTRING("bottom")) ||  ( _switch_36==HX_CSTRING("down"))){
			HX_STACK_LINE(2481)
			int _g3 = this->thisHeight();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2481)
			return_val = _g3;
		}
		else if (  ( _switch_36==HX_CSTRING("left"))){
			HX_STACK_LINE(2482)
			return_val = (int)0;
		}
		else if (  ( _switch_36==HX_CSTRING("right"))){
			HX_STACK_LINE(2483)
			int _g4 = this->thisWidth();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2483)
			return_val = _g4;
		}
		else  {
			HX_STACK_LINE(2485)
			if ((::flixel::addons::ui::U_obj::isStrNum(str))){
				HX_STACK_LINE(2486)
				Float _g5 = ::Std_obj::parseFloat(str);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(2486)
				return_val = _g5;
			}
			else{
				HX_STACK_LINE(2488)
				return_val = (int)-1;
			}
		}
;
;
	}
	else{
		HX_STACK_LINE(2492)
		::String _switch_37 = (target);
		if (  ( _switch_37==HX_CSTRING("w")) ||  ( _switch_37==HX_CSTRING("width"))){
			HX_STACK_LINE(2494)
			if (((prop == HX_CSTRING("")))){
				HX_STACK_LINE(2495)
				if (((index == (int)0))){
					HX_STACK_LINE(2495)
					Float _g6 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(2495)
					Float _g7 = (other->__Field(HX_CSTRING("x"),true) + _g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2495)
					return_val = _g7;
				}
				HX_STACK_LINE(2496)
				if (((index == (int)1))){
					HX_STACK_LINE(2496)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
			}
			else{
				HX_STACK_LINE(2498)
				::String _switch_38 = (prop);
				if (  ( _switch_38==HX_CSTRING("top")) ||  ( _switch_38==HX_CSTRING("up")) ||  ( _switch_38==HX_CSTRING("y"))){
					HX_STACK_LINE(2499)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
				else if (  ( _switch_38==HX_CSTRING("bottom")) ||  ( _switch_38==HX_CSTRING("down"))){
					HX_STACK_LINE(2500)
					Float _g8 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(2500)
					Float _g9 = (other->__Field(HX_CSTRING("y"),true) + _g8);		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(2500)
					return_val = _g9;
				}
				else if (  ( _switch_38==HX_CSTRING("right"))){
					HX_STACK_LINE(2501)
					Float _g10 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(2501)
					Float _g11 = (other->__Field(HX_CSTRING("x"),true) + _g10);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(2501)
					return_val = _g11;
				}
				else if (  ( _switch_38==HX_CSTRING("left")) ||  ( _switch_38==HX_CSTRING("x"))){
					HX_STACK_LINE(2502)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
				else if (  ( _switch_38==HX_CSTRING("center"))){
					HX_STACK_LINE(2503)
					Float _g12 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(2503)
					Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(2503)
					Float _g14 = (other->__Field(HX_CSTRING("x"),true) + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(2503)
					return_val = _g14;
				}
				else if (  ( _switch_38==HX_CSTRING("width"))){
					HX_STACK_LINE(2504)
					Float _g15 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(2504)
					return_val = _g15;
				}
				else if (  ( _switch_38==HX_CSTRING("height"))){
					HX_STACK_LINE(2505)
					Float _g16 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(2505)
					return_val = _g16;
				}
			}
		}
		else if (  ( _switch_37==HX_CSTRING("h")) ||  ( _switch_37==HX_CSTRING("height"))){
			HX_STACK_LINE(2509)
			if (((prop == HX_CSTRING("")))){
				HX_STACK_LINE(2510)
				if (((index == (int)0))){
					HX_STACK_LINE(2510)
					Float _g17 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(2510)
					Float _g18 = (other->__Field(HX_CSTRING("y"),true) + _g17);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(2510)
					return_val = _g18;
				}
				HX_STACK_LINE(2511)
				if (((index == (int)1))){
					HX_STACK_LINE(2511)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
			}
			else{
				HX_STACK_LINE(2513)
				::String _switch_39 = (prop);
				if (  ( _switch_39==HX_CSTRING("top")) ||  ( _switch_39==HX_CSTRING("up")) ||  ( _switch_39==HX_CSTRING("y"))){
					HX_STACK_LINE(2514)
					return_val = other->__Field(HX_CSTRING("y"),true);
				}
				else if (  ( _switch_39==HX_CSTRING("bottom")) ||  ( _switch_39==HX_CSTRING("down"))){
					HX_STACK_LINE(2515)
					Float _g19 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(2515)
					Float _g20 = (other->__Field(HX_CSTRING("y"),true) + _g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(2515)
					return_val = _g20;
				}
				else if (  ( _switch_39==HX_CSTRING("right"))){
					HX_STACK_LINE(2516)
					Float _g21 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(2516)
					Float _g22 = (other->__Field(HX_CSTRING("x"),true) + _g21);		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(2516)
					return_val = _g22;
				}
				else if (  ( _switch_39==HX_CSTRING("left")) ||  ( _switch_39==HX_CSTRING("x"))){
					HX_STACK_LINE(2517)
					return_val = other->__Field(HX_CSTRING("x"),true);
				}
				else if (  ( _switch_39==HX_CSTRING("center"))){
					HX_STACK_LINE(2518)
					Float _g23 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(2518)
					Float _g24 = (Float(_g23) / Float((int)2));		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(2518)
					Float _g25 = (other->__Field(HX_CSTRING("y"),true) + _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(2518)
					return_val = _g25;
				}
				else if (  ( _switch_39==HX_CSTRING("height"))){
					HX_STACK_LINE(2519)
					Float _g26 = other->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(2519)
					return_val = _g26;
				}
				else if (  ( _switch_39==HX_CSTRING("width"))){
					HX_STACK_LINE(2520)
					Float _g27 = other->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(2520)
					return_val = _g27;
				}
			}
		}
	}
	HX_STACK_LINE(2526)
	if (((bool((return_val != (int)-1)) && bool((_operator != HX_CSTRING("")))))){
		HX_STACK_LINE(2527)
		Float _g28 = this->_doOperation(return_val,_operator,operand);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(2527)
		return_val = _g28;
	}
	HX_STACK_LINE(2530)
	return return_val;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_getStretch,return )

Void FlxUI_obj::_loadPosition( ::haxe::xml::Fast data,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadPosition",0xfb522df5,"flixel.addons.ui.FlxUI._loadPosition","flixel/addons/ui/FlxUI.hx",2533,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(2534)
		Float X;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(2534)
		{
			HX_STACK_LINE(2534)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(2534)
			X = this->_loadWidth(data,default_,HX_CSTRING("x"));
		}
		HX_STACK_LINE(2535)
		Float Y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(2535)
		{
			HX_STACK_LINE(2535)
			Float default_ = (int)0;		HX_STACK_VAR(default_,"default_");
			HX_STACK_LINE(2535)
			Y = this->_loadHeight(data,default_,HX_CSTRING("y"));
		}
		HX_STACK_LINE(2537)
		bool ctrX = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("center_x"),null());		HX_STACK_VAR(ctrX,"ctrX");
		HX_STACK_LINE(2538)
		bool ctrY = ::flixel::addons::ui::U_obj::xml_bool(data->x,HX_CSTRING("center_y"),null());		HX_STACK_VAR(ctrY,"ctrY");
		HX_STACK_LINE(2540)
		::String center_on = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on"),null(),null());		HX_STACK_VAR(center_on,"center_on");
		HX_STACK_LINE(2541)
		::String center_on_x = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on_x"),null(),null());		HX_STACK_VAR(center_on_x,"center_on_x");
		HX_STACK_LINE(2542)
		::String center_on_y = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("center_on_y"),null(),null());		HX_STACK_VAR(center_on_y,"center_on_y");
		HX_STACK_LINE(2544)
		::String anchor_x_str = HX_CSTRING("");		HX_STACK_VAR(anchor_x_str,"anchor_x_str");
		HX_STACK_LINE(2545)
		::String anchor_y_str = HX_CSTRING("");		HX_STACK_VAR(anchor_y_str,"anchor_y_str");
		HX_STACK_LINE(2546)
		Float anchor_x = (int)0;		HX_STACK_VAR(anchor_x,"anchor_x");
		HX_STACK_LINE(2547)
		Float anchor_y = (int)0;		HX_STACK_VAR(anchor_y,"anchor_y");
		HX_STACK_LINE(2548)
		::String anchor_x_flush = HX_CSTRING("");		HX_STACK_VAR(anchor_x_flush,"anchor_x_flush");
		HX_STACK_LINE(2549)
		::String anchor_y_flush = HX_CSTRING("");		HX_STACK_VAR(anchor_y_flush,"anchor_y_flush");
		HX_STACK_LINE(2551)
		if ((data->hasNode->resolve(HX_CSTRING("anchor")))){
			HX_STACK_LINE(2552)
			::String _g = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("x"),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2552)
			anchor_x_str = _g;
			HX_STACK_LINE(2553)
			::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("y"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2553)
			anchor_y_str = _g1;
			HX_STACK_LINE(2555)
			Float _g2 = this->_getAnchorPos(thing,HX_CSTRING("x"),anchor_x_str);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2555)
			anchor_x = _g2;
			HX_STACK_LINE(2556)
			Float _g3 = this->_getAnchorPos(thing,HX_CSTRING("y"),anchor_y_str);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(2556)
			anchor_y = _g3;
			HX_STACK_LINE(2557)
			::String _g4 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("x-flush"),true,null());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(2557)
			anchor_x_flush = _g4;
			HX_STACK_LINE(2558)
			::String _g5 = ::flixel::addons::ui::U_obj::xml_str(data->node->resolve(HX_CSTRING("anchor"))->x,HX_CSTRING("y-flush"),true,null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2558)
			anchor_y_flush = _g5;
		}
		HX_STACK_LINE(2562)
		if (((bool((anchor_x_str != HX_CSTRING(""))) || bool((anchor_y_str != HX_CSTRING("")))))){
			HX_STACK_LINE(2563)
			::String _switch_40 = (anchor_x_flush);
			if (  ( _switch_40==HX_CSTRING("left"))){
			}
			else if (  ( _switch_40==HX_CSTRING("right"))){
				HX_STACK_LINE(2565)
				Float _g6 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(2565)
				Float _g7 = (anchor_x - _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(2565)
				anchor_x = _g7;
			}
			else if (  ( _switch_40==HX_CSTRING("center"))){
				HX_STACK_LINE(2566)
				Float _g8 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(2566)
				Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(2566)
				Float _g10 = (anchor_x - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(2566)
				anchor_x = _g10;
			}
			HX_STACK_LINE(2568)
			::String _switch_41 = (anchor_y_flush);
			if (  ( _switch_41==HX_CSTRING("up")) ||  ( _switch_41==HX_CSTRING("top"))){
			}
			else if (  ( _switch_41==HX_CSTRING("down")) ||  ( _switch_41==HX_CSTRING("bottom"))){
				HX_STACK_LINE(2570)
				Float _g11 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2570)
				Float _g12 = (anchor_y - _g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(2570)
				anchor_y = _g12;
			}
			else if (  ( _switch_41==HX_CSTRING("center"))){
				HX_STACK_LINE(2571)
				Float _g13 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(2571)
				Float _g14 = (Float(_g13) / Float((int)2));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(2571)
				Float _g15 = (anchor_y - _g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(2571)
				anchor_y = _g15;
			}
			HX_STACK_LINE(2574)
			if (((anchor_x_str != HX_CSTRING("")))){
				HX_STACK_LINE(2575)
				thing->__Field(HX_CSTRING("set_x"),true)(anchor_x);
			}
			HX_STACK_LINE(2577)
			if (((anchor_y_str != HX_CSTRING("")))){
				HX_STACK_LINE(2578)
				thing->__Field(HX_CSTRING("set_y"),true)(anchor_y);
			}
		}
		HX_STACK_LINE(2584)
		if (((bool(ctrX) || bool(ctrY)))){
			HX_STACK_LINE(2585)
			if ((ctrX)){
				HX_STACK_LINE(2585)
				Float _g16 = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(2585)
				Float _g17 = (::flixel::FlxG_obj::width - _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(2585)
				Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(2585)
				thing->__Field(HX_CSTRING("set_x"),true)(_g18);
			}
			HX_STACK_LINE(2585)
			if ((ctrY)){
				HX_STACK_LINE(2585)
				Float _g19 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(2585)
				Float _g20 = (::flixel::FlxG_obj::height - _g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(2585)
				Float _g21 = (Float(_g20) / Float((int)2));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(2585)
				thing->__Field(HX_CSTRING("set_y"),true)(_g21);
			}
			HX_STACK_LINE(2585)
			thing;
		}
		HX_STACK_LINE(2589)
		if (((center_on != HX_CSTRING("")))){
			HX_STACK_LINE(2590)
			::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on,null());		HX_STACK_VAR(other,"other");
			HX_STACK_LINE(2591)
			if (((other != null()))){
				HX_STACK_LINE(2592)
				::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
				HX_STACK_LINE(2592)
				fb1 = hx::TCast< flixel::FlxObject >::cast(other);
				HX_STACK_LINE(2592)
				::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
				HX_STACK_LINE(2592)
				fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
				HX_STACK_LINE(2592)
				bool centerX = true;		HX_STACK_VAR(centerX,"centerX");
				HX_STACK_LINE(2592)
				bool centerY = true;		HX_STACK_VAR(centerY,"centerY");
				HX_STACK_LINE(2592)
				if ((centerX)){
					HX_STACK_LINE(2592)
					Float _g22 = fb1->get_width();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(2592)
					Float _g23 = fb2->get_width();		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(2592)
					Float _g24 = (_g22 - _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(2592)
					Float _g25 = (Float(_g24) / Float((int)2));		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(2592)
					Float _g26 = (fb1->x + _g25);		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(2592)
					fb2->set_x(_g26);
				}
				HX_STACK_LINE(2592)
				if ((centerY)){
					HX_STACK_LINE(2592)
					Float _g27 = fb1->get_height();		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(2592)
					Float _g28 = fb2->get_height();		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(2592)
					Float _g29 = (_g27 - _g28);		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(2592)
					Float _g30 = (Float(_g29) / Float((int)2));		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(2592)
					Float _g31 = (fb1->y + _g30);		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(2592)
					fb2->set_y(_g31);
				}
			}
		}
		else{
			HX_STACK_LINE(2595)
			if (((center_on_x != HX_CSTRING("")))){
				HX_STACK_LINE(2596)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on,null());		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(2597)
				if (((other != null()))){
					HX_STACK_LINE(2598)
					::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(2598)
					fb1 = hx::TCast< flixel::FlxObject >::cast(other);
					HX_STACK_LINE(2598)
					::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(2598)
					fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(2598)
					{
						HX_STACK_LINE(2598)
						Float _g32 = fb1->get_width();		HX_STACK_VAR(_g32,"_g32");
						HX_STACK_LINE(2598)
						Float _g33 = fb2->get_width();		HX_STACK_VAR(_g33,"_g33");
						HX_STACK_LINE(2598)
						Float _g34 = (_g32 - _g33);		HX_STACK_VAR(_g34,"_g34");
						HX_STACK_LINE(2598)
						Float _g35 = (Float(_g34) / Float((int)2));		HX_STACK_VAR(_g35,"_g35");
						HX_STACK_LINE(2598)
						Float _g36 = (fb1->x + _g35);		HX_STACK_VAR(_g36,"_g36");
						HX_STACK_LINE(2598)
						fb2->set_x(_g36);
					}
					HX_STACK_LINE(2598)
					{
					}
				}
			}
			HX_STACK_LINE(2601)
			if (((center_on_y != HX_CSTRING("")))){
				HX_STACK_LINE(2602)
				::flixel::addons::ui::interfaces::IFlxUIWidget other = this->getAsset(center_on,null());		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(2603)
				if (((other != null()))){
					HX_STACK_LINE(2604)
					::flixel::FlxObject fb1;		HX_STACK_VAR(fb1,"fb1");
					HX_STACK_LINE(2604)
					fb1 = hx::TCast< flixel::FlxObject >::cast(other);
					HX_STACK_LINE(2604)
					::flixel::FlxObject fb2;		HX_STACK_VAR(fb2,"fb2");
					HX_STACK_LINE(2604)
					fb2 = hx::TCast< flixel::FlxObject >::cast(thing);
					HX_STACK_LINE(2604)
					{
						HX_STACK_LINE(2604)
						Float _g47 = fb1->get_height();		HX_STACK_VAR(_g47,"_g47");
						HX_STACK_LINE(2604)
						Float _g48 = fb2->get_height();		HX_STACK_VAR(_g48,"_g48");
						HX_STACK_LINE(2604)
						Float _g49 = (_g47 - _g48);		HX_STACK_VAR(_g49,"_g49");
						HX_STACK_LINE(2604)
						Float _g50 = (Float(_g49) / Float((int)2));		HX_STACK_VAR(_g50,"_g50");
						HX_STACK_LINE(2604)
						Float _g51 = (fb1->y + _g50);		HX_STACK_VAR(_g51,"_g51");
						HX_STACK_LINE(2604)
						fb2->set_y(_g51);
					}
				}
			}
		}
		HX_STACK_LINE(2610)
		{
			HX_STACK_LINE(2610)
			{
				HX_STACK_LINE(2610)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2610)
				_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + X));
			}
			HX_STACK_LINE(2610)
			{
				HX_STACK_LINE(2610)
				::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2610)
				_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + Y));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadPosition,(void))

::flixel::addons::ui::BorderDef FlxUI_obj::_loadBorder( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBorder",0xa79baf38,"flixel.addons.ui.FlxUI._loadBorder","flixel/addons/ui/FlxUI.hx",2614,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2615)
	::String border_str = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("border"),null(),null());		HX_STACK_VAR(border_str,"border_str");
	HX_STACK_LINE(2616)
	int border_style = (int)0;		HX_STACK_VAR(border_style,"border_style");
	HX_STACK_LINE(2617)
	int border_color = this->_loadColor(data,HX_CSTRING("border_color"),(int)0);		HX_STACK_VAR(border_color,"border_color");
	HX_STACK_LINE(2618)
	int border_size = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("border_size"),(int)1);		HX_STACK_VAR(border_size,"border_size");
	HX_STACK_LINE(2619)
	Float border_quality = ::flixel::addons::ui::U_obj::xml_f(data->x,HX_CSTRING("border_quality"),(int)0);		HX_STACK_VAR(border_quality,"border_quality");
	HX_STACK_LINE(2621)
	::flixel::addons::ui::BorderDef borderDef = ::flixel::addons::ui::BorderDef_obj::__new(border_style,border_color,border_size,border_quality);		HX_STACK_VAR(borderDef,"borderDef");
	HX_STACK_LINE(2623)
	::String _switch_42 = (border_str);
	if (  ( _switch_42==HX_CSTRING("shadow"))){
		HX_STACK_LINE(2624)
		borderDef->style = (int)1;
	}
	else if (  ( _switch_42==HX_CSTRING("outline"))){
		HX_STACK_LINE(2625)
		borderDef->style = (int)2;
	}
	else if (  ( _switch_42==HX_CSTRING("outline_fast"))){
		HX_STACK_LINE(2626)
		borderDef->style = (int)3;
	}
	else if (  ( _switch_42==HX_CSTRING(""))){
		HX_STACK_LINE(2630)
		::String _g = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("shadow"),true,HX_CSTRING(""));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2630)
		border_str = _g;
		HX_STACK_LINE(2631)
		if (((border_str != HX_CSTRING("")))){
			HX_STACK_LINE(2632)
			borderDef->style = (int)1;
			HX_STACK_LINE(2633)
			int _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(2633)
			{
				HX_STACK_LINE(2633)
				::String str = border_str;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2633)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2633)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2633)
				int _g1 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2633)
				if (((_g1 != (int)0))){
					HX_STACK_LINE(2633)
					return_val = default_color;
				}
				HX_STACK_LINE(2633)
				if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
					HX_STACK_LINE(2633)
					return_val = default_color;
				}
				HX_STACK_LINE(2633)
				if (((return_val == (int)-1))){
					HX_STACK_LINE(2633)
					::String _g2 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2633)
					str = _g2;
					HX_STACK_LINE(2633)
					int _g4;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2633)
					{
						HX_STACK_LINE(2633)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2633)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2633)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2633)
						int i = (length - (int)1);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2633)
						while((true)){
							HX_STACK_LINE(2633)
							if ((!(((i >= (int)0))))){
								HX_STACK_LINE(2633)
								break;
							}
							HX_STACK_LINE(2633)
							::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2633)
							int char_int;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2633)
							{
								HX_STACK_LINE(2633)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2633)
								::String _switch_43 = (char_hex);
								if (  ( _switch_43==HX_CSTRING("0")) ||  ( _switch_43==HX_CSTRING("1")) ||  ( _switch_43==HX_CSTRING("2")) ||  ( _switch_43==HX_CSTRING("3")) ||  ( _switch_43==HX_CSTRING("4")) ||  ( _switch_43==HX_CSTRING("5")) ||  ( _switch_43==HX_CSTRING("6")) ||  ( _switch_43==HX_CSTRING("7")) ||  ( _switch_43==HX_CSTRING("8")) ||  ( _switch_43==HX_CSTRING("9")) ||  ( _switch_43==HX_CSTRING("10"))){
									HX_STACK_LINE(2633)
									Dynamic _g3 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g3,"_g3");
									HX_STACK_LINE(2633)
									val = _g3;
								}
								else if (  ( _switch_43==HX_CSTRING("A")) ||  ( _switch_43==HX_CSTRING("a"))){
									HX_STACK_LINE(2633)
									val = (int)10;
								}
								else if (  ( _switch_43==HX_CSTRING("B")) ||  ( _switch_43==HX_CSTRING("b"))){
									HX_STACK_LINE(2633)
									val = (int)11;
								}
								else if (  ( _switch_43==HX_CSTRING("C")) ||  ( _switch_43==HX_CSTRING("c"))){
									HX_STACK_LINE(2633)
									val = (int)12;
								}
								else if (  ( _switch_43==HX_CSTRING("D")) ||  ( _switch_43==HX_CSTRING("d"))){
									HX_STACK_LINE(2633)
									val = (int)13;
								}
								else if (  ( _switch_43==HX_CSTRING("E")) ||  ( _switch_43==HX_CSTRING("e"))){
									HX_STACK_LINE(2633)
									val = (int)14;
								}
								else if (  ( _switch_43==HX_CSTRING("F")) ||  ( _switch_43==HX_CSTRING("f"))){
									HX_STACK_LINE(2633)
									val = (int)15;
								}
								HX_STACK_LINE(2633)
								if (((val == (int)-1))){
									HX_STACK_LINE(2633)
									HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
								}
								HX_STACK_LINE(2633)
								char_int = val;
							}
							HX_STACK_LINE(2633)
							hx::AddEq(sum,(char_int * place_mult));
							HX_STACK_LINE(2633)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2633)
							(i)--;
						}
						HX_STACK_LINE(2633)
						_g4 = sum;
					}
					HX_STACK_LINE(2633)
					return_val = _g4;
				}
				HX_STACK_LINE(2633)
				_g5 = return_val;
			}
			HX_STACK_LINE(2633)
			borderDef->color = _g5;
		}
		else{
			HX_STACK_LINE(2635)
			::String _g6 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("outline"),true,HX_CSTRING(""));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2635)
			border_str = _g6;
			HX_STACK_LINE(2636)
			if (((border_str != HX_CSTRING("")))){
				HX_STACK_LINE(2637)
				borderDef->style = (int)2;
				HX_STACK_LINE(2638)
				int _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(2638)
				{
					HX_STACK_LINE(2638)
					::String str = border_str;		HX_STACK_VAR(str,"str");
					HX_STACK_LINE(2638)
					int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
					HX_STACK_LINE(2638)
					int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
					HX_STACK_LINE(2638)
					int _g7 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2638)
					if (((_g7 != (int)0))){
						HX_STACK_LINE(2638)
						return_val = default_color;
					}
					HX_STACK_LINE(2638)
					if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
						HX_STACK_LINE(2638)
						return_val = default_color;
					}
					HX_STACK_LINE(2638)
					if (((return_val == (int)-1))){
						HX_STACK_LINE(2638)
						::String _g8 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(2638)
						str = _g8;
						HX_STACK_LINE(2638)
						int _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(2638)
						{
							HX_STACK_LINE(2638)
							int length = str.length;		HX_STACK_VAR(length,"length");
							HX_STACK_LINE(2638)
							int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
							HX_STACK_LINE(2638)
							int sum = (int)0;		HX_STACK_VAR(sum,"sum");
							HX_STACK_LINE(2638)
							int i = (length - (int)1);		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(2638)
							while((true)){
								HX_STACK_LINE(2638)
								if ((!(((i >= (int)0))))){
									HX_STACK_LINE(2638)
									break;
								}
								HX_STACK_LINE(2638)
								::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
								HX_STACK_LINE(2638)
								int char_int;		HX_STACK_VAR(char_int,"char_int");
								HX_STACK_LINE(2638)
								{
									HX_STACK_LINE(2638)
									int val = (int)-1;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(2638)
									::String _switch_44 = (char_hex);
									if (  ( _switch_44==HX_CSTRING("0")) ||  ( _switch_44==HX_CSTRING("1")) ||  ( _switch_44==HX_CSTRING("2")) ||  ( _switch_44==HX_CSTRING("3")) ||  ( _switch_44==HX_CSTRING("4")) ||  ( _switch_44==HX_CSTRING("5")) ||  ( _switch_44==HX_CSTRING("6")) ||  ( _switch_44==HX_CSTRING("7")) ||  ( _switch_44==HX_CSTRING("8")) ||  ( _switch_44==HX_CSTRING("9")) ||  ( _switch_44==HX_CSTRING("10"))){
										HX_STACK_LINE(2638)
										Dynamic _g9 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(2638)
										val = _g9;
									}
									else if (  ( _switch_44==HX_CSTRING("A")) ||  ( _switch_44==HX_CSTRING("a"))){
										HX_STACK_LINE(2638)
										val = (int)10;
									}
									else if (  ( _switch_44==HX_CSTRING("B")) ||  ( _switch_44==HX_CSTRING("b"))){
										HX_STACK_LINE(2638)
										val = (int)11;
									}
									else if (  ( _switch_44==HX_CSTRING("C")) ||  ( _switch_44==HX_CSTRING("c"))){
										HX_STACK_LINE(2638)
										val = (int)12;
									}
									else if (  ( _switch_44==HX_CSTRING("D")) ||  ( _switch_44==HX_CSTRING("d"))){
										HX_STACK_LINE(2638)
										val = (int)13;
									}
									else if (  ( _switch_44==HX_CSTRING("E")) ||  ( _switch_44==HX_CSTRING("e"))){
										HX_STACK_LINE(2638)
										val = (int)14;
									}
									else if (  ( _switch_44==HX_CSTRING("F")) ||  ( _switch_44==HX_CSTRING("f"))){
										HX_STACK_LINE(2638)
										val = (int)15;
									}
									HX_STACK_LINE(2638)
									if (((val == (int)-1))){
										HX_STACK_LINE(2638)
										HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
									}
									HX_STACK_LINE(2638)
									char_int = val;
								}
								HX_STACK_LINE(2638)
								hx::AddEq(sum,(char_int * place_mult));
								HX_STACK_LINE(2638)
								hx::MultEq(place_mult,(int)16);
								HX_STACK_LINE(2638)
								(i)--;
							}
							HX_STACK_LINE(2638)
							_g10 = sum;
						}
						HX_STACK_LINE(2638)
						return_val = _g10;
					}
					HX_STACK_LINE(2638)
					_g11 = return_val;
				}
				HX_STACK_LINE(2638)
				borderDef->color = _g11;
			}
			else{
				HX_STACK_LINE(2640)
				::String _g12 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("outline_fast"),null(),null());		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(2640)
				border_str = _g12;
				HX_STACK_LINE(2641)
				if (((border_str != HX_CSTRING("")))){
					HX_STACK_LINE(2642)
					borderDef->style = (int)3;
					HX_STACK_LINE(2643)
					int _g17;		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(2643)
					{
						HX_STACK_LINE(2643)
						::String str = border_str;		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(2643)
						int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
						HX_STACK_LINE(2643)
						int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
						HX_STACK_LINE(2643)
						int _g13 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(2643)
						if (((_g13 != (int)0))){
							HX_STACK_LINE(2643)
							return_val = default_color;
						}
						HX_STACK_LINE(2643)
						if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
							HX_STACK_LINE(2643)
							return_val = default_color;
						}
						HX_STACK_LINE(2643)
						if (((return_val == (int)-1))){
							HX_STACK_LINE(2643)
							::String _g14 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(2643)
							str = _g14;
							HX_STACK_LINE(2643)
							int _g16;		HX_STACK_VAR(_g16,"_g16");
							HX_STACK_LINE(2643)
							{
								HX_STACK_LINE(2643)
								int length = str.length;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2643)
								int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
								HX_STACK_LINE(2643)
								int sum = (int)0;		HX_STACK_VAR(sum,"sum");
								HX_STACK_LINE(2643)
								int i = (length - (int)1);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2643)
								while((true)){
									HX_STACK_LINE(2643)
									if ((!(((i >= (int)0))))){
										HX_STACK_LINE(2643)
										break;
									}
									HX_STACK_LINE(2643)
									::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
									HX_STACK_LINE(2643)
									int char_int;		HX_STACK_VAR(char_int,"char_int");
									HX_STACK_LINE(2643)
									{
										HX_STACK_LINE(2643)
										int val = (int)-1;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(2643)
										::String _switch_45 = (char_hex);
										if (  ( _switch_45==HX_CSTRING("0")) ||  ( _switch_45==HX_CSTRING("1")) ||  ( _switch_45==HX_CSTRING("2")) ||  ( _switch_45==HX_CSTRING("3")) ||  ( _switch_45==HX_CSTRING("4")) ||  ( _switch_45==HX_CSTRING("5")) ||  ( _switch_45==HX_CSTRING("6")) ||  ( _switch_45==HX_CSTRING("7")) ||  ( _switch_45==HX_CSTRING("8")) ||  ( _switch_45==HX_CSTRING("9")) ||  ( _switch_45==HX_CSTRING("10"))){
											HX_STACK_LINE(2643)
											Dynamic _g15 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g15,"_g15");
											HX_STACK_LINE(2643)
											val = _g15;
										}
										else if (  ( _switch_45==HX_CSTRING("A")) ||  ( _switch_45==HX_CSTRING("a"))){
											HX_STACK_LINE(2643)
											val = (int)10;
										}
										else if (  ( _switch_45==HX_CSTRING("B")) ||  ( _switch_45==HX_CSTRING("b"))){
											HX_STACK_LINE(2643)
											val = (int)11;
										}
										else if (  ( _switch_45==HX_CSTRING("C")) ||  ( _switch_45==HX_CSTRING("c"))){
											HX_STACK_LINE(2643)
											val = (int)12;
										}
										else if (  ( _switch_45==HX_CSTRING("D")) ||  ( _switch_45==HX_CSTRING("d"))){
											HX_STACK_LINE(2643)
											val = (int)13;
										}
										else if (  ( _switch_45==HX_CSTRING("E")) ||  ( _switch_45==HX_CSTRING("e"))){
											HX_STACK_LINE(2643)
											val = (int)14;
										}
										else if (  ( _switch_45==HX_CSTRING("F")) ||  ( _switch_45==HX_CSTRING("f"))){
											HX_STACK_LINE(2643)
											val = (int)15;
										}
										HX_STACK_LINE(2643)
										if (((val == (int)-1))){
											HX_STACK_LINE(2643)
											HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
										}
										HX_STACK_LINE(2643)
										char_int = val;
									}
									HX_STACK_LINE(2643)
									hx::AddEq(sum,(char_int * place_mult));
									HX_STACK_LINE(2643)
									hx::MultEq(place_mult,(int)16);
									HX_STACK_LINE(2643)
									(i)--;
								}
								HX_STACK_LINE(2643)
								_g16 = sum;
							}
							HX_STACK_LINE(2643)
							return_val = _g16;
						}
						HX_STACK_LINE(2643)
						_g17 = return_val;
					}
					HX_STACK_LINE(2643)
					borderDef->color = _g17;
				}
			}
		}
	}
	HX_STACK_LINE(2649)
	return borderDef;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadBorder,return )

int FlxUI_obj::_loadColor( ::haxe::xml::Fast data,::String __o_colorName,hx::Null< int >  __o__default){
::String colorName = __o_colorName.Default(HX_CSTRING("color"));
int _default = __o__default.Default(-1);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadColor",0xb7b8dc97,"flixel.addons.ui.FlxUI._loadColor","flixel/addons/ui/FlxUI.hx",2652,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(colorName,"colorName")
	HX_STACK_ARG(_default,"_default")
{
		HX_STACK_LINE(2653)
		::String colorStr = ::flixel::addons::ui::U_obj::xml_str(data->x,colorName,null(),null());		HX_STACK_VAR(colorStr,"colorStr");
		struct _Function_1_1{
			inline static bool Block( ::String &colorName,::haxe::xml::Fast &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUI.hx",2654,0xf354486a)
				{
					HX_STACK_LINE(2654)
					::String _g = data->x->get_nodeName();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(2654)
					return (_g == colorName);
				}
				return null();
			}
		};
		HX_STACK_LINE(2654)
		if (((  (((colorStr == HX_CSTRING("")))) ? bool(_Function_1_1::Block(colorName,data)) : bool(false) ))){
			HX_STACK_LINE(2655)
			::String _g1 = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("value"),null(),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2655)
			colorStr = _g1;
		}
		HX_STACK_LINE(2657)
		int color = _default;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(2658)
		if (((colorStr != HX_CSTRING("")))){
			HX_STACK_LINE(2658)
			int _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(2658)
			{
				HX_STACK_LINE(2658)
				::String str = colorStr;		HX_STACK_VAR(str,"str");
				HX_STACK_LINE(2658)
				bool safe = false;		HX_STACK_VAR(safe,"safe");
				HX_STACK_LINE(2658)
				int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
				HX_STACK_LINE(2658)
				int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
				HX_STACK_LINE(2658)
				int _g2 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(2658)
				if (((_g2 != (int)0))){
					HX_STACK_LINE(2658)
					if ((!(safe))){
						HX_STACK_LINE(2658)
						HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
					}
					else{
						HX_STACK_LINE(2658)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2658)
				if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
					HX_STACK_LINE(2658)
					if ((!(safe))){
						HX_STACK_LINE(2658)
						HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
					}
					else{
						HX_STACK_LINE(2658)
						return_val = default_color;
					}
				}
				HX_STACK_LINE(2658)
				if (((return_val == (int)-1))){
					HX_STACK_LINE(2658)
					::String _g3 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(2658)
					str = _g3;
					HX_STACK_LINE(2658)
					if (((str.length == (int)6))){
						HX_STACK_LINE(2658)
						str = (HX_CSTRING("FF") + str);
					}
					HX_STACK_LINE(2658)
					int _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2658)
					{
						HX_STACK_LINE(2658)
						int length = str.length;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(2658)
						int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
						HX_STACK_LINE(2658)
						int sum = (int)0;		HX_STACK_VAR(sum,"sum");
						HX_STACK_LINE(2658)
						int i = (length - (int)1);		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(2658)
						while((true)){
							HX_STACK_LINE(2658)
							if ((!(((i >= (int)0))))){
								HX_STACK_LINE(2658)
								break;
							}
							HX_STACK_LINE(2658)
							::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
							HX_STACK_LINE(2658)
							int char_int;		HX_STACK_VAR(char_int,"char_int");
							HX_STACK_LINE(2658)
							{
								HX_STACK_LINE(2658)
								int val = (int)-1;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(2658)
								::String _switch_46 = (char_hex);
								if (  ( _switch_46==HX_CSTRING("0")) ||  ( _switch_46==HX_CSTRING("1")) ||  ( _switch_46==HX_CSTRING("2")) ||  ( _switch_46==HX_CSTRING("3")) ||  ( _switch_46==HX_CSTRING("4")) ||  ( _switch_46==HX_CSTRING("5")) ||  ( _switch_46==HX_CSTRING("6")) ||  ( _switch_46==HX_CSTRING("7")) ||  ( _switch_46==HX_CSTRING("8")) ||  ( _switch_46==HX_CSTRING("9")) ||  ( _switch_46==HX_CSTRING("10"))){
									HX_STACK_LINE(2658)
									Dynamic _g4 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g4,"_g4");
									HX_STACK_LINE(2658)
									val = _g4;
								}
								else if (  ( _switch_46==HX_CSTRING("A")) ||  ( _switch_46==HX_CSTRING("a"))){
									HX_STACK_LINE(2658)
									val = (int)10;
								}
								else if (  ( _switch_46==HX_CSTRING("B")) ||  ( _switch_46==HX_CSTRING("b"))){
									HX_STACK_LINE(2658)
									val = (int)11;
								}
								else if (  ( _switch_46==HX_CSTRING("C")) ||  ( _switch_46==HX_CSTRING("c"))){
									HX_STACK_LINE(2658)
									val = (int)12;
								}
								else if (  ( _switch_46==HX_CSTRING("D")) ||  ( _switch_46==HX_CSTRING("d"))){
									HX_STACK_LINE(2658)
									val = (int)13;
								}
								else if (  ( _switch_46==HX_CSTRING("E")) ||  ( _switch_46==HX_CSTRING("e"))){
									HX_STACK_LINE(2658)
									val = (int)14;
								}
								else if (  ( _switch_46==HX_CSTRING("F")) ||  ( _switch_46==HX_CSTRING("f"))){
									HX_STACK_LINE(2658)
									val = (int)15;
								}
								HX_STACK_LINE(2658)
								if (((val == (int)-1))){
									HX_STACK_LINE(2658)
									HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
								}
								HX_STACK_LINE(2658)
								char_int = val;
							}
							HX_STACK_LINE(2658)
							hx::AddEq(sum,(char_int * place_mult));
							HX_STACK_LINE(2658)
							hx::MultEq(place_mult,(int)16);
							HX_STACK_LINE(2658)
							(i)--;
						}
						HX_STACK_LINE(2658)
						_g5 = sum;
					}
					HX_STACK_LINE(2658)
					return_val = _g5;
				}
				HX_STACK_LINE(2658)
				_g6 = return_val;
			}
			HX_STACK_LINE(2658)
			color = _g6;
		}
		HX_STACK_LINE(2659)
		return color;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_loadColor,return )

::flixel::addons::ui::FontDef FlxUI_obj::_loadFontDef( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontDef",0x63d37f6a,"flixel.addons.ui.FlxUI._loadFontDef","flixel/addons/ui/FlxUI.hx",2662,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2663)
	::String fontFace = this->_loadFontFace(data);		HX_STACK_VAR(fontFace,"fontFace");
	HX_STACK_LINE(2664)
	::String fontStyle = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("style"),null(),null());		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(2665)
	int fontSize = ::flixel::addons::ui::U_obj::xml_i(data->x,HX_CSTRING("size"),(int)8);		HX_STACK_VAR(fontSize,"fontSize");
	HX_STACK_LINE(2666)
	return ::flixel::addons::ui::FontDef_obj::__new(fontFace,fontSize,fontStyle);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontDef,return )

::String FlxUI_obj::_loadFontFace( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadFontFace",0xf68b5f58,"flixel.addons.ui.FlxUI._loadFontFace","flixel/addons/ui/FlxUI.hx",2669,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2670)
	::String fontFace = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("font"),null(),null());		HX_STACK_VAR(fontFace,"fontFace");
	HX_STACK_LINE(2671)
	::String fontStyle = ::flixel::addons::ui::U_obj::xml_str(data->x,HX_CSTRING("style"),null(),null());		HX_STACK_VAR(fontStyle,"fontStyle");
	HX_STACK_LINE(2672)
	::String the_font = null();		HX_STACK_VAR(the_font,"the_font");
	HX_STACK_LINE(2673)
	if (((fontFace != HX_CSTRING("")))){
		HX_STACK_LINE(2673)
		::String _g2;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(2673)
		{
			HX_STACK_LINE(2673)
			::String style = fontStyle;		HX_STACK_VAR(style,"style");
			HX_STACK_LINE(2673)
			::String _g = style.toLowerCase();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2673)
			style = _g;
			HX_STACK_LINE(2673)
			::String suffix = HX_CSTRING("");		HX_STACK_VAR(suffix,"suffix");
			HX_STACK_LINE(2673)
			::String _switch_47 = (style);
			if (  ( _switch_47==HX_CSTRING("normal")) ||  ( _switch_47==HX_CSTRING("regular")) ||  ( _switch_47==HX_CSTRING("none")) ||  ( _switch_47==HX_CSTRING(""))){
				HX_STACK_LINE(2673)
				suffix = HX_CSTRING("");
			}
			else if (  ( _switch_47==HX_CSTRING("bold")) ||  ( _switch_47==HX_CSTRING("b"))){
				HX_STACK_LINE(2673)
				suffix = HX_CSTRING("b");
			}
			else if (  ( _switch_47==HX_CSTRING("italic")) ||  ( _switch_47==HX_CSTRING("i"))){
				HX_STACK_LINE(2673)
				suffix = HX_CSTRING("i");
			}
			else if (  ( _switch_47==HX_CSTRING("bold-italic")) ||  ( _switch_47==HX_CSTRING("bolditalic")) ||  ( _switch_47==HX_CSTRING("italic-bold")) ||  ( _switch_47==HX_CSTRING("italicbold")) ||  ( _switch_47==HX_CSTRING("ibold")) ||  ( _switch_47==HX_CSTRING("boldi")) ||  ( _switch_47==HX_CSTRING("ib")) ||  ( _switch_47==HX_CSTRING("bi")) ||  ( _switch_47==HX_CSTRING("z"))){
				HX_STACK_LINE(2673)
				suffix = HX_CSTRING("z");
			}
			HX_STACK_LINE(2673)
			int _g1 = fontFace.indexOf(HX_CSTRING("assets/fonts/"),null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2673)
			if (((_g1 != (int)0))){
				HX_STACK_LINE(2673)
				_g2 = ((HX_CSTRING("assets/fonts/") + fontFace) + suffix);
			}
			else{
				HX_STACK_LINE(2673)
				_g2 = (fontFace + suffix);
			}
		}
		HX_STACK_LINE(2673)
		::String _g3 = (_g2 + HX_CSTRING(".ttf"));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(2673)
		the_font = _g3;
	}
	HX_STACK_LINE(2675)
	return the_font;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,_loadFontFace,return )

Void FlxUI_obj::_onFinishLoad( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","_onFinishLoad",0x23246f1e,"flixel.addons.ui.FlxUI._onFinishLoad","flixel/addons/ui/FlxUI.hx",2679,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(2679)
		if (((this->_ptr != null()))){
			HX_STACK_LINE(2680)
			this->_ptr->getEvent(HX_CSTRING("finish_load"),hx::ObjectPtr<OBJ_>(this),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,_onFinishLoad,(void))

::String FlxUI_obj::getText( ::String flag,::String __o_context,hx::Null< bool >  __o_safe,::String __o_code){
::String context = __o_context.Default(HX_CSTRING("data"));
bool safe = __o_safe.Default(true);
::String code = __o_code.Default(HX_CSTRING(""));
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getText",0xde0de34a,"flixel.addons.ui.FlxUI.getText","flixel/addons/ui/FlxUI.hx",2695,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(flag,"flag")
	HX_STACK_ARG(context,"context")
	HX_STACK_ARG(safe,"safe")
	HX_STACK_ARG(code,"code")
{
		HX_STACK_LINE(2696)
		::String str = HX_CSTRING("");		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(2697)
		if (((this->_ptr_tongue != null()))){
			HX_STACK_LINE(2698)
			::String _g = this->_ptr_tongue->get(flag,context,safe);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(2698)
			str = _g;
			HX_STACK_LINE(2699)
			return this->formatFromCode(str,code);
		}
		else{
			HX_STACK_LINE(2700)
			if (((this->getTextFallback_dyn() != null()))){
				HX_STACK_LINE(2701)
				::String _g1 = this->getTextFallback(flag,context,safe);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2701)
				str = _g1;
				HX_STACK_LINE(2702)
				return this->formatFromCode(str,code);
			}
		}
		HX_STACK_LINE(2705)
		return flag;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,getText,return )

::String FlxUI_obj::formatFromCode( ::String str,::String code){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatFromCode",0x3be1ae07,"flixel.addons.ui.FlxUI.formatFromCode","flixel/addons/ui/FlxUI.hx",2708,0xf354486a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_ARG(code,"code")
	HX_STACK_LINE(2709)
	::String _switch_48 = (code);
	if (  ( _switch_48==HX_CSTRING("u"))){
		HX_STACK_LINE(2710)
		return str.toUpperCase();
	}
	else if (  ( _switch_48==HX_CSTRING("l"))){
		HX_STACK_LINE(2711)
		return str.toLowerCase();
	}
	else if (  ( _switch_48==HX_CSTRING("fu"))){
		HX_STACK_LINE(2712)
		return ::flixel::addons::ui::U_obj::FU(str);
	}
	else if (  ( _switch_48==HX_CSTRING("fu_"))){
		HX_STACK_LINE(2713)
		return ::flixel::addons::ui::U_obj::FU_(str);
	}
	HX_STACK_LINE(2715)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatFromCode,return )

Void FlxUI_obj::formatButtonText( ::haxe::xml::Fast data,Dynamic button){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","formatButtonText",0xeca59e0f,"flixel.addons.ui.FlxUI.formatButtonText","flixel/addons/ui/FlxUI.hx",2744,0xf354486a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(button,"button")
		HX_STACK_LINE(2744)
		if (((  (((data != null()))) ? bool(data->hasNode->resolve(HX_CSTRING("text"))) : bool(false) ))){
			HX_STACK_LINE(2745)
			::haxe::xml::Fast textNode = data->node->resolve(HX_CSTRING("text"));		HX_STACK_VAR(textNode,"textNode");
			HX_STACK_LINE(2746)
			::String use_def = ::flixel::addons::ui::U_obj::xml_str(textNode->x,HX_CSTRING("use_def"),true,null());		HX_STACK_VAR(use_def,"use_def");
			HX_STACK_LINE(2747)
			::haxe::xml::Fast text_def = null();		HX_STACK_VAR(text_def,"text_def");
			HX_STACK_LINE(2749)
			if (((use_def != HX_CSTRING("")))){
				HX_STACK_LINE(2750)
				::haxe::xml::Fast _g = this->getDefinition(use_def,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(2750)
				text_def = _g;
			}
			HX_STACK_LINE(2753)
			::haxe::xml::Fast info = ::flixel::addons::ui::FlxUI_obj::consolidateData(textNode,text_def);		HX_STACK_VAR(info,"info");
			HX_STACK_LINE(2755)
			::String case_id = ::flixel::addons::ui::U_obj::xml_str(info->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(case_id,"case_id");
			HX_STACK_LINE(2756)
			::String the_font = this->_loadFontFace(info);		HX_STACK_VAR(the_font,"the_font");
			HX_STACK_LINE(2757)
			int size = ::flixel::addons::ui::U_obj::xml_i(info->x,HX_CSTRING("size"),null());		HX_STACK_VAR(size,"size");
			HX_STACK_LINE(2757)
			if (((size == (int)0))){
				HX_STACK_LINE(2757)
				size = (int)8;
			}
			HX_STACK_LINE(2758)
			int color = this->_loadColor(info,null(),null());		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(2760)
			Float labelWidth = ::flixel::addons::ui::U_obj::xml_f(info->x,HX_CSTRING("width"),null());		HX_STACK_VAR(labelWidth,"labelWidth");
			HX_STACK_LINE(2762)
			::flixel::addons::ui::BorderDef border = this->_loadBorder(info);		HX_STACK_VAR(border,"border");
			HX_STACK_LINE(2764)
			::String align = ::flixel::addons::ui::U_obj::xml_str(info->x,HX_CSTRING("align"),true,null());		HX_STACK_VAR(align,"align");
			HX_STACK_LINE(2764)
			if (((align == HX_CSTRING("")))){
				HX_STACK_LINE(2764)
				align = null();
			}
			HX_STACK_LINE(2766)
			::flixel::text::FlxText the_label = null();		HX_STACK_VAR(the_label,"the_label");
			HX_STACK_LINE(2767)
			::flixel::addons::ui::FlxUIButton fb = null();		HX_STACK_VAR(fb,"fb");
			HX_STACK_LINE(2768)
			::flixel::addons::ui::FlxUISpriteButton fsb = null();		HX_STACK_VAR(fsb,"fsb");
			HX_STACK_LINE(2769)
			::flixel::addons::ui::FlxUICheckBox cb = null();		HX_STACK_VAR(cb,"cb");
			HX_STACK_LINE(2770)
			::flixel::addons::ui::interfaces::IFlxUIButton ifb = null();		HX_STACK_VAR(ifb,"ifb");
			HX_STACK_LINE(2772)
			bool _g1 = ::Std_obj::is(button,hx::ClassOf< ::flixel::addons::ui::FlxUICheckBox >());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2772)
			if (((_g1 == false))){
				HX_STACK_LINE(2773)
				ifb = button;
				HX_STACK_LINE(2774)
				if (((bool((align == HX_CSTRING(""))) || bool((align == null()))))){
					HX_STACK_LINE(2775)
					align = HX_CSTRING("center");
				}
			}
			else{
				HX_STACK_LINE(2778)
				::flixel::addons::ui::FlxUICheckBox cb1 = button;		HX_STACK_VAR(cb1,"cb1");
				HX_STACK_LINE(2779)
				ifb = cb1->button;
				HX_STACK_LINE(2780)
				align = HX_CSTRING("left");
			}
			HX_STACK_LINE(2783)
			if (((ifb != null()))){
				HX_STACK_LINE(2784)
				if ((::Std_obj::is(ifb,hx::ClassOf< ::flixel::addons::ui::FlxUIButton >()))){
					HX_STACK_LINE(2786)
					fb = ifb;
					HX_STACK_LINE(2787)
					the_label = fb->label;
				}
				else{
					HX_STACK_LINE(2789)
					if ((::Std_obj::is(ifb,hx::ClassOf< ::flixel::addons::ui::FlxUISpriteButton >()))){
						HX_STACK_LINE(2790)
						fsb = ifb;
						HX_STACK_LINE(2791)
						if ((::Std_obj::is(fsb->label,hx::ClassOf< ::flixel::text::FlxText >()))){
							HX_STACK_LINE(2793)
							the_label = fsb->label;
						}
						else{
							HX_STACK_LINE(2795)
							if ((::Std_obj::is(fsb->label,hx::ClassOf< ::flixel::group::FlxSpriteGroup >()))){
								HX_STACK_LINE(2797)
								::flixel::group::FlxSpriteGroup fsg = fsb->label;		HX_STACK_VAR(fsg,"fsg");
								HX_STACK_LINE(2798)
								{
									HX_STACK_LINE(2798)
									int _g = (int)0;		HX_STACK_VAR(_g,"_g");
									HX_STACK_LINE(2798)
									Array< ::Dynamic > _g11 = fsg->group->members;		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(2798)
									while((true)){
										HX_STACK_LINE(2798)
										if ((!(((_g < _g11->length))))){
											HX_STACK_LINE(2798)
											break;
										}
										HX_STACK_LINE(2798)
										::flixel::FlxSprite fs = _g11->__get(_g).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(fs,"fs");
										HX_STACK_LINE(2798)
										++(_g);
										HX_STACK_LINE(2799)
										if ((::Std_obj::is(fs,hx::ClassOf< ::flixel::text::FlxText >()))){
											HX_STACK_LINE(2800)
											the_label = fs;
											HX_STACK_LINE(2801)
											break;
										}
									}
								}
							}
						}
					}
				}
				HX_STACK_LINE(2807)
				ifb->__FieldRef(HX_CSTRING("up_color")) = color;
				HX_STACK_LINE(2808)
				ifb->__FieldRef(HX_CSTRING("down_color")) = (int)0;
				HX_STACK_LINE(2809)
				ifb->__FieldRef(HX_CSTRING("over_color")) = (int)0;
			}
			HX_STACK_LINE(2812)
			if (((the_label != null()))){
				HX_STACK_LINE(2813)
				if (((labelWidth != (int)0))){
					HX_STACK_LINE(2814)
					the_label->set_width(labelWidth);
				}
				HX_STACK_LINE(2817)
				the_label->setFormat(the_font,size,color,align,null(),null(),null());
				HX_STACK_LINE(2819)
				the_label->set_borderStyle(border->style);
				HX_STACK_LINE(2820)
				the_label->set_borderColor(border->color);
				HX_STACK_LINE(2821)
				the_label->set_borderSize(border->size);
				HX_STACK_LINE(2822)
				the_label->set_borderQuality(border->quality);
				HX_STACK_LINE(2824)
				if ((::Std_obj::is(the_label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >()))){
					HX_STACK_LINE(2825)
					::flixel::addons::ui::FlxUIText ftu = the_label;		HX_STACK_VAR(ftu,"ftu");
					HX_STACK_LINE(2826)
					{
						HX_STACK_LINE(2826)
						bool Force = false;		HX_STACK_VAR(Force,"Force");
						HX_STACK_LINE(2826)
						ftu->calcFrame(true);
					}
				}
				HX_STACK_LINE(2829)
				if (((fb != null()))){
					HX_STACK_LINE(2830)
					fb->autoCenterLabel();
				}
				HX_STACK_LINE(2832)
				if (((fsb != null()))){
					HX_STACK_LINE(2833)
					fsb->autoCenterLabel();
				}
			}
			HX_STACK_LINE(2837)
			for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(info->nodes->resolve(HX_CSTRING("color"))->iterator());  __it->hasNext(); ){
				::haxe::xml::Fast textColorNode = __it->next();
				{
					HX_STACK_LINE(2838)
					int color1 = this->_loadColor(textColorNode,null(),null());		HX_STACK_VAR(color1,"color1");
					HX_STACK_LINE(2839)
					bool vis = ::flixel::addons::ui::U_obj::xml_bool(textColorNode->x,HX_CSTRING("visible"),true);		HX_STACK_VAR(vis,"vis");
					HX_STACK_LINE(2840)
					::String state_id = ::flixel::addons::ui::U_obj::xml_str(textColorNode->x,HX_CSTRING("id"),true,null());		HX_STACK_VAR(state_id,"state_id");
					HX_STACK_LINE(2841)
					bool toggle = ::flixel::addons::ui::U_obj::xml_bool(textColorNode->x,HX_CSTRING("toggle"),null());		HX_STACK_VAR(toggle,"toggle");
					HX_STACK_LINE(2842)
					::String _switch_49 = (state_id);
					if (  ( _switch_49==HX_CSTRING("up")) ||  ( _switch_49==HX_CSTRING("inactive")) ||  ( _switch_49==HX_CSTRING("")) ||  ( _switch_49==HX_CSTRING("normal"))){
						HX_STACK_LINE(2844)
						if ((!(toggle))){
							HX_STACK_LINE(2845)
							ifb->__FieldRef(HX_CSTRING("up_color")) = color1;
							HX_STACK_LINE(2846)
							ifb->__FieldRef(HX_CSTRING("up_visible")) = vis;
						}
						else{
							HX_STACK_LINE(2848)
							ifb->__FieldRef(HX_CSTRING("up_toggle_color")) = color1;
							HX_STACK_LINE(2849)
							ifb->__FieldRef(HX_CSTRING("up_toggle_visible")) = vis;
						}
					}
					else if (  ( _switch_49==HX_CSTRING("active")) ||  ( _switch_49==HX_CSTRING("hilight")) ||  ( _switch_49==HX_CSTRING("over")) ||  ( _switch_49==HX_CSTRING("hover"))){
						HX_STACK_LINE(2852)
						if ((!(toggle))){
							HX_STACK_LINE(2853)
							ifb->__FieldRef(HX_CSTRING("over_color")) = color1;
							HX_STACK_LINE(2854)
							ifb->__FieldRef(HX_CSTRING("over_visible")) = vis;
						}
						else{
							HX_STACK_LINE(2856)
							ifb->__FieldRef(HX_CSTRING("over_toggle_color")) = color1;
							HX_STACK_LINE(2857)
							ifb->__FieldRef(HX_CSTRING("over_toggle_visible")) = vis;
						}
					}
					else if (  ( _switch_49==HX_CSTRING("down")) ||  ( _switch_49==HX_CSTRING("pressed")) ||  ( _switch_49==HX_CSTRING("pushed"))){
						HX_STACK_LINE(2860)
						if ((!(toggle))){
							HX_STACK_LINE(2861)
							ifb->__FieldRef(HX_CSTRING("down_color")) = color1;
							HX_STACK_LINE(2862)
							ifb->__FieldRef(HX_CSTRING("down_visible")) = vis;
						}
						else{
							HX_STACK_LINE(2864)
							ifb->__FieldRef(HX_CSTRING("down_toggle_color")) = color1;
							HX_STACK_LINE(2865)
							ifb->__FieldRef(HX_CSTRING("down_toggle_visible")) = vis;
						}
					}
				}
;
			}
			HX_STACK_LINE(2870)
			if (((ifb->__Field(HX_CSTRING("over_color"),true) == (int)0))){
				HX_STACK_LINE(2871)
				ifb->__FieldRef(HX_CSTRING("over_color")) = ifb->__Field(HX_CSTRING("up_color"),true);
			}
			HX_STACK_LINE(2873)
			if (((ifb->__Field(HX_CSTRING("down_color"),true) == (int)0))){
				HX_STACK_LINE(2874)
				ifb->__FieldRef(HX_CSTRING("down_color")) = ifb->__Field(HX_CSTRING("over_color"),true);
			}
			HX_STACK_LINE(2878)
			if (((ifb->__Field(HX_CSTRING("up_toggle_color"),true) == (int)0))){
				HX_STACK_LINE(2879)
				ifb->__FieldRef(HX_CSTRING("up_toggle_color")) = ifb->__Field(HX_CSTRING("up_color"),true);
			}
			HX_STACK_LINE(2881)
			if (((ifb->__Field(HX_CSTRING("over_toggle_color"),true) == (int)0))){
				HX_STACK_LINE(2882)
				ifb->__FieldRef(HX_CSTRING("over_toggle_color")) = ifb->__Field(HX_CSTRING("over_color"),true);
			}
			HX_STACK_LINE(2884)
			if (((ifb->__Field(HX_CSTRING("down_toggle_color"),true) == (int)0))){
				HX_STACK_LINE(2885)
				ifb->__FieldRef(HX_CSTRING("down_toggle_color")) = ifb->__Field(HX_CSTRING("down_color"),true);
			}
			HX_STACK_LINE(2888)
			if (((the_label != null()))){
				HX_STACK_LINE(2889)
				the_label->set_visible(ifb->__Field(HX_CSTRING("up_visible"),true));
				HX_STACK_LINE(2890)
				the_label->set_color(ifb->__Field(HX_CSTRING("up_color"),true));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,formatButtonText,(void))

Void FlxUI_obj::event( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","event",0xe056d741,"flixel.addons.ui.FlxUI.event","flixel/addons/ui/FlxUI.hx",107,0xf354486a)
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(sender,"sender")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(params,"params")
		HX_STACK_LINE(108)
		::flixel::addons::ui::interfaces::IEventGetter currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(110)
		if (((currState != null()))){
			HX_STACK_LINE(111)
			currState->getEvent(name,sender,data,params);
		}
		else{
			HX_STACK_LINE(113)
			Dynamic();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,event,(void))

Void FlxUI_obj::forceFocus( bool b,::flixel::addons::ui::interfaces::IFlxUIWidget thing){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUI","forceFocus",0x91e0ed66,"flixel.addons.ui.FlxUI.forceFocus","flixel/addons/ui/FlxUI.hx",123,0xf354486a)
		HX_STACK_ARG(b,"b")
		HX_STACK_ARG(thing,"thing")
		HX_STACK_LINE(124)
		::flixel::addons::ui::interfaces::IFlxUIState currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
		HX_STACK_LINE(125)
		if (((currState != null()))){
			HX_STACK_LINE(126)
			currState->forceFocus(b,thing);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,forceFocus,(void))

::flixel::addons::ui::interfaces::IFlxUIState FlxUI_obj::getLeafUIState( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getLeafUIState",0xebda1e42,"flixel.addons.ui.FlxUI.getLeafUIState","flixel/addons/ui/FlxUI.hx",135,0xf354486a)
	HX_STACK_LINE(136)
	::flixel::FlxState state = ::flixel::FlxG_obj::game->_state;		HX_STACK_VAR(state,"state");
	HX_STACK_LINE(137)
	if (((state != null()))){
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			if ((!(((state->subState != null()))))){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(141)
			state = state->subState;
		}
	}
	HX_STACK_LINE(144)
	if ((::Std_obj::is(state,hx::ClassOf< ::flixel::addons::ui::interfaces::IFlxUIState >()))){
		HX_STACK_LINE(146)
		return state;
	}
	HX_STACK_LINE(148)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxUI_obj,getLeafUIState,return )

Dynamic FlxUI_obj::request( ::String name,::flixel::addons::ui::interfaces::IFlxUIWidget sender,Dynamic data,Dynamic params){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","request",0x03164636,"flixel.addons.ui.FlxUI.request","flixel/addons/ui/FlxUI.hx",160,0xf354486a)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(sender,"sender")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(params,"params")
	HX_STACK_LINE(161)
	::flixel::addons::ui::interfaces::IEventGetter currState = ::flixel::addons::ui::FlxUI_obj::getLeafUIState();		HX_STACK_VAR(currState,"currState");
	HX_STACK_LINE(162)
	if (((currState != null()))){
		HX_STACK_LINE(163)
		return currState->getRequest(name,sender,data,params);
	}
	else{
		HX_STACK_LINE(165)
		Dynamic();
	}
	HX_STACK_LINE(167)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxUI_obj,request,return )

Void FlxUI_obj::_delta( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_delta",0xa8496232,"flixel.addons.ui.FlxUI._delta","flixel/addons/ui/FlxUI.hx",705,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(706)
			_g->__Field(HX_CSTRING("set_x"),true)((_g->__Field(HX_CSTRING("x"),true) + X));
		}
		HX_STACK_LINE(707)
		{
			HX_STACK_LINE(707)
			::flixel::addons::ui::interfaces::IFlxUIWidget _g = thing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(707)
			_g->__Field(HX_CSTRING("set_y"),true)((_g->__Field(HX_CSTRING("y"),true) + Y));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_delta,(void))

::flixel::addons::ui::interfaces::IFlxUIWidget FlxUI_obj::_center( ::flixel::addons::ui::interfaces::IFlxUIWidget thing,hx::Null< bool >  __o_X,hx::Null< bool >  __o_Y){
bool X = __o_X.Default(true);
bool Y = __o_Y.Default(true);
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_center",0x32e39e5b,"flixel.addons.ui.FlxUI._center","flixel/addons/ui/FlxUI.hx",716,0xf354486a)
	HX_STACK_ARG(thing,"thing")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(717)
		if ((X)){
			HX_STACK_LINE(717)
			Float _g = thing->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(717)
			Float _g1 = (::flixel::FlxG_obj::width - _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(717)
			Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(717)
			thing->__Field(HX_CSTRING("set_x"),true)(_g2);
		}
		HX_STACK_LINE(718)
		if ((Y)){
			HX_STACK_LINE(718)
			Float _g3 = thing->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(718)
			Float _g4 = (::flixel::FlxG_obj::height - _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(718)
			Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(718)
			thing->__Field(HX_CSTRING("set_y"),true)(_g5);
		}
		HX_STACK_LINE(719)
		return thing;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxUI_obj,_center,return )

::haxe::xml::Fast FlxUI_obj::consolidateData( ::haxe::xml::Fast data,::haxe::xml::Fast definition){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","consolidateData",0x9bb7ebba,"flixel.addons.ui.FlxUI.consolidateData","flixel/addons/ui/FlxUI.hx",1342,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(definition,"definition")
	HX_STACK_LINE(1343)
	if (((bool((data == null())) && bool((definition != null()))))){
		HX_STACK_LINE(1344)
		return definition;
	}
	HX_STACK_LINE(1346)
	if (((definition == null()))){
		HX_STACK_LINE(1347)
		return data;
	}
	else{
		HX_STACK_LINE(1352)
		::String _g = definition->x->toString();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1352)
		::Xml new_data = ::Xml_obj::parse(_g)->firstElement();		HX_STACK_VAR(new_data,"new_data");
		HX_STACK_LINE(1354)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(data->x->attributes());  __it->hasNext(); ){
			::String att = __it->next();
			{
				HX_STACK_LINE(1355)
				::String val = data->att->resolve(att);		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(1356)
				new_data->set(att,val);
			}
;
		}
		HX_STACK_LINE(1360)
		::String _g1 = data->get_name();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1360)
		new_data->set_nodeName(_g1);
		HX_STACK_LINE(1361)
		if ((data->has->resolve(HX_CSTRING("id")))){
			HX_STACK_LINE(1362)
			::String _g2 = data->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1362)
			new_data->set(HX_CSTRING("id"),_g2);
		}
		else{
			HX_STACK_LINE(1364)
			new_data->set(HX_CSTRING("id"),HX_CSTRING(""));
		}
		HX_STACK_LINE(1369)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(data->x->elements());  __it->hasNext(); ){
			::Xml element = __it->next();
			{
				HX_STACK_LINE(1370)
				::String nodeName = element->get_nodeName();		HX_STACK_VAR(nodeName,"nodeName");
				HX_STACK_LINE(1371)
				::String _g3 = element->toString();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1371)
				::Xml _g4 = ::Xml_obj::parse(_g3)->firstElement();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1371)
				new_data->insertChild(_g4,(int)0);
			}
;
		}
		HX_STACK_LINE(1374)
		return ::haxe::xml::Fast_obj::__new(new_data);
	}
	HX_STACK_LINE(1376)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,consolidateData,return )

::openfl::_v2::display::BitmapData FlxUI_obj::_loadBitmapRect( ::String source,::String rect_str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","_loadBitmapRect",0xdc5324ff,"flixel.addons.ui.FlxUI._loadBitmapRect","flixel/addons/ui/FlxUI.hx",2085,0xf354486a)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(rect_str,"rect_str")
	HX_STACK_LINE(2086)
	::String _g = ::flixel::addons::ui::U_obj::gfx(source,null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(2086)
	::openfl::_v2::display::BitmapData b1 = ::openfl::_v2::Assets_obj::getBitmapData(_g,null());		HX_STACK_VAR(b1,"b1");
	HX_STACK_LINE(2087)
	::openfl::_v2::geom::Rectangle r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(2087)
	{
		HX_STACK_LINE(2087)
		Array< ::String > coords = rect_str.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
		HX_STACK_LINE(2087)
		::openfl::_v2::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(2087)
		if (((bool((coords != null())) && bool((coords->length == (int)4))))){
			HX_STACK_LINE(2087)
			int x_ = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(x_,"x_");
			HX_STACK_LINE(2087)
			int y_ = ::Std_obj::parseInt(coords->__get((int)1));		HX_STACK_VAR(y_,"y_");
			HX_STACK_LINE(2087)
			int w_ = ::Std_obj::parseInt(coords->__get((int)2));		HX_STACK_VAR(w_,"w_");
			HX_STACK_LINE(2087)
			int h_ = ::Std_obj::parseInt(coords->__get((int)3));		HX_STACK_VAR(h_,"h_");
			HX_STACK_LINE(2087)
			::openfl::_v2::geom::Rectangle _g1 = ::openfl::_v2::geom::Rectangle_obj::__new(x_,y_,w_,h_);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2087)
			rect = _g1;
		}
		HX_STACK_LINE(2087)
		r = rect;
	}
	HX_STACK_LINE(2088)
	int _g2 = ::Std_obj::_int(r->width);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(2088)
	int _g3 = ::Std_obj::_int(r->height);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(2088)
	::openfl::_v2::display::BitmapData b2 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)16777215,null());		HX_STACK_VAR(b2,"b2");
	HX_STACK_LINE(2089)
	::openfl::_v2::geom::Point _g4 = ::openfl::_v2::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(2089)
	b2->copyPixels(b1,r,_g4,null(),null(),null());
	HX_STACK_LINE(2090)
	return b2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUI_obj,_loadBitmapRect,return )

Dynamic FlxUI_obj::getParams( ::haxe::xml::Fast data){
	HX_STACK_FRAME("flixel.addons.ui.FlxUI","getParams",0xfcb7b323,"flixel.addons.ui.FlxUI.getParams","flixel/addons/ui/FlxUI.hx",2723,0xf354486a)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(2724)
	Dynamic params = null();		HX_STACK_VAR(params,"params");
	HX_STACK_LINE(2725)
	if ((data->hasNode->resolve(HX_CSTRING("param")))){
		HX_STACK_LINE(2726)
		Dynamic _g = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2726)
		params = _g;
		HX_STACK_LINE(2727)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(data->nodes->resolve(HX_CSTRING("param"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast param = __it->next();
			if (((  ((param->has->resolve(HX_CSTRING("type")))) ? bool(param->has->resolve(HX_CSTRING("value"))) : bool(false) ))){
				HX_STACK_LINE(2729)
				::String type = param->att->resolve(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(2730)
				::String _g1 = type.toLowerCase();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(2730)
				type = _g1;
				HX_STACK_LINE(2731)
				::String _switch_50 = (type);
				if (  ( _switch_50==HX_CSTRING("string"))){
					HX_STACK_LINE(2732)
					::String _g2 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(2732)
					::String _g3 = ::String(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(2732)
					params->__Field(HX_CSTRING("push"),true)(_g3);
				}
				else if (  ( _switch_50==HX_CSTRING("int"))){
					HX_STACK_LINE(2733)
					::String _g4 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(2733)
					Dynamic _g5 = ::Std_obj::parseInt(_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(2733)
					params->__Field(HX_CSTRING("push"),true)(_g5);
				}
				else if (  ( _switch_50==HX_CSTRING("float"))){
					HX_STACK_LINE(2734)
					::String _g6 = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(2734)
					Float _g7 = ::Std_obj::parseFloat(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(2734)
					params->__Field(HX_CSTRING("push"),true)(_g7);
				}
				else if (  ( _switch_50==HX_CSTRING("color")) ||  ( _switch_50==HX_CSTRING("hex"))){
					HX_STACK_LINE(2735)
					int _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(2735)
					{
						HX_STACK_LINE(2735)
						::String str = param->att->resolve(HX_CSTRING("value"));		HX_STACK_VAR(str,"str");
						HX_STACK_LINE(2735)
						bool safe = false;		HX_STACK_VAR(safe,"safe");
						HX_STACK_LINE(2735)
						int default_color = (int)0;		HX_STACK_VAR(default_color,"default_color");
						HX_STACK_LINE(2735)
						int return_val = (int)-1;		HX_STACK_VAR(return_val,"return_val");
						HX_STACK_LINE(2735)
						int _g8 = str.indexOf(HX_CSTRING("0x"),null());		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(2735)
						if (((_g8 != (int)0))){
							HX_STACK_LINE(2735)
							if ((!(safe))){
								HX_STACK_LINE(2735)
								HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") does not start with \"0x\"!")));
							}
							else{
								HX_STACK_LINE(2735)
								return_val = default_color;
							}
						}
						HX_STACK_LINE(2735)
						if (((bool((str.length != (int)8)) && bool((str.length != (int)10))))){
							HX_STACK_LINE(2735)
							if ((!(safe))){
								HX_STACK_LINE(2735)
								HX_STACK_DO_THROW(((HX_CSTRING("U.parseHex() string(") + str) + HX_CSTRING(") must be 8(0xRRGGBB) or 10(0xAARRGGBB) characters long!")));
							}
							else{
								HX_STACK_LINE(2735)
								return_val = default_color;
							}
						}
						HX_STACK_LINE(2735)
						if (((return_val == (int)-1))){
							HX_STACK_LINE(2735)
							::String _g9 = str.substr((int)2,(str.length - (int)2));		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(2735)
							str = _g9;
							HX_STACK_LINE(2735)
							if (((str.length == (int)6))){
								HX_STACK_LINE(2735)
								str = (HX_CSTRING("FF") + str);
							}
							HX_STACK_LINE(2735)
							int _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(2735)
							{
								HX_STACK_LINE(2735)
								int length = str.length;		HX_STACK_VAR(length,"length");
								HX_STACK_LINE(2735)
								int place_mult = (int)1;		HX_STACK_VAR(place_mult,"place_mult");
								HX_STACK_LINE(2735)
								int sum = (int)0;		HX_STACK_VAR(sum,"sum");
								HX_STACK_LINE(2735)
								int i = (length - (int)1);		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(2735)
								while((true)){
									HX_STACK_LINE(2735)
									if ((!(((i >= (int)0))))){
										HX_STACK_LINE(2735)
										break;
									}
									HX_STACK_LINE(2735)
									::String char_hex = str.substr(i,(int)1);		HX_STACK_VAR(char_hex,"char_hex");
									HX_STACK_LINE(2735)
									int char_int;		HX_STACK_VAR(char_int,"char_int");
									HX_STACK_LINE(2735)
									{
										HX_STACK_LINE(2735)
										int val = (int)-1;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(2735)
										::String _switch_51 = (char_hex);
										if (  ( _switch_51==HX_CSTRING("0")) ||  ( _switch_51==HX_CSTRING("1")) ||  ( _switch_51==HX_CSTRING("2")) ||  ( _switch_51==HX_CSTRING("3")) ||  ( _switch_51==HX_CSTRING("4")) ||  ( _switch_51==HX_CSTRING("5")) ||  ( _switch_51==HX_CSTRING("6")) ||  ( _switch_51==HX_CSTRING("7")) ||  ( _switch_51==HX_CSTRING("8")) ||  ( _switch_51==HX_CSTRING("9")) ||  ( _switch_51==HX_CSTRING("10"))){
											HX_STACK_LINE(2735)
											Dynamic _g10 = ::Std_obj::parseInt(char_hex);		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(2735)
											val = _g10;
										}
										else if (  ( _switch_51==HX_CSTRING("A")) ||  ( _switch_51==HX_CSTRING("a"))){
											HX_STACK_LINE(2735)
											val = (int)10;
										}
										else if (  ( _switch_51==HX_CSTRING("B")) ||  ( _switch_51==HX_CSTRING("b"))){
											HX_STACK_LINE(2735)
											val = (int)11;
										}
										else if (  ( _switch_51==HX_CSTRING("C")) ||  ( _switch_51==HX_CSTRING("c"))){
											HX_STACK_LINE(2735)
											val = (int)12;
										}
										else if (  ( _switch_51==HX_CSTRING("D")) ||  ( _switch_51==HX_CSTRING("d"))){
											HX_STACK_LINE(2735)
											val = (int)13;
										}
										else if (  ( _switch_51==HX_CSTRING("E")) ||  ( _switch_51==HX_CSTRING("e"))){
											HX_STACK_LINE(2735)
											val = (int)14;
										}
										else if (  ( _switch_51==HX_CSTRING("F")) ||  ( _switch_51==HX_CSTRING("f"))){
											HX_STACK_LINE(2735)
											val = (int)15;
										}
										HX_STACK_LINE(2735)
										if (((val == (int)-1))){
											HX_STACK_LINE(2735)
											HX_STACK_DO_THROW(((HX_CSTRING("U.hexChar2dec() illegal char(") + char_hex) + HX_CSTRING(")")));
										}
										HX_STACK_LINE(2735)
										char_int = val;
									}
									HX_STACK_LINE(2735)
									hx::AddEq(sum,(char_int * place_mult));
									HX_STACK_LINE(2735)
									hx::MultEq(place_mult,(int)16);
									HX_STACK_LINE(2735)
									(i)--;
								}
								HX_STACK_LINE(2735)
								_g11 = sum;
							}
							HX_STACK_LINE(2735)
							return_val = _g11;
						}
						HX_STACK_LINE(2735)
						_g12 = return_val;
					}
					HX_STACK_LINE(2735)
					params->__Field(HX_CSTRING("push"),true)(_g12);
				}
			}
;
		}
	}
	HX_STACK_LINE(2740)
	return params;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxUI_obj,getParams,return )


FlxUI_obj::FlxUI_obj()
{
}

void FlxUI_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUI);
	HX_MARK_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_MARK_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_MARK_MEMBER_NAME(failed,"failed");
	HX_MARK_MEMBER_NAME(failed_by,"failed_by");
	HX_MARK_MEMBER_NAME(focus,"focus");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_MARK_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_group_index,"_group_index");
	HX_MARK_MEMBER_NAME(_asset_index,"_asset_index");
	HX_MARK_MEMBER_NAME(_definition_index,"_definition_index");
	HX_MARK_MEMBER_NAME(_mode_index,"_mode_index");
	HX_MARK_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_MARK_MEMBER_NAME(_ptr,"_ptr");
	HX_MARK_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_MARK_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_MARK_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUI_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(do_safe_input_delay,"do_safe_input_delay");
	HX_VISIT_MEMBER_NAME(safe_input_delay_time,"safe_input_delay_time");
	HX_VISIT_MEMBER_NAME(failed,"failed");
	HX_VISIT_MEMBER_NAME(failed_by,"failed_by");
	HX_VISIT_MEMBER_NAME(focus,"focus");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	HX_VISIT_MEMBER_NAME(_ptr_tongue,"_ptr_tongue");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_group_index,"_group_index");
	HX_VISIT_MEMBER_NAME(_asset_index,"_asset_index");
	HX_VISIT_MEMBER_NAME(_definition_index,"_definition_index");
	HX_VISIT_MEMBER_NAME(_mode_index,"_mode_index");
	HX_VISIT_MEMBER_NAME(_curr_mode,"_curr_mode");
	HX_VISIT_MEMBER_NAME(_ptr,"_ptr");
	HX_VISIT_MEMBER_NAME(_superIndexUI,"_superIndexUI");
	HX_VISIT_MEMBER_NAME(_safe_input_delay_elapsed,"_safe_input_delay_elapsed");
	HX_VISIT_MEMBER_NAME(_failure_checks,"_failure_checks");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUI_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"_ptr") ) { return _ptr; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"event") ) { return event_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta_dyn(); }
		if (HX_FIELD_EQ(inName,"failed") ) { return failed; }
		if (HX_FIELD_EQ(inName,"tongue") ) { return get_tongue(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadX") ) { return _loadX_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadY") ) { return _loadY_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"request") ) { return request_dyn(); }
		if (HX_FIELD_EQ(inName,"_center") ) { return _center_dyn(); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"setMode") ) { return setMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getMode") ) { return getMode_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getEvent") ) { return getEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"addAsset") ) { return addAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"currMode") ) { return get_currMode(); }
		if (HX_FIELD_EQ(inName,"getGroup") ) { return getGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"hasAsset") ) { return hasAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return getAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_doAlign") ) { return _doAlign_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getParams") ) { return getParams_dyn(); }
		if (HX_FIELD_EQ(inName,"failed_by") ) { return failed_by; }
		if (HX_FIELD_EQ(inName,"set_focus") ) { return set_focus_dyn(); }
		if (HX_FIELD_EQ(inName,"callEvent") ) { return callEvent_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoad") ) { return _postLoad_dyn(); }
		if (HX_FIELD_EQ(inName,"showThing") ) { return showThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadText") ) { return _loadText_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTest") ) { return _loadTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLine") ) { return _loadLine_dyn(); }
		if (HX_FIELD_EQ(inName,"thisWidth") ) { return thisWidth_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { return forceFocus_dyn(); }
		if (HX_FIELD_EQ(inName,"get_tongue") ) { return get_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_tongue") ) { return set_tongue_dyn(); }
		if (HX_FIELD_EQ(inName,"_tongueSet") ) { return _tongueSet_dyn(); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return getRequest_dyn(); }
		if (HX_FIELD_EQ(inName,"getFlxText") ) { return getFlxText_dyn(); }
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { return _curr_mode; }
		if (HX_FIELD_EQ(inName,"_loadThing") ) { return _loadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadWidth") ) { return _loadWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"thisHeight") ) { return thisHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadColor") ) { return _loadColor_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { return _ptr_tongue; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAsset") ) { return removeAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { return _mode_index; }
		if (HX_FIELD_EQ(inName,"_loadHeight") ) { return _loadHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"_alignThing") ) { return _alignThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadLayout") ) { return _loadLayout_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadButton") ) { return _loadButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadRegion") ) { return _loadRegion_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadSprite") ) { return _loadSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"_getStretch") ) { return _getStretch_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadBorder") ) { return _loadBorder_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"replaceAsset") ) { return replaceAsset_dyn(); }
		if (HX_FIELD_EQ(inName,"get_currMode") ) { return get_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"set_currMode") ) { return set_currMode_dyn(); }
		if (HX_FIELD_EQ(inName,"_group_index") ) { return _group_index; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { return _asset_index; }
		if (HX_FIELD_EQ(inName,"_loadCompass") ) { return _loadCompass_dyn(); }
		if (HX_FIELD_EQ(inName,"_changeThing") ) { return _changeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_resizeThing") ) { return _resizeThing_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTabMenu") ) { return _loadTabMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_getDataSize") ) { return _getDataSize_dyn(); }
		if (HX_FIELD_EQ(inName,"_doOperation") ) { return _doOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontDef") ) { return _loadFontDef_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSuperIndex") ) { return setSuperIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"getDefinition") ) { return getDefinition_dyn(); }
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { return _superIndexUI; }
		if (HX_FIELD_EQ(inName,"_checkFailure") ) { return _checkFailure_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileTest") ) { return _loadTileTest_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadCheckBox") ) { return _loadCheckBox_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadTileRule") ) { return _loadTileRule_dyn(); }
		if (HX_FIELD_EQ(inName,"_getAnchorPos") ) { return _getAnchorPos_dyn(); }
		if (HX_FIELD_EQ(inName,"_getOperation") ) { return _getOperation_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadPosition") ) { return _loadPosition_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadFontFace") ) { return _loadFontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"_onFinishLoad") ) { return _onFinishLoad_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getLeafUIState") ) { return getLeafUIState_dyn(); }
		if (HX_FIELD_EQ(inName,"replaceInGroup") ) { return replaceInGroup_dyn(); }
		if (HX_FIELD_EQ(inName,"_postLoadThing") ) { return _postLoadThing_dyn(); }
		if (HX_FIELD_EQ(inName,"calcMaxMinSize") ) { return calcMaxMinSize_dyn(); }
		if (HX_FIELD_EQ(inName,"formatFromCode") ) { return formatFromCode_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"consolidateData") ) { return consolidateData_dyn(); }
		if (HX_FIELD_EQ(inName,"_loadBitmapRect") ) { return _loadBitmapRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return getTextFallback; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { return _failure_checks; }
		if (HX_FIELD_EQ(inName,"_loadRadioGroup") ) { return _loadRadioGroup_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"applyNodeChanges") ) { return applyNodeChanges_dyn(); }
		if (HX_FIELD_EQ(inName,"formatButtonText") ) { return formatButtonText_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { return _definition_index; }
		if (HX_FIELD_EQ(inName,"_loadDropDownMenu") ) { return _loadDropDownMenu_dyn(); }
		if (HX_FIELD_EQ(inName,"_load9SliceSprite") ) { return _load9SliceSprite_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_changeParamsThing") ) { return _changeParamsThing_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { return do_safe_input_delay; }
		if (HX_FIELD_EQ(inName,"_loadNumericStepper") ) { return _loadNumericStepper_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setWidgetSuppression") ) { return setWidgetSuppression_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { return safe_input_delay_time; }
		if (HX_FIELD_EQ(inName,"applyNodeConditionals") ) { return applyNodeConditionals_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { return _safe_input_delay_elapsed; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getLabelStyleFromDefinition") ) { return getLabelStyleFromDefinition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUI_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_ptr") ) { _ptr=inValue.Cast< ::flixel::addons::ui::interfaces::IEventGetter >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"focus") ) { if (inCallProp) return set_focus(inValue);focus=inValue.Cast< ::flixel::addons::ui::interfaces::IFlxUIWidget >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"failed") ) { failed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tongue") ) { return set_tongue(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"currMode") ) { return set_currMode(inValue); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"failed_by") ) { failed_by=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curr_mode") ) { _curr_mode=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_ptr_tongue") ) { _ptr_tongue=inValue.Cast< ::flixel::addons::ui::interfaces::IFireTongue >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode_index") ) { _mode_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_group_index") ) { _group_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_asset_index") ) { _asset_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_superIndexUI") ) { _superIndexUI=inValue.Cast< ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_failure_checks") ) { _failure_checks=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_definition_index") ) { _definition_index=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"do_safe_input_delay") ) { do_safe_input_delay=inValue.Cast< bool >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"safe_input_delay_time") ) { safe_input_delay_time=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_safe_input_delay_elapsed") ) { _safe_input_delay_elapsed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUI_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("do_safe_input_delay"));
	outFields->push(HX_CSTRING("safe_input_delay_time"));
	outFields->push(HX_CSTRING("failed"));
	outFields->push(HX_CSTRING("failed_by"));
	outFields->push(HX_CSTRING("tongue"));
	outFields->push(HX_CSTRING("focus"));
	outFields->push(HX_CSTRING("_ptr_tongue"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("currMode"));
	outFields->push(HX_CSTRING("_group_index"));
	outFields->push(HX_CSTRING("_asset_index"));
	outFields->push(HX_CSTRING("_definition_index"));
	outFields->push(HX_CSTRING("_mode_index"));
	outFields->push(HX_CSTRING("_curr_mode"));
	outFields->push(HX_CSTRING("_ptr"));
	outFields->push(HX_CSTRING("_superIndexUI"));
	outFields->push(HX_CSTRING("_safe_input_delay_elapsed"));
	outFields->push(HX_CSTRING("_failure_checks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("event"),
	HX_CSTRING("forceFocus"),
	HX_CSTRING("getLeafUIState"),
	HX_CSTRING("request"),
	HX_CSTRING("_delta"),
	HX_CSTRING("_center"),
	HX_CSTRING("consolidateData"),
	HX_CSTRING("_loadBitmapRect"),
	HX_CSTRING("getParams"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUI_obj,do_safe_input_delay),HX_CSTRING("do_safe_input_delay")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,safe_input_delay_time),HX_CSTRING("safe_input_delay_time")},
	{hx::fsBool,(int)offsetof(FlxUI_obj,failed),HX_CSTRING("failed")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,failed_by),HX_CSTRING("failed_by")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFlxUIWidget*/ ,(int)offsetof(FlxUI_obj,focus),HX_CSTRING("focus")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUI_obj,getTextFallback),HX_CSTRING("getTextFallback")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFireTongue*/ ,(int)offsetof(FlxUI_obj,_ptr_tongue),HX_CSTRING("_ptr_tongue")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(FlxUI_obj,_data),HX_CSTRING("_data")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_group_index),HX_CSTRING("_group_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_asset_index),HX_CSTRING("_asset_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_definition_index),HX_CSTRING("_definition_index")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxUI_obj,_mode_index),HX_CSTRING("_mode_index")},
	{hx::fsString,(int)offsetof(FlxUI_obj,_curr_mode),HX_CSTRING("_curr_mode")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IEventGetter*/ ,(int)offsetof(FlxUI_obj,_ptr),HX_CSTRING("_ptr")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI*/ ,(int)offsetof(FlxUI_obj,_superIndexUI),HX_CSTRING("_superIndexUI")},
	{hx::fsFloat,(int)offsetof(FlxUI_obj,_safe_input_delay_elapsed),HX_CSTRING("_safe_input_delay_elapsed")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUI_obj,_failure_checks),HX_CSTRING("_failure_checks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("do_safe_input_delay"),
	HX_CSTRING("safe_input_delay_time"),
	HX_CSTRING("failed"),
	HX_CSTRING("failed_by"),
	HX_CSTRING("get_tongue"),
	HX_CSTRING("set_tongue"),
	HX_CSTRING("focus"),
	HX_CSTRING("set_focus"),
	HX_CSTRING("getTextFallback"),
	HX_CSTRING("_ptr_tongue"),
	HX_CSTRING("_data"),
	HX_CSTRING("_tongueSet"),
	HX_CSTRING("callEvent"),
	HX_CSTRING("getEvent"),
	HX_CSTRING("getRequest"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("setWidgetSuppression"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("setSuperIndex"),
	HX_CSTRING("update"),
	HX_CSTRING("removeAsset"),
	HX_CSTRING("addAsset"),
	HX_CSTRING("replaceAsset"),
	HX_CSTRING("destroy"),
	HX_CSTRING("load"),
	HX_CSTRING("_postLoad"),
	HX_CSTRING("get_currMode"),
	HX_CSTRING("set_currMode"),
	HX_CSTRING("setMode"),
	HX_CSTRING("showThing"),
	HX_CSTRING("getGroup"),
	HX_CSTRING("getFlxText"),
	HX_CSTRING("hasAsset"),
	HX_CSTRING("getAsset"),
	HX_CSTRING("getMode"),
	HX_CSTRING("getLabelStyleFromDefinition"),
	HX_CSTRING("getDefinition"),
	HX_CSTRING("_group_index"),
	HX_CSTRING("_asset_index"),
	HX_CSTRING("_definition_index"),
	HX_CSTRING("_mode_index"),
	HX_CSTRING("_curr_mode"),
	HX_CSTRING("_ptr"),
	HX_CSTRING("_superIndexUI"),
	HX_CSTRING("_safe_input_delay_elapsed"),
	HX_CSTRING("_failure_checks"),
	HX_CSTRING("replaceInGroup"),
	HX_CSTRING("applyNodeConditionals"),
	HX_CSTRING("applyNodeChanges"),
	HX_CSTRING("_loadThing"),
	HX_CSTRING("_loadX"),
	HX_CSTRING("_loadY"),
	HX_CSTRING("_loadWidth"),
	HX_CSTRING("_loadHeight"),
	HX_CSTRING("_loadCompass"),
	HX_CSTRING("_changeParamsThing"),
	HX_CSTRING("_changeThing"),
	HX_CSTRING("_alignThing"),
	HX_CSTRING("_doAlign"),
	HX_CSTRING("_checkFailure"),
	HX_CSTRING("_resizeThing"),
	HX_CSTRING("_postLoadThing"),
	HX_CSTRING("_loadTileTest"),
	HX_CSTRING("_loadText"),
	HX_CSTRING("_loadRadioGroup"),
	HX_CSTRING("_loadCheckBox"),
	HX_CSTRING("_loadDropDownMenu"),
	HX_CSTRING("_loadTest"),
	HX_CSTRING("_loadLayout"),
	HX_CSTRING("_loadTabMenu"),
	HX_CSTRING("_loadNumericStepper"),
	HX_CSTRING("_loadButton"),
	HX_CSTRING("_loadRegion"),
	HX_CSTRING("_load9SliceSprite"),
	HX_CSTRING("_loadTileRule"),
	HX_CSTRING("_loadLine"),
	HX_CSTRING("_loadSprite"),
	HX_CSTRING("thisWidth"),
	HX_CSTRING("thisHeight"),
	HX_CSTRING("_getAnchorPos"),
	HX_CSTRING("calcMaxMinSize"),
	HX_CSTRING("_getDataSize"),
	HX_CSTRING("_getOperation"),
	HX_CSTRING("_doOperation"),
	HX_CSTRING("_getStretch"),
	HX_CSTRING("_loadPosition"),
	HX_CSTRING("_loadBorder"),
	HX_CSTRING("_loadColor"),
	HX_CSTRING("_loadFontDef"),
	HX_CSTRING("_loadFontFace"),
	HX_CSTRING("_onFinishLoad"),
	HX_CSTRING("getText"),
	HX_CSTRING("formatFromCode"),
	HX_CSTRING("formatButtonText"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUI_obj::__mClass,"__mClass");
};

#endif

Class FlxUI_obj::__mClass;

void FlxUI_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUI"), hx::TCanCast< FlxUI_obj> ,sStaticFields,sMemberFields,
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

void FlxUI_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

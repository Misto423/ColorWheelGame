#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#include <flixel/addons/ui/FlxUI9SliceSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISpriteButton
#include <flixel/addons/ui/FlxUISpriteButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FlxUIDropDownMenu_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","new",0x9471b5d7,"flixel.addons.ui.FlxUIDropDownMenu.new","flixel/addons/ui/FlxUIDropDownMenu.hx",113,0x238549da)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(DataList,"DataList")
HX_STACK_ARG(Callback,"Callback")
HX_STACK_ARG(Header,"Header")
HX_STACK_ARG(DropPanel,"DropPanel")
HX_STACK_ARG(ButtonList,"ButtonList")
HX_STACK_ARG(UIControlCallback,"UIControlCallback")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(114)
	super::__construct(X,Y);
	HX_STACK_LINE(115)
	this->callback = Callback;
	HX_STACK_LINE(117)
	this->header = Header;
	HX_STACK_LINE(118)
	if (((this->header == null()))){
		HX_STACK_LINE(120)
		::flixel::addons::ui::FlxUIDropDownHeader _g = ::flixel::addons::ui::FlxUIDropDownHeader_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(120)
		this->header = _g;
	}
	HX_STACK_LINE(123)
	Float _g1 = this->header->background->get_height();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(123)
	Float _g2 = (this->header->background->y + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(123)
	int yoff = ::Std_obj::_int(_g2);		HX_STACK_VAR(yoff,"yoff");
	HX_STACK_LINE(125)
	this->list = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(127)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(128)
	if (((DataList != null()))){
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				if ((!(((_g < DataList->length))))){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				::flixel::addons::ui::StrIdLabel data = DataList->__get(_g).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(132)
				::flixel::addons::ui::FlxUIButton t = this->makeListButton(i,data->label,data->id);		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(133)
				this->list->push(t);
				HX_STACK_LINE(134)
				t->set_y(yoff);
				HX_STACK_LINE(135)
				Float _g3 = this->header->background->get_height();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(135)
				int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(135)
				hx::AddEq(yoff,_g4);
				HX_STACK_LINE(137)
				(i)++;
			}
		}
		HX_STACK_LINE(139)
		this->selectSomething(DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->id,DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->label);
	}
	else{
		HX_STACK_LINE(141)
		if (((ButtonList != null()))){
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(143)
			while((true)){
				HX_STACK_LINE(143)
				if ((!(((_g < ButtonList->length))))){
					HX_STACK_LINE(143)
					break;
				}
				HX_STACK_LINE(143)
				::flixel::addons::ui::FlxUIButton btn = ButtonList->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(145)
				this->list->push(btn);
				HX_STACK_LINE(146)
				Float _g5 = this->header->background->get_width();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(146)
				Float _g6 = this->header->background->get_height();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(146)
				btn->resize(_g5,_g6);
				HX_STACK_LINE(147)
				btn->set_x((int)1);
				HX_STACK_LINE(148)
				btn->set_y(yoff);
				HX_STACK_LINE(149)
				Float _g7 = this->header->background->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(149)
				int _g8 = ::Std_obj::_int(_g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(149)
				hx::AddEq(yoff,_g8);
				HX_STACK_LINE(151)
				(i)++;
			}
		}
	}
	HX_STACK_LINE(155)
	this->dropPanel = DropPanel;
	HX_STACK_LINE(156)
	if (((this->dropPanel == null()))){
		HX_STACK_LINE(157)
		Float _g9 = this->header->background->get_width();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(157)
		Float _g10 = this->header->background->get_height();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(157)
		::openfl::_v2::geom::Rectangle rect = ::openfl::_v2::geom::Rectangle_obj::__new((int)0,(int)0,_g9,_g10);		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(158)
		::flixel::addons::ui::FlxUI9SliceSprite _g11 = ::flixel::addons::ui::FlxUI9SliceSprite_obj::__new((int)0,(int)0,HX_CSTRING("flixel/flixel-ui/img/box.png"),rect,Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)14).Add((int)14),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(158)
		this->dropPanel = _g11;
	}
	HX_STACK_LINE(161)
	this->dropPanel->set_y(this->header->background->y);
	HX_STACK_LINE(162)
	Float _g12 = this->header->background->get_width();		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(162)
	this->dropPanel->resize(_g12,yoff);
	HX_STACK_LINE(163)
	this->dropPanel->set_visible(false);
	HX_STACK_LINE(164)
	this->add(this->dropPanel);
	HX_STACK_LINE(166)
	{
		HX_STACK_LINE(166)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(166)
		Array< ::Dynamic > _g11 = this->list;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(166)
		while((true)){
			HX_STACK_LINE(166)
			if ((!(((_g < _g11->length))))){
				HX_STACK_LINE(166)
				break;
			}
			HX_STACK_LINE(166)
			::flixel::addons::ui::FlxUIButton btn = _g11->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(166)
			++(_g);
			HX_STACK_LINE(167)
			this->add(btn);
			HX_STACK_LINE(168)
			btn->set_visible(false);
		}
	}
	HX_STACK_LINE(172)
	this->header->button->onUp->callback = this->onDropdown_dyn();
	HX_STACK_LINE(174)
	this->add(this->header);
}
;
	return null();
}

//FlxUIDropDownMenu_obj::~FlxUIDropDownMenu_obj() { }

Dynamic FlxUIDropDownMenu_obj::__CreateEmpty() { return  new FlxUIDropDownMenu_obj; }
hx::ObjectPtr< FlxUIDropDownMenu_obj > FlxUIDropDownMenu_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Array< ::Dynamic > DataList,Dynamic Callback,::flixel::addons::ui::FlxUIDropDownHeader Header,::flixel::addons::ui::FlxUI9SliceSprite DropPanel,Array< ::Dynamic > ButtonList,Dynamic UIControlCallback)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > result = new FlxUIDropDownMenu_obj();
	result->__construct(__o_X,__o_Y,DataList,Callback,Header,DropPanel,ButtonList,UIControlCallback);
	return result;}

Dynamic FlxUIDropDownMenu_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUIDropDownMenu_obj > result = new FlxUIDropDownMenu_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

hx::Object *FlxUIDropDownMenu_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIClickable_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIClickable_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IHasParams_obj)) return operator ::flixel::addons::ui::interfaces::IHasParams_obj *();
	return super::__ToInterface(inType);
}

bool FlxUIDropDownMenu_obj::set_skipButtonUpdate( bool b){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_skipButtonUpdate",0xeb78a3e0,"flixel.addons.ui.FlxUIDropDownMenu.set_skipButtonUpdate","flixel/addons/ui/FlxUIDropDownMenu.hx",25,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(26)
	this->skipButtonUpdate = b;
	HX_STACK_LINE(27)
	this->header->button->set_skipButtonUpdate(b);
	HX_STACK_LINE(28)
	return b;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_skipButtonUpdate,return )

::String FlxUIDropDownMenu_obj::get_selectedId( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedId",0x60d4af48,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",37,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(37)
	return this->_selectedId;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedId,return )

::String FlxUIDropDownMenu_obj::set_selectedId( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedId",0x80f497bc,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedId","flixel/addons/ui/FlxUIDropDownMenu.hx",38,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(39)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		while((true)){
			HX_STACK_LINE(40)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(40)
				break;
			}
			HX_STACK_LINE(40)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(40)
			++(_g);
			HX_STACK_LINE(41)
			if (((bool((btn != null())) && bool((btn->id == str))))){
				HX_STACK_LINE(42)
				::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(43)
				this->_selectedId = str;
				HX_STACK_LINE(44)
				if (((item->label != null()))){
					HX_STACK_LINE(45)
					::String _g2 = item->label->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(45)
					this->_selectedLabel = _g2;
					HX_STACK_LINE(46)
					::String _g11 = item->label->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(46)
					this->header->text->set_text(_g11);
				}
				else{
					HX_STACK_LINE(48)
					this->_selectedLabel = HX_CSTRING("");
					HX_STACK_LINE(49)
					this->header->text->set_text(HX_CSTRING(""));
				}
				HX_STACK_LINE(51)
				return str;
			}
			HX_STACK_LINE(53)
			(i)++;
		}
	}
	HX_STACK_LINE(55)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedId,return )

::String FlxUIDropDownMenu_obj::get_selectedLabel( ){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","get_selectedLabel",0x701cdca7,"flixel.addons.ui.FlxUIDropDownMenu.get_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",58,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_LINE(58)
	return this->_selectedLabel;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,get_selectedLabel,return )

::String FlxUIDropDownMenu_obj::set_selectedLabel( ::String str){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_selectedLabel",0x938ab4b3,"flixel.addons.ui.FlxUIDropDownMenu.set_selectedLabel","flixel/addons/ui/FlxUIDropDownMenu.hx",59,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(60)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(61)
	{
		HX_STACK_LINE(61)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(61)
		while((true)){
			HX_STACK_LINE(61)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(61)
				break;
			}
			HX_STACK_LINE(61)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(61)
			++(_g);
			HX_STACK_LINE(62)
			::String _g2 = btn->label->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(62)
			if (((_g2 == str))){
				HX_STACK_LINE(63)
				::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
				HX_STACK_LINE(64)
				this->_selectedId = item->id;
				HX_STACK_LINE(65)
				this->_selectedLabel = str;
				HX_STACK_LINE(66)
				this->header->text->set_text(str);
				HX_STACK_LINE(67)
				return str;
			}
			HX_STACK_LINE(69)
			(i)++;
		}
	}
	HX_STACK_LINE(71)
	return str;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_selectedLabel,return )

Dynamic FlxUIDropDownMenu_obj::set_params( Dynamic p){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","set_params",0x718bd0ec,"flixel.addons.ui.FlxUIDropDownMenu.set_params","flixel/addons/ui/FlxUIDropDownMenu.hx",89,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_LINE(90)
	this->params = p;
	HX_STACK_LINE(91)
	return this->params;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,set_params,return )

Void FlxUIDropDownMenu_obj::setData( Array< ::Dynamic > DataList){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","setData",0xb60b03e3,"flixel.addons.ui.FlxUIDropDownMenu.setData","flixel/addons/ui/FlxUIDropDownMenu.hx",183,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(DataList,"DataList")
		HX_STACK_LINE(184)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(186)
		Float _g = this->header->background->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(186)
		Float _g1 = ((this->y - this->header->background->y) + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(186)
		int yoff = ::Std_obj::_int(_g1);		HX_STACK_VAR(yoff,"yoff");
		HX_STACK_LINE(188)
		if (((DataList != null()))){
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(189)
				while((true)){
					HX_STACK_LINE(189)
					if ((!(((_g2 < DataList->length))))){
						HX_STACK_LINE(189)
						break;
					}
					HX_STACK_LINE(189)
					::flixel::addons::ui::StrIdLabel data = DataList->__get(_g2).StaticCast< ::flixel::addons::ui::StrIdLabel >();		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(189)
					++(_g2);
					HX_STACK_LINE(190)
					bool recycled = false;		HX_STACK_VAR(recycled,"recycled");
					HX_STACK_LINE(191)
					if (((this->list != null()))){
						HX_STACK_LINE(192)
						if (((i <= (this->list->length - (int)1)))){
							HX_STACK_LINE(194)
							::flixel::addons::ui::FlxUIButton btn = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
							HX_STACK_LINE(195)
							if (((btn != null()))){
								HX_STACK_LINE(196)
								btn->label->__Field(HX_CSTRING("set_text"),true)(data->label);
								HX_STACK_LINE(197)
								::String old_id = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >()->id;		HX_STACK_VAR(old_id,"old_id");
								HX_STACK_LINE(198)
								this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >()->id = data->id;
								HX_STACK_LINE(199)
								recycled = true;
								HX_STACK_LINE(200)
								Float _g21 = this->header->background->get_height();		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(200)
								int _g3 = ::Std_obj::_int(_g21);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(200)
								hx::AddEq(yoff,_g3);
							}
						}
					}
					else{
						HX_STACK_LINE(204)
						this->list = Array_obj< ::Dynamic >::__new();
					}
					HX_STACK_LINE(206)
					if ((!(recycled))){
						HX_STACK_LINE(207)
						::flixel::addons::ui::FlxUIButton t = this->makeListButton(i,data->label,data->id);		HX_STACK_VAR(t,"t");
						HX_STACK_LINE(208)
						this->list->push(t);
						HX_STACK_LINE(209)
						t->set_y(yoff);
						HX_STACK_LINE(210)
						this->add(t);
						HX_STACK_LINE(211)
						t->set_visible(false);
						HX_STACK_LINE(212)
						Float _g4 = this->header->background->get_height();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(212)
						int _g5 = ::Std_obj::_int(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(212)
						hx::AddEq(yoff,_g5);
					}
					HX_STACK_LINE(214)
					(i)++;
				}
			}
			HX_STACK_LINE(218)
			if (((this->list->length > DataList->length))){
				HX_STACK_LINE(219)
				int _g11 = DataList->length;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(219)
				int _g2 = this->list->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(219)
				while((true)){
					HX_STACK_LINE(219)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(219)
						break;
					}
					HX_STACK_LINE(219)
					int j = (_g11)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(220)
					::flixel::addons::ui::FlxUIButton b = this->list->pop().StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(221)
					b->set_visible(false);
					HX_STACK_LINE(222)
					b->set_active(false);
					HX_STACK_LINE(223)
					this->remove(b,true);
					HX_STACK_LINE(224)
					b->destroy();
					HX_STACK_LINE(225)
					b = null();
				}
			}
			HX_STACK_LINE(229)
			this->selectSomething(DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->id,DataList->__get((int)0).StaticCast< ::flixel::addons::ui::StrIdLabel >()->label);
		}
		HX_STACK_LINE(232)
		Float _g6 = this->header->background->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(232)
		this->dropPanel->resize(_g6,yoff);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,setData,(void))

Void FlxUIDropDownMenu_obj::selectSomething( ::String id,::String label){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","selectSomething",0xd0a071d5,"flixel.addons.ui.FlxUIDropDownMenu.selectSomething","flixel/addons/ui/FlxUIDropDownMenu.hx",235,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(label,"label")
		HX_STACK_LINE(236)
		this->header->text->set_text(label);
		HX_STACK_LINE(237)
		this->set_selectedId(id);
		HX_STACK_LINE(238)
		this->set_selectedLabel(label);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,selectSomething,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::makeListButton( int i,::String Label,::String Name){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeListButton",0xfb84f067,"flixel.addons.ui.FlxUIDropDownMenu.makeListButton","flixel/addons/ui/FlxUIDropDownMenu.hx",241,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_ARG(Label,"Label")
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(242)
	::flixel::addons::ui::FlxUIButton t = ::flixel::addons::ui::FlxUIButton_obj::__new((int)0,(int)0,Label,null());		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(243)
	t->broadcastToFlxUI = false;
	HX_STACK_LINE(244)
	Dynamic _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(244)
	{
		HX_STACK_LINE(244)
		Dynamic f = Dynamic( Array_obj<Dynamic>::__new().Add(this->onClickItem_dyn()));		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(244)
		Array< int > i1 = Array_obj< int >::__new().Add(i);		HX_STACK_VAR(i1,"i1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,Array< int >,i1,Dynamic,f)
		Void run(){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/addons/ui/FlxUIDropDownMenu.hx",244,0x238549da)
			{
				HX_STACK_LINE(244)
				return null(f->__GetItem((int)0)(i1->__get((int)0)).Cast< Void >());
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(244)
		_g =  Dynamic(new _Function_2_1(i1,f));
	}
	HX_STACK_LINE(244)
	t->onUp->callback = _g;
	HX_STACK_LINE(246)
	t->id = Name;
	HX_STACK_LINE(248)
	Float _g1 = this->header->background->get_width();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(248)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(249)
	Float _g3 = this->header->background->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(249)
	int _g4 = ::Std_obj::_int(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(248)
	t->loadGraphicSlice9(Array_obj< ::String >::__new().Add(HX_CSTRING("flixel/flixel-ui/img/invis.png")).Add(HX_CSTRING("flixel/flixel-ui/img/hilight.png")).Add(HX_CSTRING("flixel/flixel-ui/img/hilight.png")),_g2,_g4,Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)3).Add((int)3)),(int)0,null(),null(),null(),null(),null());
	HX_STACK_LINE(250)
	{
		HX_STACK_LINE(250)
		::flixel::util::FlxPoint _g5 = t->labelOffsets->__get((int)2).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(250)
		_g5->set_y((_g5->y - (int)1));
	}
	HX_STACK_LINE(252)
	t->up_color = (int)-16777216;
	HX_STACK_LINE(253)
	t->over_color = (int)-1;
	HX_STACK_LINE(254)
	t->down_color = (int)-1;
	HX_STACK_LINE(256)
	Float _g5 = this->header->background->get_width();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(256)
	Float _g6 = (_g5 - (int)2);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(256)
	Float _g7 = this->header->background->get_height();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(256)
	Float _g8 = (_g7 - (int)1);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(256)
	t->resize(_g6,_g8);
	HX_STACK_LINE(258)
	t->label->__Field(HX_CSTRING("set_alignment"),true)(HX_CSTRING("left"));
	HX_STACK_LINE(259)
	t->autoCenterLabel();
	HX_STACK_LINE(260)
	t->set_x((int)1);
	HX_STACK_LINE(262)
	{
		HX_STACK_LINE(262)
		int _g9 = (int)0;		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(262)
		Array< ::Dynamic > _g11 = t->labelOffsets;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(262)
		while((true)){
			HX_STACK_LINE(262)
			if ((!(((_g9 < _g11->length))))){
				HX_STACK_LINE(262)
				break;
			}
			HX_STACK_LINE(262)
			::flixel::util::FlxPoint offset = _g11->__get(_g9).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(262)
			++(_g9);
			HX_STACK_LINE(264)
			{
				HX_STACK_LINE(264)
				::flixel::util::FlxPoint _g21 = offset;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(264)
				_g21->set_x((_g21->x + (int)2));
			}
		}
	}
	HX_STACK_LINE(267)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIDropDownMenu_obj,makeListButton,return )

Void FlxUIDropDownMenu_obj::changeLabelByIndex( int i,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelByIndex",0xa18ac820,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",274,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(275)
		::flixel::addons::ui::FlxUIButton btn = this->getBtnByIndex(i);		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(276)
		if (((bool((btn != null())) && bool((btn->label != null()))))){
			HX_STACK_LINE(277)
			btn->label->__Field(HX_CSTRING("set_text"),true)(NewLabel);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelByIndex,(void))

Void FlxUIDropDownMenu_obj::changeLabelById( ::String id,::String NewLabel){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","changeLabelById",0x75719a0d,"flixel.addons.ui.FlxUIDropDownMenu.changeLabelById","flixel/addons/ui/FlxUIDropDownMenu.hx",281,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(id,"id")
		HX_STACK_ARG(NewLabel,"NewLabel")
		HX_STACK_LINE(282)
		::flixel::addons::ui::FlxUIButton btn = this->getBtnById(id);		HX_STACK_VAR(btn,"btn");
		HX_STACK_LINE(283)
		if (((bool((btn != null())) && bool((btn->label != null()))))){
			HX_STACK_LINE(284)
			btn->label->__Field(HX_CSTRING("set_text"),true)(NewLabel);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,changeLabelById,(void))

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnByIndex( int i){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnByIndex",0x24b02f2c,"flixel.addons.ui.FlxUIDropDownMenu.getBtnByIndex","flixel/addons/ui/FlxUIDropDownMenu.hx",288,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(i,"i")
	HX_STACK_LINE(289)
	if (((bool((i >= (int)0)) && bool((i < this->list->length))))){
		HX_STACK_LINE(290)
		return this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();
	}
	HX_STACK_LINE(292)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnByIndex,return )

::flixel::addons::ui::FlxUIButton FlxUIDropDownMenu_obj::getBtnById( ::String id){
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","getBtnById",0xae1a9381,"flixel.addons.ui.FlxUIDropDownMenu.getBtnById","flixel/addons/ui/FlxUIDropDownMenu.hx",295,0x238549da)
	HX_STACK_THIS(this)
	HX_STACK_ARG(id,"id")
	HX_STACK_LINE(296)
	{
		HX_STACK_LINE(296)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(296)
		while((true)){
			HX_STACK_LINE(296)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(296)
				break;
			}
			HX_STACK_LINE(296)
			::flixel::addons::ui::FlxUIButton btn = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(btn,"btn");
			HX_STACK_LINE(296)
			++(_g);
			HX_STACK_LINE(297)
			if (((btn->id == id))){
				HX_STACK_LINE(298)
				return btn;
			}
		}
	}
	HX_STACK_LINE(301)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,getBtnById,return )

Void FlxUIDropDownMenu_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","update",0x4f8d24f2,"flixel.addons.ui.FlxUIDropDownMenu.update","flixel/addons/ui/FlxUIDropDownMenu.hx",305,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		this->super::update();
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/ui/FlxUIDropDownMenu.hx",309,0x238549da)
				{
					HX_STACK_LINE(309)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(309)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(309)
		if (((bool(this->dropPanel->visible) && bool(_Function_1_1::Block())))){
			HX_STACK_LINE(311)
			if ((!(this->dropPanel->overlapsPoint(::flixel::FlxG_obj::mouse,null(),null())))){
				HX_STACK_LINE(313)
				this->showList(false);
			}
		}
	}
return null();
}


Void FlxUIDropDownMenu_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","destroy",0xd2a999f1,"flixel.addons.ui.FlxUIDropDownMenu.destroy","flixel/addons/ui/FlxUIDropDownMenu.hx",320,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(321)
		this->super::destroy();
		HX_STACK_LINE(323)
		::flixel::addons::ui::FlxUI9SliceSprite _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->dropPanel);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(323)
		this->dropPanel = _g;
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(325)
			Array< ::Dynamic > _g11 = this->list;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(325)
			while((true)){
				HX_STACK_LINE(325)
				if ((!(((_g1 < _g11->length))))){
					HX_STACK_LINE(325)
					break;
				}
				HX_STACK_LINE(325)
				::flixel::addons::ui::FlxUIButton button = _g11->__get(_g1).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(325)
				++(_g1);
				HX_STACK_LINE(327)
				::flixel::addons::ui::FlxUIButton _g12 = ::flixel::util::FlxDestroyUtil_obj::destroy(button);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(327)
				button = _g12;
			}
		}
		HX_STACK_LINE(330)
		this->list = null();
		HX_STACK_LINE(332)
		this->callback = null();
	}
return null();
}


Void FlxUIDropDownMenu_obj::showList( bool b){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","showList",0x6015cb24,"flixel.addons.ui.FlxUIDropDownMenu.showList","flixel/addons/ui/FlxUIDropDownMenu.hx",336,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(b,"b")
		HX_STACK_LINE(337)
		{
			HX_STACK_LINE(337)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(337)
			Array< ::Dynamic > _g1 = this->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(337)
			while((true)){
				HX_STACK_LINE(337)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(337)
					break;
				}
				HX_STACK_LINE(337)
				::flixel::addons::ui::FlxUIButton button = _g1->__get(_g).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(button,"button");
				HX_STACK_LINE(337)
				++(_g);
				HX_STACK_LINE(338)
				button->set_visible(b);
				HX_STACK_LINE(339)
				button->set_active(b);
			}
		}
		HX_STACK_LINE(342)
		this->dropPanel->set_visible(b);
		HX_STACK_LINE(344)
		::flixel::addons::ui::FlxUI_obj::forceFocus(b,hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,showList,(void))

Void FlxUIDropDownMenu_obj::onDropdown( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onDropdown",0x6af20fb9,"flixel.addons.ui.FlxUIDropDownMenu.onDropdown","flixel/addons/ui/FlxUIDropDownMenu.hx",349,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_LINE(349)
		if ((this->dropPanel->visible)){
			HX_STACK_LINE(349)
			this->showList(false);
		}
		else{
			HX_STACK_LINE(349)
			this->showList(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIDropDownMenu_obj,onDropdown,(void))

Void FlxUIDropDownMenu_obj::onClickItem( int i){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","onClickItem",0xc144c8d3,"flixel.addons.ui.FlxUIDropDownMenu.onClickItem","flixel/addons/ui/FlxUIDropDownMenu.hx",353,0x238549da)
		HX_STACK_THIS(this)
		HX_STACK_ARG(i,"i")
		HX_STACK_LINE(354)
		::flixel::addons::ui::FlxUIButton item = this->list->__get(i).StaticCast< ::flixel::addons::ui::FlxUIButton >();		HX_STACK_VAR(item,"item");
		HX_STACK_LINE(355)
		::String _g = item->label->__Field(HX_CSTRING("get_text"),true)();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(355)
		this->selectSomething(item->id,_g);
		HX_STACK_LINE(356)
		this->showList(false);
		HX_STACK_LINE(358)
		if (((this->callback_dyn() != null()))){
			HX_STACK_LINE(359)
			this->callback(item->id);
		}
		HX_STACK_LINE(362)
		if ((this->broadcastToFlxUI)){
			HX_STACK_LINE(363)
			::flixel::addons::ui::FlxUI_obj::event(HX_CSTRING("click_dropdown"),hx::ObjectPtr<OBJ_>(this),item->id,this->params);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIDropDownMenu_obj,onClickItem,(void))

::String FlxUIDropDownMenu_obj::CLICK_EVENT;

Array< ::Dynamic > FlxUIDropDownMenu_obj::makeStrIdLabelArray( Array< ::String > StringArray,hx::Null< bool >  __o_UseIndexID){
bool UseIndexID = __o_UseIndexID.Default(false);
	HX_STACK_FRAME("flixel.addons.ui.FlxUIDropDownMenu","makeStrIdLabelArray",0xab19023a,"flixel.addons.ui.FlxUIDropDownMenu.makeStrIdLabelArray","flixel/addons/ui/FlxUIDropDownMenu.hx",375,0x238549da)
	HX_STACK_ARG(StringArray,"StringArray")
	HX_STACK_ARG(UseIndexID,"UseIndexID")
{
		HX_STACK_LINE(376)
		Array< ::Dynamic > strIdArray = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(strIdArray,"strIdArray");
		HX_STACK_LINE(377)
		{
			HX_STACK_LINE(377)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(377)
			int _g = StringArray->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(377)
			while((true)){
				HX_STACK_LINE(377)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(377)
					break;
				}
				HX_STACK_LINE(377)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(379)
				::String ID = StringArray->__get(i);		HX_STACK_VAR(ID,"ID");
				HX_STACK_LINE(380)
				if ((UseIndexID)){
					HX_STACK_LINE(382)
					::String _g2 = ::Std_obj::string(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(382)
					ID = _g2;
				}
				HX_STACK_LINE(384)
				strIdArray[i] = ::flixel::addons::ui::StrIdLabel_obj::__new(ID,StringArray->__get(i));
			}
		}
		HX_STACK_LINE(386)
		return strIdArray;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxUIDropDownMenu_obj,makeStrIdLabelArray,return )


FlxUIDropDownMenu_obj::FlxUIDropDownMenu_obj()
{
}

void FlxUIDropDownMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIDropDownMenu);
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(_selectedId,"_selectedId");
	HX_MARK_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_MARK_MEMBER_NAME(header,"header");
	HX_MARK_MEMBER_NAME(list,"list");
	HX_MARK_MEMBER_NAME(dropPanel,"dropPanel");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIDropDownMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(_selectedId,"_selectedId");
	HX_VISIT_MEMBER_NAME(_selectedLabel,"_selectedLabel");
	HX_VISIT_MEMBER_NAME(header,"header");
	HX_VISIT_MEMBER_NAME(list,"list");
	HX_VISIT_MEMBER_NAME(dropPanel,"dropPanel");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUIDropDownMenu_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { return list; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { return header; }
		if (HX_FIELD_EQ(inName,"params") ) { return params; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return callback; }
		if (HX_FIELD_EQ(inName,"showList") ) { return showList_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { return dropPanel; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return get_selectedId(); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return set_params_dyn(); }
		if (HX_FIELD_EQ(inName,"getBtnById") ) { return getBtnById_dyn(); }
		if (HX_FIELD_EQ(inName,"onDropdown") ) { return onDropdown_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { return _selectedId; }
		if (HX_FIELD_EQ(inName,"onClickItem") ) { return onClickItem_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return get_selectedLabel(); }
		if (HX_FIELD_EQ(inName,"getBtnByIndex") ) { return getBtnByIndex_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { return _selectedLabel; }
		if (HX_FIELD_EQ(inName,"get_selectedId") ) { return get_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedId") ) { return set_selectedId_dyn(); }
		if (HX_FIELD_EQ(inName,"makeListButton") ) { return makeListButton_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectSomething") ) { return selectSomething_dyn(); }
		if (HX_FIELD_EQ(inName,"changeLabelById") ) { return changeLabelById_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return skipButtonUpdate; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_selectedLabel") ) { return get_selectedLabel_dyn(); }
		if (HX_FIELD_EQ(inName,"set_selectedLabel") ) { return set_selectedLabel_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"changeLabelByIndex") ) { return changeLabelByIndex_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"makeStrIdLabelArray") ) { return makeStrIdLabelArray_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return set_skipButtonUpdate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUIDropDownMenu_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"list") ) { list=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"header") ) { header=inValue.Cast< ::flixel::addons::ui::FlxUIDropDownHeader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp) return set_params(inValue);params=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dropPanel") ) { dropPanel=inValue.Cast< ::flixel::addons::ui::FlxUI9SliceSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"selectedId") ) { return set_selectedId(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_selectedId") ) { _selectedId=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectedLabel") ) { return set_selectedLabel(inValue); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectedLabel") ) { _selectedLabel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp) return set_skipButtonUpdate(inValue);skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIDropDownMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("skipButtonUpdate"));
	outFields->push(HX_CSTRING("selectedId"));
	outFields->push(HX_CSTRING("selectedLabel"));
	outFields->push(HX_CSTRING("_selectedId"));
	outFields->push(HX_CSTRING("_selectedLabel"));
	outFields->push(HX_CSTRING("header"));
	outFields->push(HX_CSTRING("list"));
	outFields->push(HX_CSTRING("dropPanel"));
	outFields->push(HX_CSTRING("params"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CLICK_EVENT"),
	HX_CSTRING("makeStrIdLabelArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIDropDownMenu_obj,skipButtonUpdate),HX_CSTRING("skipButtonUpdate")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedId),HX_CSTRING("_selectedId")},
	{hx::fsString,(int)offsetof(FlxUIDropDownMenu_obj,_selectedLabel),HX_CSTRING("_selectedLabel")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIDropDownHeader*/ ,(int)offsetof(FlxUIDropDownMenu_obj,header),HX_CSTRING("header")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxUIDropDownMenu_obj,list),HX_CSTRING("list")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI9SliceSprite*/ ,(int)offsetof(FlxUIDropDownMenu_obj,dropPanel),HX_CSTRING("dropPanel")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIDropDownMenu_obj,params),HX_CSTRING("params")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIDropDownMenu_obj,callback),HX_CSTRING("callback")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("skipButtonUpdate"),
	HX_CSTRING("set_skipButtonUpdate"),
	HX_CSTRING("_selectedId"),
	HX_CSTRING("_selectedLabel"),
	HX_CSTRING("get_selectedId"),
	HX_CSTRING("set_selectedId"),
	HX_CSTRING("get_selectedLabel"),
	HX_CSTRING("set_selectedLabel"),
	HX_CSTRING("header"),
	HX_CSTRING("list"),
	HX_CSTRING("dropPanel"),
	HX_CSTRING("params"),
	HX_CSTRING("set_params"),
	HX_CSTRING("callback"),
	HX_CSTRING("setData"),
	HX_CSTRING("selectSomething"),
	HX_CSTRING("makeListButton"),
	HX_CSTRING("changeLabelByIndex"),
	HX_CSTRING("changeLabelById"),
	HX_CSTRING("getBtnByIndex"),
	HX_CSTRING("getBtnById"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("showList"),
	HX_CSTRING("onDropdown"),
	HX_CSTRING("onClickItem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIDropDownMenu_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

Class FlxUIDropDownMenu_obj::__mClass;

void FlxUIDropDownMenu_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUIDropDownMenu"), hx::TCanCast< FlxUIDropDownMenu_obj> ,sStaticFields,sMemberFields,
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

void FlxUIDropDownMenu_obj::__boot()
{
	CLICK_EVENT= HX_CSTRING("click_dropdown");
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

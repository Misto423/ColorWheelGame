#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
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
namespace flixel{
namespace addons{
namespace ui{

Void FlxUISprite_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{
HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","new",0xd5a60c2c,"flixel.addons.ui.FlxUISprite.new","flixel/addons/ui/FlxUISprite.hx",11,0xc16e6665)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(22)
	this->recycled = false;
	HX_STACK_LINE(19)
	this->ptr_owner = null();
	HX_STACK_LINE(13)
	this->broadcastToFlxUI = true;
	HX_STACK_LINE(26)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//FlxUISprite_obj::~FlxUISprite_obj() { }

Dynamic FlxUISprite_obj::__CreateEmpty() { return  new FlxUISprite_obj; }
hx::ObjectPtr< FlxUISprite_obj > FlxUISprite_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,Dynamic SimpleGraphic)
{  hx::ObjectPtr< FlxUISprite_obj > result = new FlxUISprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic);
	return result;}

Dynamic FlxUISprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxUISprite_obj > result = new FlxUISprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

hx::Object *FlxUISprite_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::interfaces::IFlxSprite_obj)) return operator ::flixel::interfaces::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::interfaces::IFlxBasic_obj)) return operator ::flixel::interfaces::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::addons::ui::interfaces::IFlxUIWidget_obj)) return operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *();
	return super::__ToInterface(inType);
}

Void FlxUISprite_obj::recycle( Dynamic data){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","recycle",0x37d621df,"flixel.addons.ui.FlxUISprite.recycle","flixel/addons/ui/FlxUISprite.hx",30,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(30)
		this->recycled = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISprite_obj,recycle,(void))

Void FlxUISprite_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.addons.ui.FlxUISprite","destroy",0x24d03ec6,"flixel.addons.ui.FlxUISprite.destroy","flixel/addons/ui/FlxUISprite.hx",34,0xc16e6665)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->ptr_owner = null();
		HX_STACK_LINE(36)
		this->super::destroy();
	}
return null();
}



FlxUISprite_obj::FlxUISprite_obj()
{
}

void FlxUISprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISprite);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_MARK_MEMBER_NAME(recycled,"recycled");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(ptr_owner,"ptr_owner");
	HX_VISIT_MEMBER_NAME(recycled,"recycled");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxUISprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"recycle") ) { return recycle_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { return recycled; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { return ptr_owner; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return broadcastToFlxUI; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxUISprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"recycled") ) { recycled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"ptr_owner") ) { ptr_owner=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("broadcastToFlxUI"));
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("ptr_owner"));
	outFields->push(HX_CSTRING("recycled"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,broadcastToFlxUI),HX_CSTRING("broadcastToFlxUI")},
	{hx::fsString,(int)offsetof(FlxUISprite_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUISprite_obj,ptr_owner),HX_CSTRING("ptr_owner")},
	{hx::fsBool,(int)offsetof(FlxUISprite_obj,recycled),HX_CSTRING("recycled")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("broadcastToFlxUI"),
	HX_CSTRING("id"),
	HX_CSTRING("ptr_owner"),
	HX_CSTRING("recycled"),
	HX_CSTRING("recycle"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISprite_obj::__mClass,"__mClass");
};

#endif

Class FlxUISprite_obj::__mClass;

void FlxUISprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FlxUISprite"), hx::TCanCast< FlxUISprite_obj> ,sStaticFields,sMemberFields,
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

void FlxUISprite_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

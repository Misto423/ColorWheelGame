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
#ifndef INCLUDED_flixel_addons_ui_FontDef
#include <flixel/addons/ui/FontDef.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void FontDef_obj::__construct(::String Name,Dynamic Size,::String Style)
{
HX_STACK_FRAME("flixel.addons.ui.FontDef","new",0x626f8177,"flixel.addons.ui.FontDef.new","flixel/addons/ui/FlxUIText.hx",25,0x557f53bd)
HX_STACK_THIS(this)
HX_STACK_ARG(Name,"Name")
HX_STACK_ARG(Size,"Size")
HX_STACK_ARG(Style,"Style")
{
	HX_STACK_LINE(29)
	this->style = null();
	HX_STACK_LINE(28)
	this->size = null();
	HX_STACK_LINE(27)
	this->name = null();
	HX_STACK_LINE(32)
	this->name = Name;
	HX_STACK_LINE(33)
	this->size = Size;
	HX_STACK_LINE(34)
	this->style = Style;
}
;
	return null();
}

//FontDef_obj::~FontDef_obj() { }

Dynamic FontDef_obj::__CreateEmpty() { return  new FontDef_obj; }
hx::ObjectPtr< FontDef_obj > FontDef_obj::__new(::String Name,Dynamic Size,::String Style)
{  hx::ObjectPtr< FontDef_obj > result = new FontDef_obj();
	result->__construct(Name,Size,Style);
	return result;}

Dynamic FontDef_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FontDef_obj > result = new FontDef_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FontDef_obj::apply( ::flixel::text::FlxText f){
{
		HX_STACK_FRAME("flixel.addons.ui.FontDef","apply",0x0976ea45,"flixel.addons.ui.FontDef.apply","flixel/addons/ui/FlxUIText.hx",37,0x557f53bd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(f,"f")
		HX_STACK_LINE(38)
		f->set_font(this->name);
		HX_STACK_LINE(39)
		f->set_size(this->size);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FontDef_obj,apply,(void))


FontDef_obj::FontDef_obj()
{
}

void FontDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FontDef);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_END_CLASS();
}

void FontDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(style,"style");
}

Dynamic FontDef_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"size") ) { return size; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return style; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FontDef_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FontDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("size"));
	outFields->push(HX_CSTRING("style"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FontDef_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FontDef_obj,size),HX_CSTRING("size")},
	{hx::fsString,(int)offsetof(FontDef_obj,style),HX_CSTRING("style")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("size"),
	HX_CSTRING("style"),
	HX_CSTRING("apply"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontDef_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontDef_obj::__mClass,"__mClass");
};

#endif

Class FontDef_obj::__mClass;

void FontDef_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.FontDef"), hx::TCanCast< FontDef_obj> ,sStaticFields,sMemberFields,
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

void FontDef_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

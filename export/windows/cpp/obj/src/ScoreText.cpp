#include <hxcpp.h>

#ifndef INCLUDED_ScoreText
#include <ScoreText.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif

Void ScoreText_obj::__construct(Dynamic __o_X,Dynamic __o_Y,Dynamic __o_FieldWidth,::String Text,Dynamic __o_Size,Dynamic __o_EmbeddedFont)
{
HX_STACK_FRAME("ScoreText","new",0xd5d7e971,"ScoreText.new","ScoreText.hx",15,0x73c1cf1f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_FieldWidth,"FieldWidth")
HX_STACK_ARG(Text,"Text")
HX_STACK_ARG(__o_Size,"Size")
HX_STACK_ARG(__o_EmbeddedFont,"EmbeddedFont")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
Dynamic FieldWidth = __o_FieldWidth.Default(0);
Dynamic Size = __o_Size.Default(8);
Dynamic EmbeddedFont = __o_EmbeddedFont.Default(true);
{
	HX_STACK_LINE(16)
	super::__construct(X,Y,FieldWidth,Text,Size,EmbeddedFont);
	HX_STACK_LINE(17)
	this->set_borderStyle((int)3);
	HX_STACK_LINE(18)
	this->set_borderColor((int)-1);
	HX_STACK_LINE(19)
	this->set_color((int)-16777216);
	HX_STACK_LINE(20)
	this->set_borderSize((int)1);
	HX_STACK_LINE(21)
	::flixel::util::FlxTimer _g = ::flixel::util::FlxTimer_obj::__new(2.5,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(21)
	this->lifetime = _g;
}
;
	return null();
}

//ScoreText_obj::~ScoreText_obj() { }

Dynamic ScoreText_obj::__CreateEmpty() { return  new ScoreText_obj; }
hx::ObjectPtr< ScoreText_obj > ScoreText_obj::__new(Dynamic __o_X,Dynamic __o_Y,Dynamic __o_FieldWidth,::String Text,Dynamic __o_Size,Dynamic __o_EmbeddedFont)
{  hx::ObjectPtr< ScoreText_obj > result = new ScoreText_obj();
	result->__construct(__o_X,__o_Y,__o_FieldWidth,Text,__o_Size,__o_EmbeddedFont);
	return result;}

Dynamic ScoreText_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScoreText_obj > result = new ScoreText_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

Void ScoreText_obj::update( ){
{
		HX_STACK_FRAME("ScoreText","update",0x8d93ad98,"ScoreText.update","ScoreText.hx",25,0x73c1cf1f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->setPosition(this->x,(this->y - 0.5));
		HX_STACK_LINE(27)
		if ((this->lifetime->finished)){
			HX_STACK_LINE(29)
			this->destroy();
			HX_STACK_LINE(30)
			return null();
		}
	}
return null();
}



ScoreText_obj::ScoreText_obj()
{
}

void ScoreText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScoreText);
	HX_MARK_MEMBER_NAME(lifetime,"lifetime");
	::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScoreText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifetime,"lifetime");
	::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ScoreText_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifetime") ) { return lifetime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScoreText_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"lifetime") ) { lifetime=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScoreText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lifetime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(ScoreText_obj,lifetime),HX_CSTRING("lifetime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lifetime"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScoreText_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScoreText_obj::__mClass,"__mClass");
};

#endif

Class ScoreText_obj::__mClass;

void ScoreText_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ScoreText"), hx::TCanCast< ScoreText_obj> ,sStaticFields,sMemberFields,
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

void ScoreText_obj::__boot()
{
}


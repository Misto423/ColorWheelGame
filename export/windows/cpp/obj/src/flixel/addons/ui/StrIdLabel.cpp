#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_StrIdLabel
#include <flixel/addons/ui/StrIdLabel.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

Void StrIdLabel_obj::__construct(::String __o_Id,::String __o_Label)
{
HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","new",0xc417916b,"flixel.addons.ui.StrIdLabel.new","flixel/addons/ui/StrIdLabel.hx",13,0x9376c9e4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_Id,"Id")
HX_STACK_ARG(__o_Label,"Label")
::String Id = __o_Id.Default(HX_CSTRING(""));
::String Label = __o_Label.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(14)
	this->id = Id;
	HX_STACK_LINE(15)
	this->label = Label;
}
;
	return null();
}

//StrIdLabel_obj::~StrIdLabel_obj() { }

Dynamic StrIdLabel_obj::__CreateEmpty() { return  new StrIdLabel_obj; }
hx::ObjectPtr< StrIdLabel_obj > StrIdLabel_obj::__new(::String __o_Id,::String __o_Label)
{  hx::ObjectPtr< StrIdLabel_obj > result = new StrIdLabel_obj();
	result->__construct(__o_Id,__o_Label);
	return result;}

Dynamic StrIdLabel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StrIdLabel_obj > result = new StrIdLabel_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::addons::ui::StrIdLabel StrIdLabel_obj::copy( ){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","copy",0xc949e44a,"flixel.addons.ui.StrIdLabel.copy","flixel/addons/ui/StrIdLabel.hx",19,0x9376c9e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(19)
	return ::flixel::addons::ui::StrIdLabel_obj::__new(this->id,this->label);
}


HX_DEFINE_DYNAMIC_FUNC0(StrIdLabel_obj,copy,return )

int StrIdLabel_obj::sortByLabel( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","sortByLabel",0x0a70a8ea,"flixel.addons.ui.StrIdLabel.sortByLabel","flixel/addons/ui/StrIdLabel.hx",22,0x9376c9e4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(23)
	if (((a->label < b->label))){
		HX_STACK_LINE(23)
		return (int)-1;
	}
	HX_STACK_LINE(24)
	if (((a->label > b->label))){
		HX_STACK_LINE(24)
		return (int)1;
	}
	HX_STACK_LINE(25)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrIdLabel_obj,sortByLabel,return )

int StrIdLabel_obj::sortById( ::flixel::addons::ui::StrIdLabel a,::flixel::addons::ui::StrIdLabel b){
	HX_STACK_FRAME("flixel.addons.ui.StrIdLabel","sortById",0x448beb25,"flixel.addons.ui.StrIdLabel.sortById","flixel/addons/ui/StrIdLabel.hx",28,0x9376c9e4)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(29)
	if (((a->id < b->id))){
		HX_STACK_LINE(29)
		return (int)-1;
	}
	HX_STACK_LINE(30)
	if (((a->id > b->id))){
		HX_STACK_LINE(30)
		return (int)1;
	}
	HX_STACK_LINE(31)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(StrIdLabel_obj,sortById,return )


StrIdLabel_obj::StrIdLabel_obj()
{
}

void StrIdLabel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrIdLabel);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_END_CLASS();
}

void StrIdLabel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(label,"label");
}

Dynamic StrIdLabel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return copy_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"sortById") ) { return sortById_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sortByLabel") ) { return sortByLabel_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StrIdLabel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StrIdLabel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("label"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sortByLabel"),
	HX_CSTRING("sortById"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(StrIdLabel_obj,id),HX_CSTRING("id")},
	{hx::fsString,(int)offsetof(StrIdLabel_obj,label),HX_CSTRING("label")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("label"),
	HX_CSTRING("copy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StrIdLabel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StrIdLabel_obj::__mClass,"__mClass");
};

#endif

Class StrIdLabel_obj::__mClass;

void StrIdLabel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.StrIdLabel"), hx::TCanCast< StrIdLabel_obj> ,sStaticFields,sMemberFields,
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

void StrIdLabel_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui

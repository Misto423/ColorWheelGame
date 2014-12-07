#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{

HX_DEFINE_DYNAMIC_FUNC0(IFlxUIButton_obj,autoCenterLabel,)

HX_DEFINE_DYNAMIC_FUNC10(IFlxUIButton_obj,loadGraphicSlice9,)

HX_DEFINE_DYNAMIC_FUNC2(IFlxUIButton_obj,loadGraphicsMultiple,)

HX_DEFINE_DYNAMIC_FUNC3(IFlxUIButton_obj,loadGraphicsUpOverDown,)

HX_DEFINE_DYNAMIC_FUNC1(IFlxUIButton_obj,forceStateHandler,)


static ::String sMemberFields[] = {
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
	HX_CSTRING("resize_ratio"),
	HX_CSTRING("resize_point"),
	HX_CSTRING("autoCenterLabel"),
	HX_CSTRING("loadGraphicSlice9"),
	HX_CSTRING("loadGraphicsMultiple"),
	HX_CSTRING("loadGraphicsUpOverDown"),
	HX_CSTRING("forceStateHandler"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxUIButton_obj::__mClass,"__mClass");
};

#endif

Class IFlxUIButton_obj::__mClass;

void IFlxUIButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.ui.interfaces.IFlxUIButton"), hx::TCanCast< IFlxUIButton_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IFlxUIButton_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

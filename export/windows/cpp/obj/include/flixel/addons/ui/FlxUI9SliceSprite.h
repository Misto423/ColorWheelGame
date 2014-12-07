#ifndef INCLUDED_flixel_addons_ui_FlxUI9SliceSprite
#define INCLUDED_flixel_addons_ui_FlxUI9SliceSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/ui/FlxUISprite.h>
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#include <flixel/addons/ui/interfaces/IResizable.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSprite)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_v2,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,geom,Matrix)
HX_DECLARE_CLASS3(openfl,_v2,geom,Point)
HX_DECLARE_CLASS3(openfl,_v2,geom,Rectangle)
namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  FlxUI9SliceSprite_obj : public ::flixel::addons::ui::FlxUISprite_obj{
	public:
		typedef ::flixel::addons::ui::FlxUISprite_obj super;
		typedef FlxUI9SliceSprite_obj OBJ_;
		FlxUI9SliceSprite_obj();
		Void __construct(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxUI9SliceSprite_obj > __new(Float X,Float Y,Dynamic Graphic,::openfl::_v2::geom::Rectangle Rect,Array< int > Slice9,hx::Null< int >  __o_Tile,hx::Null< bool >  __o_Smooth,::String __o_Id,hx::Null< Float >  __o_Ratio,::flixel::util::FlxPoint Resize_point);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxUI9SliceSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::flixel::interfaces::IFlxSprite_obj *()
			{ return new ::flixel::interfaces::IFlxSprite_delegate_< FlxUI9SliceSprite_obj >(this); }
		inline operator ::flixel::interfaces::IFlxBasic_obj *()
			{ return new ::flixel::interfaces::IFlxBasic_delegate_< FlxUI9SliceSprite_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IFlxUIWidget_obj *()
			{ return new ::flixel::addons::ui::interfaces::IFlxUIWidget_delegate_< FlxUI9SliceSprite_obj >(this); }
		inline operator ::flixel::addons::ui::interfaces::IResizable_obj *()
			{ return new ::flixel::addons::ui::interfaces::IResizable_delegate_< FlxUI9SliceSprite_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("FlxUI9SliceSprite"); }

		::openfl::_v2::display::BitmapData _bmpCanvas;
		Array< int > _slice9;
		int _tile;
		bool _smooth;
		::String _asset_id;
		::openfl::_v2::display::BitmapData _raw_pixels;
		Float resize_ratio;
		virtual Float set_resize_ratio( Float r);
		Dynamic set_resize_ratio_dyn();

		::flixel::util::FlxPoint resize_point;
		virtual ::flixel::util::FlxPoint set_resize_point( ::flixel::util::FlxPoint r);
		Dynamic set_resize_point_dyn();

		virtual Void resize( Float w,Float h);
		Dynamic resize_dyn();

		static int bitmapsCreated;
		static ::openfl::_v2::display::Sprite _canvas;
		static bool useSectionCache;
		static ::haxe::ds::StringMap sectionCache;
		static ::openfl::_v2::geom::Point _staticPoint;
		static ::openfl::_v2::geom::Rectangle _staticRect;
		static ::openfl::_v2::geom::Rectangle _staticRect2;
		static ::openfl::_v2::geom::Point _staticPointZero;
		static ::openfl::_v2::geom::Matrix _staticMatrix;
		static ::flixel::util::FlxRect _staticFlxRect;
		static ::flixel::util::FlxRect _staticFlxRect2;
		static int TILE_NONE;
		static int TILE_BOTH;
		static int TILE_H;
		static int TILE_V;
		static ::haxe::ds::StringMap _staticRects;
		static ::openfl::_v2::geom::Rectangle getRectFromString( ::String str);
		static Dynamic getRectFromString_dyn();

		static Array< int > getRectIntsFromString( ::String str);
		static Dynamic getRectIntsFromString_dyn();

		static Void paintScale9( ::openfl::_v2::display::BitmapData g,::String assetID,Array< int > scale9,::flixel::util::FlxRect rc,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_v2::display::BitmapData raw);
		static Dynamic paintScale9_dyn();

		static Void paintCompoundBitmap( ::openfl::_v2::display::BitmapData g,::String assetID,::haxe::ds::StringMap sourceRects,::flixel::util::FlxRect targetRect,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_v2::display::BitmapData raw);
		static Dynamic paintCompoundBitmap_dyn();

		static Void paintBitmapSection( ::openfl::_v2::display::BitmapData g,::String assetId,::flixel::util::FlxRect src,::flixel::util::FlxRect dst,::openfl::_v2::display::BitmapData srcData,hx::Null< int >  tile,hx::Null< bool >  smooth,::openfl::_v2::display::BitmapData raw);
		static Dynamic paintBitmapSection_dyn();

		static Void bitmapFillRect( ::openfl::_v2::display::BitmapData g,::openfl::_v2::geom::Rectangle dst,::openfl::_v2::display::BitmapData section,hx::Null< int >  tile,hx::Null< bool >  smooth_);
		static Dynamic bitmapFillRect_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUI9SliceSprite */ 

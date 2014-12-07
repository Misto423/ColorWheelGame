#ifndef INCLUDED_ScoreText
#define INCLUDED_ScoreText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/text/FlxText.h>
HX_DECLARE_CLASS0(ScoreText)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  ScoreText_obj : public ::flixel::text::FlxText_obj{
	public:
		typedef ::flixel::text::FlxText_obj super;
		typedef ScoreText_obj OBJ_;
		ScoreText_obj();
		Void __construct(Dynamic __o_X,Dynamic __o_Y,Dynamic __o_FieldWidth,::String Text,Dynamic __o_Size,Dynamic __o_EmbeddedFont);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScoreText_obj > __new(Dynamic __o_X,Dynamic __o_Y,Dynamic __o_FieldWidth,::String Text,Dynamic __o_Size,Dynamic __o_EmbeddedFont);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScoreText_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScoreText"); }

		::flixel::util::FlxTimer lifetime;
		virtual Void update( );

};


#endif /* INCLUDED_ScoreText */ 

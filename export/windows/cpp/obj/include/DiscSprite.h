#ifndef INCLUDED_DiscSprite
#define INCLUDED_DiscSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(DiscSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  DiscSprite_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef DiscSprite_obj OBJ_;
		DiscSprite_obj();
		Void __construct(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic,Dynamic __o_index);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DiscSprite_obj > __new(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic,Dynamic __o_index);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DiscSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DiscSprite"); }

		Array< int > colors;
		int topLeft;
		virtual int getColor( int pos);
		Dynamic getColor_dyn();

		virtual Void rotate( bool direction);
		Dynamic rotate_dyn();

		virtual Void setupArray( int index);
		Dynamic setupArray_dyn();

};


#endif /* INCLUDED_DiscSprite */ 

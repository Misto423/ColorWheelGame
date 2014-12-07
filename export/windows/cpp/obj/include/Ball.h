#ifndef INCLUDED_Ball
#define INCLUDED_Ball

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Ball)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Ball_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Ball_obj OBJ_;
		Ball_obj();
		Void __construct(int spd,Dynamic __o_p);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Ball_obj > __new(int spd,Dynamic __o_p);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Ball_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Ball"); }

		Float vel;
		Float accel;
		int start;
		Array< bool > DiscsTriggered;
		bool shouldDestroy;
		virtual Void TriggerDisc( int discIndex);
		Dynamic TriggerDisc_dyn();

		virtual bool IsDiscTriggered( int discIndex);
		Dynamic IsDiscTriggered_dyn();

		virtual Void HandleMovement( );
		Dynamic HandleMovement_dyn();

		virtual Float CalcMoveAngle( );
		Dynamic CalcMoveAngle_dyn();

};


#endif /* INCLUDED_Ball */ 

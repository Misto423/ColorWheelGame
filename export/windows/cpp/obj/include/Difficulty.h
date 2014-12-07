#ifndef INCLUDED_Difficulty
#define INCLUDED_Difficulty

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Difficulty)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  Difficulty_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Difficulty_obj OBJ_;
		Difficulty_obj();
		Void __construct(Dynamic __o_start);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Difficulty_obj > __new(Dynamic __o_start);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Difficulty_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Difficulty"); }

		int curDiff;
		::flixel::util::FlxTimer spawnTimer;
		virtual Void InitSpawnTimer( );
		Dynamic InitSpawnTimer_dyn();

		virtual Void IncreaseDifficulty( );
		Dynamic IncreaseDifficulty_dyn();

		virtual bool ShouldSpawn( );
		Dynamic ShouldSpawn_dyn();

		virtual int getBallSpeed( );
		Dynamic getBallSpeed_dyn();

		virtual int getBallSpawnPercent( );
		Dynamic getBallSpawnPercent_dyn();

};


#endif /* INCLUDED_Difficulty */ 

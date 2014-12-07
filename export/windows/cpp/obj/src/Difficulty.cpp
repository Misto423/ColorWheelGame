#include <hxcpp.h>

#ifndef INCLUDED_Difficulty
#include <Difficulty.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif

Void Difficulty_obj::__construct(Dynamic __o_start)
{
HX_STACK_FRAME("Difficulty","new",0x2982bccd,"Difficulty.new","Difficulty.hx",8,0x62e99b43)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_start,"start")
Dynamic start = __o_start.Default(1);
{
	HX_STACK_LINE(9)
	this->curDiff = start;
	HX_STACK_LINE(10)
	this->InitSpawnTimer();
}
;
	return null();
}

//Difficulty_obj::~Difficulty_obj() { }

Dynamic Difficulty_obj::__CreateEmpty() { return  new Difficulty_obj; }
hx::ObjectPtr< Difficulty_obj > Difficulty_obj::__new(Dynamic __o_start)
{  hx::ObjectPtr< Difficulty_obj > result = new Difficulty_obj();
	result->__construct(__o_start);
	return result;}

Dynamic Difficulty_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Difficulty_obj > result = new Difficulty_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Difficulty_obj::InitSpawnTimer( ){
{
		HX_STACK_FRAME("Difficulty","InitSpawnTimer",0xba90a38d,"Difficulty.InitSpawnTimer","Difficulty.hx",15,0x62e99b43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(15)
		int _g = this->curDiff;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(15)
		switch( (int)(_g)){
			case (int)1: {
				HX_STACK_LINE(18)
				::flixel::util::FlxTimer _g1 = ::flixel::util::FlxTimer_obj::__new(2.5,null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(18)
				this->spawnTimer = _g1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(20)
				::flixel::util::FlxTimer _g1 = ::flixel::util::FlxTimer_obj::__new(2.25,null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(20)
				this->spawnTimer = _g1;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(22)
				::flixel::util::FlxTimer _g2 = ::flixel::util::FlxTimer_obj::__new((int)2,null(),null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(22)
				this->spawnTimer = _g2;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(24)
				::flixel::util::FlxTimer _g3 = ::flixel::util::FlxTimer_obj::__new(1.75,null(),null());		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(24)
				this->spawnTimer = _g3;
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(26)
				::flixel::util::FlxTimer _g4 = ::flixel::util::FlxTimer_obj::__new(1.25,null(),null());		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(26)
				this->spawnTimer = _g4;
			}
			;break;
			default: {
				HX_STACK_LINE(28)
				::flixel::util::FlxTimer _g5 = ::flixel::util::FlxTimer_obj::__new(2.5,null(),null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(28)
				this->spawnTimer = _g5;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,InitSpawnTimer,(void))

Void Difficulty_obj::IncreaseDifficulty( ){
{
		HX_STACK_FRAME("Difficulty","IncreaseDifficulty",0x4e3bcef0,"Difficulty.IncreaseDifficulty","Difficulty.hx",34,0x62e99b43)
		HX_STACK_THIS(this)
		HX_STACK_LINE(34)
		if (((this->curDiff < (int)5))){
			HX_STACK_LINE(36)
			(this->curDiff)++;
			HX_STACK_LINE(37)
			this->InitSpawnTimer();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,IncreaseDifficulty,(void))

bool Difficulty_obj::ShouldSpawn( ){
	HX_STACK_FRAME("Difficulty","ShouldSpawn",0x812f0655,"Difficulty.ShouldSpawn","Difficulty.hx",42,0x62e99b43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	if ((this->spawnTimer->finished)){
		HX_STACK_LINE(45)
		this->spawnTimer->reset(null());
		HX_STACK_LINE(46)
		return true;
	}
	HX_STACK_LINE(48)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,ShouldSpawn,return )

int Difficulty_obj::getBallSpeed( ){
	HX_STACK_FRAME("Difficulty","getBallSpeed",0x1156c385,"Difficulty.getBallSpeed","Difficulty.hx",53,0x62e99b43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	int _g = this->curDiff;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(53)
	switch( (int)(_g)){
		case (int)1: {
			HX_STACK_LINE(56)
			return (int)50;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(58)
			return (int)75;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(60)
			return (int)100;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(62)
			return (int)125;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(64)
			return (int)175;
		}
		;break;
		default: {
			HX_STACK_LINE(66)
			return (int)50;
		}
	}
	HX_STACK_LINE(53)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,getBallSpeed,return )

int Difficulty_obj::getBallSpawnPercent( ){
	HX_STACK_FRAME("Difficulty","getBallSpawnPercent",0xdf80b18c,"Difficulty.getBallSpawnPercent","Difficulty.hx",72,0x62e99b43)
	HX_STACK_THIS(this)
	HX_STACK_LINE(72)
	int _g = this->curDiff;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(72)
	switch( (int)(_g)){
		case (int)1: {
			HX_STACK_LINE(75)
			return (int)75;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(77)
			return (int)70;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(79)
			return (int)65;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(81)
			return (int)60;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(83)
			return (int)50;
		}
		;break;
		default: {
			HX_STACK_LINE(85)
			return (int)75;
		}
	}
	HX_STACK_LINE(72)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Difficulty_obj,getBallSpawnPercent,return )


Difficulty_obj::Difficulty_obj()
{
}

void Difficulty_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Difficulty);
	HX_MARK_MEMBER_NAME(curDiff,"curDiff");
	HX_MARK_MEMBER_NAME(spawnTimer,"spawnTimer");
	HX_MARK_END_CLASS();
}

void Difficulty_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curDiff,"curDiff");
	HX_VISIT_MEMBER_NAME(spawnTimer,"spawnTimer");
}

Dynamic Difficulty_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curDiff") ) { return curDiff; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnTimer") ) { return spawnTimer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"ShouldSpawn") ) { return ShouldSpawn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getBallSpeed") ) { return getBallSpeed_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"InitSpawnTimer") ) { return InitSpawnTimer_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"IncreaseDifficulty") ) { return IncreaseDifficulty_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getBallSpawnPercent") ) { return getBallSpawnPercent_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Difficulty_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"curDiff") ) { curDiff=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnTimer") ) { spawnTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Difficulty_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("curDiff"));
	outFields->push(HX_CSTRING("spawnTimer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Difficulty_obj,curDiff),HX_CSTRING("curDiff")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(Difficulty_obj,spawnTimer),HX_CSTRING("spawnTimer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("curDiff"),
	HX_CSTRING("spawnTimer"),
	HX_CSTRING("InitSpawnTimer"),
	HX_CSTRING("IncreaseDifficulty"),
	HX_CSTRING("ShouldSpawn"),
	HX_CSTRING("getBallSpeed"),
	HX_CSTRING("getBallSpawnPercent"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Difficulty_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Difficulty_obj::__mClass,"__mClass");
};

#endif

Class Difficulty_obj::__mClass;

void Difficulty_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Difficulty"), hx::TCanCast< Difficulty_obj> ,sStaticFields,sMemberFields,
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

void Difficulty_obj::__boot()
{
}


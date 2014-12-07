#include <hxcpp.h>

#ifndef INCLUDED_Ball
#include <Ball.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Ball_obj::__construct(int spd,Dynamic __o_p)
{
HX_STACK_FRAME("Ball","new",0xfd30aa91,"Ball.new","Ball.hx",8,0xf7f391ff)
HX_STACK_THIS(this)
HX_STACK_ARG(spd,"spd")
HX_STACK_ARG(__o_p,"p")
Dynamic p = __o_p.Default(0);
{
	HX_STACK_LINE(14)
	this->shouldDestroy = false;
	HX_STACK_LINE(11)
	this->accel = 3.0;
	HX_STACK_LINE(10)
	this->vel = (int)500;
	HX_STACK_LINE(18)
	Float x;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(18)
	Float y;		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(19)
	if (((p == (int)0))){
		HX_STACK_LINE(21)
		Float _g = y = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(21)
		x = _g;
	}
	else{
		HX_STACK_LINE(23)
		if (((p == (int)1))){
			HX_STACK_LINE(25)
			x = (int)700;
			HX_STACK_LINE(26)
			y = (int)0;
		}
		else{
			HX_STACK_LINE(28)
			if (((p == (int)2))){
				HX_STACK_LINE(30)
				Float _g1 = y = (int)700;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(30)
				x = _g1;
			}
			else{
				HX_STACK_LINE(34)
				x = (int)0;
				HX_STACK_LINE(35)
				y = (int)700;
			}
		}
	}
	HX_STACK_LINE(38)
	super::__construct(x,y,null());
	HX_STACK_LINE(39)
	this->start = p;
	HX_STACK_LINE(40)
	this->vel = spd;
	HX_STACK_LINE(41)
	this->loadGraphic(HX_CSTRING("assets/images/ball.png"),null(),null(),null(),null(),null());
	HX_STACK_LINE(42)
	Array< bool > _g2 = Array_obj< bool >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(42)
	this->DiscsTriggered = _g2;
	HX_STACK_LINE(43)
	{
		HX_STACK_LINE(43)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		while((true)){
			HX_STACK_LINE(43)
			if ((!(((_g < (int)9))))){
				HX_STACK_LINE(43)
				break;
			}
			HX_STACK_LINE(43)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(45)
			this->DiscsTriggered[i] = false;
		}
	}
}
;
	return null();
}

//Ball_obj::~Ball_obj() { }

Dynamic Ball_obj::__CreateEmpty() { return  new Ball_obj; }
hx::ObjectPtr< Ball_obj > Ball_obj::__new(int spd,Dynamic __o_p)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(spd,__o_p);
	return result;}

Dynamic Ball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Ball_obj > result = new Ball_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Ball_obj::TriggerDisc( int discIndex){
{
		HX_STACK_FRAME("Ball","TriggerDisc",0x8d0f6fbe,"Ball.TriggerDisc","Ball.hx",51,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_ARG(discIndex,"discIndex")
		HX_STACK_LINE(51)
		this->DiscsTriggered[discIndex] = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Ball_obj,TriggerDisc,(void))

bool Ball_obj::IsDiscTriggered( int discIndex){
	HX_STACK_FRAME("Ball","IsDiscTriggered",0x48a902c9,"Ball.IsDiscTriggered","Ball.hx",55,0xf7f391ff)
	HX_STACK_THIS(this)
	HX_STACK_ARG(discIndex,"discIndex")
	HX_STACK_LINE(55)
	return this->DiscsTriggered->__get(discIndex);
}


HX_DEFINE_DYNAMIC_FUNC1(Ball_obj,IsDiscTriggered,return )

Void Ball_obj::HandleMovement( ){
{
		HX_STACK_FRAME("Ball","HandleMovement",0x4a05a286,"Ball.HandleMovement","Ball.hx",59,0xf7f391ff)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		if (((bool((bool((bool((this->x > (int)290)) && bool((this->x < (int)410)))) && bool((this->y > (int)290)))) && bool((this->y < (int)410))))){
			HX_STACK_LINE(62)
			this->destroy();
			HX_STACK_LINE(63)
			return null();
		}
		HX_STACK_LINE(65)
		if ((this->shouldDestroy)){
			HX_STACK_LINE(67)
			this->destroy();
			HX_STACK_LINE(68)
			return null();
		}
		HX_STACK_LINE(70)
		Float _g = this->drag->set_y((int)1600);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		this->drag->set_x(_g);
		HX_STACK_LINE(71)
		this->velocity->set_x(this->vel);
		HX_STACK_LINE(72)
		this->velocity->set_y(this->vel);
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			Float Angle = this->CalcMoveAngle();		HX_STACK_VAR(Angle,"Angle");
			HX_STACK_LINE(73)
			::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(73)
			Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
			HX_STACK_LINE(73)
			Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
			HX_STACK_LINE(73)
			Float radians = (Angle * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				if ((!(((radians < -(::Math_obj::PI)))))){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				hx::AddEq(radians,(::Math_obj::PI * (int)2));
			}
			HX_STACK_LINE(73)
			while((true)){
				HX_STACK_LINE(73)
				if ((!(((radians > ::Math_obj::PI))))){
					HX_STACK_LINE(73)
					break;
				}
				HX_STACK_LINE(73)
				radians = (radians - (::Math_obj::PI * (int)2));
			}
			HX_STACK_LINE(73)
			if (((radians < (int)0))){
				HX_STACK_LINE(73)
				sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
				HX_STACK_LINE(73)
				if (((sin < (int)0))){
					HX_STACK_LINE(73)
					sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
				}
				else{
					HX_STACK_LINE(73)
					sin = ((.225 * (((sin * sin) - sin))) + sin);
				}
			}
			else{
				HX_STACK_LINE(73)
				sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
				HX_STACK_LINE(73)
				if (((sin < (int)0))){
					HX_STACK_LINE(73)
					sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
				}
				else{
					HX_STACK_LINE(73)
					sin = ((.225 * (((sin * sin) - sin))) + sin);
				}
			}
			HX_STACK_LINE(73)
			hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
			HX_STACK_LINE(73)
			if (((radians > ::Math_obj::PI))){
				HX_STACK_LINE(73)
				radians = (radians - (::Math_obj::PI * (int)2));
			}
			HX_STACK_LINE(73)
			if (((radians < (int)0))){
				HX_STACK_LINE(73)
				cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
				HX_STACK_LINE(73)
				if (((cos < (int)0))){
					HX_STACK_LINE(73)
					cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
				}
				else{
					HX_STACK_LINE(73)
					cos = ((.225 * (((cos * cos) - cos))) + cos);
				}
			}
			else{
				HX_STACK_LINE(73)
				cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
				HX_STACK_LINE(73)
				if (((cos < (int)0))){
					HX_STACK_LINE(73)
					cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
				}
				else{
					HX_STACK_LINE(73)
					cos = ((.225 * (((cos * cos) - cos))) + cos);
				}
			}
			HX_STACK_LINE(73)
			Float dx = this->vel;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(73)
			Float dy = (int)0;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(73)
			if (((point == null()))){
				HX_STACK_LINE(73)
				::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(73)
				{
					HX_STACK_LINE(73)
					Float X = (int)0;		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(73)
					Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(73)
					::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(73)
					point1->_inPool = false;
					HX_STACK_LINE(73)
					_g1 = point1;
				}
				HX_STACK_LINE(73)
				point = _g1;
			}
			HX_STACK_LINE(73)
			point->set_x(((cos * dx) - (sin * dy)));
			HX_STACK_LINE(73)
			point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
			HX_STACK_LINE(73)
			point;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,HandleMovement,(void))

Float Ball_obj::CalcMoveAngle( ){
	HX_STACK_FRAME("Ball","CalcMoveAngle",0xa1cad0fe,"Ball.CalcMoveAngle","Ball.hx",78,0xf7f391ff)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	if (((this->start == (int)0))){
		HX_STACK_LINE(80)
		return (int)45;
	}
	else{
		HX_STACK_LINE(82)
		if (((this->start == (int)1))){
			HX_STACK_LINE(84)
			return (int)135;
		}
		else{
			HX_STACK_LINE(86)
			if (((this->start == (int)2))){
				HX_STACK_LINE(88)
				return (int)-135;
			}
			else{
				HX_STACK_LINE(92)
				return (int)-45;
			}
		}
	}
	HX_STACK_LINE(78)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC0(Ball_obj,CalcMoveAngle,return )


Ball_obj::Ball_obj()
{
}

void Ball_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ball);
	HX_MARK_MEMBER_NAME(vel,"vel");
	HX_MARK_MEMBER_NAME(accel,"accel");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(DiscsTriggered,"DiscsTriggered");
	HX_MARK_MEMBER_NAME(shouldDestroy,"shouldDestroy");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Ball_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vel,"vel");
	HX_VISIT_MEMBER_NAME(accel,"accel");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(DiscsTriggered,"DiscsTriggered");
	HX_VISIT_MEMBER_NAME(shouldDestroy,"shouldDestroy");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Ball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { return vel; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"accel") ) { return accel; }
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"TriggerDisc") ) { return TriggerDisc_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shouldDestroy") ) { return shouldDestroy; }
		if (HX_FIELD_EQ(inName,"CalcMoveAngle") ) { return CalcMoveAngle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DiscsTriggered") ) { return DiscsTriggered; }
		if (HX_FIELD_EQ(inName,"HandleMovement") ) { return HandleMovement_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"IsDiscTriggered") ) { return IsDiscTriggered_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Ball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"vel") ) { vel=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"accel") ) { accel=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"shouldDestroy") ) { shouldDestroy=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"DiscsTriggered") ) { DiscsTriggered=inValue.Cast< Array< bool > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("vel"));
	outFields->push(HX_CSTRING("accel"));
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("DiscsTriggered"));
	outFields->push(HX_CSTRING("shouldDestroy"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Ball_obj,vel),HX_CSTRING("vel")},
	{hx::fsFloat,(int)offsetof(Ball_obj,accel),HX_CSTRING("accel")},
	{hx::fsInt,(int)offsetof(Ball_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*Array< bool >*/ ,(int)offsetof(Ball_obj,DiscsTriggered),HX_CSTRING("DiscsTriggered")},
	{hx::fsBool,(int)offsetof(Ball_obj,shouldDestroy),HX_CSTRING("shouldDestroy")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("vel"),
	HX_CSTRING("accel"),
	HX_CSTRING("start"),
	HX_CSTRING("DiscsTriggered"),
	HX_CSTRING("shouldDestroy"),
	HX_CSTRING("TriggerDisc"),
	HX_CSTRING("IsDiscTriggered"),
	HX_CSTRING("HandleMovement"),
	HX_CSTRING("CalcMoveAngle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Ball_obj::__mClass,"__mClass");
};

#endif

Class Ball_obj::__mClass;

void Ball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Ball"), hx::TCanCast< Ball_obj> ,sStaticFields,sMemberFields,
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

void Ball_obj::__boot()
{
}


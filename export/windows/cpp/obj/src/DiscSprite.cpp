#include <hxcpp.h>

#ifndef INCLUDED_DiscSprite
#include <DiscSprite.h>
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

Void DiscSprite_obj::__construct(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic,Dynamic __o_index)
{
HX_STACK_FRAME("DiscSprite","new",0x8120bf4c,"DiscSprite.new","DiscSprite.hx",10,0xb71bada4)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(SimpleGraphic,"SimpleGraphic")
HX_STACK_ARG(__o_index,"index")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
Dynamic index = __o_index.Default(8);
{
	HX_STACK_LINE(11)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(11)
	this->colors = _g;
	HX_STACK_LINE(12)
	this->setupArray(index);
	HX_STACK_LINE(13)
	this->topLeft = (int)0;
	HX_STACK_LINE(15)
	super::__construct(X,Y,SimpleGraphic);
}
;
	return null();
}

//DiscSprite_obj::~DiscSprite_obj() { }

Dynamic DiscSprite_obj::__CreateEmpty() { return  new DiscSprite_obj; }
hx::ObjectPtr< DiscSprite_obj > DiscSprite_obj::__new(Dynamic __o_X,Dynamic __o_Y,Dynamic SimpleGraphic,Dynamic __o_index)
{  hx::ObjectPtr< DiscSprite_obj > result = new DiscSprite_obj();
	result->__construct(__o_X,__o_Y,SimpleGraphic,__o_index);
	return result;}

Dynamic DiscSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DiscSprite_obj > result = new DiscSprite_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

int DiscSprite_obj::getColor( int pos){
	HX_STACK_FRAME("DiscSprite","getColor",0x1200fa81,"DiscSprite.getColor","DiscSprite.hx",20,0xb71bada4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pos,"pos")
	HX_STACK_LINE(20)
	if (((pos == (int)0))){
		HX_STACK_LINE(21)
		return this->colors->__get(this->topLeft);
	}
	else{
		HX_STACK_LINE(22)
		if (((pos == (int)1))){
			HX_STACK_LINE(23)
			if ((((this->topLeft + (int)2) >= (int)8))){
				HX_STACK_LINE(24)
				return this->colors->__get(((this->topLeft + (int)2) - (int)8));
			}
			else{
				HX_STACK_LINE(26)
				return this->colors->__get((this->topLeft + (int)2));
			}
		}
		else{
			HX_STACK_LINE(27)
			if (((pos == (int)2))){
				HX_STACK_LINE(28)
				if ((((this->topLeft + (int)4) >= (int)8))){
					HX_STACK_LINE(29)
					return this->colors->__get(((this->topLeft + (int)4) - (int)8));
				}
				else{
					HX_STACK_LINE(31)
					return this->colors->__get((this->topLeft + (int)4));
				}
			}
			else{
				HX_STACK_LINE(33)
				if ((((this->topLeft + (int)6) >= (int)8))){
					HX_STACK_LINE(34)
					return this->colors->__get(((this->topLeft + (int)6) - (int)8));
				}
				else{
					HX_STACK_LINE(36)
					return this->colors->__get((this->topLeft + (int)6));
				}
			}
		}
	}
	HX_STACK_LINE(20)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(DiscSprite_obj,getColor,return )

Void DiscSprite_obj::rotate( bool direction){
{
		HX_STACK_FRAME("DiscSprite","rotate",0xbe9a72ef,"DiscSprite.rotate","DiscSprite.hx",41,0xb71bada4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(direction,"direction")
		HX_STACK_LINE(41)
		if ((direction)){
			HX_STACK_LINE(43)
			if (((this->topLeft < (int)7))){
				HX_STACK_LINE(43)
				(this->topLeft)++;
			}
			else{
				HX_STACK_LINE(44)
				this->topLeft = (int)0;
			}
		}
		else{
			HX_STACK_LINE(48)
			if (((this->topLeft > (int)0))){
				HX_STACK_LINE(48)
				(this->topLeft)--;
			}
			else{
				HX_STACK_LINE(49)
				this->topLeft = (int)7;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DiscSprite_obj,rotate,(void))

Void DiscSprite_obj::setupArray( int index){
{
		HX_STACK_FRAME("DiscSprite","setupArray",0x18e09070,"DiscSprite.setupArray","DiscSprite.hx",56,0xb71bada4)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(56)
		if (((index == (int)0))){
			HX_STACK_LINE(58)
			this->colors[(int)0] = (int)16711680;
			HX_STACK_LINE(59)
			this->colors[(int)1] = (int)8388736;
			HX_STACK_LINE(60)
			this->colors[(int)2] = (int)16711808;
			HX_STACK_LINE(61)
			this->colors[(int)3] = (int)16744448;
			HX_STACK_LINE(62)
			this->colors[(int)4] = (int)65280;
			HX_STACK_LINE(63)
			this->colors[(int)5] = (int)255;
			HX_STACK_LINE(64)
			this->colors[(int)6] = (int)16777088;
			HX_STACK_LINE(65)
			this->colors[(int)7] = (int)4227200;
		}
		else{
			HX_STACK_LINE(67)
			if (((index == (int)1))){
				HX_STACK_LINE(69)
				this->colors[(int)0] = (int)255;
				HX_STACK_LINE(70)
				this->colors[(int)1] = (int)16777088;
				HX_STACK_LINE(71)
				this->colors[(int)2] = (int)8388736;
				HX_STACK_LINE(72)
				this->colors[(int)3] = (int)16711680;
				HX_STACK_LINE(73)
				this->colors[(int)4] = (int)65280;
				HX_STACK_LINE(74)
				this->colors[(int)5] = (int)16711808;
				HX_STACK_LINE(75)
				this->colors[(int)6] = (int)16744448;
				HX_STACK_LINE(76)
				this->colors[(int)7] = (int)4227200;
			}
			else{
				HX_STACK_LINE(78)
				if (((index == (int)2))){
					HX_STACK_LINE(80)
					this->colors[(int)0] = (int)8388736;
					HX_STACK_LINE(81)
					this->colors[(int)1] = (int)255;
					HX_STACK_LINE(82)
					this->colors[(int)2] = (int)65280;
					HX_STACK_LINE(83)
					this->colors[(int)3] = (int)4227200;
					HX_STACK_LINE(84)
					this->colors[(int)4] = (int)16711808;
					HX_STACK_LINE(85)
					this->colors[(int)5] = (int)16711680;
					HX_STACK_LINE(86)
					this->colors[(int)6] = (int)16777088;
					HX_STACK_LINE(87)
					this->colors[(int)7] = (int)16744448;
				}
				else{
					HX_STACK_LINE(89)
					if (((index == (int)3))){
						HX_STACK_LINE(91)
						this->colors[(int)0] = (int)0;
						HX_STACK_LINE(92)
						this->colors[(int)1] = (int)16777215;
						HX_STACK_LINE(93)
						this->colors[(int)2] = (int)0;
						HX_STACK_LINE(94)
						this->colors[(int)3] = (int)0;
						HX_STACK_LINE(95)
						this->colors[(int)4] = (int)16777215;
						HX_STACK_LINE(96)
						this->colors[(int)5] = (int)0;
						HX_STACK_LINE(97)
						this->colors[(int)6] = (int)16777215;
						HX_STACK_LINE(98)
						this->colors[(int)7] = (int)0;
					}
					else{
						HX_STACK_LINE(100)
						if (((index == (int)4))){
							HX_STACK_LINE(102)
							this->colors[(int)0] = (int)255;
							HX_STACK_LINE(103)
							this->colors[(int)1] = (int)16744448;
							HX_STACK_LINE(104)
							this->colors[(int)2] = (int)16711680;
							HX_STACK_LINE(105)
							this->colors[(int)3] = (int)16777088;
							HX_STACK_LINE(106)
							this->colors[(int)4] = (int)16711808;
							HX_STACK_LINE(107)
							this->colors[(int)5] = (int)8388736;
							HX_STACK_LINE(108)
							this->colors[(int)6] = (int)65280;
							HX_STACK_LINE(109)
							this->colors[(int)7] = (int)4227200;
						}
						else{
							HX_STACK_LINE(111)
							if (((index == (int)5))){
								HX_STACK_LINE(113)
								this->colors[(int)0] = (int)8388736;
								HX_STACK_LINE(114)
								this->colors[(int)1] = (int)4227200;
								HX_STACK_LINE(115)
								this->colors[(int)2] = (int)16744448;
								HX_STACK_LINE(116)
								this->colors[(int)3] = (int)16711808;
								HX_STACK_LINE(117)
								this->colors[(int)4] = (int)255;
								HX_STACK_LINE(118)
								this->colors[(int)5] = (int)16711680;
								HX_STACK_LINE(119)
								this->colors[(int)6] = (int)65280;
								HX_STACK_LINE(120)
								this->colors[(int)7] = (int)16777088;
							}
							else{
								HX_STACK_LINE(122)
								if (((index == (int)6))){
									HX_STACK_LINE(124)
									this->colors[(int)0] = (int)16744448;
									HX_STACK_LINE(125)
									this->colors[(int)1] = (int)8388736;
									HX_STACK_LINE(126)
									this->colors[(int)2] = (int)16711808;
									HX_STACK_LINE(127)
									this->colors[(int)3] = (int)16711680;
									HX_STACK_LINE(128)
									this->colors[(int)4] = (int)4227200;
									HX_STACK_LINE(129)
									this->colors[(int)5] = (int)16777088;
									HX_STACK_LINE(130)
									this->colors[(int)6] = (int)255;
									HX_STACK_LINE(131)
									this->colors[(int)7] = (int)65280;
								}
								else{
									HX_STACK_LINE(133)
									if (((index == (int)7))){
										HX_STACK_LINE(135)
										this->colors[(int)0] = (int)0;
										HX_STACK_LINE(136)
										this->colors[(int)1] = (int)16777215;
										HX_STACK_LINE(137)
										this->colors[(int)2] = (int)0;
										HX_STACK_LINE(138)
										this->colors[(int)3] = (int)0;
										HX_STACK_LINE(139)
										this->colors[(int)4] = (int)16777215;
										HX_STACK_LINE(140)
										this->colors[(int)5] = (int)0;
										HX_STACK_LINE(141)
										this->colors[(int)6] = (int)16777215;
										HX_STACK_LINE(142)
										this->colors[(int)7] = (int)0;
									}
									else{
										HX_STACK_LINE(146)
										this->colors[(int)0] = (int)16744448;
										HX_STACK_LINE(147)
										this->colors[(int)1] = (int)16711680;
										HX_STACK_LINE(148)
										this->colors[(int)2] = (int)16711808;
										HX_STACK_LINE(149)
										this->colors[(int)3] = (int)8388736;
										HX_STACK_LINE(150)
										this->colors[(int)4] = (int)255;
										HX_STACK_LINE(151)
										this->colors[(int)5] = (int)4227200;
										HX_STACK_LINE(152)
										this->colors[(int)6] = (int)65280;
										HX_STACK_LINE(153)
										this->colors[(int)7] = (int)16777088;
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DiscSprite_obj,setupArray,(void))


DiscSprite_obj::DiscSprite_obj()
{
}

void DiscSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DiscSprite);
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(topLeft,"topLeft");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DiscSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(topLeft,"topLeft");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DiscSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return colors; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { return topLeft; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setupArray") ) { return setupArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DiscSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"topLeft") ) { topLeft=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DiscSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colors"));
	outFields->push(HX_CSTRING("topLeft"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DiscSprite_obj,colors),HX_CSTRING("colors")},
	{hx::fsInt,(int)offsetof(DiscSprite_obj,topLeft),HX_CSTRING("topLeft")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("colors"),
	HX_CSTRING("topLeft"),
	HX_CSTRING("getColor"),
	HX_CSTRING("rotate"),
	HX_CSTRING("setupArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DiscSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DiscSprite_obj::__mClass,"__mClass");
};

#endif

Class DiscSprite_obj::__mClass;

void DiscSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DiscSprite"), hx::TCanCast< DiscSprite_obj> ,sStaticFields,sMemberFields,
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

void DiscSprite_obj::__boot()
{
}


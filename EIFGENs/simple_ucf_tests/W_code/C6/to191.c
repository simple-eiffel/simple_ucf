/*
 * Code for class TOML_FLOAT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F191_3264(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F191_3265(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F191_3266(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3267(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3268(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3269(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3270(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3271(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3272(EIF_REFERENCE);
extern EIF_TYPED_VALUE F191_3273(EIF_REFERENCE);
extern void EIF_Minit191(void);

#ifdef __cplusplus
}
#endif

#include "eif_helpers.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {TOML_FLOAT}.make */
void F191_3264 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r8
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_r8 = * (EIF_REAL_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REAL64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 1, 3333);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3333);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2914, 0x20000000, 1); /* value */
	*(EIF_REAL_64 *)(Current + RTWA(2914, dtype)) = (EIF_REAL_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2915, 0x04000000, 1); /* is_infinity_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2915, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 2917, 0x04000000, 1); /* is_nan_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2917, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 2916, 0x04000000, 1); /* is_negative_infinity */
	*(EIF_BOOLEAN *)(Current + RTWA(2916, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("value_set", EX_POST);
		tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2914, dtype));
		if ((EIF_BOOLEAN) eif_is_equal_real_64 (tr8_1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("not_special", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2915, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2917, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) !tb1 && (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {TOML_FLOAT}.make_infinity */
void F191_3265 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make_infinity";
	RTEX;
#define arg1 arg1x.it_b
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 1, 3334);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3334);
	RTIV(Current, RTAL);
	RTHOOK(1);
	if (arg1) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 2914, 0x20000000, 1); /* value */
		*(EIF_REAL_64 *)(Current + RTWA(2914, dtype)) = (EIF_REAL_64) (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4542, 254))(Current)).it_r8);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 2916, 0x04000000, 1); /* is_negative_infinity */
		*(EIF_BOOLEAN *)(Current + RTWA(2916, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 2914, 0x20000000, 1); /* value */
		*(EIF_REAL_64 *)(Current + RTWA(2914, dtype)) = (EIF_REAL_64) (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4543, 254))(Current)).it_r8);
		RTHOOK(5);
		RTDBGAA(Current, dtype, 2916, 0x04000000, 1); /* is_negative_infinity */
		*(EIF_BOOLEAN *)(Current + RTWA(2916, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2915, 0x04000000, 1); /* is_infinity_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2915, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 2917, 0x04000000, 1); /* is_nan_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2917, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("is_infinity", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2915, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("not_nan", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2917, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("negative_set", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2916, dtype));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {TOML_FLOAT}.make_nan */
void F191_3266 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make_nan";
	RTEX;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 0, 3335);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3335);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 2914, 0x20000000, 1); /* value */
	*(EIF_REAL_64 *)(Current + RTWA(2914, dtype)) = (EIF_REAL_64) (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4541, 254))(Current)).it_r8);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2917, 0x04000000, 1); /* is_nan_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2917, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 2915, 0x04000000, 1); /* is_infinity_value */
	*(EIF_BOOLEAN *)(Current + RTWA(2915, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 2916, 0x04000000, 1); /* is_negative_infinity */
	*(EIF_BOOLEAN *)(Current + RTWA(2916, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_nan", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2917, dtype));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("not_infinity", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2915, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TOML_FLOAT}.value */
EIF_TYPED_VALUE F191_3267 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL64;
	r.it_r8 = *(EIF_REAL_64 *)(Current + RTWA(2914,Dtype(Current)));
	return r;
}


/* {TOML_FLOAT}.is_infinity_value */
EIF_TYPED_VALUE F191_3268 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2915,Dtype(Current)));
	return r;
}


/* {TOML_FLOAT}.is_negative_infinity */
EIF_TYPED_VALUE F191_3269 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2916,Dtype(Current)));
	return r;
}


/* {TOML_FLOAT}.is_nan_value */
EIF_TYPED_VALUE F191_3270 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2917,Dtype(Current)));
	return r;
}


/* {TOML_FLOAT}.is_float */
EIF_TYPED_VALUE F191_3271 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_float";
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 0, 3340);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3340);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {TOML_FLOAT}.as_float */
EIF_TYPED_VALUE F191_3272 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "as_float";
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REAL64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 0, 3341);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3341);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_float", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2876, dtype))(Current)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x20000000, 1,0); /* Result */
	tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2914, dtype));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REAL64; r.it_r8 = Result; return r; }
}

/* {TOML_FLOAT}.to_toml */
EIF_TYPED_VALUE F191_3273 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_toml";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 190, Current, 0, 0, 3342);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(190, Current, 3342);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2917, dtype));
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(0, 0xF8000114, 0,0); /* Result */
		tr1 = RTMS_EX_H("nan",3,7233902);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr2);
	} else {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2915, dtype));
		if (tb1) {
			RTHOOK(4);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2916, dtype));
			if (tb1) {
				RTHOOK(5);
				RTDBGAL(0, 0xF8000114, 0,0); /* Result */
				tr1 = RTMS_EX_H("-inf",4,761884262);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr2);
			} else {
				RTHOOK(6);
				RTDBGAL(0, 0xF8000114, 0,0); /* Result */
				tr1 = RTMS_EX_H("inf",3,6909542);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr2);
			}
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF8000114, 0,0); /* Result */
			tr8_1 = *(EIF_REAL_64 *)(Current + RTWA(2914, dtype));
			tr1 = eif_out__r8_s1(tr8_1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr2);
			RTHOOK(8);
			tb1 = '\0';
			tb2 = '\0';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
			uw1 = tw1;
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3030, "has", Result))(Result, uw1x)).it_b);
			if ((EIF_BOOLEAN) !tb3) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'e';
				uw1 = tw1;
				tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3030, "has", Result))(Result, uw1x)).it_b);
				tb2 = (EIF_BOOLEAN) !tb3;
			}
			if (tb2) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'E';
				uw1 = tw1;
				tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3030, "has", Result))(Result, uw1x)).it_b);
				tb1 = (EIF_BOOLEAN) !tb2;
			}
			if (tb1) {
				RTHOOK(9);
				tr1 = RTMS_EX_H(".0",2,11824);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef uw1
}

void EIF_Minit191 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

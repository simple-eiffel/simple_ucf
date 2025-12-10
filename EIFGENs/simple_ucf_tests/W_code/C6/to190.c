/*
 * Code for class TOML_DATETIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F190_3241(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F190_3242(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F190_3243(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F190_3244(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F190_3245(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3246(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3247(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3248(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3249(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3250(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3251(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3252(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3253(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3254(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3255(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3256(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3257(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3258(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3259(EIF_REFERENCE);
extern void F190_3260(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F190_3261(EIF_REFERENCE);
extern EIF_TYPED_VALUE F190_3262(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F190_3263(EIF_REFERENCE);
extern void EIF_Minit190(void);

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

/* {TOML_DATETIME}.make_offset_datetime */
void F190_3241 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x, EIF_TYPED_VALUE arg7x, EIF_TYPED_VALUE arg8x)
{
	GTCX
	char *l_feature_name = "make_offset_datetime";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
#define arg7 arg7x.it_i4
#define arg8 arg8x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg8x.type & SK_HEAD) == SK_REF) arg8x.it_i4 = * (EIF_INTEGER_32 *) arg8x.it_r;
	if ((arg7x.type & SK_HEAD) == SK_REF) arg7x.it_i4 = * (EIF_INTEGER_32 *) arg7x.it_r;
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU(SK_INT32,&arg7);
	RTLU(SK_INT32,&arg8);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 8, 3319);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3319);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_year", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_month", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_day", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 <= ((EIF_INTEGER_32) 31L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_hour", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 23L))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_minute", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg5 <= ((EIF_INTEGER_32) 59L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_second", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg6 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg6 <= ((EIF_INTEGER_32) 60L))), label_1);
		RTCK;
		RTHOOK(7);
		RTCT("valid_offset_hours", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg7 >= ((EIF_INTEGER_32) -12L)) && (EIF_BOOLEAN) (arg7 <= ((EIF_INTEGER_32) 14L))), label_1);
		RTCK;
		RTHOOK(8);
		RTCT("valid_offset_minutes", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg8 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg8 <= ((EIF_INTEGER_32) 59L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 2896, 0x10000000, 1); /* year */
	*(EIF_INTEGER_32 *)(Current + RTWA(2896, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 2897, 0x10000000, 1); /* month */
	*(EIF_INTEGER_32 *)(Current + RTWA(2897, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 2898, 0x10000000, 1); /* day */
	*(EIF_INTEGER_32 *)(Current + RTWA(2898, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 2899, 0x10000000, 1); /* hour */
	*(EIF_INTEGER_32 *)(Current + RTWA(2899, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 2900, 0x10000000, 1); /* minute */
	*(EIF_INTEGER_32 *)(Current + RTWA(2900, dtype)) = (EIF_INTEGER_32) arg5;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 2901, 0x10000000, 1); /* second */
	*(EIF_INTEGER_32 *)(Current + RTWA(2901, dtype)) = (EIF_INTEGER_32) arg6;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 2903, 0x10000000, 1); /* offset_hours */
	*(EIF_INTEGER_32 *)(Current + RTWA(2903, dtype)) = (EIF_INTEGER_32) arg7;
	RTHOOK(16);
	RTDBGAA(Current, dtype, 2904, 0x10000000, 1); /* offset_minutes */
	*(EIF_INTEGER_32 *)(Current + RTWA(2904, dtype)) = (EIF_INTEGER_32) arg8;
	RTHOOK(17);
	RTDBGAA(Current, dtype, 2906, 0x04000000, 1); /* has_time */
	*(EIF_BOOLEAN *)(Current + RTWA(2906, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(18);
	RTDBGAA(Current, dtype, 2905, 0x04000000, 1); /* has_date */
	*(EIF_BOOLEAN *)(Current + RTWA(2905, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(19);
	RTDBGAA(Current, dtype, 2907, 0x04000000, 1); /* has_offset */
	*(EIF_BOOLEAN *)(Current + RTWA(2907, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(20);
		RTCT("has_all", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
		tb3 = *(EIF_BOOLEAN *)(Current + RTWA(2907, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (tb1 && tb2) && tb3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef arg8
#undef arg7
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {TOML_DATETIME}.make_local_datetime */
void F190_3242 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "make_local_datetime";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
#define arg5 arg5x.it_i4
#define arg6 arg6x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_i4 = * (EIF_INTEGER_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_i4 = * (EIF_INTEGER_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU(SK_INT32,&arg5);
	RTLU(SK_INT32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 6, 3320);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3320);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_year", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_month", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_day", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 <= ((EIF_INTEGER_32) 31L))), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("valid_hour", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg4 <= ((EIF_INTEGER_32) 23L))), label_1);
		RTCK;
		RTHOOK(5);
		RTCT("valid_minute", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg5 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg5 <= ((EIF_INTEGER_32) 59L))), label_1);
		RTCK;
		RTHOOK(6);
		RTCT("valid_second", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg6 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg6 <= ((EIF_INTEGER_32) 60L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 2896, 0x10000000, 1); /* year */
	*(EIF_INTEGER_32 *)(Current + RTWA(2896, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 2897, 0x10000000, 1); /* month */
	*(EIF_INTEGER_32 *)(Current + RTWA(2897, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 2898, 0x10000000, 1); /* day */
	*(EIF_INTEGER_32 *)(Current + RTWA(2898, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(10);
	RTDBGAA(Current, dtype, 2899, 0x10000000, 1); /* hour */
	*(EIF_INTEGER_32 *)(Current + RTWA(2899, dtype)) = (EIF_INTEGER_32) arg4;
	RTHOOK(11);
	RTDBGAA(Current, dtype, 2900, 0x10000000, 1); /* minute */
	*(EIF_INTEGER_32 *)(Current + RTWA(2900, dtype)) = (EIF_INTEGER_32) arg5;
	RTHOOK(12);
	RTDBGAA(Current, dtype, 2901, 0x10000000, 1); /* second */
	*(EIF_INTEGER_32 *)(Current + RTWA(2901, dtype)) = (EIF_INTEGER_32) arg6;
	RTHOOK(13);
	RTDBGAA(Current, dtype, 2906, 0x04000000, 1); /* has_time */
	*(EIF_BOOLEAN *)(Current + RTWA(2906, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(14);
	RTDBGAA(Current, dtype, 2905, 0x04000000, 1); /* has_date */
	*(EIF_BOOLEAN *)(Current + RTWA(2905, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(15);
	RTDBGAA(Current, dtype, 2907, 0x04000000, 1); /* has_offset */
	*(EIF_BOOLEAN *)(Current + RTWA(2907, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(16);
		RTCT("has_datetime", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
		if ((EIF_BOOLEAN) (tb1 && tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(17);
		RTCT("no_offset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2907, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {TOML_DATETIME}.make_local_date */
void F190_3243 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_local_date";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 3, 3321);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3321);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_year", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_month", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 12L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_day", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg3 <= ((EIF_INTEGER_32) 31L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 2896, 0x10000000, 1); /* year */
	*(EIF_INTEGER_32 *)(Current + RTWA(2896, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 2897, 0x10000000, 1); /* month */
	*(EIF_INTEGER_32 *)(Current + RTWA(2897, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2898, 0x10000000, 1); /* day */
	*(EIF_INTEGER_32 *)(Current + RTWA(2898, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 2905, 0x04000000, 1); /* has_date */
	*(EIF_BOOLEAN *)(Current + RTWA(2905, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 2906, 0x04000000, 1); /* has_time */
	*(EIF_BOOLEAN *)(Current + RTWA(2906, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 2907, 0x04000000, 1); /* has_offset */
	*(EIF_BOOLEAN *)(Current + RTWA(2907, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("has_date_only", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
		if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_offset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2907, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {TOML_DATETIME}.make_local_time */
void F190_3244 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "make_local_time";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 3, 3322);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3322);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_hour", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 23L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_minute", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 <= ((EIF_INTEGER_32) 59L))), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_second", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg3 <= ((EIF_INTEGER_32) 60L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 2899, 0x10000000, 1); /* hour */
	*(EIF_INTEGER_32 *)(Current + RTWA(2899, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 2900, 0x10000000, 1); /* minute */
	*(EIF_INTEGER_32 *)(Current + RTWA(2900, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 2901, 0x10000000, 1); /* second */
	*(EIF_INTEGER_32 *)(Current + RTWA(2901, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 2906, 0x04000000, 1); /* has_time */
	*(EIF_BOOLEAN *)(Current + RTWA(2906, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 2905, 0x04000000, 1); /* has_date */
	*(EIF_BOOLEAN *)(Current + RTWA(2905, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(9);
	RTDBGAA(Current, dtype, 2907, 0x04000000, 1); /* has_offset */
	*(EIF_BOOLEAN *)(Current + RTWA(2907, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("has_time_only", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
		tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
		if ((EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("no_offset", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2907, dtype));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef arg3
#undef arg2
#undef arg1
}

/* {TOML_DATETIME}.year */
EIF_TYPED_VALUE F190_3245 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2896,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.month */
EIF_TYPED_VALUE F190_3246 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2897,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.day */
EIF_TYPED_VALUE F190_3247 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2898,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.hour */
EIF_TYPED_VALUE F190_3248 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2899,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.minute */
EIF_TYPED_VALUE F190_3249 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2900,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.second */
EIF_TYPED_VALUE F190_3250 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2901,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.nanosecond */
EIF_TYPED_VALUE F190_3251 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2902,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.offset_hours */
EIF_TYPED_VALUE F190_3252 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2903,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.offset_minutes */
EIF_TYPED_VALUE F190_3253 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(2904,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.has_date */
EIF_TYPED_VALUE F190_3254 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2905,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.has_time */
EIF_TYPED_VALUE F190_3255 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2906,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.has_offset */
EIF_TYPED_VALUE F190_3256 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(2907,Dtype(Current)));
	return r;
}


/* {TOML_DATETIME}.is_datetime */
EIF_TYPED_VALUE F190_3257 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_datetime";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 189, Current, 0, 0, 3312);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3312);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && tb2);
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

/* {TOML_DATETIME}.is_date */
EIF_TYPED_VALUE F190_3258 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_date";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 189, Current, 0, 0, 3313);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3313);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2);
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

/* {TOML_DATETIME}.is_time */
EIF_TYPED_VALUE F190_3259 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_time";
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA(l_feature_name, 189, Current, 0, 0, 3314);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3314);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (tb1 && (EIF_BOOLEAN) !tb2);
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

/* {TOML_DATETIME}.set_nanosecond */
void F190_3260 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_nanosecond";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 1, 3315);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3315);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_nanosecond", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 1000000000L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 2902, 0x10000000, 1); /* nanosecond */
	*(EIF_INTEGER_32 *)(Current + RTWA(2902, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("nanosecond_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2902, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {TOML_DATETIME}.to_toml */
EIF_TYPED_VALUE F190_3261 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "to_toml";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 0, 3316);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3316);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 32L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2896, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 4L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		RTHOOK(4);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2897, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		RTHOOK(6);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
		RTHOOK(7);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2898, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
	}
	RTHOOK(8);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2905, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
	if ((EIF_BOOLEAN) (tb1 && tb2)) {
		RTHOOK(9);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'T';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
	}
	RTHOOK(10);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2906, dtype));
	if (tb1) {
		RTHOOK(11);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2899, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		RTHOOK(12);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
		RTHOOK(13);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2900, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		RTHOOK(14);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
		RTHOOK(15);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2901, dtype));
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 2L);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		RTHOOK(16);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2902, dtype));
		if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(17);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			RTHOOK(18);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(2910, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		}
	}
	RTHOOK(19);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(2907, dtype));
	if (tb1) {
		RTHOOK(20);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2903, dtype));
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(2904, dtype));
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN)(ti4_2 == ((EIF_INTEGER_32) 0L)))) {
			RTHOOK(21);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
		} else {
			RTHOOK(22);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2903, dtype));
			if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
				RTHOOK(23);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			} else {
				RTHOOK(24);
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			}
			RTHOOK(25);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2903, dtype));
			ti4_2 = eif_abs_int32 (ti4_1);
			ui4_1 = ti4_2;
			ui4_2 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
			RTHOOK(26);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			RTHOOK(27);
			ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2904, dtype));
			ui4_1 = ti4_1;
			ui4_2 = ((EIF_INTEGER_32) 2L);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4993, "append", Result))(Result, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(28);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(29);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef uw1
}

/* {TOML_DATETIME}.format_number */
EIF_TYPED_VALUE F190_3262 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "format_number";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 189, Current, 0, 2, 3317);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3317);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_value", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("positive_width", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	tr1 = eif_out__i4_s1(arg1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	for (;;) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4967, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 >= arg2)) break;
		RTHOOK(5);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4989, "prepend_character", Result))(Result, uw1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("correct_width", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Result + RTVA(4967, "count", Result));
		if ((EIF_BOOLEAN) (ti4_2 >= arg2)) {
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
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef uw1
#undef arg2
#undef arg1
}

/* {TOML_DATETIME}.format_nanosecond */
EIF_TYPED_VALUE F190_3263 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "format_nanosecond";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 189, Current, 1, 0, 3318);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(189, Current, 3318);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(2902, dtype));
	ui4_1 = ti4_1;
	ui4_2 = ((EIF_INTEGER_32) 9L);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(2909, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4967, "count", loc1));
		if (!(EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4967, "count", loc1));
			ui4_1 = ti4_1;
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4733, "item", loc1))(loc1, ui4_1x)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
			tb1 = (EIF_BOOLEAN)(tw1 != tw2);
		}
		if (tb1) break;
		RTHOOK(3);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4856, "remove_tail", loc1))(loc1, ui4_1x);
	}
	RTHOOK(4);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(loc1);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("at_least_one_digit", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(4967, "count", Result));
		if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
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
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ui4_1
#undef ui4_2
}

void EIF_Minit190 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

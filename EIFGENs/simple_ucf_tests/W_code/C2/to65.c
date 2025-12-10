/*
 * Code for class TOML_LEXER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F65_1199(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1200(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1201(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1202(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1203(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1204(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1205(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1206(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1207(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1208(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1209(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1210(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1211(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1212(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1213(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1214(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1215(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1216(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1218(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F65_1219(EIF_REFERENCE);
extern void F65_1220(EIF_REFERENCE);
extern void F65_1221(EIF_REFERENCE);
extern EIF_TYPED_VALUE F65_1222(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1223(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1224(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1225(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F65_1226(EIF_REFERENCE);
extern void F65_7076(EIF_REFERENCE, int);
extern void EIF_Minit65(void);

#ifdef __cplusplus
}
#endif

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

/* {TOML_LEXER}.make */
void F65_1199 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1278);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1278);
	RTCC(arg1, 64, l_feature_name, 1, eif_new_type(276, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("source_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1154, 0xF8000114, 0); /* source */
	tr1 = RTCCL(arg1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1154, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1155, 0x10000000, 1); /* position */
	*(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(6);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1103, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr1 = RTMS_EX_H("",0,0);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ui4_2 = ((EIF_INTEGER_32) 1L);
	ui4_3 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1094, dtype))(Current, ui4_1x, ur1x, ui4_2x, ui4_3x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("source_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("at_start", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("line_one", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("column_one", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
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
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg1
}

/* {TOML_LEXER}.source */
EIF_TYPED_VALUE F65_1200 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1154,Dtype(Current)));
	return r;
}


/* {TOML_LEXER}.position */
EIF_TYPED_VALUE F65_1201 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1155,Dtype(Current)));
	return r;
}


/* {TOML_LEXER}.current_token */
EIF_TYPED_VALUE F65_1202 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_token";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1281);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1281);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF800003E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(62, 0x01).id);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype));
	ui4_1 = ti4_1;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1096, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
	ui4_2 = ti4_2;
	ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
	ui4_3 = ti4_3;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
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
#undef ui4_3
}

/* {TOML_LEXER}.is_at_end */
EIF_TYPED_VALUE F65_1203 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_at_end";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1282);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1282);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4967, "count", tr1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ti4_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
}

/* {TOML_LEXER}.next_token */
EIF_TYPED_VALUE F65_1204 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "next_token";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 0, 1283);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1283);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1174, dtype))(Current);
	RTHOOK(2);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	RTDBGAL(2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(5);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1103, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("",0,0);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		ui4_2 = loc1;
		ui4_3 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(6);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		ui4_1 = loc1;
		ui4_2 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1159, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1095, 0x10000000, 1); /* type */
	ti4_1 = *(EIF_INTEGER_32 *)(Result + RTVA(1095, "type", Result));
	*(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype)) = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	RTDBGAA(Current, dtype, 1096, 0xF8000114, 0); /* value */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1096, "value", Result))(Result)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTCCL(tr1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1096, dtype)) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
}

/* {TOML_LEXER}.scan_token */
EIF_TYPED_VALUE F65_1205 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_token";
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLR(5,ur1);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR32, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 2, 1284);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1284);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_at_end", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(1, 0x1C000000, 1, 0); /* loc1 */
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
	loc1 = (EIF_CHARACTER_32) tw1;
	RTHOOK(3);
	switch (loc1) {
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\015':
			RTHOOK(4);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1160, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '=':
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(6);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1106, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("=",1,61);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(6,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(8);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1107, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H(".",1,46);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) ',':
			RTHOOK(9);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(10);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1108, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H(",",1,44);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(10,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '[':
			RTHOOK(11);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1161, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) ']':
			RTHOOK(12);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1162, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '{':
			RTHOOK(13);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(14);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1111, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("{",1,123);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(14,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '}':
			RTHOOK(15);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(16);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1112, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("}",1,125);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(16,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '\"':
			RTHOOK(17);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1163, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '\'':
			RTHOOK(18);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1167, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(19);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1170, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(20);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			ui4_1 = arg1;
			ui4_2 = arg2;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1170, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
		default:
			RTHOOK(21);
			uw1 = loc1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1176, dtype))(Current, uw1x)).it_b);
			if (tb1) {
				RTHOOK(22);
				RTDBGAL(0, 0xF800003E, 0,0); /* Result */
				ui4_1 = arg1;
				ui4_2 = arg2;
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(1169, dtype))(Current, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			} else {
				RTHOOK(23);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				RTHOOK(24);
				RTDBGAL(0, 0xF800003E, 0,0); /* Result */
				tr1 = RTLN(eif_new_type(62, 0x01).id);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1104, dtype))(Current)).it_i4);
				ui4_1 = ti4_1;
				tr2 = RTMS_EX_H("Unexpected character: ",22,407808800);
				tr3 = eif_out__c4_s1(loc1);
				ur1 = RTCCL(tr3);
				tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr3))(tr3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr2);
				ui4_2 = arg1;
				ui4_3 = arg2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
				RTNHOOK(24,1);
				Result = (EIF_REFERENCE) RTCCL(tr1);
			}
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uw1
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_newline */
EIF_TYPED_VALUE F65_1206 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_newline";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 2, 1285);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1285);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
	if ((EIF_BOOLEAN)(tw1 == tw2)) {
		RTHOOK(2);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(3);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		}
	} else {
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	}
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
	(*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)))++;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(8);
	RTDBGAL(0, 0xF800003E, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(62, 0x01).id);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1105, dtype))(Current)).it_i4);
	ui4_1 = ti4_1;
	tr2 = RTMS_EX_H("\012",1,10);
	tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr3);
	ui4_2 = arg1;
	ui4_3 = arg2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
	RTNHOOK(8,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_bracket */
EIF_TYPED_VALUE F65_1207 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_bracket";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 2, 1257);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1257);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(4);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1113, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("[[",2,23387);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1109, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("[",1,91);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_close_bracket */
EIF_TYPED_VALUE F65_1208 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_close_bracket";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 2, 1258);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1258);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(4);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1114, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("]]",2,23901);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(4,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(5);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1110, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr2 = RTMS_EX_H("]",1,93);
		tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr3);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(5,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_basic_string */
EIF_TYPED_VALUE F65_1209 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_basic_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 2, 1259);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1259);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(4);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(6);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1116, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("",0,0);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(9);
		RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
		ub1 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1164, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		if (loc2) {
			RTHOOK(11);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1118, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(12);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1116, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_basic_string_content */
EIF_TYPED_VALUE F65_1210 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scan_basic_string_content";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR32, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 1, 1260);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!loc1) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(2, 0x1C000000, 1, 0); /* loc2 */
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(5);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
		if ((EIF_BOOLEAN)(loc2 == tw1)) {
			RTHOOK(6);
			if (arg1) {
				RTHOOK(7);
				tb2 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
				if ((EIF_BOOLEAN)(tw1 == tw2)) {
					ui4_1 = ((EIF_INTEGER_32) 2L);
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
					tb2 = (EIF_BOOLEAN)(tw1 == tw2);
				}
				if (tb2) {
					RTHOOK(8);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(9);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(11);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(12);
					uw1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
					RTHOOK(13);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				}
			} else {
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				RTHOOK(15);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(16);
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
			if ((EIF_BOOLEAN)(loc2 == tw1)) {
				RTHOOK(17);
				ub1 = arg1;
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1165, dtype))(Current, ub1x)).it_c4);
				uw1 = tw1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			} else {
				RTHOOK(18);
				tb2 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				if (!(EIF_BOOLEAN)(loc2 == tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
					tb2 = (EIF_BOOLEAN)(loc2 == tw1);
				}
				if (tb2) {
					RTHOOK(19);
					if (arg1) {
						RTHOOK(20);
						uw1 = loc2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
						RTHOOK(21);
						tb2 = '\0';
						tb3 = '\0';
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
						if ((EIF_BOOLEAN)(loc2 == tw1)) {
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
							tb3 = (EIF_BOOLEAN) !tb4;
						}
						if (tb3) {
							ui4_1 = ((EIF_INTEGER_32) 1L);
							tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
							tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
							tb2 = (EIF_BOOLEAN)(tw1 == tw2);
						}
						if (tb2) {
							RTHOOK(22);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
							RTHOOK(23);
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
							uw1 = tw1;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
						}
						RTHOOK(24);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
						RTHOOK(25);
						RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
						(*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)))++;
						RTHOOK(26);
						RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
						*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
					} else {
						RTHOOK(27);
						RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
						loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					}
				} else {
					RTHOOK(28);
					uw1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
					RTHOOK(29);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(30);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uw1
#undef ub1
#undef arg1
}

/* {TOML_LEXER}.scan_escape_sequence */
EIF_TYPED_VALUE F65_1211 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scan_escape_sequence";
	RTEX;
	EIF_CHARACTER_32 loc1 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_CHAR32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 64, Current, 3, 1, 1261);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1261);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	RTHOOK(2);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(3);
		RTDBGAL(0, 0x1C000000, 1,0); /* Result */
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
		Result = (EIF_CHARACTER_32) tw1;
	} else {
		RTHOOK(4);
		RTDBGAL(1, 0x1C000000, 1, 0); /* loc1 */
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		loc1 = (EIF_CHARACTER_32) tw1;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(6);
		switch (loc1) {
			case (EIF_CHARACTER_8) 'b':
				RTHOOK(7);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\010';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 't':
				RTHOOK(8);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 'n':
				RTHOOK(9);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 'f':
				RTHOOK(10);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\014';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 'r':
				RTHOOK(11);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) '\"':
				RTHOOK(12);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\"';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) '\\':
				RTHOOK(13);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\\';
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 'u':
				RTHOOK(14);
				RTDBGAL(2, 0xF8000114, 0, 0); /* loc2 */
				ui4_1 = ((EIF_INTEGER_32) 4L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1166, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(15);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ur1 = RTCCL(loc2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1179, dtype))(Current, ur1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(16);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) loc3;
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) 'U':
				RTHOOK(17);
				RTDBGAL(2, 0xF8000114, 0, 0); /* loc2 */
				ui4_1 = ((EIF_INTEGER_32) 8L);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1166, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc2 = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(18);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ur1 = RTCCL(loc2);
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1179, dtype))(Current, ur1x)).it_i4);
				loc3 = (EIF_INTEGER_32) ti4_1;
				RTHOOK(19);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				tw1 = (EIF_CHARACTER_32) loc3;
				Result = (EIF_CHARACTER_32) tw1;
				break;
			case (EIF_CHARACTER_8) '\011':
			case (EIF_CHARACTER_8) '\012':
			case (EIF_CHARACTER_8) '\015':
			case (EIF_CHARACTER_8) ' ':
				RTHOOK(20);
				if (arg1) {
					RTHOOK(21);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1175, dtype))(Current);
					RTHOOK(22);
					RTDBGAL(0, 0x1C000000, 1,0); /* Result */
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
					Result = (EIF_CHARACTER_32) tw1;
				} else {
					RTHOOK(23);
					RTDBGAL(0, 0x1C000000, 1,0); /* Result */
					Result = (EIF_CHARACTER_32) loc1;
				}
				break;
			default:
				RTHOOK(24);
				RTDBGAL(0, 0x1C000000, 1,0); /* Result */
				Result = (EIF_CHARACTER_32) loc1;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(25);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {TOML_LEXER}.scan_hex_digits */
EIF_TYPED_VALUE F65_1212 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scan_hex_digits";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 1, 1262);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1262);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = arg1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(2,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(4);
		tb1 = '\01';
		if (!(EIF_BOOLEAN) (loc1 > arg1)) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(5);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		uw1 = tw1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1178, dtype))(Current, uw1x)).it_b);
		if (tb2) {
			RTHOOK(6);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			uw1 = tw1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
			RTHOOK(7);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		}
		RTHOOK(8);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uw1
#undef arg1
}

/* {TOML_LEXER}.scan_literal_string */
EIF_TYPED_VALUE F65_1213 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_literal_string";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 2, 1263);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1263);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	RTHOOK(2);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(3);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(4);
		tb1 = '\0';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb2) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
			tb1 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb1) {
			RTHOOK(5);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			RTHOOK(6);
			RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1117, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			tr2 = RTMS_EX_H("",0,0);
			tr3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr2))(tr2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr3);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(7,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTHOOK(8);
	if ((EIF_BOOLEAN)(Result == NULL)) {
		RTHOOK(9);
		RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
		ub1 = loc2;
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1168, dtype))(Current, ub1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(10);
		if (loc2) {
			RTHOOK(11);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1119, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(11,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(12);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1117, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(12,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef ub1
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_literal_string_content */
EIF_TYPED_VALUE F65_1214 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "scan_literal_string_content";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_b
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_b = * (EIF_BOOLEAN *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_REF, &Result);
	RTLU(SK_BOOL,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	RTLU(SK_CHAR32, &loc2);
	
	RTEAA(l_feature_name, 64, Current, 2, 1, 1264);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1264);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000114, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 50L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		if (!loc1) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(4);
		RTDBGAL(2, 0x1C000000, 1, 0); /* loc2 */
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(5);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
		if ((EIF_BOOLEAN)(loc2 == tw1)) {
			RTHOOK(6);
			if (arg1) {
				RTHOOK(7);
				tb2 = '\0';
				ui4_1 = ((EIF_INTEGER_32) 1L);
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
				if ((EIF_BOOLEAN)(tw1 == tw2)) {
					ui4_1 = ((EIF_INTEGER_32) 2L);
					tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
					tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\'';
					tb2 = (EIF_BOOLEAN)(tw1 == tw2);
				}
				if (tb2) {
					RTHOOK(8);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(9);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(10);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(11);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(12);
					uw1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
					RTHOOK(13);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				}
			} else {
				RTHOOK(14);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				RTHOOK(15);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(16);
			tb2 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
			if (!(EIF_BOOLEAN)(loc2 == tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb2 = (EIF_BOOLEAN)(loc2 == tw1);
			}
			if (tb2) {
				RTHOOK(17);
				if (arg1) {
					RTHOOK(18);
					uw1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
					RTHOOK(19);
					tb2 = '\0';
					tb3 = '\0';
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
					if ((EIF_BOOLEAN)(loc2 == tw1)) {
						tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
						tb3 = (EIF_BOOLEAN) !tb4;
					}
					if (tb3) {
						ui4_1 = ((EIF_INTEGER_32) 1L);
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1172, dtype))(Current, ui4_1x)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
						tb2 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb2) {
						RTHOOK(20);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
						RTHOOK(21);
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
						uw1 = tw1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
					}
					RTHOOK(22);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					RTHOOK(23);
					RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
					(*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)))++;
					RTHOOK(24);
					RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
					*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
				} else {
					RTHOOK(25);
					RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
					loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				}
			} else {
				RTHOOK(26);
				uw1 = loc2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", Result))(Result, uw1x);
				RTHOOK(27);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uw1
#undef arg1
}

/* {TOML_LEXER}.scan_bare_key_or_keyword */
EIF_TYPED_VALUE F65_1215 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_bare_key_or_keyword";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 2, 1265);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1265);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 20L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if (!tb2) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			uw1 = tw1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1176, dtype))(Current, uw1x)).it_b);
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	}
	RTHOOK(5);
	tb2 = '\01';
	tr1 = RTMS_EX_H("true",4,1953658213);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr2);
	tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4953, "same_string", loc1))(loc1, ur1x)).it_b);
	if (!tb3) {
		tr1 = RTMS_EX_H("false",5,1635280741);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4953, "same_string", loc1))(loc1, ur1x)).it_b);
		tb2 = tb3;
	}
	if (tb2) {
		RTHOOK(6);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1122, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ur1 = RTCCL(loc1);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(6,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(7);
		tb2 = '\01';
		tr1 = RTMS_EX_H("inf",3,6909542);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4953, "same_string", loc1))(loc1, ur1x)).it_b);
		if (!tb3) {
			tr1 = RTMS_EX_H("nan",3,7233902);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4789, "as_string_32", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4953, "same_string", loc1))(loc1, ur1x)).it_b);
			tb2 = tb3;
		}
		if (tb2) {
			RTHOOK(8);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1121, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(8,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(9);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1115, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(9,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uw1
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.scan_number_or_datetime */
EIF_TYPED_VALUE F65_1216 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "scan_number_or_datetime";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc3 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc9 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 loc10 = (EIF_CHARACTER_32) 0;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_BOOL, &loc2);
	RTLU(SK_BOOL, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_BOOL, &loc6);
	RTLU(SK_BOOL, &loc7);
	RTLU(SK_BOOL, &loc8);
	RTLU(SK_BOOL, &loc9);
	RTLU(SK_CHAR32, &loc10);
	
	RTEAA(l_feature_name, 64, Current, 10, 2, 1266);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1266);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0xF8000114, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(276, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 30L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4730, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tb1 = '\01';
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
	tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
	if (!(EIF_BOOLEAN)(tw1 == tw2)) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(3);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	}
	RTHOOK(5);
	tb1 = '\0';
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
	if ((EIF_BOOLEAN) !tb2) {
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		tb1 = (EIF_BOOLEAN)(tw1 == tw2);
	}
	if (tb1) {
		RTHOOK(6);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		uw1 = tw1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
		RTHOOK(7);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		RTHOOK(8);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if ((EIF_BOOLEAN) !tb1) {
			RTHOOK(9);
			RTDBGAL(10, 0x1C000000, 1, 0); /* loc10 */
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			loc10 = (EIF_CHARACTER_32) tw1;
			RTHOOK(10);
			tb1 = '\01';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'x';
			if (!(EIF_BOOLEAN)(loc10 == tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'X';
				tb1 = (EIF_BOOLEAN)(loc10 == tw1);
			}
			if (tb1) {
				RTHOOK(11);
				RTDBGAL(6, 0x04000000, 1, 0); /* loc6 */
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(12);
				uw1 = loc10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
				RTHOOK(13);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			} else {
				RTHOOK(14);
				tb1 = '\01';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'o';
				if (!(EIF_BOOLEAN)(loc10 == tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'O';
					tb1 = (EIF_BOOLEAN)(loc10 == tw1);
				}
				if (tb1) {
					RTHOOK(15);
					RTDBGAL(7, 0x04000000, 1, 0); /* loc7 */
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
					RTHOOK(16);
					uw1 = loc10;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
					RTHOOK(17);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				} else {
					RTHOOK(18);
					tb1 = '\01';
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'b';
					if (!(EIF_BOOLEAN)(loc10 == tw1)) {
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'B';
						tb1 = (EIF_BOOLEAN)(loc10 == tw1);
					}
					if (tb1) {
						RTHOOK(19);
						RTDBGAL(8, 0x04000000, 1, 0); /* loc8 */
						loc8 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(20);
						uw1 = loc10;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
						RTHOOK(21);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					}
				}
			}
		}
	}
	RTHOOK(22);
	RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
	loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(23);
		tb1 = '\01';
		if (!loc9) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(24);
		RTDBGAL(10, 0x1C000000, 1, 0); /* loc10 */
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		loc10 = (EIF_CHARACTER_32) tw1;
		RTHOOK(25);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
		if ((EIF_BOOLEAN)(loc10 == tw1)) {
			RTHOOK(26);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		} else {
			RTHOOK(27);
			tb2 = '\0';
			tb3 = '\0';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
			if ((EIF_BOOLEAN)(loc10 == tw1)) {
				tb3 = (EIF_BOOLEAN) !loc2;
			}
			if (tb3) {
				ti4_1 = *(EIF_INTEGER_32 *)(loc1 + RTVA(4967, "count", loc1));
				tb2 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 4L));
			}
			if (tb2) {
				RTHOOK(28);
				RTDBGAL(2, 0x04000000, 1, 0); /* loc2 */
				loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(29);
				uw1 = loc10;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
				RTHOOK(30);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
			} else {
				RTHOOK(31);
				tb2 = '\0';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
				if ((EIF_BOOLEAN)(loc10 == tw1)) {
					tb2 = loc2;
				}
				if (tb2) {
					RTHOOK(32);
					uw1 = loc10;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
					RTHOOK(33);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				} else {
					RTHOOK(34);
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ':';
					if ((EIF_BOOLEAN)(loc10 == tw1)) {
						RTHOOK(35);
						RTDBGAL(3, 0x04000000, 1, 0); /* loc3 */
						loc3 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
						RTHOOK(36);
						uw1 = loc10;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
						RTHOOK(37);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
					} else {
						RTHOOK(38);
						tb2 = '\0';
						tb3 = '\01';
						tb4 = '\01';
						tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'T';
						if (!(EIF_BOOLEAN)(loc10 == tw1)) {
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 't';
							tb4 = (EIF_BOOLEAN)(loc10 == tw1);
						}
						if (!tb4) {
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
							tb3 = (EIF_BOOLEAN)(loc10 == tw1);
						}
						if (tb3) {
							tb2 = loc2;
						}
						if (tb2) {
							RTHOOK(39);
							uw1 = loc10;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
							RTHOOK(40);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
						} else {
							RTHOOK(41);
							tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
							if ((EIF_BOOLEAN)(loc10 == tw1)) {
								RTHOOK(42);
								RTDBGAL(4, 0x04000000, 1, 0); /* loc4 */
								loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
								RTHOOK(43);
								uw1 = loc10;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
								RTHOOK(44);
								(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
							} else {
								RTHOOK(45);
								tb2 = '\01';
								tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'e';
								if (!(EIF_BOOLEAN)(loc10 == tw1)) {
									tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'E';
									tb2 = (EIF_BOOLEAN)(loc10 == tw1);
								}
								if (tb2) {
									RTHOOK(46);
									RTDBGAL(5, 0x04000000, 1, 0); /* loc5 */
									loc5 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
									RTHOOK(47);
									uw1 = loc10;
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
									RTHOOK(48);
									(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
									RTHOOK(49);
									tb2 = '\0';
									tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
									if ((EIF_BOOLEAN) !tb3) {
										tb3 = '\01';
										tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
										tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
										if (!(EIF_BOOLEAN)(tw1 == tw2)) {
											tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
											tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
											tb3 = (EIF_BOOLEAN)(tw1 == tw2);
										}
										tb2 = tb3;
									}
									if (tb2) {
										RTHOOK(50);
										tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
										uw1 = tw1;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
										RTHOOK(51);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
									}
								} else {
									RTHOOK(52);
									tb2 = '\0';
									tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '+';
									if ((EIF_BOOLEAN)(loc10 == tw1)) {
										tb2 = loc3;
									}
									if (tb2) {
										RTHOOK(53);
										uw1 = loc10;
										(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
										RTHOOK(54);
										(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
									} else {
										RTHOOK(55);
										tb2 = '\01';
										tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
										if (!(EIF_BOOLEAN)(loc10 == tw1)) {
											tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
											tb2 = (EIF_BOOLEAN)(loc10 == tw1);
										}
										if (tb2) {
											RTHOOK(56);
											uw1 = loc10;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
											RTHOOK(57);
											(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
										} else {
											RTHOOK(58);
											tb2 = '\01';
											uw1 = loc10;
											tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1177, dtype))(Current, uw1x)).it_b);
											if (!tb3) {
												tb3 = '\0';
												if (loc6) {
													uw1 = loc10;
													tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1178, dtype))(Current, uw1x)).it_b);
													tb3 = tb4;
												}
												tb2 = tb3;
											}
											if (tb2) {
												RTHOOK(59);
												uw1 = loc10;
												(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4997, "append_character", loc1))(loc1, uw1x);
												RTHOOK(60);
												(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
											} else {
												RTHOOK(61);
												RTDBGAL(9, 0x04000000, 1, 0); /* loc9 */
												loc9 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	RTHOOK(62);
	if ((EIF_BOOLEAN) (loc2 || loc3)) {
		RTHOOK(63);
		RTDBGAL(0, 0xF800003E, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(62, 0x01).id);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1123, dtype))(Current)).it_i4);
		ui4_1 = ti4_1;
		ur1 = RTCCL(loc1);
		ui4_2 = arg1;
		ui4_3 = arg2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
		RTNHOOK(63,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
	} else {
		RTHOOK(64);
		if ((EIF_BOOLEAN) (loc4 || loc5)) {
			RTHOOK(65);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1121, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(65,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		} else {
			RTHOOK(66);
			RTDBGAL(0, 0xF800003E, 0,0); /* Result */
			tr1 = RTLN(eif_new_type(62, 0x01).id);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1120, dtype))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc1);
			ui4_2 = arg1;
			ui4_3 = arg2;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(1094, Dtype(tr1)))(tr1, ui4_1x, ur1x, ui4_2x, ui4_3x);
			RTNHOOK(66,1);
			Result = (EIF_REFERENCE) RTCCL(tr1);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(67);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(14);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
#undef ui4_2
#undef ui4_3
#undef uw1
#undef arg2
#undef arg1
}

/* {TOML_LEXER}.current_char */
EIF_TYPED_VALUE F65_1217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "current_char";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1267);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1267);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_at_end", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(0, 0x1C000000, 1,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
	ui4_1 = ti4_1;
	tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4733, "item", tr1))(tr1, ui4_1x)).it_c4);
	Result = (EIF_CHARACTER_32) tw1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef ui4_1
}

/* {TOML_LEXER}.peek_char */
EIF_TYPED_VALUE F65_1218 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "peek_char";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_CHAR32, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1268);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1268);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	ti4_2 = *(EIF_INTEGER_32 *)(tr1 + RTVA(4967, "count", tr1));
	if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (ti4_1 + arg1) <= ti4_2)) {
		RTHOOK(2);
		RTDBGAL(0, 0x1C000000, 1,0); /* Result */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
		ui4_1 = (EIF_INTEGER_32) (ti4_1 + arg1);
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4733, "item", tr1))(tr1, ui4_1x)).it_c4);
		Result = (EIF_CHARACTER_32) tw1;
	} else {
		RTHOOK(3);
		RTDBGAL(0, 0x1C000000, 1,0); /* Result */
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\000';
		Result = (EIF_CHARACTER_32) tw1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_CHAR32; r.it_c4 = Result; return r; }
#undef up1
#undef ui4_1
#undef arg1
}

/* {TOML_LEXER}.advance */
void F65_1219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "advance";
	RTEX;
	EIF_INTEGER_32 ti4_1;
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
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1269);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1269);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_at_end", EX_PRE);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 1155, 0x10000000, 1); /* position */
	(*(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype)))++;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
	(*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)))++;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TOML_LEXER}.skip_whitespace_and_comments */
void F65_1220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "skip_whitespace_and_comments";
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_BOOL, &loc1);
	
	RTEAA(l_feature_name, 64, Current, 1, 0, 1270);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1270);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
	loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(2);
		tb1 = '\01';
		if (!loc1) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
			tb1 = tb2;
		}
		if (tb1) break;
		RTHOOK(3);
		tb2 = '\01';
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
		if (!(EIF_BOOLEAN)(tw1 == tw2)) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
			tb2 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb2) {
			RTHOOK(4);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
		} else {
			RTHOOK(5);
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '#';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
				for (;;) {
					RTHOOK(6);
					tb2 = '\01';
					tb3 = '\01';
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
					if (!tb4) {
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
						tb3 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (!tb3) {
						tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
						tb2 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb2) break;
					RTHOOK(7);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
				}
			} else {
				RTHOOK(8);
				RTDBGAL(1, 0x04000000, 1, 0); /* loc1 */
				loc1 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
}

/* {TOML_LEXER}.skip_to_content */
void F65_1221 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "skip_to_content";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1271);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1271);
	RTIV(Current, RTAL);
	for (;;) {
		RTHOOK(1);
		tb1 = '\01';
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1157, dtype))(Current)).it_b);
		if (!tb2) {
			tb2 = '\01';
			tb3 = '\01';
			tb4 = '\01';
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ' ';
			if (!(EIF_BOOLEAN)(tw1 == tw2)) {
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\011';
				tb4 = (EIF_BOOLEAN)(tw1 == tw2);
			}
			if (!tb4) {
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
				tb3 = (EIF_BOOLEAN)(tw1 == tw2);
			}
			if (!tb3) {
				tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
				tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
				tb2 = (EIF_BOOLEAN)(tw1 == tw2);
			}
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) break;
		RTHOOK(2);
		tb2 = '\01';
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\012';
		if (!(EIF_BOOLEAN)(tw1 == tw2)) {
			tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1171, dtype))(Current)).it_c4);
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '\015';
			tb2 = (EIF_BOOLEAN)(tw1 == tw2);
		}
		if (tb2) {
			RTHOOK(3);
			RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
			(*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)))++;
			RTHOOK(4);
			RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
			*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(1173, dtype))(Current);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {TOML_LEXER}.is_bare_key_char */
EIF_TYPED_VALUE F65_1222 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_bare_key_char";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1272);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1272);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
	if ((EIF_BOOLEAN) (arg1 >= tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
		tb5 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb5) {
		tb5 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
			tb5 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb4 = tb5;
	}
	if (!tb4) {
		tb4 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb4 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb3 = tb4;
	}
	if (!tb3) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
		tb2 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	if (!tb2) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '-';
		tb1 = (EIF_BOOLEAN)(arg1 == tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {TOML_LEXER}.is_digit */
EIF_TYPED_VALUE F65_1223 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_digit";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1273);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1273);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (arg1 >= tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {TOML_LEXER}.is_hex_digit */
EIF_TYPED_VALUE F65_1224 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hex_digit";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 1, 1274);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1274);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (arg1 >= tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {TOML_LEXER}.hex_to_integer */
EIF_TYPED_VALUE F65_1225 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hex_to_integer";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc2 = (EIF_CHARACTER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_CHAR32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 64, Current, 3, 1, 1275);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1275);
	RTCC(arg1, 64, l_feature_name, 1, eif_new_type(276, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(2);
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(4967, "count", arg1));
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(3);
		RTDBGAL(2, 0x1C000000, 1, 0); /* loc2 */
		ui4_1 = loc1;
		tw1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4733, "item", arg1))(arg1, ui4_1x)).it_c4);
		loc2 = (EIF_CHARACTER_32) tw1;
		RTHOOK(4);
		tb1 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (loc2 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb1 = (EIF_BOOLEAN) (loc2 <= tw1);
		}
		if (tb1) {
			RTHOOK(5);
			RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
			ti4_2 = (EIF_INTEGER_32) (loc2);
			ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_2 - ti4_3);
		} else {
			RTHOOK(6);
			tb1 = '\0';
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
			if ((EIF_BOOLEAN) (loc2 >= tw1)) {
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
				tb1 = (EIF_BOOLEAN) (loc2 <= tw1);
			}
			if (tb1) {
				RTHOOK(7);
				RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
				ti4_2 = (EIF_INTEGER_32) (loc2);
				ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'a');
				loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 10L));
			} else {
				RTHOOK(8);
				tb1 = '\0';
				tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
				if ((EIF_BOOLEAN) (loc2 >= tw1)) {
					tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
					tb1 = (EIF_BOOLEAN) (loc2 <= tw1);
				}
				if (tb1) {
					RTHOOK(9);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					ti4_2 = (EIF_INTEGER_32) (loc2);
					ti4_3 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) 'A');
					loc3 = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_2 - ti4_3) + ((EIF_INTEGER_32) 10L));
				} else {
					RTHOOK(10);
					RTDBGAL(3, 0x10000000, 1, 0); /* loc3 */
					loc3 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
				}
			}
		}
		RTHOOK(11);
		RTDBGAL(0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result * ((EIF_INTEGER_32) 16L)) + loc3);
		RTHOOK(12);
		RTDBGAL(1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ui4_1
#undef arg1
}

/* {TOML_LEXER}.debug_output */
EIF_TYPED_VALUE F65_1226 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Result);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 64, Current, 0, 0, 1276);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(64, Current, 1276);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000111, 0,0); /* Result */
	tr1 = RTMS_EX_H("Lexer at ",9,1222223392);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
	tr2 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr1 = RTMS_EX_H(":",1,58);
	ur1 = tr1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
	tr2 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr2);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
}

/* {TOML_LEXER}._invariant */
void F65_7076 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 64, Current, 0, 7075);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("source_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1154, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_position", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1155, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_line", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_column", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
}

void EIF_Minit65 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

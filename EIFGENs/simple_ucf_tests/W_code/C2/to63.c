/*
 * Code for class TOML_TOKEN
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F63_1140(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F63_1141(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1142(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1143(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1144(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1145(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1146(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1147(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1148(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F63_1149(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1150(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1151(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1152(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1153(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1154(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1155(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1156(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1157(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1158(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1159(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1160(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1162(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1163(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1164(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1165(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1166(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1167(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1168(EIF_REFERENCE);
extern EIF_TYPED_VALUE F63_1169(EIF_REFERENCE);
extern void F63_7074(EIF_REFERENCE, int);
extern void EIF_Minit63(void);

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

/* {TOML_TOKEN}.make */
void F63_1140 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_r
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,arg2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 62, Current, 0, 4, 1196);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1196);
	RTCC(arg2, 62, l_feature_name, 2, eif_new_type(276, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("valid_line", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg3 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("valid_column", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg4 >= ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 1095, 0x10000000, 1); /* type */
	*(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 1096, 0xF8000114, 0); /* value */
	tr1 = RTCCL(arg2);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(1096, dtype)) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 1097, 0x10000000, 1); /* line */
	*(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(7);
	RTDBGAA(Current, dtype, 1098, 0x10000000, 1); /* column */
	*(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype)) = (EIF_INTEGER_32) arg4;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("type_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("value_set", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1096, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTCEQ(tr1, arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("line_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg3)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("column_set", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg4)) {
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
	RTLO(6);
	RTEE;
#undef up1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {TOML_TOKEN}.type */
EIF_TYPED_VALUE F63_1141 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1095,Dtype(Current)));
	return r;
}


/* {TOML_TOKEN}.value */
EIF_TYPED_VALUE F63_1142 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(1096,Dtype(Current)));
	return r;
}


/* {TOML_TOKEN}.line */
EIF_TYPED_VALUE F63_1143 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1097,Dtype(Current)));
	return r;
}


/* {TOML_TOKEN}.column */
EIF_TYPED_VALUE F63_1144 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(1098,Dtype(Current)));
	return r;
}


/* {TOML_TOKEN}.is_eof */
EIF_TYPED_VALUE F63_1145 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_eof";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 62, Current, 0, 0, 1201);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1201);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1103, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {TOML_TOKEN}.is_error */
EIF_TYPED_VALUE F63_1146 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_error";
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
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
	
	RTEAA(l_feature_name, 62, Current, 0, 0, 1202);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1202);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0x04000000, 1,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype));
	ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1104, dtype))(Current)).it_i4);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
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

/* {TOML_TOKEN}.debug_output */
EIF_TYPED_VALUE F63_1147 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "debug_output";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 62, Current, 0, 0, 1203);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1203);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(0, 0xF8000111, 0,0); /* Result */
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1095, dtype));
	ui4_1 = ti4_1;
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(1102, dtype))(Current, ui4_1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,1);
	tr2 = RTMS_EX_H(": \"",3,3809314);
	ur1 = tr2;
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1096, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(1,2);
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4783, "to_string_8", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	ur1 = RTCCL(tr3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H("\" at ",5,543518752);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1097, dtype));
	tr1 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	tr2 = RTMS_EX_H(":",1,58);
	ur1 = tr2;
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(1098, dtype));
	tr1 = eif_out__i4_s1(ti4_1);
	ur1 = RTCCL(tr1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
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
#undef up2
#undef ur1
#undef ui4_1
}

/* {TOML_TOKEN}.token_type_name */
EIF_TYPED_VALUE F63_1148 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "token_type_name";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_REF, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 62, Current, 0, 1, 1204);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(62, Current, 1204);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 0L:
			RTHOOK(2);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("EOF",3,4542278);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 1L:
			RTHOOK(3);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("ERROR",5,1381655890);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			RTHOOK(4);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("NEWLINE",7,2020249157);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			RTHOOK(5);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("EQUALS",6,1566624339);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			RTHOOK(6);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("DOT",3,4476756);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			RTHOOK(7);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("COMMA",5,1330980673);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			RTHOOK(8);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("LBRACKET",8,167445332);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			RTHOOK(9);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("RBRACKET",8,168827732);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			RTHOOK(10);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("LBRACE",6,1529937733);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			RTHOOK(11);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("RBRACE",6,1541734213);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			RTHOOK(12);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("DOUBLE_LBRACKET",15,1568461652);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			RTHOOK(13);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("DOUBLE_RBRACKET",15,1569844052);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			RTHOOK(14);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("BARE_KEY",8,131617625);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			RTHOOK(15);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("BASIC_STRING",12,393937735);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			RTHOOK(16);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("LITERAL_STRING",14,1248617031);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			RTHOOK(17);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("ML_BASIC_STRING",15,10872135);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			RTHOOK(18);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("ML_LITERAL_STRING",17,700410951);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(19);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("INTEGER",7,1551244370);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(20);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("FLOAT",5,1280800084);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(21);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("BOOLEAN",7,294744910);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(22);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("DATETIME",8,2098811973);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(23);
			RTDBGAL(0, 0xF8000111, 0,0); /* Result */
			tr1 = RTMS_EX_H("UNKNOWN(",8,2102809640);
			tr2 = eif_out__i4_s1(arg1);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H(")",1,41);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4882, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			Result = (EIF_REFERENCE) RTCCL(tr1);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(24);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef ur1
#undef arg1
}

/* {TOML_TOKEN}.token_eof */
EIF_TYPED_VALUE F63_1149 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {TOML_TOKEN}.token_error */
EIF_TYPED_VALUE F63_1150 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {TOML_TOKEN}.token_newline */
EIF_TYPED_VALUE F63_1151 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {TOML_TOKEN}.token_equals */
EIF_TYPED_VALUE F63_1152 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {TOML_TOKEN}.token_dot */
EIF_TYPED_VALUE F63_1153 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {TOML_TOKEN}.token_comma */
EIF_TYPED_VALUE F63_1154 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {TOML_TOKEN}.token_lbracket */
EIF_TYPED_VALUE F63_1155 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {TOML_TOKEN}.token_rbracket */
EIF_TYPED_VALUE F63_1156 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {TOML_TOKEN}.token_lbrace */
EIF_TYPED_VALUE F63_1157 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {TOML_TOKEN}.token_rbrace */
EIF_TYPED_VALUE F63_1158 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {TOML_TOKEN}.token_double_lbracket */
EIF_TYPED_VALUE F63_1159 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {TOML_TOKEN}.token_double_rbracket */
EIF_TYPED_VALUE F63_1160 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {TOML_TOKEN}.token_bare_key */
EIF_TYPED_VALUE F63_1161 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {TOML_TOKEN}.token_basic_string */
EIF_TYPED_VALUE F63_1162 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {TOML_TOKEN}.token_literal_string */
EIF_TYPED_VALUE F63_1163 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {TOML_TOKEN}.token_ml_basic_string */
EIF_TYPED_VALUE F63_1164 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {TOML_TOKEN}.token_ml_literal_string */
EIF_TYPED_VALUE F63_1165 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {TOML_TOKEN}.token_integer */
EIF_TYPED_VALUE F63_1166 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 17L);
	return r;
}

/* {TOML_TOKEN}.token_float */
EIF_TYPED_VALUE F63_1167 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 18L);
	return r;
}

/* {TOML_TOKEN}.token_boolean */
EIF_TYPED_VALUE F63_1168 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 19L);
	return r;
}

/* {TOML_TOKEN}.token_datetime */
EIF_TYPED_VALUE F63_1169 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 20L);
	return r;
}

/* {TOML_TOKEN}._invariant */
void F63_7074 (EIF_REFERENCE Current, int where)
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
	RTEAINV(l_feature_name, 62, Current, 0, 7073);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("value_not_void", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1096, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
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

void EIF_Minit63 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif

#include "matrice.bmx.gui.debug.linux.x64.h"
struct BBString_1{BBClass_String* clas;BBULONG hash;int length;BBChar buf[1];};
struct BBString_11{BBClass_String* clas;BBULONG hash;int length;BBChar buf[11];};
struct BBString_4{BBClass_String* clas;BBULONG hash;int length;BBChar buf[4];};
struct BBString_8{BBClass_String* clas;BBULONG hash;int length;BBChar buf[8];};
struct BBString_19{BBClass_String* clas;BBULONG hash;int length;BBChar buf[19];};
struct BBString_5{BBClass_String* clas;BBULONG hash;int length;BBChar buf[5];};
struct BBString_2{BBClass_String* clas;BBULONG hash;int length;BBChar buf[2];};
struct BBString_6{BBClass_String* clas;BBULONG hash;int length;BBChar buf[6];};
static struct BBString_1 _s0={
	&bbStringClass,
	0xbbe01a6a523daf15,
	1,
	{10}
};
static struct BBString_11 _s8={
	&bbStringClass,
	0x16c1ebf52deb2f85,
	11,
	{75,101,121,99,104,97,105,110,66,111,121}
};
static struct BBString_4 _s4={
	&bbStringClass,
	0x9815d2f9507cb1db,
	4,
	{100,111,119,110}
};
static struct BBString_4 _s9={
	&bbStringClass,
	0xa64227a644785b05,
	4,
	{100,114,97,119}
};
static struct BBString_8 _s13={
	&bbStringClass,
	0x1b020a6bbda865d3,
	8,
	{103,97,109,101,46,108,117,97}
};
static struct BBString_19 _s12={
	&bbStringClass,
	0xce8066720520791c,
	19,
	{105,110,99,98,105,110,58,58,108,117,97,108,105,98,115,46,108
	,117,97}
};
static struct BBString_4 _s15={
	&bbStringClass,
	0x2efe3c2b5ff3cbd6,
	4,
	{105,110,105,116}
};
static struct BBString_5 _s11={
	&bbStringClass,
	0x49f2bafb6ce88545,
	5,
	{105,110,112,117,116}
};
static struct BBString_4 _s5={
	&bbStringClass,
	0x6a1651845514012a,
	4,
	{108,101,102,116}
};
static struct BBString_11 _s7={
	&bbStringClass,
	0x45356f7883054c37,
	11,
	{108,117,97,108,105,98,115,46,108,117,97}
};
static struct BBString_11 _s14={
	&bbStringClass,
	0xaf9bfbb03358245c,
	11,
	{112,122,105,109,51,120,53,46,116,116,102}
};
static struct BBString_5 _s6={
	&bbStringClass,
	0xcc64dbf005f50da6,
	5,
	{114,105,103,104,116}
};
static struct BBString_2 _s3={
	&bbStringClass,
	0x9e224da1876ca2ae,
	2,
	{117,112}
};
static struct BBString_6 _s16={
	&bbStringClass,
	0x4cb0e73ba020bf30,
	6,
	{117,112,100,97,116,101}
};
static struct BBString_5 _s10={
	&bbStringClass,
	0xdc0bb743ade23334,
	5,
	{117,116,105,108,115}
};
static struct BBString_1 _s2={
	&bbStringClass,
	0xa68707a2dbd7adad,
	1,
	{120}
};
static struct BBString_1 _s1={
	&bbStringClass,
	0xecb759e797d6e101,
	1,
	{122}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_10{int kind; const char *name; BBDebugDecl decls[11]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_5{int kind; const char *name; BBDebugDecl decls[6]; };
struct BBDebugScope_6{int kind; const char *name; BBDebugDecl decls[7]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void __m_matrice_TdrawApi_New(struct _m_matrice_TdrawApi_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_matrice_TdrawApi;
}
void __m_matrice_TdrawApi_backlight_iii(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"backlight",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"R",
				"i",
				.var_address=&bbt_R
			},
			{
				BBDEBUGDECL_LOCAL,
				"G",
				"i",
				.var_address=&bbt_G
			},
			{
				BBDEBUGDECL_LOCAL,
				"B",
				"i",
				.var_address=&bbt_B
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 6, 0};
	bbOnDebugEnterStm(&__stmt_0);
	_m_matrice_TdrawApi_bg=ray_lib_common_RColor_New_iiii_ObjectNew(bbt_R,bbt_G,bbt_B,255);
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 7, 0};
	bbOnDebugEnterStm(&__stmt_1);
	ray_lib_ClearBackground(_m_matrice_TdrawApi_bg);
	bbOnDebugLeaveScope();
}
struct ray_lib_common_RColor __m_matrice_TdrawApi_IntToColor_f(struct _m_matrice_TdrawApi_obj* o,BBFLOAT bbt_i){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	BBINT bbt_r=0;
	BBINT bbt_g=0;
	BBINT bbt_b=0;
	struct BBDebugScope_5 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"IntToColor",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"f",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"r",
				"i",
				.var_address=&bbt_r
			},
			{
				BBDEBUGDECL_LOCAL,
				"g",
				"i",
				.var_address=&bbt_g
			},
			{
				BBDEBUGDECL_LOCAL,
				"b",
				"i",
				.var_address=&bbt_b
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 13, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(bbt_i<0.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 13, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=0.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 14, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_i>1.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 14, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=1.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0xc4f61b6110483b6f, 15, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_i==0.0f){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 15, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_i=1.0f;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0xc4f61b6110483b6f, 16, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbt_r=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_r )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_r )*bbt_i)));
	struct BBDebugStm __stmt_4 = {0xc4f61b6110483b6f, 17, 0};
	bbOnDebugEnterStm(&__stmt_4);
	bbt_g=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_g )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_g )*bbt_i)));
	struct BBDebugStm __stmt_5 = {0xc4f61b6110483b6f, 18, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbt_b=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_b )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_b )*bbt_i)));
	struct BBDebugStm __stmt_6 = {0xc4f61b6110483b6f, 20, 0};
	bbOnDebugEnterStm(&__stmt_6);
	bbOnDebugLeaveScope();
	return ray_lib_common_RColor_New_iiii_ObjectNew(bbt_r,bbt_g,bbt_b,255);
}
void __m_matrice_TdrawApi_point_iif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_x,BBINT bbt_y,BBFLOAT bbt_i){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"point",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"f",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 27, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	ray_lib_DrawPixel(bbt_x,bbt_y,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
	bbOnDebugLeaveScope();
}
void __m_matrice_TdrawApi_line_iiiif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_startx,BBINT bbt_startY,BBINT bbt_endX,BBINT bbt_endY,BBFLOAT bbt_i){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"line",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"startx",
				"i",
				.var_address=&bbt_startx
			},
			{
				BBDEBUGDECL_LOCAL,
				"startY",
				"i",
				.var_address=&bbt_startY
			},
			{
				BBDEBUGDECL_LOCAL,
				"endX",
				"i",
				.var_address=&bbt_endX
			},
			{
				BBDEBUGDECL_LOCAL,
				"endY",
				"i",
				.var_address=&bbt_endY
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"f",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 31, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	ray_lib_DrawLine(bbt_startx,bbt_startY,bbt_endX,bbt_endY,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
	bbOnDebugLeaveScope();
}
void __m_matrice_TdrawApi_rect_iiiif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_Width,BBINT bbt_height,BBFLOAT bbt_i){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"rect",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"Width",
				"i",
				.var_address=&bbt_Width
			},
			{
				BBDEBUGDECL_LOCAL,
				"height",
				"i",
				.var_address=&bbt_height
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"f",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 35, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	ray_lib_DrawRectangle(bbt_x,bbt_y,bbt_Width,bbt_height,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
	bbOnDebugLeaveScope();
}
void __m_matrice_TdrawApi_text_Siif(struct _m_matrice_TdrawApi_obj* o,BBSTRING bbt_text,BBINT bbt_x,BBINT bbt_y,BBFLOAT bbt_i){
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	struct ray_lib_common_RVector2 bbt_position=((struct ray_lib_common_RVector2){0,0});
	struct BBDebugScope_6 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"text",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TdrawApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"text",
				"$",
				.var_address=&bbt_text
			},
			{
				BBDEBUGDECL_LOCAL,
				"x",
				"i",
				.var_address=&bbt_x
			},
			{
				BBDEBUGDECL_LOCAL,
				"y",
				"i",
				.var_address=&bbt_y
			},
			{
				BBDEBUGDECL_LOCAL,
				"i",
				"f",
				.var_address=&bbt_i
			},
			{
				BBDEBUGDECL_LOCAL,
				"position",
				"@RVector2",
				.var_address=&bbt_position
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 39, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_position=ray_lib_common_RVector2_New_ff_ObjectNew(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y));
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 41, 0};
	bbOnDebugEnterStm(&__stmt_1);
	((struct _m_matrice_TdrawApi_obj*)bbNullObjectTest((BBObject*)o));
	ray_lib_DrawTextEx(_m_matrice_font1,bbt_text,bbt_position,5.00000000f,1.00000000f,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
	bbOnDebugLeaveScope();
}
struct ray_lib_common_RColor _m_matrice_TdrawApi_bg;
struct BBDebugScope_8 _m_matrice_TdrawApi_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TdrawApi",
	{
		{
			BBDEBUGDECL_GLOBAL,
			"bg",
			"@RColor",
			.var_address=(void*)&_m_matrice_TdrawApi_bg
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"backlight",
			"(i,i,i)",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_backlight_iii
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"IntToColor",
			"(f)@RColor",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_IntToColor_f
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"point",
			"(i,i,f)",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_point_iif
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"line",
			"(i,i,i,i,f)",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_line_iiiif
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"rect",
			"(i,i,i,i,f)",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_rect_iiiif
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"text",
			"($,i,i,f)",
			.func_ptr=(BBFuncPtr)&__m_matrice_TdrawApi_text_Siif
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_matrice_TdrawApi _m_matrice_TdrawApi={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_matrice_TdrawApi_scope,
	sizeof(struct _m_matrice_TdrawApi_obj),
	(void (*)(BBOBJECT))__m_matrice_TdrawApi_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_matrice_TdrawApi_backlight_iii
	,__m_matrice_TdrawApi_IntToColor_f
	,__m_matrice_TdrawApi_point_iif
	,__m_matrice_TdrawApi_line_iiiif
	,__m_matrice_TdrawApi_rect_iiiif
	,__m_matrice_TdrawApi_text_Siif
};

void __m_matrice_TutilsApi_New(struct _m_matrice_TutilsApi_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_matrice_TutilsApi;
}
BBFLOAT __m_matrice_TutilsApi_dt(struct _m_matrice_TutilsApi_obj* o){
	((struct _m_matrice_TutilsApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"dt",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TutilsApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 50, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbOnDebugLeaveScope();
	return ray_lib_GetFrameTime();
}
void __m_matrice_TutilsApi_Identifier(struct _m_matrice_TutilsApi_obj* o){
	((struct _m_matrice_TutilsApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Identifier",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TutilsApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	bbOnDebugLeaveScope();
}
struct BBDebugScope_3 _m_matrice_TutilsApi_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TutilsApi",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_matrice_TutilsApi_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"dt",
			"()f",
			.func_ptr=(BBFuncPtr)&__m_matrice_TutilsApi_dt
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Identifier",
			"()",
			.func_ptr=(BBFuncPtr)&__m_matrice_TutilsApi_Identifier
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_matrice_TutilsApi _m_matrice_TutilsApi={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_matrice_TutilsApi_scope,
	sizeof(struct _m_matrice_TutilsApi_obj),
	(void (*)(BBOBJECT))__m_matrice_TutilsApi_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_matrice_TutilsApi_dt
	,__m_matrice_TutilsApi_Identifier
};

void __m_matrice_TinputApi_New(struct _m_matrice_TinputApi_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_matrice_TinputApi;
}
BBSTRING __m_matrice_TinputApi_down(struct _m_matrice_TinputApi_obj* o){
	((struct _m_matrice_TinputApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"down",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TinputApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 65, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(ray_lib_IsKeyDown(90)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 66, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s1);
	}
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 69, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(ray_lib_IsKeyDown(88)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 70, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s2);
	}
	struct BBDebugStm __stmt_2 = {0xc4f61b6110483b6f, 73, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(ray_lib_IsKeyDown(265)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 74, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s3);
	}
	struct BBDebugStm __stmt_3 = {0xc4f61b6110483b6f, 77, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(ray_lib_IsKeyDown(264)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 78, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s4);
	}
	struct BBDebugStm __stmt_4 = {0xc4f61b6110483b6f, 81, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(ray_lib_IsKeyDown(263)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 82, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s5);
	}
	struct BBDebugStm __stmt_5 = {0xc4f61b6110483b6f, 85, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(ray_lib_IsKeyDown(262)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 86, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s6);
	}
	bbOnDebugLeaveScope();
	return ((BBString*)&bbEmptyString);
}
BBSTRING __m_matrice_TinputApi_pressed(struct _m_matrice_TinputApi_obj* o){
	((struct _m_matrice_TinputApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"pressed",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TinputApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 92, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(ray_lib_IsKeyPressed(90)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 93, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s1);
	}
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 96, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(ray_lib_IsKeyPressed(88)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 97, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s2);
	}
	struct BBDebugStm __stmt_2 = {0xc4f61b6110483b6f, 100, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(ray_lib_IsKeyPressed(265)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 101, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s3);
	}
	struct BBDebugStm __stmt_3 = {0xc4f61b6110483b6f, 104, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(ray_lib_IsKeyPressed(264)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 105, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s4);
	}
	struct BBDebugStm __stmt_4 = {0xc4f61b6110483b6f, 108, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(ray_lib_IsKeyPressed(263)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 109, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s5);
	}
	struct BBDebugStm __stmt_5 = {0xc4f61b6110483b6f, 112, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(ray_lib_IsKeyPressed(262)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 113, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s6);
	}
	bbOnDebugLeaveScope();
	return ((BBString*)&bbEmptyString);
}
BBSTRING __m_matrice_TinputApi_released(struct _m_matrice_TinputApi_obj* o){
	((struct _m_matrice_TinputApi_obj*)bbNullObjectTest((BBObject*)o));
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"released",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TinputApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 119, 0};
	bbOnDebugEnterStm(&__stmt_0);
	if(ray_lib_IsKeyReleased(90)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 120, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s1);
	}
	struct BBDebugStm __stmt_1 = {0xc4f61b6110483b6f, 123, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(ray_lib_IsKeyReleased(88)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 124, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s2);
	}
	struct BBDebugStm __stmt_2 = {0xc4f61b6110483b6f, 127, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(ray_lib_IsKeyReleased(265)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 128, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s3);
	}
	struct BBDebugStm __stmt_3 = {0xc4f61b6110483b6f, 131, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(ray_lib_IsKeyReleased(264)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 132, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s4);
	}
	struct BBDebugStm __stmt_4 = {0xc4f61b6110483b6f, 135, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(ray_lib_IsKeyReleased(263)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 136, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s5);
	}
	struct BBDebugStm __stmt_5 = {0xc4f61b6110483b6f, 139, 0};
	bbOnDebugEnterStm(&__stmt_5);
	if(ray_lib_IsKeyReleased(262)!=0){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xc4f61b6110483b6f, 140, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbOnDebugLeaveScope();
		bbOnDebugLeaveScope();
		return ((BBString*)&_s6);
	}
	bbOnDebugLeaveScope();
	return ((BBString*)&bbEmptyString);
}
struct BBDebugScope_4 _m_matrice_TinputApi_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TinputApi",
	{
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_matrice_TinputApi_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"down",
			"()$",
			.func_ptr=(BBFuncPtr)&__m_matrice_TinputApi_down
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"pressed",
			"()$",
			.func_ptr=(BBFuncPtr)&__m_matrice_TinputApi_pressed
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"released",
			"()$",
			.func_ptr=(BBFuncPtr)&__m_matrice_TinputApi_released
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_matrice_TinputApi _m_matrice_TinputApi={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_matrice_TinputApi_scope,
	sizeof(struct _m_matrice_TinputApi_obj),
	(void (*)(BBOBJECT))__m_matrice_TinputApi_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	0
	,0
	,sizeof(void*)
	,__m_matrice_TinputApi_down
	,__m_matrice_TinputApi_pressed
	,__m_matrice_TinputApi_released
};

BBSTRING _m_matrice_LoadFileAsString(BBOBJECT bbt_url){
	struct brl_stream_TStream_obj* bbt_file=(struct brl_stream_TStream_obj*)((struct brl_stream_TStream_obj*)&bbNullObject);
	BBSTRING bbt_contents=(&bbEmptyString);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"LoadFileAsString",
		{
			{
				BBDEBUGDECL_LOCAL,
				"url",
				":Object",
				.var_address=&bbt_url
			},
			{
				BBDEBUGDECL_LOCAL,
				"file",
				":TStream",
				.var_address=&bbt_file
			},
			{
				BBDEBUGDECL_LOCAL,
				"contents",
				"$",
				.var_address=&bbt_contents
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 31, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_file=(struct brl_stream_TStream_obj*)brl_filesystem_ReadFile((BBOBJECT)bbt_url);
	struct BBDebugStm __stmt_1 = {0xd7ad34cddf2310a1, 32, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_contents=((BBString*)&bbEmptyString);
	struct BBDebugStm __stmt_2 = {0xd7ad34cddf2310a1, 34, 0};
	bbOnDebugEnterStm(&__stmt_2);
	while(!(((struct brl_stream_TStream_obj*)bbNullObjectTest((BBObject*)bbt_file))->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_file)!=0)){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 35, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_contents=bbStringConcat(bbt_contents,(bbStringConcat(((struct brl_stream_TStream_obj*)bbNullObjectTest((BBObject*)bbt_file))->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_file),((BBString*)&_s0))));
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0xd7ad34cddf2310a1, 38, 0};
	bbOnDebugEnterStm(&__stmt_3);
	bbOnDebugLeaveScope();
	return bbt_contents;
}
struct ray_lib_common_RFont _m_matrice_font1=(struct ray_lib_common_RFont)((struct ray_lib_common_RFont){0,0,0,{0,0,0,0,0},0,0});
struct ray_lib_common_RVector2 _m_matrice_ClampValue(struct ray_lib_common_RVector2 bbt_value,struct ray_lib_common_RVector2 bbt_minimum,struct ray_lib_common_RVector2 bbt_maximum){
	struct ray_lib_common_RVector2 bbt_result=((struct ray_lib_common_RVector2){0,0});
	struct BBDebugScope_4 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"ClampValue",
		{
			{
				BBDEBUGDECL_LOCAL,
				"value",
				"@RVector2",
				.var_address=&bbt_value
			},
			{
				BBDEBUGDECL_LOCAL,
				"minimum",
				"@RVector2",
				.var_address=&bbt_minimum
			},
			{
				BBDEBUGDECL_LOCAL,
				"maximum",
				"@RVector2",
				.var_address=&bbt_maximum
			},
			{
				BBDEBUGDECL_LOCAL,
				"result",
				"@RVector2",
				.var_address=&bbt_result
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 4, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_result=bbt_value;
	struct BBDebugStm __stmt_1 = {0xd7ad34cddf2310a1, 6, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(bbt_result._ray_lib_common_rvector2_x >bbt_maximum._ray_lib_common_rvector2_x ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 7, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_result._ray_lib_common_rvector2_x =bbt_maximum._ray_lib_common_rvector2_x ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_2 = {0xd7ad34cddf2310a1, 10, 0};
	bbOnDebugEnterStm(&__stmt_2);
	if(bbt_result._ray_lib_common_rvector2_x <bbt_minimum._ray_lib_common_rvector2_x ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 11, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_result._ray_lib_common_rvector2_x =bbt_minimum._ray_lib_common_rvector2_x ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_3 = {0xd7ad34cddf2310a1, 14, 0};
	bbOnDebugEnterStm(&__stmt_3);
	if(bbt_result._ray_lib_common_rvector2_y >bbt_maximum._ray_lib_common_rvector2_y ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 15, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_result._ray_lib_common_rvector2_y =bbt_maximum._ray_lib_common_rvector2_y ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_4 = {0xd7ad34cddf2310a1, 18, 0};
	bbOnDebugEnterStm(&__stmt_4);
	if(bbt_result._ray_lib_common_rvector2_y <bbt_minimum._ray_lib_common_rvector2_y ){
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xd7ad34cddf2310a1, 19, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_result._ray_lib_common_rvector2_y =bbt_minimum._ray_lib_common_rvector2_y ;
		bbOnDebugLeaveScope();
	}
	struct BBDebugStm __stmt_5 = {0xd7ad34cddf2310a1, 22, 0};
	bbOnDebugEnterStm(&__stmt_5);
	bbOnDebugLeaveScope();
	return bbt_result;
}
extern const unsigned char * _ib_bb_main_1_data;
extern const unsigned int _ib_bb_main_1_size;
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		GC_add_roots(&_m_matrice_font1, &_m_matrice_TdrawApi_bg + 1);
		bbIncbinAdd((BBString*)&_s7,&_ib_bb_main_1_data,_ib_bb_main_1_size);
		__bb_brl_blitz_blitz();
		__bb_ray_lib_lib();
		__bb_brl_basic_basic();
		__bb_brl_maxlua_maxlua();
		__bb_ray_math_math();
		bbObjectRegisterType((BBCLASS)&_m_matrice_TdrawApi);
		bbObjectRegisterType((BBCLASS)&_m_matrice_TutilsApi);
		bbObjectRegisterType((BBCLASS)&_m_matrice_TinputApi);
		bbRegisterSource(0xab034328689402f6, "/home/jo/Documenti/progetti/matrice.bmx/matrice.bmx");
		bbRegisterSource(0xc4f61b6110483b6f, "/home/jo/Documenti/progetti/matrice.bmx/Tapi.bmx");
		bbRegisterSource(0xd7ad34cddf2310a1, "/home/jo/Documenti/progetti/matrice.bmx/Utils.bmx");
		_m_matrice_TdrawApi_bg=((struct ray_lib_common_RColor){0,0,0,0});
		_m_matrice_TdrawApi_bg=ray_lib_common_RColor_New_iiii_ObjectNew(0,0,0,255);
		BBINT bbt_gameScreenWidth=0;
		BBINT bbt_gameScreenHeight=0;
		struct ray_lib_common_RRenderTexture2D bbt_target=((struct ray_lib_common_RRenderTexture2D){0,{0,0,0,0,0},{0,0,0,0,0}});
		struct _m_matrice_TdrawApi_obj* bbt_drawApi=(struct _m_matrice_TdrawApi_obj*)((struct _m_matrice_TdrawApi_obj*)&bbNullObject);
		struct _m_matrice_TutilsApi_obj* bbt_utilsApi=(struct _m_matrice_TutilsApi_obj*)((struct _m_matrice_TutilsApi_obj*)&bbNullObject);
		struct _m_matrice_TinputApi_obj* bbt_inputApi=(struct _m_matrice_TinputApi_obj*)((struct _m_matrice_TinputApi_obj*)&bbNullObject);
		BBSTRING bbt_source=(&bbEmptyString);
		struct brl_maxlua_TLuaClass_obj* bbt_class=(struct brl_maxlua_TLuaClass_obj*)((struct brl_maxlua_TLuaClass_obj*)&bbNullObject);
		struct brl_maxlua_TLuaObject_obj* bbt_instance=(struct brl_maxlua_TLuaObject_obj*)((struct brl_maxlua_TLuaObject_obj*)&bbNullObject);
		struct BBDebugScope_10 __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"matrice",
			{
				{
					BBDEBUGDECL_GLOBAL,
					"font1",
					"@RFont",
					.var_address=(void*)&_m_matrice_font1
				},
				{
					BBDEBUGDECL_LOCAL,
					"gameScreenWidth",
					"i",
					.var_address=&bbt_gameScreenWidth
				},
				{
					BBDEBUGDECL_LOCAL,
					"gameScreenHeight",
					"i",
					.var_address=&bbt_gameScreenHeight
				},
				{
					BBDEBUGDECL_LOCAL,
					"target",
					"@RRenderTexture2D",
					.var_address=&bbt_target
				},
				{
					BBDEBUGDECL_LOCAL,
					"drawApi",
					":TdrawApi",
					.var_address=&bbt_drawApi
				},
				{
					BBDEBUGDECL_LOCAL,
					"utilsApi",
					":TutilsApi",
					.var_address=&bbt_utilsApi
				},
				{
					BBDEBUGDECL_LOCAL,
					"inputApi",
					":TinputApi",
					.var_address=&bbt_inputApi
				},
				{
					BBDEBUGDECL_LOCAL,
					"source",
					"$",
					.var_address=&bbt_source
				},
				{
					BBDEBUGDECL_LOCAL,
					"class",
					":TLuaClass",
					.var_address=&bbt_class
				},
				{
					BBDEBUGDECL_LOCAL,
					"instance",
					":TLuaObject",
					.var_address=&bbt_instance
				},
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		struct BBDebugStm __stmt_0 = {0xab034328689402f6, 27, 0};
		bbOnDebugEnterStm(&__stmt_0);
		ray_lib_SetConfigFlags(68U);
		struct BBDebugStm __stmt_1 = {0xab034328689402f6, 28, 0};
		bbOnDebugEnterStm(&__stmt_1);
		ray_lib_InitWindow(800,450,((BBString*)&_s8));
		struct BBDebugStm __stmt_2 = {0xab034328689402f6, 29, 0};
		bbOnDebugEnterStm(&__stmt_2);
		ray_lib_SetWindowMinSize(320,240);
		struct BBDebugStm __stmt_3 = {0xab034328689402f6, 31, 0};
		bbOnDebugEnterStm(&__stmt_3);
		bbt_gameScreenWidth=64;
		struct BBDebugStm __stmt_4 = {0xab034328689402f6, 32, 0};
		bbOnDebugEnterStm(&__stmt_4);
		bbt_gameScreenHeight=36;
		struct BBDebugStm __stmt_5 = {0xab034328689402f6, 35, 0};
		bbOnDebugEnterStm(&__stmt_5);
		bbt_target=ray_lib_LoadRenderTexture(bbt_gameScreenWidth,bbt_gameScreenHeight);
		struct BBDebugStm __stmt_6 = {0xab034328689402f6, 36, 0};
		bbOnDebugEnterStm(&__stmt_6);
		ray_lib_SetTextureFilter(bbt_target._ray_lib_common_rrendertexture2d_texture ,0);
		struct BBDebugStm __stmt_7 = {0xab034328689402f6, 38, 0};
		bbOnDebugEnterStm(&__stmt_7);
		ray_lib_SetTargetFPS(60);
		struct BBDebugStm __stmt_8 = {0xab034328689402f6, 41, 0};
		bbOnDebugEnterStm(&__stmt_8);
		bbt_drawApi=(struct _m_matrice_TdrawApi_obj*)(struct _m_matrice_TdrawApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TdrawApi);
		struct BBDebugStm __stmt_9 = {0xab034328689402f6, 42, 0};
		bbOnDebugEnterStm(&__stmt_9);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_drawApi,((BBString*)&_s9));
		struct BBDebugStm __stmt_10 = {0xab034328689402f6, 44, 0};
		bbOnDebugEnterStm(&__stmt_10);
		bbt_utilsApi=(struct _m_matrice_TutilsApi_obj*)(struct _m_matrice_TutilsApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TutilsApi);
		struct BBDebugStm __stmt_11 = {0xab034328689402f6, 45, 0};
		bbOnDebugEnterStm(&__stmt_11);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_utilsApi,((BBString*)&_s10));
		struct BBDebugStm __stmt_12 = {0xab034328689402f6, 47, 0};
		bbOnDebugEnterStm(&__stmt_12);
		bbt_inputApi=(struct _m_matrice_TinputApi_obj*)(struct _m_matrice_TinputApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TinputApi);
		struct BBDebugStm __stmt_13 = {0xab034328689402f6, 48, 0};
		bbOnDebugEnterStm(&__stmt_13);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_inputApi,((BBString*)&_s11));
		struct BBDebugStm __stmt_14 = {0xab034328689402f6, 52, 0};
		bbOnDebugEnterStm(&__stmt_14);
		bbt_source=bbStringConcat(_m_matrice_LoadFileAsString((BBOBJECT)((BBString*)&_s12)),_m_matrice_LoadFileAsString((BBOBJECT)((BBString*)&_s13)));
		struct BBDebugStm __stmt_15 = {0xab034328689402f6, 56, 0};
		bbOnDebugEnterStm(&__stmt_15);
		bbt_class=(struct brl_maxlua_TLuaClass_obj*)brl_maxlua_TLuaClass_Create_TTLuaClass_S(bbt_source);
		struct BBDebugStm __stmt_16 = {0xab034328689402f6, 59, 0};
		bbOnDebugEnterStm(&__stmt_16);
		bbt_instance=(struct brl_maxlua_TLuaObject_obj*)brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject((struct brl_maxlua_TLuaClass_obj*)bbt_class,(BBOBJECT)&bbNullObject);
		struct BBDebugStm __stmt_17 = {0xab034328689402f6, 61, 0};
		bbOnDebugEnterStm(&__stmt_17);
		_m_matrice_font1=(struct ray_lib_common_RFont)ray_lib_LoadFont((BBString*)&_s14);
		struct BBDebugStm __stmt_18 = {0xab034328689402f6, 63, 0};
		bbOnDebugEnterStm(&__stmt_18);
		((struct brl_maxlua_TLuaObject_obj*)bbNullObjectTest((BBObject*)bbt_instance))->clas->m_Invoke_SaTObject((struct brl_maxlua_TLuaObject_obj*)bbt_instance,((BBString*)&_s15),(&bbEmptyArray));
		struct BBDebugStm __stmt_19 = {0xab034328689402f6, 67, 0};
		bbOnDebugEnterStm(&__stmt_19);
		while(!(ray_lib_WindowShouldClose()!=0)){
			BBFLOAT bbt_Scale=0;
			struct ray_lib_common_RVector2 bbt_mouse=((struct ray_lib_common_RVector2){0,0});
			struct ray_lib_common_RVector2 bbt_virtualMouse=((struct ray_lib_common_RVector2){0,0});
			struct BBDebugScope_3 __scope = {
				BBDEBUGSCOPE_LOCALBLOCK,
				0,
				{
					{
						BBDEBUGDECL_LOCAL,
						"Scale",
						"f",
						.var_address=&bbt_Scale
					},
					{
						BBDEBUGDECL_LOCAL,
						"mouse",
						"@RVector2",
						.var_address=&bbt_mouse
					},
					{
						BBDEBUGDECL_LOCAL,
						"virtualMouse",
						"@RVector2",
						.var_address=&bbt_virtualMouse
					},
					{
						BBDEBUGDECL_END
					}
				}
			};
			bbOnDebugEnterScope((BBDebugScope *)&__scope);
			struct BBDebugStm __stmt_0 = {0xab034328689402f6, 71, 0};
			bbOnDebugEnterStm(&__stmt_0);
			bbt_Scale=brl_blitz_Min3((((BBFLOAT)ray_lib_GetScreenWidth())/((BBFLOAT)bbt_gameScreenWidth)),(((BBFLOAT)ray_lib_GetScreenHeight())/((BBFLOAT)bbt_gameScreenHeight)));
			struct BBDebugStm __stmt_1 = {0xab034328689402f6, 75, 0};
			bbOnDebugEnterStm(&__stmt_1);
			bbt_mouse=ray_lib_GetMousePosition();
			struct BBDebugStm __stmt_2 = {0xab034328689402f6, 76, 0};
			bbOnDebugEnterStm(&__stmt_2);
			bbt_virtualMouse=ray_lib_common_RVector2_New_ObjectNew();
			struct BBDebugStm __stmt_3 = {0xab034328689402f6, 77, 0};
			bbOnDebugEnterStm(&__stmt_3);
			bbt_virtualMouse._ray_lib_common_rvector2_x =((bbt_mouse._ray_lib_common_rvector2_x -((((BBFLOAT)ray_lib_GetScreenWidth())-(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale))*0.5f))/bbt_Scale);
			struct BBDebugStm __stmt_4 = {0xab034328689402f6, 78, 0};
			bbOnDebugEnterStm(&__stmt_4);
			bbt_virtualMouse._ray_lib_common_rvector2_y =((bbt_mouse._ray_lib_common_rvector2_y -((((BBFLOAT)ray_lib_GetScreenHeight())-(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale))*0.5f))/bbt_Scale);
			struct BBDebugStm __stmt_5 = {0xab034328689402f6, 79, 0};
			bbOnDebugEnterStm(&__stmt_5);
			bbt_virtualMouse=_m_matrice_ClampValue(bbt_virtualMouse,ray_lib_common_RVector2_New_ff_ObjectNew(0.00000000f,0.00000000f),ray_lib_common_RVector2_New_ff_ObjectNew(((BBFLOAT)bbt_gameScreenWidth),((BBFLOAT)bbt_gameScreenHeight)));
			struct BBDebugStm __stmt_6 = {0xab034328689402f6, 83, 0};
			bbOnDebugEnterStm(&__stmt_6);
			ray_lib_BeginDrawing();
			struct BBDebugStm __stmt_7 = {0xab034328689402f6, 84, 0};
			bbOnDebugEnterStm(&__stmt_7);
			ray_lib_ClearBackground(ray_lib_common_BLACK);
			struct BBDebugStm __stmt_8 = {0xab034328689402f6, 86, 0};
			bbOnDebugEnterStm(&__stmt_8);
			ray_lib_BeginTextureMode(bbt_target);
			struct BBDebugStm __stmt_9 = {0xab034328689402f6, 87, 0};
			bbOnDebugEnterStm(&__stmt_9);
			((struct brl_maxlua_TLuaObject_obj*)bbNullObjectTest((BBObject*)bbt_instance))->clas->m_Invoke_SaTObject((struct brl_maxlua_TLuaObject_obj*)bbt_instance,((BBString*)&_s16),(&bbEmptyArray));
			struct BBDebugStm __stmt_10 = {0xab034328689402f6, 89, 0};
			bbOnDebugEnterStm(&__stmt_10);
			ray_lib_EndTextureMode();
			struct BBDebugStm __stmt_11 = {0xab034328689402f6, 96, 0};
			bbOnDebugEnterStm(&__stmt_11);
			ray_lib_DrawTexturePro(bbt_target._ray_lib_common_rrendertexture2d_texture ,ray_lib_common_RRectangle_New_ffff_ObjectNew(0.0f,0.0f,((BBFLOAT)bbt_target._ray_lib_common_rrendertexture2d_texture ._ray_lib_common_rtexture2d_width ),((BBFLOAT)-bbt_target._ray_lib_common_rrendertexture2d_texture ._ray_lib_common_rtexture2d_height )),ray_lib_common_RRectangle_New_ffff_ObjectNew(((((BBFLOAT)ray_lib_GetScreenWidth())-(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale))*0.5f),((((BBFLOAT)ray_lib_GetScreenHeight())-(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale))*0.5f),(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale),(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale)),ray_lib_common_RVector2_New_ff_ObjectNew(0.00000000f,0.00000000f),0.0f,ray_lib_common_WHITE);
			struct BBDebugStm __stmt_12 = {0xab034328689402f6, 97, 0};
			bbOnDebugEnterStm(&__stmt_12);
			ray_lib_EndDrawing();
			bbOnDebugLeaveScope();
		}
		struct BBDebugStm __stmt_20 = {0xab034328689402f6, 103, 0};
		bbOnDebugEnterStm(&__stmt_20);
		ray_lib_UnloadRenderTexture(bbt_target);
		struct BBDebugStm __stmt_21 = {0xab034328689402f6, 105, 0};
		bbOnDebugEnterStm(&__stmt_21);
		ray_lib_CloseWindow();
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}
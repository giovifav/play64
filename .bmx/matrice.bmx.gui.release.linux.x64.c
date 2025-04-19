#include "matrice.bmx.gui.release.linux.x64.h"
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
	0x718db1f80b30d14b,
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
	0xacff6bdd9d992e2e,
	1,
	{120}
};
static struct BBString_1 _s1={
	&bbStringClass,
	0xd35ac204cb77f6de,
	1,
	{122}
};
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
struct BBDebugScope_4{int kind; const char *name; BBDebugDecl decls[5]; };
struct BBDebugScope_8{int kind; const char *name; BBDebugDecl decls[9]; };
void __m_matrice_TdrawApi_New(struct _m_matrice_TdrawApi_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_matrice_TdrawApi;
}
void __m_matrice_TdrawApi_backlight_iii(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_R,BBINT bbt_G,BBINT bbt_B){
	_m_matrice_TdrawApi_bg=ray_lib_common_RColor_New_iiii_ObjectNew(bbt_R,bbt_G,bbt_B,255);
}
struct ray_lib_common_RColor __m_matrice_TdrawApi_IntToColor_f(struct _m_matrice_TdrawApi_obj* o,BBFLOAT bbt_i){
	if(bbt_i<0.0f){
		bbt_i=0.0f;
	}
	if(bbt_i>1.0f){
		bbt_i=1.0f;
	}
	if(bbt_i==0.0f){
		bbt_i=1.0f;
	}
	BBINT bbt_r=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_r )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_r )*bbt_i)));
	BBINT bbt_g=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_g )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_g )*bbt_i)));
	BBINT bbt_b=((BBINT)(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_b )-(((BBFLOAT)_m_matrice_TdrawApi_bg._ray_lib_common_rcolor_b )*bbt_i)));
	return ray_lib_common_RColor_New_iiii_ObjectNew(bbt_r,bbt_g,bbt_b,255);
}
void __m_matrice_TdrawApi_point_iif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_x,BBINT bbt_y,BBFLOAT bbt_i){
	ray_lib_DrawPixel(bbt_x,bbt_y,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
}
void __m_matrice_TdrawApi_line_iiiif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_startx,BBINT bbt_startY,BBINT bbt_endX,BBINT bbt_endY,BBFLOAT bbt_i){
	ray_lib_DrawLine(bbt_startx,bbt_startY,bbt_endX,bbt_endY,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
}
void __m_matrice_TdrawApi_rect_iiiif(struct _m_matrice_TdrawApi_obj* o,BBINT bbt_x,BBINT bbt_y,BBINT bbt_Width,BBINT bbt_height,BBFLOAT bbt_i){
	ray_lib_DrawRectangle(bbt_x,bbt_y,bbt_Width,bbt_height,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
}
void __m_matrice_TdrawApi_text_Siif(struct _m_matrice_TdrawApi_obj* o,BBSTRING bbt_text,BBINT bbt_x,BBINT bbt_y,BBFLOAT bbt_i){
	struct ray_lib_common_RVector2 bbt_position=ray_lib_common_RVector2_New_ff_ObjectNew(((BBFLOAT)bbt_x),((BBFLOAT)bbt_y));
	ray_lib_DrawTextEx(_m_matrice_font1,bbt_text,bbt_position,25.0000000f,1.00000000f,((struct _m_matrice_TdrawApi_obj*)o)->clas->m_IntToColor_f((struct _m_matrice_TdrawApi_obj*)o,bbt_i));
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
	return ray_lib_GetFrameTime();
}
void __m_matrice_TutilsApi_Identifier(struct _m_matrice_TutilsApi_obj* o){
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
	if(ray_lib_IsKeyDown(90)!=0){
		return ((BBString*)&_s1);
	}
	if(ray_lib_IsKeyDown(88)!=0){
		return ((BBString*)&_s2);
	}
	if(ray_lib_IsKeyDown(265)!=0){
		return ((BBString*)&_s3);
	}
	if(ray_lib_IsKeyDown(264)!=0){
		return ((BBString*)&_s4);
	}
	if(ray_lib_IsKeyDown(263)!=0){
		return ((BBString*)&_s5);
	}
	if(ray_lib_IsKeyDown(262)!=0){
		return ((BBString*)&_s6);
	}
	return ((BBString*)&bbEmptyString);
}
BBSTRING __m_matrice_TinputApi_pressed(struct _m_matrice_TinputApi_obj* o){
	if(ray_lib_IsKeyPressed(90)!=0){
		return ((BBString*)&_s1);
	}
	if(ray_lib_IsKeyPressed(88)!=0){
		return ((BBString*)&_s2);
	}
	if(ray_lib_IsKeyPressed(265)!=0){
		return ((BBString*)&_s3);
	}
	if(ray_lib_IsKeyPressed(264)!=0){
		return ((BBString*)&_s4);
	}
	if(ray_lib_IsKeyPressed(263)!=0){
		return ((BBString*)&_s5);
	}
	if(ray_lib_IsKeyPressed(262)!=0){
		return ((BBString*)&_s6);
	}
	return ((BBString*)&bbEmptyString);
}
BBSTRING __m_matrice_TinputApi_released(struct _m_matrice_TinputApi_obj* o){
	if(ray_lib_IsKeyReleased(90)!=0){
		return ((BBString*)&_s1);
	}
	if(ray_lib_IsKeyReleased(88)!=0){
		return ((BBString*)&_s2);
	}
	if(ray_lib_IsKeyReleased(265)!=0){
		return ((BBString*)&_s3);
	}
	if(ray_lib_IsKeyReleased(264)!=0){
		return ((BBString*)&_s4);
	}
	if(ray_lib_IsKeyReleased(263)!=0){
		return ((BBString*)&_s5);
	}
	if(ray_lib_IsKeyReleased(262)!=0){
		return ((BBString*)&_s6);
	}
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
	struct brl_stream_TStream_obj* bbt_file=(struct brl_stream_TStream_obj*)brl_filesystem_ReadFile((BBOBJECT)bbt_url);
	BBSTRING bbt_contents=((BBString*)&bbEmptyString);
	while(!((bbt_file)->clas->m_Eof((struct brl_stream_TIO_obj*)bbt_file)!=0)){
		bbt_contents=bbStringConcat(bbt_contents,(bbStringConcat((bbt_file)->clas->m_ReadLine((struct brl_stream_TStream_obj*)bbt_file),((BBString*)&_s0))));
	}
	return bbt_contents;
}
struct ray_lib_common_RFont _m_matrice_font1=(struct ray_lib_common_RFont)((struct ray_lib_common_RFont){0,0,{0,0,0,0,0},0,0});
struct ray_lib_common_RVector2 _m_matrice_ClampValue(struct ray_lib_common_RVector2 bbt_value,struct ray_lib_common_RVector2 bbt_minimum,struct ray_lib_common_RVector2 bbt_maximum){
	struct ray_lib_common_RVector2 bbt_result=bbt_value;
	if(bbt_result._ray_lib_common_rvector2_x >bbt_maximum._ray_lib_common_rvector2_x ){
		bbt_result._ray_lib_common_rvector2_x =bbt_maximum._ray_lib_common_rvector2_x ;
	}
	if(bbt_result._ray_lib_common_rvector2_x <bbt_minimum._ray_lib_common_rvector2_x ){
		bbt_result._ray_lib_common_rvector2_x =bbt_minimum._ray_lib_common_rvector2_x ;
	}
	if(bbt_result._ray_lib_common_rvector2_y >bbt_maximum._ray_lib_common_rvector2_y ){
		bbt_result._ray_lib_common_rvector2_y =bbt_maximum._ray_lib_common_rvector2_y ;
	}
	if(bbt_result._ray_lib_common_rvector2_y <bbt_minimum._ray_lib_common_rvector2_y ){
		bbt_result._ray_lib_common_rvector2_y =bbt_minimum._ray_lib_common_rvector2_y ;
	}
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
		_m_matrice_TdrawApi_bg=((struct ray_lib_common_RColor){0,0,0,0});
		_m_matrice_TdrawApi_bg=ray_lib_common_RColor_New_iiii_ObjectNew(0,0,0,255);
		ray_lib_SetConfigFlags(68U);
		ray_lib_InitWindow(800,450,((BBString*)&_s8));
		ray_lib_SetWindowMinSize(320,180);
		BBINT bbt_gameScreenWidth=320;
		BBINT bbt_gameScreenHeight=180;
		struct ray_lib_common_RRenderTexture2D bbt_target=ray_lib_LoadRenderTexture(bbt_gameScreenWidth,bbt_gameScreenHeight);
		ray_lib_SetTextureFilter(bbt_target._ray_lib_common_rrendertexture2d_texture ,0);
		ray_lib_SetTargetFPS(60);
		struct _m_matrice_TdrawApi_obj* bbt_drawApi=(struct _m_matrice_TdrawApi_obj*)(struct _m_matrice_TdrawApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TdrawApi);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_drawApi,((BBString*)&_s9));
		struct _m_matrice_TutilsApi_obj* bbt_utilsApi=(struct _m_matrice_TutilsApi_obj*)(struct _m_matrice_TutilsApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TutilsApi);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_utilsApi,((BBString*)&_s10));
		struct _m_matrice_TinputApi_obj* bbt_inputApi=(struct _m_matrice_TinputApi_obj*)(struct _m_matrice_TinputApi_obj*)bbObjectAtomicNew((BBClass *)&_m_matrice_TinputApi);
		brl_maxlua_LuaRegisterObject((BBOBJECT)bbt_inputApi,((BBString*)&_s11));
		BBSTRING bbt_source=bbStringConcat(_m_matrice_LoadFileAsString((BBOBJECT)((BBString*)&_s12)),_m_matrice_LoadFileAsString((BBOBJECT)((BBString*)&_s13)));
		struct brl_maxlua_TLuaClass_obj* bbt_class=(struct brl_maxlua_TLuaClass_obj*)brl_maxlua_TLuaClass_Create_TTLuaClass_S(bbt_source);
		struct brl_maxlua_TLuaObject_obj* bbt_instance=(struct brl_maxlua_TLuaObject_obj*)brl_maxlua_TLuaObject_Create_TTLuaObject_TTLuaClassTObject((struct brl_maxlua_TLuaClass_obj*)bbt_class,(BBOBJECT)&bbNullObject);
		_m_matrice_font1=(struct ray_lib_common_RFont)ray_lib_LoadFont((BBString*)&_s14);
		(bbt_instance)->clas->m_Invoke_SaTObject((struct brl_maxlua_TLuaObject_obj*)bbt_instance,((BBString*)&_s15),(&bbEmptyArray));
		while(!(ray_lib_WindowShouldClose()!=0)){
			BBFLOAT bbt_Scale=brl_blitz_Min3((((BBFLOAT)ray_lib_GetScreenWidth())/((BBFLOAT)bbt_gameScreenWidth)),(((BBFLOAT)ray_lib_GetScreenHeight())/((BBFLOAT)bbt_gameScreenHeight)));
			struct ray_lib_common_RVector2 bbt_mouse=ray_lib_GetMousePosition();
			struct ray_lib_common_RVector2 bbt_virtualMouse=ray_lib_common_RVector2_New_ObjectNew();
			bbt_virtualMouse._ray_lib_common_rvector2_x =((bbt_mouse._ray_lib_common_rvector2_x -((((BBFLOAT)ray_lib_GetScreenWidth())-(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale))*0.5f))/bbt_Scale);
			bbt_virtualMouse._ray_lib_common_rvector2_y =((bbt_mouse._ray_lib_common_rvector2_y -((((BBFLOAT)ray_lib_GetScreenHeight())-(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale))*0.5f))/bbt_Scale);
			bbt_virtualMouse=_m_matrice_ClampValue(bbt_virtualMouse,ray_lib_common_RVector2_New_ff_ObjectNew(0.00000000f,0.00000000f),ray_lib_common_RVector2_New_ff_ObjectNew(((BBFLOAT)bbt_gameScreenWidth),((BBFLOAT)bbt_gameScreenHeight)));
			ray_lib_BeginDrawing();
			ray_lib_BeginTextureMode(bbt_target);
			ray_lib_ClearBackground(_m_matrice_TdrawApi_bg);
			(bbt_instance)->clas->m_Invoke_SaTObject((struct brl_maxlua_TLuaObject_obj*)bbt_instance,((BBString*)&_s16),(&bbEmptyArray));
			ray_lib_EndTextureMode();
			ray_lib_DrawTexturePro(bbt_target._ray_lib_common_rrendertexture2d_texture ,ray_lib_common_RRectangle_New_ffff_ObjectNew(0.0f,0.0f,((BBFLOAT)bbt_target._ray_lib_common_rrendertexture2d_texture ._ray_lib_common_rtexture2d_width ),((BBFLOAT)-bbt_target._ray_lib_common_rrendertexture2d_texture ._ray_lib_common_rtexture2d_height )),ray_lib_common_RRectangle_New_ffff_ObjectNew(((((BBFLOAT)ray_lib_GetScreenWidth())-(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale))*0.5f),((((BBFLOAT)ray_lib_GetScreenHeight())-(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale))*0.5f),(((BBFLOAT)bbt_gameScreenWidth)*bbt_Scale),(((BBFLOAT)bbt_gameScreenHeight)*bbt_Scale)),ray_lib_common_RVector2_New_ff_ObjectNew(0.00000000f,0.00000000f),0.0f,ray_lib_common_WHITE);
			ray_lib_EndDrawing();
		}
		ray_lib_UnloadRenderTexture(bbt_target);
		ray_lib_CloseWindow();
		return 0;
	}
	return 0;
}
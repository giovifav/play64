#ifndef MATRICE_BMX_MATRICE_BMX_GUI_DEBUG_WIN32_X86_H
#define MATRICE_BMX_MATRICE_BMX_GUI_DEBUG_WIN32_X86_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x86.h>
#include <ray.mod/lib.mod/.bmx/lib.bmx.debug.win32.x86.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x86.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x86.h>
#include <ray.mod/math.mod/.bmx/math.bmx.debug.win32.x86.h>
int _bb_main();
struct _m_matrice_TdrawApi_obj;
struct _m_matrice_TutilsApi_obj;
struct _m_matrice_TinputApi_obj;
void __m_matrice_TdrawApi_New(struct _m_matrice_TdrawApi_obj* o);
typedef void (*_m_matrice_TdrawApi_backlight_iii_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT);
void __m_matrice_TdrawApi_backlight_iii(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT);
typedef struct ray_lib_common_RColor (*_m_matrice_TdrawApi_IntToColor_f_m)(struct _m_matrice_TdrawApi_obj*,BBFLOAT);
struct ray_lib_common_RColor __m_matrice_TdrawApi_IntToColor_f(struct _m_matrice_TdrawApi_obj*,BBFLOAT);
typedef void (*_m_matrice_TdrawApi_point_iif_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBFLOAT);
void __m_matrice_TdrawApi_point_iif(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBFLOAT);
typedef void (*_m_matrice_TdrawApi_line_iiiif_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT,BBFLOAT);
void __m_matrice_TdrawApi_line_iiiif(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT,BBFLOAT);
typedef void (*_m_matrice_TdrawApi_rect_iiiif_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT,BBFLOAT);
void __m_matrice_TdrawApi_rect_iiiif(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT,BBFLOAT);
typedef void (*_m_matrice_TdrawApi_text_Siif_m)(struct _m_matrice_TdrawApi_obj*,BBSTRING,BBINT,BBINT,BBFLOAT);
void __m_matrice_TdrawApi_text_Siif(struct _m_matrice_TdrawApi_obj*,BBSTRING,BBINT,BBINT,BBFLOAT);
struct BBClass__m_matrice_TdrawApi {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_matrice_TdrawApi_backlight_iii_m m_backlight_iii;
	_m_matrice_TdrawApi_IntToColor_f_m m_IntToColor_f;
	_m_matrice_TdrawApi_point_iif_m m_point_iif;
	_m_matrice_TdrawApi_line_iiiif_m m_line_iiiif;
	_m_matrice_TdrawApi_rect_iiiif_m m_rect_iiiif;
	_m_matrice_TdrawApi_text_Siif_m m_text_Siif;
};

struct _m_matrice_TdrawApi_obj {
	struct BBClass__m_matrice_TdrawApi* clas;
};
extern struct BBClass__m_matrice_TdrawApi _m_matrice_TdrawApi;
extern struct ray_lib_common_RColor _m_matrice_TdrawApi_bg;
void __m_matrice_TutilsApi_New(struct _m_matrice_TutilsApi_obj* o);
typedef BBFLOAT (*_m_matrice_TutilsApi_dt_m)(struct _m_matrice_TutilsApi_obj*);
BBFLOAT __m_matrice_TutilsApi_dt(struct _m_matrice_TutilsApi_obj*);
typedef void (*_m_matrice_TutilsApi_Identifier_m)(struct _m_matrice_TutilsApi_obj*);
void __m_matrice_TutilsApi_Identifier(struct _m_matrice_TutilsApi_obj*);
struct BBClass__m_matrice_TutilsApi {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_matrice_TutilsApi_dt_m m_dt;
	_m_matrice_TutilsApi_Identifier_m m_Identifier;
};

struct _m_matrice_TutilsApi_obj {
	struct BBClass__m_matrice_TutilsApi* clas;
};
extern struct BBClass__m_matrice_TutilsApi _m_matrice_TutilsApi;
void __m_matrice_TinputApi_New(struct _m_matrice_TinputApi_obj* o);
typedef BBSTRING (*_m_matrice_TinputApi_down_m)(struct _m_matrice_TinputApi_obj*);
BBSTRING __m_matrice_TinputApi_down(struct _m_matrice_TinputApi_obj*);
typedef BBSTRING (*_m_matrice_TinputApi_pressed_m)(struct _m_matrice_TinputApi_obj*);
BBSTRING __m_matrice_TinputApi_pressed(struct _m_matrice_TinputApi_obj*);
typedef BBSTRING (*_m_matrice_TinputApi_released_m)(struct _m_matrice_TinputApi_obj*);
BBSTRING __m_matrice_TinputApi_released(struct _m_matrice_TinputApi_obj*);
struct BBClass__m_matrice_TinputApi {
	BBClass*  super;
	void      (*free)( BBObject *o );
	BBDebugScope* debug_scope;
	unsigned int instance_size;
	void      (*ctor)( BBOBJECT o );
	void      (*dtor)( BBOBJECT o );
	BBSTRING  (*ToString)( BBOBJECT x );
	int       (*Compare)( BBOBJECT x,BBOBJECT y );
	BBOBJECT  (*SendMessage)( BBOBJECT o,BBOBJECT m,BBOBJECT s );
	BBINTERFACETABLE itable;
	void*     extra;
	unsigned int obj_size;
	unsigned int instance_count;
	unsigned int fields_offset;
	_m_matrice_TinputApi_down_m m_down;
	_m_matrice_TinputApi_pressed_m m_pressed;
	_m_matrice_TinputApi_released_m m_released;
};

struct _m_matrice_TinputApi_obj {
	struct BBClass__m_matrice_TinputApi* clas;
};
extern struct BBClass__m_matrice_TinputApi _m_matrice_TinputApi;
BBSTRING _m_matrice_LoadFileAsString(BBOBJECT bbt_url);
extern struct ray_lib_common_RFont _m_matrice_font1;
struct ray_lib_common_RVector2 _m_matrice_ClampValue(struct ray_lib_common_RVector2 bbt_value,struct ray_lib_common_RVector2 bbt_minimum,struct ray_lib_common_RVector2 bbt_maximum);

#endif

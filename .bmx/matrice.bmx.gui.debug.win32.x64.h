#ifndef MATRICE_BMX_MATRICE_BMX_GUI_DEBUG_WIN32_X64_H
#define MATRICE_BMX_MATRICE_BMX_GUI_DEBUG_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x64.h>
#include <ray.mod/lib.mod/.bmx/lib.bmx.debug.win32.x64.h>
#include <audio.mod/audiominiaudio.mod/.bmx/audiominiaudio.bmx.debug.win32.x64.h>
#include <brl.mod/standardio.mod/.bmx/standardio.bmx.debug.win32.x64.h>
#include <brl.mod/basic.mod/.bmx/basic.bmx.debug.win32.x64.h>
#include <brl.mod/maxlua.mod/.bmx/maxlua.bmx.debug.win32.x64.h>
int _bb_main();
struct _m_matrice_ScrollableList_obj;
struct _m_matrice_TdrawApi_obj;
struct _m_matrice_TappApi_obj;
struct _m_matrice_TinputApi_obj;
struct _m_matrice_TSoundApi_obj;
extern struct brl_audio_TSound_obj* _m_matrice_BLIP_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_CLICK_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_EXPLOSION_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_HIT_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_JUMP_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_LASER_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_PICKUP_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_POWERUP_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_RANDOM_SOUND;
extern struct brl_audio_TSound_obj* _m_matrice_SYNTH_SOUND;
extern BBINT _m_matrice_windowWidth;
extern BBINT _m_matrice_windowHeight;
extern BBSTRING _m_matrice_cartName;
void __m_matrice_ScrollableList_New(struct _m_matrice_ScrollableList_obj* o);
typedef void (*_m_matrice_ScrollableList_Update_m)(struct _m_matrice_ScrollableList_obj*);
void __m_matrice_ScrollableList_Update(struct _m_matrice_ScrollableList_obj*);
typedef void (*_m_matrice_ScrollableList_Draw_m)(struct _m_matrice_ScrollableList_obj*);
void __m_matrice_ScrollableList_Draw(struct _m_matrice_ScrollableList_obj*);
struct BBClass__m_matrice_ScrollableList {
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
	_m_matrice_ScrollableList_Update_m m_Update;
	_m_matrice_ScrollableList_Draw_m m_Draw;
};

struct _m_matrice_ScrollableList_obj {
	struct BBClass__m_matrice_ScrollableList* clas;
	BBINT __m_matrice_scrollablelist_itemheight;
	BBFLOAT __m_matrice_scrollablelist_scrollspeed;
	BBFLOAT __m_matrice_scrollablelist_scrollposition;
	BBINT __m_matrice_scrollablelist_maxitems;
	BBINT __m_matrice_scrollablelist_listheight;
	BBARRAY __m_matrice_scrollablelist_items;
	BBINT __m_matrice_scrollablelist_selectedindex;
	BBINT __m_matrice_scrollablelist_x;
	BBINT __m_matrice_scrollablelist_y;
	BBINT __m_matrice_scrollablelist_width;
};
extern struct BBClass__m_matrice_ScrollableList _m_matrice_ScrollableList;
extern struct brl_maxlua_TLuaObject_obj* _m_matrice_instance;
extern struct brl_maxlua_TLuaClass_obj* _m_matrice_class;
void __m_matrice_TdrawApi_New(struct _m_matrice_TdrawApi_obj* o);
typedef void (*_m_matrice_TdrawApi_background_i_m)(struct _m_matrice_TdrawApi_obj*,BBINT);
void __m_matrice_TdrawApi_background_i(struct _m_matrice_TdrawApi_obj*,BBINT);
typedef void (*_m_matrice_TdrawApi_color_i_m)(struct _m_matrice_TdrawApi_obj*,BBINT);
void __m_matrice_TdrawApi_color_i(struct _m_matrice_TdrawApi_obj*,BBINT);
typedef void (*_m_matrice_TdrawApi_point_ii_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT);
void __m_matrice_TdrawApi_point_ii(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT);
typedef void (*_m_matrice_TdrawApi_line_iiii_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT);
void __m_matrice_TdrawApi_line_iiii(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT);
typedef void (*_m_matrice_TdrawApi_rect_iiii_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT);
void __m_matrice_TdrawApi_rect_iiii(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT,BBINT);
typedef void (*_m_matrice_TdrawApi_text_Siii_m)(struct _m_matrice_TdrawApi_obj*,BBSTRING,BBINT,BBINT,BBINT);
void __m_matrice_TdrawApi_text_Siii(struct _m_matrice_TdrawApi_obj*,BBSTRING,BBINT,BBINT,BBINT);
typedef void (*_m_matrice_TdrawApi_circle_iii_m)(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT);
void __m_matrice_TdrawApi_circle_iii(struct _m_matrice_TdrawApi_obj*,BBINT,BBINT,BBINT);
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
	_m_matrice_TdrawApi_background_i_m m_background_i;
	_m_matrice_TdrawApi_color_i_m m_color_i;
	_m_matrice_TdrawApi_point_ii_m m_point_ii;
	_m_matrice_TdrawApi_line_iiii_m m_line_iiii;
	_m_matrice_TdrawApi_rect_iiii_m m_rect_iiii;
	_m_matrice_TdrawApi_text_Siii_m m_text_Siii;
	_m_matrice_TdrawApi_circle_iii_m m_circle_iii;
};

struct _m_matrice_TdrawApi_obj {
	struct BBClass__m_matrice_TdrawApi* clas;
};
extern struct BBClass__m_matrice_TdrawApi _m_matrice_TdrawApi;
extern struct ray_lib_common_RColor _m_matrice_TdrawApi_bg;
extern struct ray_lib_common_RColor _m_matrice_TdrawApi_mainColor;
extern struct _m_matrice_TdrawApi_obj* _m_matrice_drawApi;
void __m_matrice_TappApi_New(struct _m_matrice_TappApi_obj* o);
typedef BBFLOAT (*_m_matrice_TappApi_dt_m)(struct _m_matrice_TappApi_obj*);
BBFLOAT __m_matrice_TappApi_dt(struct _m_matrice_TappApi_obj*);
typedef void (*_m_matrice_TappApi_title_S_m)(struct _m_matrice_TappApi_obj*,BBSTRING);
void __m_matrice_TappApi_title_S(struct _m_matrice_TappApi_obj*,BBSTRING);
typedef void (*_m_matrice_TappApi_width_i_m)(struct _m_matrice_TappApi_obj*,BBINT);
void __m_matrice_TappApi_width_i(struct _m_matrice_TappApi_obj*,BBINT);
typedef void (*_m_matrice_TappApi_height_i_m)(struct _m_matrice_TappApi_obj*,BBINT);
void __m_matrice_TappApi_height_i(struct _m_matrice_TappApi_obj*,BBINT);
typedef void (*_m_matrice_TappApi_fullscreen_m)(struct _m_matrice_TappApi_obj*);
void __m_matrice_TappApi_fullscreen(struct _m_matrice_TappApi_obj*);
typedef void (*_m_matrice_TappApi_reset_m)(struct _m_matrice_TappApi_obj*);
void __m_matrice_TappApi_reset(struct _m_matrice_TappApi_obj*);
typedef void (*_m_matrice_TappApi_restart_m)(struct _m_matrice_TappApi_obj*);
void __m_matrice_TappApi_restart(struct _m_matrice_TappApi_obj*);
struct BBClass__m_matrice_TappApi {
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
	_m_matrice_TappApi_dt_m m_dt;
	_m_matrice_TappApi_title_S_m m_title_S;
	_m_matrice_TappApi_width_i_m m_width_i;
	_m_matrice_TappApi_height_i_m m_height_i;
	_m_matrice_TappApi_fullscreen_m m_fullscreen;
	_m_matrice_TappApi_reset_m m_reset;
	_m_matrice_TappApi_restart_m m_restart;
};

struct _m_matrice_TappApi_obj {
	struct BBClass__m_matrice_TappApi* clas;
};
extern struct BBClass__m_matrice_TappApi _m_matrice_TappApi;
extern struct _m_matrice_TappApi_obj* _m_matrice_appApi;
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
extern struct _m_matrice_TinputApi_obj* _m_matrice_inputApi;
void __m_matrice_TSoundApi_New(struct _m_matrice_TSoundApi_obj* o);
typedef void (*_m_matrice_TSoundApi_play_S_m)(struct _m_matrice_TSoundApi_obj*,BBSTRING);
void __m_matrice_TSoundApi_play_S(struct _m_matrice_TSoundApi_obj*,BBSTRING);
struct BBClass__m_matrice_TSoundApi {
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
	_m_matrice_TSoundApi_play_S_m m_play_S;
};

struct _m_matrice_TSoundApi_obj {
	struct BBClass__m_matrice_TSoundApi* clas;
};
extern struct BBClass__m_matrice_TSoundApi _m_matrice_TSoundApi;
extern struct _m_matrice_TSoundApi_obj* _m_matrice_soundApi;
BBSTRING _m_matrice_LoadFileAsString(BBOBJECT bbt_url);
void _m_matrice_LoadLua(BBSTRING bbt_file);
struct ray_lib_common_RColor _m_matrice_getPalette(BBINT bbt_n);
void _m_matrice_RunLua();
struct ray_lib_common_RColor _m_matrice_getPalette1(BBSTRING bbt_name);

#endif

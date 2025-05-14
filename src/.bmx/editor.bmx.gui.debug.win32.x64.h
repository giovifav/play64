#ifndef SRC_EDITOR_BMX_GUI_DEBUG_WIN32_X64_H
#define SRC_EDITOR_BMX_GUI_DEBUG_WIN32_X64_H

#include <brl.mod/blitz.mod/.bmx/blitz.bmx.debug.win32.x64.h>
#include <maxgui.mod/drivers.mod/.bmx/drivers.bmx.debug.win32.x64.h>
#include <brl.mod/eventqueue.mod/.bmx/eventqueue.bmx.debug.win32.x64.h>
int _bb_main();
struct _m_editor_TTextEditor_obj;
void __m_editor_TTextEditor_New(struct _m_editor_TTextEditor_obj* o);
typedef void (*_m_editor_TTextEditor_Init_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_Init(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_Update_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_Update(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_ResizeLayout_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_ResizeLayout(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_NewFileAction_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_NewFileAction(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_OpenFileAction_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_OpenFileAction(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_SaveAction_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_SaveAction(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_CheckForTextChange_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_CheckForTextChange(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_PerformUndo_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_PerformUndo(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_PerformRedo_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_PerformRedo(struct _m_editor_TTextEditor_obj*);
typedef BBINT (*_m_editor_TTextEditor_CheckUnsavedChanges_m)(struct _m_editor_TTextEditor_obj*);
BBINT __m_editor_TTextEditor_CheckUnsavedChanges(struct _m_editor_TTextEditor_obj*);
typedef void (*_m_editor_TTextEditor_UpdateWindowTitle_m)(struct _m_editor_TTextEditor_obj*);
void __m_editor_TTextEditor_UpdateWindowTitle(struct _m_editor_TTextEditor_obj*);
typedef BBSTRING (*_m_editor_TTextEditor_GetFileName_S_S_f)(BBSTRING);
BBSTRING _m_editor_TTextEditor_GetFileName_S_S(BBSTRING);
struct BBClass__m_editor_TTextEditor {
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
	_m_editor_TTextEditor_Init_m m_Init;
	_m_editor_TTextEditor_Update_m m_Update;
	_m_editor_TTextEditor_ResizeLayout_m m_ResizeLayout;
	_m_editor_TTextEditor_NewFileAction_m m_NewFileAction;
	_m_editor_TTextEditor_OpenFileAction_m m_OpenFileAction;
	_m_editor_TTextEditor_SaveAction_m m_SaveAction;
	_m_editor_TTextEditor_CheckForTextChange_m m_CheckForTextChange;
	_m_editor_TTextEditor_PerformUndo_m m_PerformUndo;
	_m_editor_TTextEditor_PerformRedo_m m_PerformRedo;
	_m_editor_TTextEditor_CheckUnsavedChanges_m m_CheckUnsavedChanges;
	_m_editor_TTextEditor_UpdateWindowTitle_m m_UpdateWindowTitle;
	_m_editor_TTextEditor_GetFileName_S_S_f f_GetFileName_S_S;
};

struct _m_editor_TTextEditor_obj {
	struct BBClass__m_editor_TTextEditor* clas;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_window;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_textarea;
	BBSTRING __m_editor_ttexteditor_currentfile;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btnsave;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btnundo;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btnredo;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btndocs;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btnnew;
	struct maxgui_maxgui_gadget_TGadget_obj* __m_editor_ttexteditor_btnopen;
	struct brl_linkedlist_TList_obj* __m_editor_ttexteditor_undostack;
	struct brl_linkedlist_TList_obj* __m_editor_ttexteditor_redostack;
	BBSTRING __m_editor_ttexteditor_lasttext;
};
extern struct BBClass__m_editor_TTextEditor _m_editor_TTextEditor;

#endif

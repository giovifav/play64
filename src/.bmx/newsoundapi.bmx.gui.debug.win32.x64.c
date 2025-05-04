#include "newsoundapi.bmx.gui.debug.win32.x64.h"
struct BBString_19{BBClass_String* clas;BBULONG hash;int length;BBChar buf[19];};
struct BBString_6{BBClass_String* clas;BBULONG hash;int length;BBChar buf[6];};
struct BBString_7{BBClass_String* clas;BBULONG hash;int length;BBChar buf[7];};
static struct BBString_19 _s15={
	&bbStringClass,
	0x1cafb1c6bf9575db,
	19,
	{83,117,111,110,111,32,110,111,110,32,116,114,111,118,97,116,111
	,58,32}
};
static struct BBString_6 _s13={
	&bbStringClass,
	0x99114cfd079f268b,
	6,
	{97,115,115,101,116,115}
};
static struct BBString_7 _s16={
	&bbStringClass,
	0xac6a880f7e3fbb51,
	7,
	{97,115,115,101,116,115,47}
};
struct BBDebugScope_1{int kind; const char *name; BBDebugDecl decls[2]; };
struct BBDebugScope_2{int kind; const char *name; BBDebugDecl decls[3]; };
struct BBDebugScope_3{int kind; const char *name; BBDebugDecl decls[4]; };
void __m_newsoundapi_TsoundApi_New(struct _m_newsoundapi_TsoundApi_obj* o) {
	bbObjectCtor((BBOBJECT)o);
	o->clas = &_m_newsoundapi_TsoundApi;
	((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds = (struct brl_map_TMap_obj*)((struct brl_map_TMap_obj*)&bbNullObject);
	BBSTRING bbt_file=(&bbEmptyString);
	struct BBDebugScope_1 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"New",
		{
			{
				BBDEBUGDECL_LOCAL,
				"file",
				"$",
				.var_address=&bbt_file
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 6, 0};
	bbOnDebugEnterStm(&__stmt_0);
	((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds =(struct brl_map_TMap_obj*)(struct brl_map_TMap_obj*)bbObjectNew((BBClass *)&brl_map_TMap);
	struct BBDebugStm __stmt_1 = {0xe57cca814a6c1240, 7, 0};
	bbOnDebugEnterStm(&__stmt_1);
	bbt_file=((BBString*)&bbEmptyString);
	struct BBDebugStm __stmt_2 = {0xe57cca814a6c1240, 8, 0};
	bbOnDebugEnterStm(&__stmt_2);
	BBARRAY bbt_=brl_filesystem_LoadDir(((BBString*)&_s13),1);
	BBUINT bbt_2=0U;
	while(bbt_2<((BBUINT)(bbt_->scales[0]))){
		BBSTRING bbt_fullPath=(&bbEmptyString);
		struct brl_audio_TSound_obj* bbt_sound=(struct brl_audio_TSound_obj*)((struct brl_audio_TSound_obj*)&bbNullObject);
		struct BBDebugScope_2 __scope = {
			BBDEBUGSCOPE_LOCALBLOCK,
			0,
			{
				{
					BBDEBUGDECL_LOCAL,
					"fullPath",
					"$",
					.var_address=&bbt_fullPath
				},
				{
					BBDEBUGDECL_LOCAL,
					"sound",
					":TSound",
					.var_address=&bbt_sound
				},
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		bbt_file=((BBSTRING*)BBARRAYDATAINDEX((bbt_),(bbt_)->dims,bbt_2))[bbt_2];
		bbt_2=(bbt_2+1U);
		struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 9, 0};
		bbOnDebugEnterStm(&__stmt_0);
		bbt_fullPath=bbStringConcat(((BBString*)&_s16),bbt_file);
		struct BBDebugStm __stmt_1 = {0xe57cca814a6c1240, 10, 0};
		bbOnDebugEnterStm(&__stmt_1);
		bbt_sound=(struct brl_audio_TSound_obj*)brl_audio_LoadSound((BBOBJECT)bbt_fullPath,0);
		struct BBDebugStm __stmt_2 = {0xe57cca814a6c1240, 11, 0};
		bbOnDebugEnterStm(&__stmt_2);
		if(((BBObject*)bbt_sound)!= &bbNullObject){
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
			struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 12, 0};
			bbOnDebugEnterStm(&__stmt_0);
			((struct brl_map_TMap_obj*)bbNullObjectTest((BBObject*)((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds ))->clas->m_Insert_TObjectTObject((struct brl_map_TMap_obj*)((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds ,(BBOBJECT)bbt_file,(BBOBJECT)bbt_sound);
			bbOnDebugLeaveScope();
		}
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
void __m_newsoundapi_TsoundApi_Play_S(struct _m_newsoundapi_TsoundApi_obj* o,BBSTRING bbt_fileName){
	((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o));
	struct brl_audio_TSound_obj* bbt_s=(struct brl_audio_TSound_obj*)((struct brl_audio_TSound_obj*)&bbNullObject);
	struct BBDebugScope_3 __scope = {
		BBDEBUGSCOPE_FUNCTION,
		"Play",
		{
			{
				BBDEBUGDECL_LOCAL,
				"Self",
				":TsoundApi",
				.var_address=&o
			},
			{
				BBDEBUGDECL_LOCAL,
				"fileName",
				"$",
				.var_address=&bbt_fileName
			},
			{
				BBDEBUGDECL_LOCAL,
				"s",
				":TSound",
				.var_address=&bbt_s
			},
			{
				BBDEBUGDECL_END
			}
		}
	};
	bbOnDebugEnterScope((BBDebugScope *)&__scope);
	struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 19, 0};
	bbOnDebugEnterStm(&__stmt_0);
	bbt_s=(struct brl_audio_TSound_obj*)((struct brl_audio_TSound_obj*)bbObjectDowncast((BBOBJECT)((struct brl_map_TMap_obj*)bbNullObjectTest((BBObject*)((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds ))->clas->m_ValueForKey_TObject((struct brl_map_TMap_obj*)((struct _m_newsoundapi_TsoundApi_obj*)bbNullObjectTest((BBObject*)o))->__m_newsoundapi_tsoundapi_sounds ,(BBOBJECT)bbt_fileName),(BBClass*)&brl_audio_TSound));
	struct BBDebugStm __stmt_1 = {0xe57cca814a6c1240, 20, 0};
	bbOnDebugEnterStm(&__stmt_1);
	if(((BBObject*)bbt_s)!= &bbNullObject){
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
		struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 21, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_audio_PlaySound((struct brl_audio_TSound_obj*)bbt_s,(struct brl_audio_TChannel_obj*)&bbNullObject);
		bbOnDebugLeaveScope();
	}else{
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
		struct BBDebugStm __stmt_0 = {0xe57cca814a6c1240, 23, 0};
		bbOnDebugEnterStm(&__stmt_0);
		brl_standardio_Print(bbStringConcat(((BBString*)&_s15),bbt_fileName));
		bbOnDebugLeaveScope();
	}
	bbOnDebugLeaveScope();
}
struct BBDebugScope_3 _m_newsoundapi_TsoundApi_scope ={
	BBDEBUGSCOPE_USERTYPE,
	"TsoundApi",
	{
		{
			BBDEBUGDECL_FIELD,
			"sounds",
			":TMap",
			.field_offset=offsetof(struct _m_newsoundapi_TsoundApi_obj,__m_newsoundapi_tsoundapi_sounds)
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"New",
			"()",
			.func_ptr=(BBFuncPtr)&__m_newsoundapi_TsoundApi_New
		},
		{
			BBDEBUGDECL_TYPEMETHOD,
			"Play",
			"($)",
			.func_ptr=(BBFuncPtr)&__m_newsoundapi_TsoundApi_Play_S
		},
		{
			BBDEBUGDECL_END
		}
	}
};
struct BBClass__m_newsoundapi_TsoundApi _m_newsoundapi_TsoundApi={
	&bbObjectClass,
	bbObjectFree,
	(BBDebugScope*)&_m_newsoundapi_TsoundApi_scope,
	sizeof(struct _m_newsoundapi_TsoundApi_obj),
	(void (*)(BBOBJECT))__m_newsoundapi_TsoundApi_New,
	bbObjectDtor,
	bbObjectToString,
	bbObjectCompare,
	bbObjectSendMessage,
	0,
	0,
	sizeof(struct brl_map_TMap_obj*)
	,0
	,offsetof(struct _m_newsoundapi_TsoundApi_obj,__m_newsoundapi_tsoundapi_sounds)
	,__m_newsoundapi_TsoundApi_Play_S
};

static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_brl_appstub_appstub();
		__bb_brl_audio_audio();
		__bb_brl_bank_bank();
		__bb_brl_bankstream_bankstream();
		__bb_brl_base64_base64();
		__bb_brl_basic_basic();
		__bb_brl_bmploader_bmploader();
		__bb_brl_bytebuffer_bytebuffer();
		__bb_brl_clipboard_clipboard();
		__bb_brl_collections_collections();
		__bb_brl_d3d7max2d_d3d7max2d();
		__bb_brl_d3d9max2d_d3d9max2d();
		__bb_brl_directsoundaudio_directsoundaudio();
		__bb_brl_eventqueue_eventqueue();
		__bb_brl_freeaudioaudio_freeaudioaudio();
		__bb_brl_freetypefont_freetypefont();
		__bb_brl_glgraphics_glgraphics();
		__bb_brl_glmax2d_glmax2d();
		__bb_brl_gnet_gnet();
		__bb_brl_jpgloader_jpgloader();
		__bb_brl_map_map();
		__bb_brl_maxlua_maxlua();
		__bb_brl_maxunit_maxunit();
		__bb_brl_maxutil_maxutil();
		__bb_brl_objectlist_objectlist();
		__bb_brl_oggloader_oggloader();
		__bb_brl_openalaudio_openalaudio();
		__bb_brl_platform_platform();
		__bb_brl_pngloader_pngloader();
		__bb_brl_rectpacker_rectpacker();
		__bb_brl_retro_retro();
		__bb_brl_tgaloader_tgaloader();
		__bb_brl_threadpool_threadpool();
		__bb_brl_timer_timer();
		__bb_brl_timerdefault_timerdefault();
		__bb_brl_utf8stream_utf8stream();
		__bb_brl_uuid_uuid();
		__bb_brl_volumes_volumes();
		__bb_brl_wavloader_wavloader();
		__bb_pub_freejoy_freejoy();
		__bb_pub_freeprocess_freeprocess();
		__bb_pub_glad_glad();
		__bb_pub_nfd_nfd();
		__bb_pub_nx_nx();
		__bb_pub_opengles_opengles();
		__bb_pub_opengles3_opengles3();
		__bb_pub_vulkan_vulkan();
		__bb_pub_xmmintrin_xmmintrin();
		bbObjectRegisterType((BBCLASS)&_m_newsoundapi_TsoundApi);
		bbRegisterSource(0x22469909916a983b, "c:/Users/jo/Desktop/BlitzMax/mod/brl.mod/collections.mod/sort.bmx");
		bbRegisterSource(0xa01da379228ad132, "c:/Users/jo/Desktop/BlitzMax/mod/brl.mod/collections.mod/list.bmx");
		bbRegisterSource(0xe57cca814a6c1240, "C:/Users/jo/Desktop/play64/src/newsoundapi.bmx");
		struct BBDebugScope __scope = {
			BBDEBUGSCOPE_FUNCTION,
			"newsoundapi",
			{
				{
					BBDEBUGDECL_END
				}
			}
		};
		bbOnDebugEnterScope((BBDebugScope *)&__scope);
		bbOnDebugLeaveScope();
		return 0;
	}
	return 0;
}
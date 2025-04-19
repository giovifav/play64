#include "list.bmx.gui.release.win32.x64.h"
struct BBString_33{BBClass_String* clas;BBULONG hash;int length;BBChar buf[33];};
struct BBString_5{BBClass_String* clas;BBULONG hash;int length;BBChar buf[5];};
static struct BBString_33 _s0={
	&bbStringClass,
	0xeb89038381c4f14d,
	33,
	{66,108,105,116,122,77,97,120,32,43,32,82,97,121,108,105,98
	,32,83,99,114,111,108,108,97,98,108,101,32,76,105,115,116
}
};
static struct BBString_5 _s1={
	&bbStringClass,
	0x9158d6f4124dd33d,
	5,
	{73,116,101,109,32}
};
static int _bb_main_inited = 0;
int _bb_main(){
	if (!_bb_main_inited) {
		_bb_main_inited = 1;
		__bb_brl_blitz_blitz();
		__bb_ray_lib_lib();
		BBINT bbt_screenWidth=800;
		BBINT bbt_screenHeight=600;
		ray_lib_InitWindow(bbt_screenWidth,bbt_screenHeight,((BBString*)&_s0));
		BBINT bbt_itemHeight=30;
		BBFLOAT bbt_scrollSpeed=0.5f;
		BBFLOAT bbt_scrollPosition=0.00000000f;
		BBINT bbt_maxItems=100;
		BBINT bbt_listHeight=600;
		BBARRAY bbt_items=bbArrayNew1D("$", bbt_maxItems);
		BBINT bbt_selectedIndex=0;
		{
			BBINT bbt_i=1;
			BBINT bbt_=bbt_maxItems;
			for(;(bbt_i<=bbt_);bbt_i=(bbt_i+1)){
				((BBSTRING*)BBARRAYDATA(bbt_items,1))[((BBUINT)(bbt_i-1))]=bbStringConcat(((BBString*)&_s1),bbStringFromInt(bbt_i));
			}
		}
		BBINT bbt_maxScrollPosition=((bbt_maxItems*bbt_itemHeight)-bbt_listHeight);
		while(!(ray_lib_WindowShouldClose()!=0)){
			if(ray_lib_IsKeyPressed(265)!=0){
				bbt_selectedIndex=brl_blitz_Max((bbt_selectedIndex-1),0);
			}
			if(ray_lib_IsKeyPressed(264)!=0){
				bbt_selectedIndex=brl_blitz_Min((bbt_selectedIndex+1),(bbt_maxItems-1));
			}
			if(((BBFLOAT)(bbt_selectedIndex*bbt_itemHeight))<bbt_scrollPosition){
				bbt_scrollPosition=((BBFLOAT)(bbt_selectedIndex*bbt_itemHeight));
			}else{
				if(((BBFLOAT)((bbt_selectedIndex+1)*bbt_itemHeight))>(bbt_scrollPosition+((BBFLOAT)bbt_listHeight))){
					bbt_scrollPosition=((BBFLOAT)(((bbt_selectedIndex+1)*bbt_itemHeight)-bbt_listHeight));
				}
			}
			ray_lib_BeginDrawing();
			ray_lib_ClearBackground(ray_lib_common_RAYWHITE);
			{
				BBINT bbt_i2=0;
				BBINT bbt_2=(bbt_maxItems-1);
				for(;(bbt_i2<=bbt_2);bbt_i2=(bbt_i2+1)){
					BBINT bbt_yPosition=((BBINT)(((BBFLOAT)(bbt_i2*bbt_itemHeight))-bbt_scrollPosition));
					if((bbt_yPosition>=0) && (bbt_yPosition<bbt_listHeight)){
						if(bbt_i2==bbt_selectedIndex){
							ray_lib_DrawRectangle(45,bbt_yPosition,(bbt_screenWidth-90),bbt_itemHeight,ray_lib_common_LIGHTGRAY);
						}
						ray_lib_DrawText(((BBSTRING*)BBARRAYDATA(bbt_items,1))[((BBUINT)bbt_i2)],50,bbt_yPosition,20,ray_lib_common_DARKGRAY);
					}
				}
			}
			ray_lib_EndDrawing();
		}
		ray_lib_CloseWindow();
		return 0;
	}
	return 0;
}
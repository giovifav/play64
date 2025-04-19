superstrict
import brl.blitz
import ray.lib
import brl.basic
import brl.maxlua
import ray.math
windowWidth%=800
windowHeight%=450
TdrawApi^Object{
bg:RColor&=mem:p("_m_matrice_TdrawApi_bg")
-New()="__m_matrice_TdrawApi_New"
-backlight(R%,G%,B%)="_m_matrice_TdrawApi_backlight_iii"
-IntToColor:RColor(i#)="_m_matrice_TdrawApi_IntToColor_f"
-point(x%,y%,i#)="_m_matrice_TdrawApi_point_iif"
-line(startx%,startY%,endX%,endY%,i#)="_m_matrice_TdrawApi_line_iiiif"
-rect(x%,y%,Width%,height%,i#)="_m_matrice_TdrawApi_rect_iiiif"
-text(text$,x%,y%,i#)="_m_matrice_TdrawApi_text_Siif"
}="_m_matrice_TdrawApi"
TutilsApi^Object{
-New()="__m_matrice_TutilsApi_New"
-dt#()="_m_matrice_TutilsApi_dt"
-Identifier()="_m_matrice_TutilsApi_Identifier"
}="_m_matrice_TutilsApi"
TinputApi^Object{
-New()="__m_matrice_TinputApi_New"
-down$()="_m_matrice_TinputApi_down"
-pressed$()="_m_matrice_TinputApi_pressed"
-released$()="_m_matrice_TinputApi_released"
}="_m_matrice_TinputApi"
LoadFileAsString$(url:Object)="_m_matrice_LoadFileAsString"
ClampValue:RVector2(value:RVector2,minimum:RVector2,maximum:RVector2)="_m_matrice_ClampValue"
font1:RFont&=mem:p("_m_matrice_font1")
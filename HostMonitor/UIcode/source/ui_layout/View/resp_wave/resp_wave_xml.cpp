#include "../core_include/api.h"
#include "../core_include/rect.h"
#include "../core_include/cmd_target.h"
#include "../core_include/wnd.h"
#include "../widgets_include/wave_ctrl.h"
#include "../source/ui_ctrl_ex/wave_ctrl_ex.h"
#include "../include/ctrl_id.h"

static c_bitmap_wave_ctrl s_resp_wavectrl;
WND_TREE g_resp_wave_view_children[] = 
{
	{&s_resp_wavectrl,ID_MAIN_SCREEN_RESP_WAVE_CTRL,0,	3,	5,	673,	159},
	{0,0,0,0,0,0,0}
};

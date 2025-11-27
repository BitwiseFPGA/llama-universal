#pragma once

namespace menu
{
	extern bool active;
	void render();

	namespace toggles
	{
		extern bool enable_recoil;
		extern int selected_recoil_mode;
		extern float control_x;
		extern float control_y;
		extern float delay;
		extern uint32_t segments;
		extern bool enable_cont_time;
		extern float cont_time;
	}
}

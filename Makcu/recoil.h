#pragma once
#include <atomic>
#include <vector>
#include <makcu.h>

void mouseButtonCallback(makcu::MouseButton button, bool pressed);

namespace recoil 
{
	void Manager(makcu::Device& device);

	namespace table
	{
		extern std::vector<int> x;
		extern std::vector<int> y;
		extern std::vector<float> delay;
        extern uint32_t segments;

		bool SavePattern(const char* filename);
		bool LoadPattern(const char* filename);
	}
}

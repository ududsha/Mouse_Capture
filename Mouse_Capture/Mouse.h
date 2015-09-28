#pragma once
#include "stdafx.h"
#include <vector>

namespace SL {
	namespace Mouse_Capture {
		struct Mouse_Info {
			int x = 0;
			int y = 0;
			bool Hidden = true;
		};
		class Mouse {
			Mouse_Info MouseInfo;
			std::vector<char> Data;
		public:
			Mouse() {}
			Mouse(Mouse_Info& m, std::vector<char>& d) : MouseInfo(std::move(m)), Data(std::move(d)) {}
			//data is always 32 bit RGBA formated
			const char* get_data() const { return Data.data(); }
			const Mouse_Info get_MonitorInfo() const { return MouseInfo; }
		};

		Mouse GetMouse();

	}
}
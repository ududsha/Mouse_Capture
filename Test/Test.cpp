// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\Mouse_Capture\Mouse.h"
#include <iostream>
#include <chrono>

int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	auto monitorinfo = SL::Mouse_Capture::GetMouse();
	std::cout << "took " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count() << "ms\n";

    return 0;
}


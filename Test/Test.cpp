// Test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "..\Mouse_Capture\Mouse.h"
#include <iostream>
#include <chrono>

int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	auto mouse = SL::Mouse_Capture::GetMouse();
	std::cout << "took " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - start).count() << "ms\n";

	std::cout << "mouse left coord : " << mouse.get_MouseInfo().left << std::endl;
	std::cout << "mouse top coord : " << mouse.get_MouseInfo().top << std::endl;
	std::cout << "mouse width : " << mouse.get_MouseInfo().width << std::endl;
	std::cout << "mouse height : " << mouse.get_MouseInfo().height << std::endl;

	//now do something with the raw mouse image
	auto mouseimagedata = mouse.get_data();//the data is in rgba format

	return 0;
}


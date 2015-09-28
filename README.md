# Mouse_Capture
c++ mouse capturing library

This library is intended to capure the raw image of the mouse currently displayed.
See the Test project for a simple demo

	auto mouse = SL::Mouse_Capture::GetMouse();
	std::cout << "mouse left coord : " << mouse.get_MouseInfo().left << std::endl;
	std::cout << "mouse top coord : " << mouse.get_MouseInfo().top << std::endl;
	std::cout << "mouse width : " << mouse.get_MouseInfo().width << std::endl;
	std::cout << "mouse height : " << mouse.get_MouseInfo().height << std::endl;

	//now do something with the raw mouse image
	auto mouseimagedata = mouse.get_data();//the data is in rgba format


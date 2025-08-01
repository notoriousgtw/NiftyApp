#ifndef _DEBUG
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif

#include <NiftyAppExample.h>
#include <iostream>

int main()
{
	try
	{
		NiftyApp app = NiftyApp();
		app.Loop();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Caught an exception: " << e.what() << std::endl;
		return -1;
	}
	return 0;
}
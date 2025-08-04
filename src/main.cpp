#define NFT_SHOW_CONSOLE

#include <NiftyAppExample.h>
#include <iostream>


int main()
{
	try
	{
		NiftyApp app = NiftyApp();
		app.Init();
		app.Loop();
	}
	catch (const std::runtime_error& e)
	{
		std::cerr << "Caught an exception: " << e.what() << std::endl;
		return -1;
	}
	return 0;
}
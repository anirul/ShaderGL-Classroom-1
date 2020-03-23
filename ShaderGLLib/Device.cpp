#include <exception>
#include <stdexcept>
#include <chrono>
#if defined(_WIN32) || defined(_WIN64)
	#define WINDOWS_LEAN_AND_MEAN
	#include <windows.h>
#else
	#include <iostream>
#endif
#include "Device.h"

namespace sgl {

	Device::Device(SDL_Window* sdl_window) 
	{
#pragma message ("You have to complete this code!")
	}

	void Device::Startup(std::pair<int, int> size)
	{
#pragma message ("You have to complete this code!")
	}

	void Device::Draw(const double dt)
	{
#pragma message ("You have to complete this code!")
	}

} // End namespace sgl.

#pragma once

//Macros to export/import our stuff
#ifdef SM_PLATFORM_WINDOWS
	#ifdef SM_BUILD_DLL
		#define SMITH_API __declspec(dllexport)
	#else
		#define SMITH_API __declspec(dllimport)
	#endif
#else
	#error Smith only supports Windows at this time...
#endif // SM_PLATFORM_WINDOWS

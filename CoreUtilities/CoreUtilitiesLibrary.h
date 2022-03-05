#pragma once

#include <string>

#ifdef CORE_UTILITIES_LIBRARY_EXPORT
#define CORE_UTILITIES_LIBRARY_API __declspec(dllexport)
#else
#define CORE_UTILITIES_LIBRARY_API __declspec(dllimport)
#endif

CORE_UTILITIES_LIBRARY_API void test();

class CoreUtilities {
public:
	CORE_UTILITIES_LIBRARY_API void validateString(std::string string);
};
#pragma once

#ifdef UI_COMPONENTS_LIBRARY_EXPORT
#define UI_COMPONENTS_LIBRARY_API __declspec(dllexport)
#else
#define UI_COMPONENTS_LIBRARY_API __declspec(dllimport)
#endif

UI_COMPONENTS_LIBRARY_API void test();
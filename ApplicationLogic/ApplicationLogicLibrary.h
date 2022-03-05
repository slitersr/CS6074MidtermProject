#pragma once

#ifdef APPLICATION_LOGIC_LIBRARY_EXPORT
#define APPLICATION_LOGIC_LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION_LOGIC_LIBRARY_API __declspec(dllimport)
#endif

class ApplicationLogic {
public:
	APPLICATION_LOGIC_LIBRARY_API void sendMessage();
	APPLICATION_LOGIC_LIBRARY_API void getCurrentMessages();
};
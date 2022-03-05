#pragma once

#include <string>
#include <boost/locale.hpp>

#ifdef APPLICATION_LOGIC_LIBRARY_EXPORT
#define APPLICATION_LOGIC_LIBRARY_API __declspec(dllexport)
#else
#define APPLICATION_LOGIC_LIBRARY_API __declspec(dllimport)
#endif

class ApplicationLogic {
public:
	APPLICATION_LOGIC_LIBRARY_API void sendMessage(std::string recipient, std::string content);
	APPLICATION_LOGIC_LIBRARY_API void getCurrentMessages();
};
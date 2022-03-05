#pragma once

#include <string>
#include <boost/locale.hpp>
#include "CoreUtilitiesLibrary.h"

#ifdef UI_COMPONENTS_LIBRARY_EXPORT
#define UI_COMPONENTS_LIBRARY_API __declspec(dllexport)
#else
#define UI_COMPONENTS_LIBRARY_API __declspec(dllimport)
#endif

class UIComponents {
private:
	std::string recipient;
	std::string message;
public:
	UI_COMPONENTS_LIBRARY_API void createWindow();
	UI_COMPONENTS_LIBRARY_API void createTextBox();
	UI_COMPONENTS_LIBRARY_API void createButton();
	UI_COMPONENTS_LIBRARY_API void clickSend();

	UI_COMPONENTS_LIBRARY_API void setMessageText(std::string content);
	UI_COMPONENTS_LIBRARY_API void setRecipientText(std::string recipient);
};
#include <iostream>
#include "UIComponentsLibrary.h"
#include "ApplicationLogicLibrary.h"

void UIComponents::createWindow() {
	enableTranslation();
	std::cout << boost::locale::translate("adding to user interface", "[UI Components] Creating window") << std::endl;
}

void UIComponents::createButton() {
	enableTranslation();
	std::cout << boost::locale::translate("adding to user interface", "[UI Components] Creating button") << std::endl;
}

void UIComponents::createTextBox() {
	enableTranslation();
	std::cout << boost::locale::translate("adding to user interface", "[UI Components] Creating text box") << std::endl;
}

void UIComponents::setMessageText(std::string message) {
	this->message = message;
}

void UIComponents::setRecipientText(std::string recipient) {
	this->recipient = recipient;
}

void UIComponents::clickSend() {
	enableTranslation();
	std::cout << boost::locale::translate("[UI Components] Send button clicked") << std::endl;
	ApplicationLogic logic;
	logic.sendMessage(recipient, message);
}
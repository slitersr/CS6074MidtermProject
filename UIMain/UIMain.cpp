#include <iostream>
#include "UIMain.h"
#include "UIComponentsLibrary.h"
#include "CoreUtilitiesLibrary.h"

int main() {
	enableTranslation();
	createWindow();

	return 0;
}

void createWindow() {
	std::cout << boost::locale::translate("creating user interface", "[UI Main] Creating window") << std::endl;
	UIComponents components;
	components.createWindow();
	components.createTextBox();
	components.createButton();
	enableTranslation();
	std::cout << boost::locale::translate("[UI Main] Setting text fields and sending message") << std::endl;
	components.setRecipientText(boost::locale::translate("messenger application user", "Test User"));
	components.setMessageText(boost::locale::translate("This message is being sent from the user interface"));
	components.clickSend();
	enableTranslation();
	std::cout << boost::locale::translate("user closed application", "[UI Main] Exiting application") << std::endl;
}
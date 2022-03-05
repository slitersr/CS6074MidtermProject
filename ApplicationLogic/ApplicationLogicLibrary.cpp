#include <iostream>
#include "ApplicationLogicLibrary.h"
#include "CoreUtilitiesLibrary.h"
#include "CoreNetworkingLibrary.h"
#include "CoreDataModel.h"

void ApplicationLogic::sendMessage(std::string recipient, std::string content) {
	enableTranslation();
	std::cout << boost::locale::translate("[Application] Sending message to '") << recipient << boost::locale::translate("text message contents", "' with content '") << content << "'" << std::endl;
	Message message;
	CoreNetworkingLibrary network;
	CoreUtilities util;
	if (!util.validateString(content)) return;
	message.setRecipient(recipient);
	message.setContent(content);
	network.connectToServer("test_server");
	network.sendData(message);
	network.disconnect();
	enableTranslation();
	std::cout << boost::locale::translate("text message transmission", "[Application] Message sent!") << std::endl;
}

void ApplicationLogic::getCurrentMessages() {
	enableTranslation();
	std::cout << boost::locale::translate("retrieving", "[Application] Getting current messages") << std::endl;
}
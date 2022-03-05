#include <iostream>
#include "BatchMain.h"
#include "ApplicationLogicLibrary.h"
#include "CoreUtilitiesLibrary.h"

int main() {
	enableTranslation();
	sendBatch();
	return 0;
}

void sendBatch() {
	ApplicationLogic application;
	std::cout << boost::locale::translate("[Batch API] Sending a batch of messages") << std::endl;
	application.sendMessage(boost::locale::translate("person", "Test User"), boost::locale::translate("chat", "First message"));
	application.sendMessage(boost::locale::translate("person", "Test User"), boost::locale::translate("chat", "Second message"));
	std::cout << boost::locale::translate("transmitted", "[Batch API] All messages sent") << std::endl;
}
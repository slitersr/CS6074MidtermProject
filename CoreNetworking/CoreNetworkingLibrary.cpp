#include <iostream>
#include "CoreNetworkingLibrary.h"
#include "CoreUtilitiesLibrary.h"

void CoreNetworkingLibrary::connectToServer(std::string server) {
	enableTranslation();
	std::cout << boost::locale::translate("established internet connection", "[Networking] Connected to server: ") << server << std::endl;
}

void CoreNetworkingLibrary::sendData(Message message) {
	enableTranslation();
	std::cout << boost::locale::translate("data over network", "[Networking] Sending data to server (") << sizeof(message) << boost::locale::translate(" bytes)") << std::endl;
}

void CoreNetworkingLibrary::disconnect() {
	enableTranslation();
	std::cout << boost::locale::translate("internet connection lost", "[Networking] Disconnected") << std::endl;
}
#pragma once

#include "CoreDataModel.h"

#ifdef CORE_NETWORKING_LIBRARY_EXPORT
#define CORE_NETWORKING_LIBRARY_API __declspec(dllexport)
#else
#define CORE_NETWORKING_LIBRARY_API __declspec(dllimport)
#endif

class CoreNetworkingLibrary {
public:
	CORE_NETWORKING_LIBRARY_API void connectToServer(std::string server);
	CORE_NETWORKING_LIBRARY_API void sendData(std::string data);
	CORE_NETWORKING_LIBRARY_API void disconnect();
};
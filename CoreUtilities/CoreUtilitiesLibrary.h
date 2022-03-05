#pragma once

#define LOCALE "en_US.UTF-8"
//#define LOCALE "de_DE.UTF-8"

#include <string>
#include <boost/locale.hpp>

#ifdef CORE_UTILITIES_LIBRARY_EXPORT
#define CORE_UTILITIES_LIBRARY_API __declspec(dllexport)
#else
#define CORE_UTILITIES_LIBRARY_API __declspec(dllimport)
#endif

class CoreUtilities {
public:
	CORE_UTILITIES_LIBRARY_API bool validateString(std::string string);
};

void enableTranslation() {
	boost::locale::generator generator;
	generator.add_messages_path(".");
	generator.add_messages_domain("messages");
	std::locale::global(generator(LOCALE));
	std::cout.imbue(std::locale());
}
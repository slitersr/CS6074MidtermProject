#include <iostream>
#include "CoreUtilitiesLibrary.h"

bool CoreUtilities::validateString(std::string string) {
	enableTranslation();
	std::cout << boost::locale::translate( "ensuring legal message", "[Core Utilities] Validating string: ") << string << std::endl;
	return true;
}
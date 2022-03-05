#include <iostream>
#include "UIComponentsLibrary.h"
#include "CoreUtilitiesLibrary.h"

void test() {
	std::cout << "It works!" << std::endl;
	CoreUtilities util;
	util.validateString("from UI components");
}
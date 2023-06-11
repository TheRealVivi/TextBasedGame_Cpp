#include "DebugUtils.h"
#include <iostream>

namespace DebugUtils
{
	void Log(const std::string &category, Severity severity, const std::string &message)
	{
		switch (severity)
		{
		case Info:
			std::cout << "[" << category << "] "
					  << "[INFO] ";
			break;
		case Warning:
			std::cout << YELLOW << "[" << category << "] "
					  << "[WARNING] ";
			break;
		case Error:
			std::cout << RED << "[" << category << "] "
					  << "[ERROR] ";
			break;
		}
		std::cout << message << RESET << std::endl;
	}
}

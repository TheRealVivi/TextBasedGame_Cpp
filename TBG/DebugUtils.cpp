#include "DebugUtils.h"
#include <iostream>

namespace DebugUtils
{
	void Log(const std::string &category, Severity severity, const std::string &message)
	{
		std::string output;
		switch (severity)
		{
		case Info:
			output = "[" + category + "] " + "[INFO] " + message;
			std::cout << output << std::endl;
			break;
		case Warning:
			output = "[" + category + "] " + "[WARNING] " + message;
			std::cout << YELLOW << output << RESET << std::endl;
			break;
		case Error:
			output = "[" + category + "] " + "[ERROR] " + message;
			std::cout << RED << output << RESET << std::endl;
			break;
		}
	}
}

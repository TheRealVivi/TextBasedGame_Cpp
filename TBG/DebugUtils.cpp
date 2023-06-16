#include "DebugUtils.h"
#include <iostream>

namespace DebugUtils
{
	void Log(const std::string &category, Severity severity, const std::string &message)
	{
		std::ostringstream log;
		switch (severity)
		{
		case Info:
			log << "[" << category + "] "
				<< "[INFO] " << message;
			break;
		case Warning:
			log << YELLOW << "[" << category << "] "
				<< "[WARNING] " << message << RESET;
			break;
		case Error:
			log << RED << "[" << category << "] "
				<< "[ERROR] " << message << RESET;
			break;
		}
		std::cout << log.str() << std::endl;
	}
}

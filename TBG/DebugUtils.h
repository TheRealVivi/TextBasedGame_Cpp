#pragma once

// the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#include <string>
#include <sstream>
// Note: If you don't use RESET the color will remain changed until the next time you use a color code.

enum Severity
{
	Info,
	Warning,
	Error
};

namespace DebugUtils
{
	void Log(const std::string& category, Severity severity, const std::string& message);
}

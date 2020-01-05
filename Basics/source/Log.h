#pragma once
#include <iostream>
#include <string>

using std::string;

static void Message(int& logType, string& message)
{
	if (logType == 0) {
		std::cout << "INFO: " << message << std::endl;
	}
	else if (logType == 1) {
		std::cout << "WARNING: " << message << std::endl;
	}
	else if (logType == 2) {
		std::cout << "ERROR: " << message << std::endl;
	}
};

class Log
{
	int LogType;
public:
	void Info(string message)
	{
		LogType = 0;
		Message(LogType, message);
	}
	void Warning(string message)
	{
		LogType = 1;
		Message(LogType, message);
	}
	void Error(string message)
	{
		LogType = 2;
		Message(LogType, message);
	}
};

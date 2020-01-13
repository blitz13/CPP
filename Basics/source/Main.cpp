#include "Log.h";

int main()
{
	Log ConsolePrint;
	ConsolePrint.Info("This i a test.");
	ConsolePrint.Warning("This is a work in progress.");
	ConsolePrint.Error("Unable to continue at the moment.");
}
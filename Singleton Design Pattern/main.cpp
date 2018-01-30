#include <vector>
#include <string>
#include "Logger.h"

using namespace std;

int main(int argc, char **argv)
{
	Logger::instance().log("Player entered realm", Logger::Debug);
	vector<string> items = {"Dragon not found", "Orc not found"};
	Logger::instance().log(items, Logger::Error);

	return 0;
}
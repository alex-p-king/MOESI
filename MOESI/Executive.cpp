#include "Executive.h"




Executive::Executive()
{
}


Executive::~Executive()
{
}

void Executive::run()
{
	std::cout << "exectutive class running\n";
	Processor p1("P0trace.txt");
	p1.printTraces();
}

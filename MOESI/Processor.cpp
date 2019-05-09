#include "Processor.h"



Processor::Processor()
{
}

Processor::Processor(std::string name)
{
	FileName = name;
	std::ifstream ist{ FileName };
	if (!ist) std::cout << "File not opened\n";
	int time;
	bool r_w;
	std::string memLocation;
	while (ist >> time >> r_w >> memLocation) {
		Traces.push_back(Trace{ time,r_w,memLocation });
	}
}

void Processor::printTraces()
{
	for (Trace t : Traces) {
		t.printTrace();
	}
}


Processor::~Processor()
{
}

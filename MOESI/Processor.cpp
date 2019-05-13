#include "Processor.h"



Processor::Processor()
{
}

Processor::~Processor()
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
	int count = 0;
	while (ist >> time >> r_w >> memLocation) {

		Traces.push_back(Trace{ count, time,r_w,hexToBinary(memLocation) });
		count++;
	}
}

void Processor::setFile(std::string name)
{
	FileName = name;
	std::ifstream ist{ FileName };
	if (!ist) std::cout << "File not opened\n";
	int time;
	bool r_w;
	std::string memLocation;
	int count = 0;
	while (ist >> time >> r_w >> memLocation) {
		Traces.push_back(Trace{ count,time,r_w,hexToBinary(memLocation) });
		count++;
	}
}

int Processor::getTime(int index)
{
	return(Traces[index].Time);
}
bool Processor::getReadOrWrite(int index)
{
	return Traces[index].ReadOrWrite;
}
std::string Processor::getLocation(int index)
{
	return Traces[index].Location;
}

void Processor::printTraces()
{
	for (Trace t : Traces) {
		t.printTrace();
	}
}

std::string Processor::hexToBinary(std::string hexNumber)
{
	std::string bin;
	for (int i = 2; i != hexNumber.length(); i++) {
		bin += hex_char_to_bin(hexNumber[i]);
	}
	return bin;
}

std::string Processor::hex_char_to_bin(char c) 
{
	switch (c)
	{
	case '0': return "0000";
	case '1': return "0001";
	case '2': return "0010";
	case '3': return "0011";
	case '4': return "0100";
	case '5': return "0101";
	case '6': return "0110";
	case '7': return "0111";
	case '8': return "1000";
	case '9': return "1001";
	case 'a': return "1010";
	case 'b': return "1011";
	case 'c': return "1100";
	case 'd': return "1101";
	case 'e': return "1110";
	case 'f': return "1111";
	}
}





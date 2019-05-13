#include <iostream>
#include "Executive.h"
#include "Processor.h"
#include <fstream>
#include "Cache.h"

int main()
{
	Executive driver;
	driver.run();
	std::cin.get();

	return 0;
}

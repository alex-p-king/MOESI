#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include "Processor.h"

class Executive
{
public:
	Executive();
	~Executive();
	/**
	*@brief: runs the main program. run should instantiate all 4 processors, run
	*/
	void run();
	/**
	*@brief: runs the main program. run should instantiate all 4 processors, run
	*/
	void compareTimes(int index);
private:
	Processor p0;
	Processor p1;
	Processor p2;
	Processor p3;
	int order[4];
};


#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
class Processor
{
public:
	/**
	*@return: default constructor
	*/
	Processor();
	/**
	*@string name: name of trace file to be read into Processor
	*@return: sets the private variable FileName equal to name;
	*/
	Processor(std::string name);
	/**
	*@return: prints the Time, ReadOrWrite, and Location for each Trace in Traces
	*/
	void printTraces();
	/**
	*@brief: default constructor
	*/
	~Processor();

private:
	// string to hold the name of the trace file
	std::string FileName;
	// structure used to hold each trace
	struct Trace {
		int Time;
		bool ReadOrWrite;
		std::string Location;
		void printTrace() {
			std::cout << Time << " " << ReadOrWrite << " " << Location << std::endl;
		}
	};
	// Traces will hold each individual trace read in from a file
	std::vector<Trace> Traces;
};


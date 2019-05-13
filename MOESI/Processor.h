#pragma once
#include "Cache.h"
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
	*@brief: default destructor
	*/
	~Processor();
	/**
	*@string name: name of trace file to be read into Processor
	*@return: sets the private variable FileName equal to name;
	*/
	Processor(std::string name);
	/**
	*@brief: Cache for the processor
	*/
	Cache m_cache;
	/**
	*@return: prints the Time, ReadOrWrite, and Location for each Trace in Traces
	*/
	void printTraces();
	/**
	*@brief: converts a hexadecimal number to a binary number
	*/
	std::string hexToBinary(std::string hexNumber);
	/**
	*@brief: converts a hexadecimal character to a 4-bit binary number
	*/
	std::string hex_char_to_bin(char c);
	/**
	*@brief: sets the specific trace file that the processor reads from
	*/
	void setFile(std::string name);
	/**
	*@brief: returns the timestamp of a specific trace in traces
	*/
	int getTime(int index);
	/**
	*@brief: returns a bool indicating whether the trace is a read or write
	*/
	bool getReadOrWrite(int index);
	/**
	*@brief: returns the memory location of desired index
	*/
	std::string getLocation(int index);
private:
	/**
	*@brief: string to hold the name of the trace file
	*/
	std::string FileName;
	/**
	*@brief: structure to represent a single trace from the trace file
	*/
	struct Trace {
		int index;
		int Time;
		bool ReadOrWrite;
		std::string Location;
		void printTrace() {
			std::cout << index << " " << Time << " " << ReadOrWrite << " " << Location << std::endl;
		}
	};
	/**
	*@brief: vector of traces
	*/
	std::vector<Trace> Traces;
};


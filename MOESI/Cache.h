#pragma once
#include <vector>
#include <iostream>
#include <string>
class Cache
{
public:
	/**
	*@brief: Represents each row in a cache table
	*/
	struct Line {
		int index;
		char currentState;
		std::string Tag;
		std::string Data;
		void printLine() {
			std::cout << index << " " << currentState << " " << Tag << " " << Data << std::endl;
		}
		int getIndex() {
			return index;
		}
	};
	/**
	*@brief: vector that represents the cache
	*/
	std::vector<Line> cacheTable;
	/**
	*@brief: instantiates a new cache with 512 rows, with indecies 0-511, currents states = 'I', and an empty Location field
	*/
	Cache();
	/**
	*@brief: default destructor
	*/
	~Cache();
	/**
	*@brief: Prints each line in the cache.
	*/
	void printCache();
	/**
	*@brief: Prints a specific line in the cache
	*/
	void printCacheLine(int index);
	/**
	*@brief: modifies the tag and data fields of a cache line
	*/
	void modifyCacheLine(int index, std::string binary);



private:
	
	
	
};


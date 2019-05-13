#include "Cache.h"



Cache::Cache()
{ 
	char defaultState = 'I';
	for (int i = 0; i < 512; i++) {
		cacheTable.push_back(Line{ i,defaultState,"<tag>", "<data>" });	
	}
}

void Cache::printCache() {
	for (Line l : cacheTable) {
		l.printLine();
	}
}

void Cache::printCacheLine(int index) {
	for (Line l : cacheTable) {
		if (l.getIndex() == index) {
			l.printLine();
		}
	}
}

void Cache::modifyCacheLine(int index, std::string binary)
{
	std::string tag = "";
	std::string data = "";
	for (int i = 0; i < 18; i++) {
		tag += binary[i];
		//std::cout << tag << std::endl;
	}
	for (int i = 18; i < binary.size(); i++) {
		data += binary[i];
		//std::cout << data << std::endl;
	}
	for (Line l : cacheTable) {
		if (l.index == index) {
			cacheTable[index].Tag = tag;
			cacheTable[index].Data = data;
			cacheTable[index].currentState = 'I';
			//l.printLine();
		}
	}
}


Cache::~Cache()
{
}

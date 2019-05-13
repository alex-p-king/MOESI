#include "Executive.h"




Executive::Executive()
{
	p0.setFile("P0trace.txt");
	p1.setFile("P1trace.txt");
	p2.setFile("P2trace.txt");
	p3.setFile("P3trace.txt");
}


Executive::~Executive()
{
}

void Executive::run()
{
	for (int i = 0; i < p0.m_cache.cacheTable.size(); i++) {
		p0.m_cache.modifyCacheLine(i, p0.getLocation(i));
	}
	for (int i = 0; i < p1.m_cache.cacheTable.size(); i++) {
		p1.m_cache.modifyCacheLine(i, p1.getLocation(i));
	}
	for (int i = 0; i < p2.m_cache.cacheTable.size(); i++) {
		p2.m_cache.modifyCacheLine(i, p2.getLocation(i));
	}
	for (int i = 0; i < p3.m_cache.cacheTable.size(); i++) {
		p3.m_cache.modifyCacheLine(i, p3.getLocation(i));
	}
	std::cout << "p0:" << std::endl;
	p0.m_cache.printCache();
	std::cout << "p1:" << std::endl;
	p1.m_cache.printCache();
	std::cout << "p2:" << std::endl;
	p2.m_cache.printCache();
	std::cout << "p3:" << std::endl;
	p3.m_cache.printCache();
}

void Executive::compareTimes(int index)
{
	int a, b, c, d;
	a = p0.getTime(index);
	b = p1.getTime(index);
	c = p2.getTime(index);
	d = p3.getTime(index);
	order[0] = a;
	order[1] = b;
	order[2] = c;
	order[3] = d;
	std::sort(std::begin(order), std::end(order));
	for (int i = 0; i < 4; i++) {
		std::cout << order[i] << std::endl;
	}
	
}



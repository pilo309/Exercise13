#pragma once
#include <string>
#include <iostream>
using namespace std;

class Rutebus
{
public:
	Rutebus(string farve, int rutenr, int antalPladser);
	~Rutebus();
	void setFarve(string farve);
	void setRutenr(int rutenr);
	void setAntalPladser(int antalPladser);
	void setIDrift(bool iDrift);
	void print(void);

private:
	string farve_;
	int rutenr_;
	int antalPladser_;
	bool iDrift_;
};



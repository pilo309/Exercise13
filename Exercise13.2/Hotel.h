#pragma once
#include <string>
#include <iostream>
using namespace std;

class Hotel
{
public:
	Hotel();
	Hotel(string hotelNavn = "XX", int kategori = 0, int antalSenge = 0, int pension = 0);
	~Hotel();
	void print();

private:
	string hotelNavn_;
	int kategori_;
	int antalSenge_;
	int pension_;

};

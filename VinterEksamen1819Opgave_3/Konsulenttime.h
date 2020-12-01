#pragma once
#include <iostream>
#include <string>
using namespace std;

class Konsulenttime
{
public:
	Konsulenttime(string navn ="", string mobilnr="", string email="", string emne="");
	~Konsulenttime();
	string getNavn(void) const;
	string getMobilnr(void)const;
	string getEmail(void)const;
	string getEmne(void) const;
	int getKlokkeslet(void);
	void print(void);
	void setKlokkeslet(int);
	
private:
	string navn_;
	string mobilnr_;
	string email_;
	string emne_;
	int klokkeslet_;


};

class Arbejdsdag
{
public:
	Arbejdsdag(string ugedag);
	~Arbejdsdag();
	void indsaetKonsulenttime(Konsulenttime time);
	void print();


private:
	string ugedag_;
	Konsulenttime timer_[8];
};


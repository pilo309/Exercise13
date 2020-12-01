#include "Rutebus.h"

Rutebus::Rutebus(string farve, int rutenr, int antalPladser)
{
	/*

	Parametriseret constructor der skal initialisere farve_,
	rutenr_ og antalPladser_ til de modtagne værdier,
	hvis disse er gyldige. Ugyldige værdier erstattes med
	defaultværdier.
	Attributten iDrift_ initialiseres altid til defaultværdien.
	*/

	setFarve(farve);
	setRutenr(rutenr);
	setAntalPladser(antalPladser);

}

Rutebus::~Rutebus()
{
}

void Rutebus::setFarve(string farve)
{
	farve_ = (farve == "hvid" || farve == "gul" || farve =="sort" ? farve : "UKENDT");

}

void Rutebus::setRutenr(int rutenr)
{
	rutenr_ = (rutenr >= 100 && rutenr <= 999 ? rutenr : 0);

}

void Rutebus::setAntalPladser(int antalPladser)
{
	antalPladser_ = (antalPladser <= 60 && antalPladser >= 10 ? antalPladser : 0);
}

void Rutebus::setIDrift(bool iDrift)
{
	/*
	Boolean med status for drift. true hvis bussen er
	i drift, false ellers. Defaultværdi false
	*/

	iDrift_ = (iDrift); 

}

void Rutebus::print(void)
{
	cout << "Bus nr: " << rutenr_ << endl;
	cout << "________________________________" << endl;
	cout << "Farve: " << farve_ << endl;
	cout << "Antal pladser: " << antalPladser_ << endl;
	cout << "Bussen er " << (iDrift_ == true ? "" : "ikke ") << "i drift." << endl;
}

#include "Konsulenttime.h"

Konsulenttime::Konsulenttime(string navn, string mobilnr, string email, string emne)
{
/*
Der er ingen restriktioner på navn_, mobilnr_, email_ og emne__.
*/

	navn_ = navn;
	mobilnr_ = mobilnr;
	email_ = email;
	emne_ = emne;
	klokkeslet_ = 8;
}

Konsulenttime::~Konsulenttime()
{
}

string Konsulenttime::getNavn(void) const
{
	return navn_;
}

string Konsulenttime::getMobilnr(void) const
{
	return mobilnr_;
}

string Konsulenttime::getEmail(void) const
{
	return email_;
}

string Konsulenttime::getEmne(void) const
{
	return emne_;
}

int Konsulenttime::getKlokkeslet(void)
{
	return klokkeslet_;
}

void Konsulenttime::print(void)
{
	cout << navn_ << endl;
	cout << mobilnr_ << endl;
	cout << email_ << endl;
	cout << emne_ << endl;
	cout << klokkeslet_ << endl;

}

void Konsulenttime::setKlokkeslet(int kl)
{
	klokkeslet_ = (kl == 9 || kl == 10 || kl == 11 || kl == 12 || kl == 13 || kl == 14 || kl == 15 ? kl : 8);


}


Arbejdsdag::Arbejdsdag(string ugedag)
{
	ugedag_ = (ugedag == "mandag" || ugedag == "tirsdag" || ugedag == "onsdag" || ugedag == "torsdag" || ugedag == "fredag" || ugedag == "lørdag" || ugedag == "søndag" ? ugedag : "ukendt");

}


Arbejdsdag::~Arbejdsdag()
{
}

void Arbejdsdag::indsaetKonsulenttime(Konsulenttime time)
{
	switch (time.getKlokkeslet)
	{
	case 8:
		timer_[0] = time;
		break;

	case 9:
		timer_[1] = time;
		break;

	case 10:
		timer_[2] = time;
		break;

	case 11:
		timer_[3] = time;
		break;

	case 12:
		timer_[4] = time;
		break;

	case 13:
		timer_[5] = time;
		break;

	case 14:
		timer_[6] = time;
		break;

	case 15:
		timer_[7] = time;
		break;

	default:
		cout << "invalid tidspunkt at indsætte time";
		break;

	}
}

void Arbejdsdag::print()
{
	cout << "Ugedag: " << ugedag_ << endl;
}
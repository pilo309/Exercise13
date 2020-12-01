#include "Hotel.h"

Hotel::Hotel()
{
}

Hotel::Hotel(string hotelNavn, int kategori, int antalSenge, int pension)
{
	hotelNavn_ = hotelNavn;
	kategori_ = (kategori == 1 || kategori == 2 || kategori == 3 || kategori == 4 || kategori == 5 ? kategori : 0);
	antalSenge_ = (antalSenge > 0 ? antalSenge : 0);
	pension_ = (pension == 0 || pension == 1 || pension == 2 || pension == 3 ? pension : 0);
}

Hotel::~Hotel()
{
}

void Hotel::print()
{
	cout << "Hotel " << hotelNavn_ << endl;
	for (size_t i = 1; i <= kategori_; i++)
		cout << "* ";
	cout << endl;
	//cout << "______________________________________" << endl;

	cout << "Antal senge: " << antalSenge_ << endl;

	string pension;
	
	switch (pension_)
	{
	case 0:
		pension = "Ingen pension";
		break;

	case 1:
		pension = "1/4-pension";
			break;


	case 2:
		pension = "1/2-pension";
			break;

	case 3:
		pension = "1/1-pension";
			break;
	}
	cout << "Pension: " << pension << endl;

	cout << endl;

}

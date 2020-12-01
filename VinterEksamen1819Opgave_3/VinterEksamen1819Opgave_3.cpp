/*

OPGAVE 3 (40 %)
Denne opgave skrives i C++

*/
#include "Konsulenttime.h"

int main()
{
		class Konsulenttime test("Robin Brink Poulsen", "42380248", "rbp@bbsyd.dk", "Eksamen");

		cout << endl;

		test.print();

		cout <<endl<< "ændre tiden til kl 9, så det passer med rigtige eksamen.";

		test.setKlokkeslet(9);

		cout << endl;
		test.print();

	return 0;
}

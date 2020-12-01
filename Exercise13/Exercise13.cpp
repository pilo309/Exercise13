#include "Rutebus.h"

int main()
{
	Rutebus test("shit", 9999999,99999999);
	test.print();
	
	cout << endl;

	test.setFarve("shit");
	test.setAntalPladser(9);
	test.setRutenr(-2);
	test.setIDrift(false);
	test.print();

	cout << endl;

	Rutebus test2("gul", 100, 34);
	test2.setIDrift(true);
	test2.print();

	return 0;
}
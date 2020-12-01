/*

OPGAVE 2 (20 %)
Denne opgave skrives i C
Skriv et lille program ( main() )hvori der gøres følgende:
Opret et array med 101 pladser. Arrayet skal kunne indeholde decimaltal.
Læg tallene 0, 0.01, 0.02, 0.03, ………… , 0.99, 1.00 ind i arrayet. Tallet 0 skal ligge på pladsen med
indeks 0, tallet 0.01 skal ligge på pladsen med indeks 1 osv.
Udskriv alle tal fra arrayet med 2 decimaler, hvert tal på en ny linje.

*/

#include <stdio.h>
#define SIZE 101

int main(void)
{
	double Array[SIZE] = {0};

	for (size_t i = 0; i < SIZE; i++)
	{
		if (i == 0)
		{
				printf_s("Array plads nummer: %d har vaerdien: %.2lf\n",i, Array[i]);
		}
		
		else
		{
			Array[i] = i * 0.01;
			printf_s("Array plads nummer: %d har vaerdien: %.2lf\n", i, Array[i]);
		}
	}
	


	return 0;
}
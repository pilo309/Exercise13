/*

OPGAVE 1 (10 %)
Denne opgave skrives i C
Skriv et lille program ( main() ) som opfylder f�lgende:
Programmet skal udskrive tallene 1, 2, 3, 4, 5, ��� osv., hvert tal p� en ny linje. Dette skal
forts�tte indtil der trykkes p� en vilk�rlig tast p� tastaturet

*/
#include <stdio.h>
#include <conio.h>


int main(void)
{
	int i = 0;
	while (!_kbhit())
	{
		i++;
		printf_s("%d\n", i);
	}

	return 0;
	
}
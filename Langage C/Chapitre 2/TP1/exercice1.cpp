/*
Réaliser le programme en langage C permettant de lire 10 nombres
entiers dans un tableau avant d’en chercher le plus grand et le
plus petit.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>

int main()
{
	int tab[10], i;
	int minimum, maximum;

	//
	for (i = 0; i < 10; i++)
	{
		printf("Entrer un nombre : ");
		scanf("%d", &tab[i]);
	}

	minimum = tab[0];
	maximum = tab[0];

	for (i = 1; i < 10; i++)
	{
		if (tab[i] > maximum)
		{
			maximum = tab[i];
		}

		if (tab[i] < minimum)
		{
			minimum = tab[i];
		}
	}

	printf("Le minimum est %d ; le maximum est %d\n", minimum, maximum);

	return 0;
}

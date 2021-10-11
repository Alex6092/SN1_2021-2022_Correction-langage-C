#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    printf("------ TARIFS AFFRANCHISSEMENT ------\n\n");

    int poids;
    float prix = 5.90;

    printf("Entrer le poids : ");
    scanf("%d", &poids);

    if (poids < 20)
        prix = 3;
    else if (poids < 50)
        prix = 3.95;

    printf("Prix : %.2f frs\n", prix);

    return 0;
}

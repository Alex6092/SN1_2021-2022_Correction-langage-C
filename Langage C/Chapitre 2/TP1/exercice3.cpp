#include <iostream>

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float t[10];
    float sum = 0;

    printf("------ SOMME DES ELEMENTS D'UN TABLEAU ------\n\n");

    for(int i = 0; i < 10; i++)
    {
        printf("Entrer une valeur : ");
        scanf("%f", &t[i]);
        sum += t[i];
    }

    printf("La somme des elements du tableau vaut : %.2f\n\n", sum);

    return 0;
}

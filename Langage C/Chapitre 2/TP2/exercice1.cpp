#include <iostream>

#include <stdio.h>
#include <stdlib.h>


int main()
{
    float t[3][4];
    float somme = 0;

    printf("------ SOMME TABLEAU 2D ------\n\n");

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Entrer une valeur pour la case [%d;%d] : ", i, j);
            scanf("%f", &t[i][j]);
            somme += t[i][j];
        }
    }

    printf("La somme de l'ensemble des cases du tableau vaut : %.2f\n\n", somme);

    return 0;
}

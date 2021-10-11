#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    float t[LINES][COLS];
    float m[LINES];

    printf("------ MOYENNES PAR LIGNES TABLEAU 2D ------\n\n");

    for(int i = 0; i < LINES; i++)
    {
        m[i] = 0;
        for(int j = 0; j < COLS; j++)
        {
            printf("Entrer une valeur pour la case [%d;%d] : ", i, j);
            scanf("%f", &t[i][j]);
            m[i] += t[i][j];
        }
        m[i] /= COLS;
    }

    printf("\n\n");
    for(int i = 0; i < LINES; i++)
    {
        printf("Moyenne ligne %2d : %.2f\n", i + 1, m[i]);
    }
    printf("\n\n");

    return 0;
}

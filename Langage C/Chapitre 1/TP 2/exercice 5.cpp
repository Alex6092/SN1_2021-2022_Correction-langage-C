#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    printf("------ TABLES DE MULTIPLICATION ------\n\n");

    int i, j, limit;

    system("mode con lines=30 cols=140");

    do {
        printf("Affichage des tables jusque : ");
        scanf("%d", &limit);
    } while (limit < 2 || limit > 10);


    for (i = 0; i < limit; i++) {
        for (j = 0; j < 10; j++) {
            if (j > 0)
                printf(" | ");

            printf("%-2dx%2d=%3d", (j + 1), (i + 1), (j + 1) * (i + 1));
        }

        printf("\n");
    }

    return 0;
}

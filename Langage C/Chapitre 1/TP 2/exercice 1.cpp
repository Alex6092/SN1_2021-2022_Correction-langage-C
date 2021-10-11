#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    int a, b;
    int i;
    int result = 0;

    printf("------ MULTIPLICATION PAR ADDITIONS SUCCESSIVES ------\n\n");

    printf("Entrer 2 nombres a multiplier : ");
    scanf("%d", &a);
    scanf("%d", &b);

    for (i = 0; i < b; i++)
    {
        result += a;
    }

    printf("Resultat : %d\n", result);



    return 0;
}

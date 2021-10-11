#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    int a, b, c;
    int t1, t2, t3;

    printf("------ TRI DE 3 NOMBRES ENTRES PAR L'UTILISATEUR ------\n\n");

    printf("Entrer 3 nombre a trier : ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
    {
        t3 = a;
        t2 = b > c ? b : c;
        t1 = b > c ? c : b;
    }
    else if (b > a && b > c)
    {
        t3 = b;
        t2 = a > c ? a : c;
        t1 = a > c ? c : a;
    }
    else
    {
        t3 = c;
        t2 = a > b ? a : b;
        t1 = a > b ? b : a;
    }

    printf("Tri : %d %d %d\n", t1, t2, t3);

    return 0;
}

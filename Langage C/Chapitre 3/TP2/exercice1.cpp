#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int multiple(int value, int n);

int main()
{
    int n;
    int tab[5] = {2, 3, 6, 8, 9};
    printf("------ FONCTIONS MULTIPLES ------\n\n");

    printf("Entrez une valeur : ");
    scanf("%d", &n);

    for(int i = 0; i < 5; i++)
    {
        if(multiple(n, tab[i]) == 1)
        {
            printf("%d est multiple de %d\n", n, tab[i]);
        }
        else {
            printf("%d n'est pas multiple de %d\n", n, tab[i]);
        }
    }

    return 0;
}


int multiple(int value, int n)
{
    return value % n == 0;
}




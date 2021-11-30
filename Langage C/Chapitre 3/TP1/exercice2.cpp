#include <iostream>

#include <stdio.h>
#include <stdlib.h>

void affiche(int * t, int n);

int main()
{
    printf("------ FONCTION AFFICHE ------\n\n");

    int tab[10]={1,2,4,8,16,32,64,128,256,512};

    affiche(tab, 10);

    return 0;
}

void affiche(int * t, int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d %d\n", i, t[i]);
    }
}


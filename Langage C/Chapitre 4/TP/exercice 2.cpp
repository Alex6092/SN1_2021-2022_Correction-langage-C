#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int indice_min(int * tab, int idx1, int idx2)
{
    return tab[idx1] <= tab[idx2] ? idx1 : idx2;
}

void trier(int * tab, int nbValue)
{
    int inversion;
    do
    {
        inversion = 0;

        for(int i = 0; i < nbValue - 1; i++)
        {
            if(indice_min(tab, i, i+1) == i + 1)
            {
                int tmp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = tmp;
                inversion = 1;
            }
        }

    }while(inversion == 1);
}

int main(int argc, char ** argv)
{
    printf("------ POINTEURS EX2 ------\n\n");

    // Déclaration & allocation mémoire :
    int * adr_deb = (int*)malloc(6 * sizeof(int));

    printf("Entrer 6 valeurs : \n");
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &adr_deb[i]);
    }

    trier(adr_deb, 6);

    // Recherche du maximum :
    int * max = adr_deb;
    int idxMax = 0;
    for(int i = 1; i < 6; i++)
    {
        if(adr_deb[i] > *max)
        {
            max = &adr_deb[i];
            idxMax = i;
            //max = adr_deb + i;
        }
    }

    printf("Maximum a l'adresse %p ; valeur = %d ; index = %d\n", max, *max, idxMax);


    free(adr_deb);
    return 0;
}


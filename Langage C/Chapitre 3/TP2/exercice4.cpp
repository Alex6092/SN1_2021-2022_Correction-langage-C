#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 20

int lire(int * tab);
void affiche(int * tab, int nbValue);
void trier(int * tab, int nbValue);
int indice_min(int * tab, int idx1, int idx2);

int main()
{
    printf("------ FONCTION TRI ------\n\n");

    int tab[MAX], nbValue = 0;

    nbValue = lire(tab);
    printf("Contenu du tableau avant tri :\n");
    affiche(tab, nbValue);
    printf("\n\n");
    trier(tab, nbValue);
    printf("Contenu du tableau apres tri :\n");
    affiche(tab, nbValue);
    printf("\n\n");


    return 0;
}

int lire(int * tab)
{
    int nbValue = 0;

    do
    {
        printf("Entrer le nombre de valeur a saisir (max %d) : ", MAX);
        scanf("%d", &nbValue);
    } while(nbValue <= 0 || nbValue > MAX);

    for(int i = 0; i < nbValue; i++)
    {
        printf("Entrer une valeur : ");
        scanf("%d", &tab[i]);
    }

    return nbValue;
}

void affiche(int * tab, int nbValue)
{
    for(int i = 0; i < nbValue; i++)
    {
        if(i != 0)
            printf(", ");

        printf("%d", tab[i]);
    }
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


int indice_min(int * tab, int idx1, int idx2)
{
    return tab[idx1] <= tab[idx2] ? idx1 : idx2;
}



#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB_SIZE 40

int main()
{
    int tab[TAB_SIZE];
    int nbValue = 0;

    printf("------ TRI PAR SELECTION ------\n\n");

    printf("Saisissez les valeurs a trier (entrez -1 pour arreter) :\n");
    for(int i = 0; i < 40; i++)
    {
        scanf("%d", &tab[i]);
        if(tab[i] == -1)
            break;

        nbValue++;
    }

    if(nbValue == 0)
    {
        printf("Il n'y a pas de valeurs a trier. Arret du programme.\n");
        return 0;
    }

    printf("Saisie terminee. Les valeurs a trier sont : \n");

    int isFirstValue = 1;
    for(int i = 0; i < nbValue; i++)
    {
        if(isFirstValue == 0)
            printf(", ");
        printf("%d", tab[i]);

        isFirstValue = 0;
    }

    printf("\n");

    int nbTestDone = 0;
    // Implémentation tri par sélection :

    for(int i = 0; i < nbValue; i++)
    {
        int indexSelection = i;

        for(int j = i + 1; j < nbValue; j++)
        {
            nbTestDone++;
            if(tab[j] < tab[indexSelection])
            {
                indexSelection = j;
            }
        }

        if(indexSelection != i)
        {
            int tmp = tab[indexSelection];
            tab[indexSelection] = tab[i];
            tab[i] = tmp;
        }
    }

    // Fin implémentation tri par sélection.

    printf("Valeurs triees : \n");

    isFirstValue = 1;
    for(int i = 0; i < nbValue; i++)
    {
        if(isFirstValue == 0)
            printf(", ");
        printf("%d", tab[i]);

        isFirstValue = 0;
    }

    printf("\n");

    printf("Nombre de valeurs triees : %d\nNombre de tests realises : %d\n\n", nbValue, nbTestDone);

    return 0;
}

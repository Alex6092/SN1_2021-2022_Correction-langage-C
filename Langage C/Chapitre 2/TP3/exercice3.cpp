#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    char str[BUFFER_SIZE];
    int nb_occ[27];
    int saisieChaineOK = 0;

    printf("------ COMPTEUR D'OCCURENCES DE CARACTERES ------\n\n");

    while(saisieChaineOK != 1)
    {
        printf("Saisissez une chaine de caracteres : ");

        fgets(str, BUFFER_SIZE, stdin);
        if(str[0] == '\n')
        {
            printf("La saisie est vide, merci de saisir une chaine valide ...\n");
        }
        else if(str[strlen(str) - 1] != '\n')
        {
            printf("La chaine saisie est trop longue, merci de saisir une chaine");
            printf(" d'au maximum %d caractères ...\n", BUFFER_SIZE - 2);

            do
            {
                fgets(str, BUFFER_SIZE, stdin);
            }
            while(str[strlen(str) - 1] != '\n');
        }
        else {
            saisieChaineOK = 1;
        }
    }

    for(int i = 0; i < 27; i++)
    {
        nb_occ[i] = 0;
    }

    for(unsigned long i = 0; i < strlen(str); i++)
    {
        int isLowerCase;
        if((isLowerCase = (str[i] >= 'a' && str[i] <= 'z'))
                ||
                (str[i] >= 'A' && str[i] <= 'Z'))
        {
            nb_occ[str[i] - (isLowerCase != 0 ? 'a' : 'A')]++;
            /*
            if(isLowerCase != 0)
            {
                nb_occ[str[i] - 'a']++;
            }
            else {
                nb_occ[str[i] - 'A']++;
            }
            */
        }
        else if(str[i] == ' ') {
            nb_occ[26]++;
        }
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c : %d\n", i + 'a', nb_occ[i]);
    }
    printf("ESPACE : %d\n", nb_occ[26]);

    printf("\n");

    return 0;
}

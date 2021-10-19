#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    char str[BUFFER_SIZE];
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

    for(size_t i = 0; i < strlen(str); i++)
    {
        str[i] = static_cast<char>(tolower(str[i]));
        /*
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        */
    }

    printf("Chaine en minuscule : %s\n", str);

    printf("\n");

    return 0;
}

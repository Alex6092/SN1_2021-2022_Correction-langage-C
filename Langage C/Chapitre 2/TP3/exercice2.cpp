#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main()
{
    char str[BUFFER_SIZE];
    char c = 0;
    int index = -1;
    int saisieChaineOK = 0;

    printf("------ RECHERCHE DE CARACTERE DEPUIS LA FIN ------\n\n");

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



    printf("Saisissez une lettre a rechercher : ");
    fflush(stdin);
    scanf("%c", &c);

    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        if(tolower(str[i]) == tolower(c))
        {
            index = strlen(str) - i - 1;
            break;
        }
    }

    if(index >= 0)
    {
        printf("Le caractere %c a ete trouve a la position %d en partant de la droite. \n", c, index);
    }
    else {
        printf("Le caractere %c n'a pas ete trouve ...\n", c);
    }

    printf("\n");

    return 0;
}

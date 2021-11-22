#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int absolue(int x);


int main()
{
    printf("------ FONCTION ABS ------\n\n");

    int saisie_utilisateur;
    printf("Entrer une valeur positive ou negative : ");
    scanf("%d", &saisie_utilisateur);

    printf("La valeur absolue de %d est %d.\n\n", saisie_utilisateur, absolue(saisie_utilisateur));

    return 0;
}

int absolue(int x)
{
    return x < 0 ? -x : x;
}

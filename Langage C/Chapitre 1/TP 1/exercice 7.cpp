#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int note;
    float moyenne;

    printf("------ MOYENNE DE 30 NOTES ALEATOIRES ------\n\n");

    srand(time(NULL));  // Initialisation de la séquence pseudo-aléatoire.

    for(int i = 0; i < 30; i++)
    {
        note = rand() % 21;     // Generation d'une valeur pseudo-aléatoire dans l'intervalle [0;20].
        printf("Note %d : %d\n", i + 1, note);
        moyenne += note;
    }

    moyenne /= 30.0;
    printf("\n\nLa moyenne des notes generees aleatoirement est de %.2f.\n\n", moyenne);

    return 0;
}

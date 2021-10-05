#include <iostream>
#include <time.h>

int main()
{
    float t1[10], t2[10];
    int i, j;

    // Initialisation de la séquence pseudo-aléatoire
    srand(time(NULL));

    printf("Valeurs dans t2 : ");
    for(i = 0; i < 10; i++)
    {
        // Génération d'une valeur pseudo-aléatoire
        t2[i] = (rand() % 10000) - 5000;
        t2[i] /= 100;
        printf("%.2f ", t2[i]);
    }
    printf("\n");

    j = 0;
    for(i = 0; i < 10; i++)
    {
        if(t2[i] > 0)
        {
            t1[j++] = t2[i];
        }
    }

    printf("Valeurs dans t1 : ");
    for(i = 0; i < j; i++)
    {
        printf("%.2f ", t1[i]);
    }

    printf("\n");

    return 0;
}

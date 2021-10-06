#include <stdio.h>

int main()
{
    int somme = 0;
    int N;

    printf("------ SOMME DE 1 A N ------\n\n");

    do
    {
        printf("Entrez une valeur pour N : ");
        scanf("%d", &N);
    } while(N < 1);

    for(int i = 0; i < N; i++)
    {
        somme += (i + 1);
    }

    printf("La somme des entiers de 1 a %d vaut %d.\n\n", N, somme);

    return 0;
}

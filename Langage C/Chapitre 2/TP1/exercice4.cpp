#include <iostream>

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int prime[100];

    printf("------ NOMBRES PREMIERS ------\n\n");

    for(int i = 0; i < 100; i++)
    {
        int isPrime = 1;
        int nbDiviseur = 0;
        for(int j = 2; j <= 9; j++)
        {
            if((i+1) % j == 0)
            {
                nbDiviseur++;
                if(nbDiviseur > 1)
                {
                    break;
                }
            }
        }

        if(nbDiviseur > 1)
        {
            isPrime = 0;
        }

        prime[i] = isPrime;
        printf("%3d\t%1d\n", i + 1, isPrime);
    }

    return 0;
}

#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void affiche(int * tab, int nbValue, int lineCount, int colCount);

int main(int argc, char ** argv)
{
    printf("------ POINTEURS EX4 ------\n\n");

    int tab1[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int tab2[] = {-19,18,-17,16,-15,14,-13,12,-11,10,-9,8,-7,6,-5,4,-3,2,-1,0};

    printf("tab1 :");
    affiche(tab1, 20, 4, 5);

    printf("tab2 :");
    affiche(tab2, 17, 5, 4);
    return 0;
}

void affiche(int * tab, int nbValue, int lineCount, int colCount)
{
    printf("\n");
    int n = 0;

    for(int i = 0; i < lineCount && n < nbValue; i++)
    {
        if(i > 0) printf("\n");

        for(int j = 0; j < colCount && n < nbValue; j++)
        {
            if(j > 0) printf(", ");

            printf("%4d", tab[n]);

            n++;
        }
    }


    printf("\n\n");
}


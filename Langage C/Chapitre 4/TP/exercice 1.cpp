#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char ** argv)
{
    printf("------ POINTEURS EX1 ------\n\n");

    // Déclaration & allocation mémoire :
    float * adr1 = (float*)malloc(sizeof(float)),
            * adr2 = (float*)malloc(sizeof(float));

    // Affectation :
    *adr1 = -45.78;
    *adr2 = 678.89;

    // Affichage :
    printf("%p %p %f %f\n\n", adr1, adr2, *adr1, *adr2);

    free(adr1);
    free(adr2);
    return 0;
}


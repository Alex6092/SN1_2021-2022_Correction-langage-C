#include <iostream>

#include <stdio.h>
#include <stdlib.h>

float min (float* tab);
float max (float *tab);

int main()
{
    printf("------ FONCTIONS MIN/MAX ------\n\n");

    float liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6} ;

    printf("Min : %f, Max : %f\n", min(liste), max(liste));

    return 0;
}

float min(float * t)
{
    float valMin = t[0];
    for(int i = 1; i < 8; i++)
    {
        if(t[i] < valMin)
        {
            valMin = t[i];
        }
    }

    return valMin;
}

float max(float * t)
{
    float valMax = t[0];
    for(int i = 1; i < 8; i++)
    {
        if(t[i] > valMax)
        {
            valMax = t[i];
        }
    }

    return valMax;
}



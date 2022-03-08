#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saisie(float *a, float *b, float *c)
{
	printf("Saisir a : ");
	scanf("%f", a);
	printf("Saisir b : ");
	scanf("%f", b);
	printf("Saisir c : ");
	scanf("%f", c);
}

float * calcul(float a, float b, float c)
{
	float delta = (b * b) - 4.0 * a * c;
	float * result = NULL;

	if (delta > 0)
	{
		result = (float*)malloc(3 * sizeof(float));
		result[0] = 2;
		result[1] = -b - sqrt(delta) / 2 * a;
		result[2] = -b + sqrt(delta) / 2 * a;
	}
	else if (delta == 0)
	{
		result = (float*)malloc(2 * sizeof(float));
		result[0] = 1;
		result[1] = -b / 2 * a;
	}

	return result;
}

int main(int argc, char ** argv)
{
	float a, b, c;
	float *result;

	saisie(&a, &b, &c);
	result = calcul(a, b, c);

	if (result == NULL)
	{
		printf("Il n'y a pas de solution dans l'ensemble des reels.\n");
	}
	else
	{
		int nbSolution = result[0];

		if (nbSolution == 1)
		{
			printf("Il y a une solution : %f.\n", result[1]);
		}
		else if (nbSolution == 2)
		{
			printf("Il y a deux solutions : %f et %f.\n", result[1], result[2]);
		}

		free(result);
	}
	
	return 0;
}
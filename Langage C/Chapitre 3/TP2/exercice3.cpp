#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transforme(char * str)
{

    for(int i = 0; i < strlen(str); i++)
        str[i] = toupper(str[i]);
}


int main()
{
    printf("------ FONCTION TRANSFORME ------\n\n");

    char str[100];

    printf("Chaine a traiter : ");
    fgets(str, 100, stdin);
    transforme(str);

    printf("\nLa chaine transformee est %s\n", str);

    return 0;
}





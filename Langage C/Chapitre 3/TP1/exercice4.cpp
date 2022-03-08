#include <iostream>

#include <stdio.h>
#include <stdlib.h>

int pgcd(int v1, int v2);

int main()
{
    printf("------ FONCTION PGCD ------\n\n");

    int a, b;

    printf("Entrez 2 nombres : ");
    scanf("%d%d", &a, &b);

    printf("Le pgcd de %d et %d est %d\n", a, b, pgcd(a, b));

    return 0;
}

/*
 * Pseudo code itératif :
 * tant que b ≠ 0
       t := b;
       b := a modulo b;
       a := t;
    retourner a
 */

/*
 // Version itérative :
int pgcd(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }

    return a;
}
*/

/*
 * Pseudo code récursif :
 * si b = 0 alors retourner a
    sinon euclide(b, a modulo b)
    */

// Version par récurrence :
int pgcd(int a, int b)
{
    return b == 0 ? a : pgcd(b, a % b);
}




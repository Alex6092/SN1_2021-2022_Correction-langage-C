#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#define LINES 3
#define COLS 4

int main()
{
    printf("------ QUESTIONNAIRE ------\n\n");

    int iEtudiant = 0, age, sexe, nbCine, choixFF, nbFF, doSport, sportChoice;

    while (1)
    {
        printf("Entrer votre age : ");
        scanf("%d", &age);

        printf("Etes vous H/F ? (0=H ; 1=F ; 2=NB)");
        scanf("%d", &sexe);

        printf("Combien de cine / mois ? ");
        scanf("%d", &nbCine);

        printf("Preferez vous BK, McDo ou KFC ? (0=BK ; 1=McDo ; 2=KFC) ");
        scanf("%d", &choixFF);

        printf("Combien de fois y aller vous chaque mois ? ");
        scanf("%d", &nbFF);

        printf("Pratiquer vous un sport ? (1 = OUI ; 0 = NON) ");
        scanf("%d", &doSport);

        if (doSport)
        {
            printf("Quel sport parmi : foot (0), tennis (1), basket (2),judo (3), natation (4), autre (5) ? ");
            scanf("%d", &sportChoice);
        }

        iEtudiant++;

        // Recap :
        printf("-------------------------------------");
        printf("Etudiant %d : \n", iEtudiant);
        printf("Age : %d\n", age);
        printf("Sexe : %s\n", sexe == 0 ? "Homme" : (sexe == 1 ? "Femme" : "Non binaire"));
        printf("Nombre de cine / mois : %d\n", nbCine);
        printf("Fast food : %s\n", choixFF == 0 ? "Burger King" : (choixFF == 1 ? "McDo" : "KFC"));
        printf("Nombre de burger / mois : %d\n", nbFF * 3);
        printf("Sport : %s\n", doSport ? "Oui" : "Non");
        if (doSport)
        {
            printf("Sport pratique : ");

            switch (sportChoice)
            {
            case 0:
                printf("Foot\n");
                break;
            case 1:
                printf("Tennis\n");
                break;
            case 2:
                printf("Basket\n");
                break;
            case 3:
                printf("Judo\n");
                break;
            case 4:
                printf("Natation\n");
                break;
            default:
                printf("Autre\n");
                break;
            }
        }

        printf("------------------------------------\n\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    float prix;
    int quantite;
    float total;


    printf("------ MONTANT D'UNE FACTURE ------\n\n");

    printf("Saisissez le prix de l'article : ");
    scanf("%f", &prix);

    printf("Saisissez la quantite desiree : ");
    scanf("%d", &quantite);

    total = prix * quantite;

    /*
    if(total > 500)
    {
        printf("Sous total : %.2f euros\n", total);
        total *= 0.9;
        printf("Une remise de 10 %% a ete appliquee.\n");
    }
    */

    //printf("\n\nLe montant a payer est de : %.2f euros.\n\n", total);
    printf("\n\nLe montant a payer est de : %.2f euros.\n\n", total > 500 ? total * 0.9 : total);

    return 0;
}

#include <stdio.h>

int main()
{
    int note;
    int nbNoteSupADix = 0;
    int nbNote = 0;
    int isValid;

    printf("------ COMPTEUR DE NOTE SUPERIEURE A 10 ------\n\n");

    printf("Saisissez l'ensemble des notes de la classe.\n");
    printf("La saisie s'arrete lorsqu'une note en dehors de l'interval [0;20] est saisie.\n\n");

    do
    {
        printf("Entrer une note : ");
        scanf("%d", &note);
        isValid = note >= 0 && note <= 20;
        if(isValid)
        {
            nbNote++;
            if(note >= 10)
            {
                nbNoteSupADix++;
            }
        }

    } while(isValid);

    printf("Il y a %d note superieures a 10 parmis les %d notes saisies.\n\n", nbNoteSupADix, nbNote);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

int main(int argc, char *argv[])
{
    Liste *liste = initialisation();

    // for (int i = 1; i <= 5; i++)
    // {
    //     Cellule *cellule = malloc(sizeof(*cellule));

    //     if (cellule == NULL)
    //     {
    //         exit(EXIT_FAILURE);
    //     }

    //     cellule->valeur = i;
    //     cellule->suivant = liste->premier;
    //     liste->premier = cellule;
    // }

    // afficherListe(liste);
    // supprimerListe(liste);

    insertionEnTete(liste, 4);
    insertionEnTete(liste, 3);
    insertionEnTete(liste, 6);
    insertionEnTete(liste, 10);

    // parcourtIterative(liste);

    suppressionEnTete(liste);

    parcourtRecursif(liste->premier);

    printf("inserer une valeur en queeu liste \n");

    int nbreDernier;

    fflush(stdout);

    scanf("%d", &nbreDernier);

    insertionEnQueu(liste, nbreDernier);

    printf("voici à nouveau la liste après l'insertion en queue\n");

    parcourtRecursif(liste->premier);

    printf("affichage exo1");

    exo1(liste->premier);

    printf("taper une valeur à supprimer \n");

    fflush(stdout);

    int valSupprime;

    scanf("%d", &valSupprime);

    suppression(liste, valSupprime);

    printf("voici à nouveau la liste après après suppression\n");

    parcourtRecursif(liste->premier);

    printf("Et voici la taille de la liste %d \n", sizeOfListe(liste->premier));

    printf("donner une position pour inserer un elements ?\n");

    fflush(stdout);

    int positionInsertion;

    scanf("%d", &positionInsertion);

    printf("Maintenant inserer votre valeur à la position %d\n", positionInsertion);

    fflush(stdout);

    int valeurInsertion;

    scanf("%d", &valeurInsertion);

    insertKiemPosition(liste, positionInsertion, valeurInsertion);

    printf("voici à nouveau la liste après l'insertion %dieme position\n", positionInsertion);

    parcourtRecursif(liste->premier);





    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

Pile *initialisation()
{
    Pile *pile = malloc(sizeof(Pile));

    Cellule *cellule = malloc(sizeof(Cellule));

    if (pile == NULL || cellule == NULL)
    {
        exit(EXIT_FAILURE);
    }

    cellule->valeur = 0;
    cellule->suivant = NULL;

    pile->sommet = cellule;

    return pile;
    
}

void empiler(Pile *pile, int valeur)
{
    Cellule *cellule = malloc(sizeof(*cellule));

    if (pile == NULL || cellule == NULL)
    {
        exit(EXIT_FAILURE);
    }

    cellule->valeur = valeur;
    cellule->suivant = pile->sommet;

    pile->sommet = cellule;   
}

int depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int sommet = 0;

    Cellule *pointeur = pile->sommet;

    if (pile != NULL && pile->sommet != NULL)
    {
        sommet = pointeur->valeur;

        pile->sommet = pointeur->suivant;

        free(pointeur);
    }

    return sommet;
    
    
}

void parcoursPile(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Cellule *pointeur = pile->sommet;

    while (pointeur != NULL)
    {
        printf("%d\n", pointeur->valeur);
        pointeur = pointeur->suivant;

    }
    printf("\n");
    
    
}
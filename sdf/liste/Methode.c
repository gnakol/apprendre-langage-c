#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

Liste *creerListe() {
    Liste *liste = malloc(sizeof(Liste));
    if (liste == NULL) {
        // la mémoire n'a pas pu être allouée
        return NULL;
    }
    liste->premier = NULL;
    return liste;
}


Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));

    Cellule *cellule = malloc(sizeof(*cellule));

    if (liste == NULL || cellule == NULL)
    {
        exit(EXIT_FAILURE);
    }

    cellule->valeur = 0;
    cellule->suivant = NULL;

    liste->premier = cellule;

    return liste;
    
}

// *******************************PARCOURS******************

void parcourtRecursif(Cellule *cellule)
{
    if (cellule != NULL)
    {
        printf("%d --> ", cellule->valeur);
        parcourtRecursif(cellule->suivant);
    }
    else
    {
        printf("NULL\n");
    }
}


void parcourtIterative(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Cellule *pointeur = liste->premier;

    while (pointeur != NULL)
    {
        printf("%d --> \t", pointeur->valeur);
        pointeur = pointeur->suivant;
    }
    
    
}

void exo1(Cellule *cellule)
{
    if (cellule != NULL)
    {
        printf("%d\n", cellule->valeur);
        exo1(cellule->suivant);
        printf("%d\n", cellule->valeur);
    }
    
}

// ****************INSERTIONS***************************

void insertionEnTete(Liste *liste, int nombre)
{
    Cellule *cellule = malloc(sizeof(*cellule));

    if (cellule == NULL || liste == NULL)        
    {
        exit(EXIT_FAILURE);
    }

    cellule->valeur = nombre;
    cellule->suivant = liste->premier;

    liste->premier = cellule;
    
}

void insertionEnQueu(Liste *liste, int nombre)
{
    Cellule *queue = malloc(sizeof(*queue));

    if (liste == NULL || queue == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Cellule *pointeur = liste->premier;

    while (pointeur->suivant 
    != NULL)  
    {
        pointeur = pointeur->suivant;
    }

    queue->valeur = nombre;
    queue->suivant = NULL;

    pointeur->suivant = queue;
    
    
}

void insertKiemPosition(Liste *liste, int position, int valeur)
{
    int compteur = 1;

    Cellule *cellule = liste->premier, *pointeur = liste->premier;

    Cellule *newCellule = malloc(sizeof(newCellule));

    if (liste == NULL || newCellule == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while (pointeur != NULL && compteur != position)
    {
        cellule = pointeur;
        pointeur = pointeur->suivant;
        compteur++;
    }

    if (position == compteur)
    {
        newCellule->valeur = valeur;
        newCellule->suivant = pointeur;
        cellule->suivant = newCellule;
    }
    
    
    
    
}

// ***************************SUPPRESSION**********************

void suppressionEnTete(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Cellule *cellule = liste->premier;

    liste->premier = liste->premier->suivant;

    free(cellule);
}

void suppression(Liste *liste, int valeur)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Cellule *pointeur = liste->premier, *precedent = liste->premier;

    if (pointeur->valeur == valeur)
    {
        suppressionEnTete(liste);
        return;
    }
    

    while (pointeur != NULL && pointeur->valeur != valeur)
    {
        precedent = pointeur;
        pointeur = pointeur->suivant;

    }

    if (pointeur != NULL)
    {
        precedent->suivant = pointeur->suivant;
        free(pointeur);
    }
    
    
    
}

// ***********************OTHER***************************

int sizeOfListe(Cellule *cellule)
{
    if (cellule == NULL)
    {
        return 0;
    }
    else
    {
        return 1 + sizeOfListe(cellule->suivant);
    }
    
    
}



// **********************************************************************


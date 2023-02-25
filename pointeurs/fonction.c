#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void decoupeMinutes(int *heures, int *minutes)
{
    *heures = *minutes / 60;

    *minutes = *minutes % 60;
}

void triple(int *nombre)
{
    *nombre *= 3;
}

void parcourTableau(int *tab, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        printf("%d\n", *(tab + i));
    }
    
}

int sommeTableau(int *tab, int taille)
{
    int somme = 0;

    for (int i = 0; i < taille; i++)
    {
        somme = somme + tab[i];
    }

    return somme;
    
}
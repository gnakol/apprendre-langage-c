#ifndef HEADER_H
#define HEADER_H

typedef struct Cellule Cellule;
struct Cellule
{
    int valeur;
    Cellule *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    Cellule *sommet;
};

Pile *initialisation();
void empiler(Pile *pile, int valeur);
int depiler(Pile *pile);
void parcoursPile(Pile *pile);
#endif
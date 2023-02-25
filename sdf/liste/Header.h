#ifndef HEADER_H
#define HEADER_H



typedef struct Cellule Cellule;
struct Cellule
{
    int valeur;
    
    Cellule *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Cellule *premier;
};

Liste *creerListe();
Liste *initialisation();
void parcourtRecursif(Cellule *cellule);
void parcourtIterative(Liste *liste);
void insertionEnTete(Liste *liste, int nombre);
void suppressionEnTete(Liste *liste);
void insertionEnQueu(Liste *liste, int nombre);
void exo1(Cellule *cellule);
void suppression(Liste *liste, int valeur);
int sizeOfListe(Cellule *cellule);
void insertKiemPosition(Liste *liste, int position, int valeur);

#endif


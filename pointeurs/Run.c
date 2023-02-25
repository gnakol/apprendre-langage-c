#include <stdio.h>
#include <stdlib.h>

#include "fonction.h"

int main(int argc, char *argv[]){

    int age = 30;

    int *refAge = &age;

    printf("age = %d\n", age);

    printf("reference de age %d\n", *refAge);

    int nombre = 3;

    triple(&nombre);

    printf("le trile vaut %d : \n", nombre);

    int h = 0, m = 90;

    decoupeMinutes(&h, &m);

    printf("les nouvelles valeurs sont %d h, %d min : \n", h, m);

    int tableau[4];

    tableau[0] = 10;
    tableau[1] = 23;
    tableau[2] = 505;
    tableau[3] = 8;

    printf("liste des elements du tableau \n");
    
    parcourTableau(tableau, 4);

    printf("et voici la somme des elements %d\n", sommeTableau(tableau, 4));

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int main(int argv, char **argc){

    Pile *pile = initialisation();

    empiler(pile, 4);
    empiler(pile, 8);
    empiler(pile, 15);
    empiler(pile, 16);
    empiler(pile, 23);
    empiler(pile, 42);

    printf("\nEtat de la pile \n");
    parcoursPile(pile);

    printf("on depile %d\n", depiler(pile));

    printf("\nEtat de la pile \n");
    parcoursPile(pile);

    return 0;
}
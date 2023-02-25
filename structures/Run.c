#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"

int main(int argv, char *argc[]){

    Coordonnees points;

    points.x = 10;
    points.y = 20;

    printf("%d et %d\n", points.x, points.y);

    return 0;
}
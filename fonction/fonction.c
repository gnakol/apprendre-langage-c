#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float racineCarre(int valeur)
{
    return sqrt(valeur);
}

void salutation()
{
    printf("hello comment vas-tu ?\n");
}

int triple(int nombre)
{

    return 3 * nombre;
}

int increment()
{
     static int nombre = 0;

    nombre++;

    return nombre;
}
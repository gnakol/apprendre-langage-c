#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[])
{

    printf("Héllo world\n");

    int nobreDeVies = 0;

    nobreDeVies++;

    printf("le point de vie vaut : %d\n ", nobreDeVies);

    int age;

    printf("quel est ton age \n");

    fflush(stdout);

    scanf("%d", &age);

    if (age < 30 && 30 % 2 == 0)
    {
        printf("Ah d'accord je vois que vous êtes jeune c'est sa la parité\n");
    }
    else
        printf("Vous êtes un homme responsable felicitation vive l'imparité\n");

    printf("la racine carrée de %d est  %f\n", age, sqrt(age));

    printf("*****************BIENVENUE DANS MON RESTAURANT***********************\n");

    printf("choisir un menu de 1 à 4\n");
    printf("Votre choix ? \n");

    fflush(stdout);

    int menu;

    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        printf("Royal Cheese");
        break;
    case 2:
        printf("Mc Deluxe");
        break;
    case 3: 
        printf("Mc Bacon");
        break;
    case 4:
        printf("Big Mac");
        break;
    
    default:
        printf("Desoler on a pas ce menu");
        break;
}

    return 0;
}
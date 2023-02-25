#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction.h"

int main(int argc, char *argv[]){

    // char lettre = 'A';

    // printf("%c\n", lettre);

    // char chaine[] = "Salut";

    // printf("%s\n", chaine);

    // char nom[50];

    // printf("Votre nom svp ??\n");

    // fflush(stdout);

    // scanf("%s", nom);

    // printf("Bonjour %s\n", nom);

    // char *prenom = "ANNA";

    // printf("la taille de %s vaut %d\n", prenom, strlen(prenom));

    char blaze[10];

    printf("Quel est ton blaze ?\n");

    fflush(stdout);

    lire(blaze, 10);
    printf("Salut %s !\n", blaze);

    lire(blaze, 10);
    
    printf("Salut %s !\n", blaze);

    return 0;
}
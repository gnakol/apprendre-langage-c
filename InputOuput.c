#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){

    char nom[15];

    printf("quel est votre nom? \n");

    fflush(stdout);

    fgets(nom, 15, stdin);

    printf("Bonjour %s\n", nom);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){

    FILE *fichier = NULL;

    fichier = fopen("text.txt", "r+");

    if (fichier != NULL)
    {
        fputc('A', fichier);
        fputc('B', fichier);
        fputs("Salut je commence bientôt la piscine et mon alternance", fichier);
        fclose(fichier);
    }
    

    return 0;
}
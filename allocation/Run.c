#include <stdio.h>
#include <stdlib.h>

int main(int argv, char *argc[]){

    int nombreAmis = 0;
    int *ageAmis = NULL;

    printf("Commbine d'ami avez vous ?\n");

    fflush(stdout);

    scanf("%d", &nombreAmis);

    if (nombreAmis > 0)
    {
        ageAmis = malloc(nombreAmis * sizeof(int));
        if (ageAmis == NULL)
        {
            exit(0);
        }

        for (int i = 0; i < nombreAmis; i++)
        {
            printf("quel est de l'ami N° %d", i+1);
            fflush(stdout);
            scanf("%d", &ageAmis[i]);
        }

        for (int i = 0; i < nombreAmis; i++)
        {
            printf("Ami N° %d age=%d\n", i + 1, ageAmis[i]);
        }

        free(ageAmis);
        
        
        
    }
    

    return 0;
}
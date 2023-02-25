#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void viderBuffer()
{
    int c = 0; 

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
    
}

int lire(char *chaine, int taille)
{
    char *positionEntree = NULL;

    if (fgets(chaine, taille, stdin) != NULL)
    {
        positionEntree = strchr(chaine, '\n');

        if (positionEntree != NULL)
        {
            *positionEntree = '\0';
        }
        else
        {
            viderBuffer();
        }
        

        return 1;
        
    }
    else
    {
        viderBuffer();
        return 0;
    }
    
}
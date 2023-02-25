#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fonction.h"

int main (int argc, char * argv[]){

    printf("la racine carrée de vaut %.2f : \n", racineCarre(4));

    salutation();

    printf("le triple vaut : %d \n", triple(5));

    printf("%d\n", increment());
    printf("%d\n", increment());
    printf("%d\n", increment());
    printf("%d\n", increment());

    return 0;
}
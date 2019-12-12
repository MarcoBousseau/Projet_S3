#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void affiche_couche(int *couche, int taille, char* nom){
    int i;
    printf("activation %s :\n                     ", nom);
    for(i=0; i<taille; i++){
        printf("%d  ", *(couche+i));
    }
    printf("\n");
}

int main(){}

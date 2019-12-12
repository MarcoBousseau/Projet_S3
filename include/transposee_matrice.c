#include <stdio.h>
#include <stdlib.h>

void affiche_matrice(int *m, int height, int width){
	int k, l;
	printf("matrice :\n");
	for(l=0; l < height; l++){
	    for(k=0; k < width; k++){
	    	printf("%d ", m[width*l+k]);
	    }
	    printf("\n");
	}
}

void transposee_matrice(int *m1, int *m2, int width,int  height){
	int i,j;
	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			*(m2 + i*width + j) = (*(m1 + j*width + i));
		}
	}
}

int main(void)
{
    printf("taille matrice (largeur, hauteur):\n");
    int width, height;
    scanf("%d", &width);
    scanf("%d", &height);
    int i;
    int *matrice1, *matrice2;
    matrice1 = malloc(width*height*sizeof(int));
    matrice2 = malloc(width*height*sizeof(int));
    printf("valeurs coontenues dans la matrice (lecture de gauche a droite/haut en bas) : \n");
    for(i = 0; i<(width*height); i++){
    	scanf("%d", matrice1+i);
    }
    transposee_matrice(matrice1, matrice2, width, height); 
   	affiche_matrice(matrice1, height, width);
   	affiche_matrice(matrice2, height, width);
}
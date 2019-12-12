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

int main(void){
	int mat1[9]={2,3,4,5,6,7,8,9,10},mat2[9]={-1,1,1,-1,-1,1,-1,1,-1};
    int mat3[9], mat4[9], mat5[9];
    affiche_matrice(mat1, 3, 3);
    //affiche_matrice(mat3, 3, 3);
    affiche_matrice(mat2, 3, 3);
    //affiche_matrice(mat4, 3, 3);
    //affiche_matrice(mat5, 3, 3);
}

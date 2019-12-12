#include <stdio.h>

void produit_matrice(int *m1, int *m2,int *m3, int height, int width){
	int i1, j1, p, sum;
	for(i1 = 0; i1 < height; i1++){
		for(j1 = 0; j1 < width; j1++){
			sum = 0;
			for(p = 0; p < height; p++){
				sum = sum + (*(m1 + i1*width + p))*(*(m2 + p*width + j1));
			}
			*(m3 + i1*width + j1) = sum;
		}
	}
}

void main(void){
	int mat1[9]={2,3,4,5,6,7,8,9,10},mat2[9]={-1,1,1,-1,-1,1,-1,1,-1};
    int mat3[9], mat4[9], mat5[9];
    transition(mat1, mat3, 3, 3);
    transition(mat2, mat4, 3, 3);
    produit_matrice(mat1, mat2, mat5, 3, 3);
    affiche_matrice(mat1, 3, 3);
    //affiche_matrice(mat3, 3, 3);
    affiche_matrice(mat2, 3, 3);
    //affiche_matrice(mat4, 3, 3);
    affiche_matrice(mat5, 3, 3);
}
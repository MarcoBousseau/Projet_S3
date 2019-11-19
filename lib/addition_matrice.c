#include <stdio.h>

void addition_matrice(int *m1, int *m2,int *m3, int height, int width){
	int i,j;
	for(i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			*(m3 + i*width + j) = *(m1 + i*width + j) + *(m2 + i*width + j);
		}
	}	
}

int main(void)
{
    /*
    int mat1[9]={2,3,4,5,6,7,8,9,10},mat2[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int mat3[9];
    addition_matrice(mat1, mat2, mat3, 3, 3);
    int k, l;
	for(l=0; l < 3; l++){
	    for(k=0; k < 3; k++){
	    	printf("%d", mat3[3*l+k]);
	    }
	    printf("\n");
	}
	*/
}
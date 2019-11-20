#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    //Creation et saisie des valeurs d'activation (4 valeurs pour nous)
    
    int i, *nb_neurones_entree;
    int *activation;
    printf("Entrer le nombre de neurones que contient la couche d'entree");
    scanf("%d", nb_neurones_entree);
    activation = malloc((*nb_neurones_entree)*(sizeof(int)));
    printf("Entrer les valeurs d'activation");
    for(i = 0; i < *nb_neurones_entree; i++){
		scanf("%d", activation+i);   	
    }
    float *coefficients;
    coefficients = malloc((*nb_neurones_entree)*(*nb_neurones_entree)*sizeof(float));
    int j;
    for(j = 0; j<(*nb_neurones_entree)*(*nb_neurones_entree); j++){
		*(coefficients+j)=1;
    }
    
    //Propagation : 1ere sous-couche
}
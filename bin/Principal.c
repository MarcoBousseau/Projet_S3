#include <stdio.h>
#include <stdlib.h>

void affiche_couche(int *couche, int taille){
	int i;
	for(i=0; i<taille; i++){
		printf("%d", *(couche+i));
	}
}

int main(void)
{   
    //Creation de la matrice de coefficientset saisie des valeurs d'activation (4 valeurs pour nous)
    
    int i;
    int nb_neurones_entree = 4;
    int *activation;
    activation = malloc((nb_neurones_entree)*(sizeof(int)));
    printf("Entrer les valeurs d'activation");
    for(i = 0; i < nb_neurones_entree; i++){
		scanf("%d", activation+i);   	
    }
    
    //Matrices de coefficients synaptiques 
    
    int *coeff1, *coeff2, *coeff3;
    int nb_neurones_cache1 = 15;
    int nb_neurones_cache2 = 5;
    coeff1 = malloc((nb_neurones_cache1)*(nb_neurones_entree)*sizeof(int));
    coeff2 = malloc((nb_neurones_cache2)*(nb_neurones_cache1)*sizeof(int));
    coeff3 = malloc(1*(nb_neurones_cache2)*sizeof(int));
    (*coeff1)[(nb_neurones_cache1)*(nb_neurones_entree)] = {1,1,1,1,1,0,1,0,0,1,0,1,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,1,1,0,0,0,1,1,1,0,0,1,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1};
    (*coeff2)[(nb_neurones_cache2)*(nb_neurones_cache1)] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};
	(*coeff3)[5] = {1,2,1,1,1};
    
    //Propagation : 1ere sous-couche
    
    int m;
    int n;
    int *activation_prem_couche;
    activation_prem_couche = malloc((nb_neurones_cache1)*sizeof(int));
    for(m = 0; m < (*nb_neurones_cache1); m++){
    	for(n = 0; n<(nb_neurones_entree); n++){
    		*(activation_prem_couche+m) = *(activation_prem_couche+m) + (*(activation + n + m*(nb_neurones_entree)));
		}
    }
    affiche_couche(activation_prem_couche, nb_neurones_cache1);
    //Propagation : 2 eme couche 
    /*
    int ;
    int *activation_deux_couche;
    activation_deux_couche = malloc(2*sizeof(int));
    *(activation_deux_couche+0) = *(activation_prem_couche+0);
	*(activation_deux_couche+1) = localisation(*(activation_prem_couche+0, *(activation_prem_couche+1), *(activation_prem_couche+2), *(activation_prem_couche+3), *(activation_prem_couche+4)), ;
	
	//Propagation : Couche de sortie
	*/
	
}













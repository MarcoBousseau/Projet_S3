#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void affiche_couche(int *couche, int taille, char* nom){
	int i;
	printf("activation %s :\n 					", nom);
	for(i=0; i<taille; i++){
		printf("%d  ", *(couche+i));
	}
	printf("\n");
}

int main(void)
{   
    //Saisie des valeurs d'activation (4 valeurs pour nous)
    
    int i;
    int nb_neurones_entree = 4;
    int activation[nb_neurones_entree];
    printf("Entrer les valeurs d'activation :\n");
    for(i = 0; i < nb_neurones_entree; i++){
		scanf("%d", activation+i);   	
    }
    char* nom1 = "Entree";
    affiche_couche(activation, nb_neurones_entree,nom1);
    
    //Matrices de coefficients synaptiques 
    
    int nb_neurones_cache1 = 15;
    int nb_neurones_cache2 = 5;
    int coeff1[60] = {1,1,1,1,1,0,0,1,0,1,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,0,0,1,0,1,0,0,1,1,1,0,1,0,1,1,1,0,0,1,1,1,1,0,1,1,1,1,0,1};
    int coeff2[75] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1};
	int coeff3[5] = {1,2,1,1,1};
    
    //Propagation : 1ere sous-couche
    
    int m;
    int n;
    int activation_prem_couche[nb_neurones_cache1];
    for(m = 0; m < nb_neurones_cache1; m++){
    	activation_prem_couche[m] = 0;
    	for(n = 0; n<(nb_neurones_entree); n++){
    		activation_prem_couche[m] = activation_prem_couche[m] + (activation[n])*(coeff1[n + m*(nb_neurones_entree)]);
		}
    }
    int j, k;
    int x1;
    float diviseur1;
    for(j = 0; j<nb_neurones_cache1; j++){
    	diviseur1 = 0;
    	for(k = 0; k<(nb_neurones_entree); k++){
    		diviseur1 = diviseur1 + (coeff1[k + j*(nb_neurones_entree)]);
		}
    	x1 = activation_prem_couche[j];
    	activation_prem_couche[j] = (x1/diviseur1);
    }
    char* nom2 = "couche cache 1";
    affiche_couche(activation_prem_couche, nb_neurones_cache1,nom2);
    
    //Propagation : 2 eme couche 
    
    int activation_deux_couche[5];
    int q, r;
    for(q = 0; q<nb_neurones_cache2; q++){
    	activation_deux_couche[q] = 0;
    	for(r = 0; r<(nb_neurones_cache1); r++){
    		activation_deux_couche[q] = activation_deux_couche[q] + (activation_prem_couche[r])*(coeff2[r + q*(nb_neurones_cache1)]);
		}
    }
    char* nom3 = "couche cachee 2";
    affiche_couche(activation_deux_couche, nb_neurones_cache2, nom3);
    
	//Propagation : Couche de sortie
	
	int sortie = 0;
	int s;
	for(s = 0; s < nb_neurones_cache2; s++){
		sortie = sortie + (activation_deux_couche[s])*(coeff3[s]);
	}
	printf("activation sortie : \n 					%d\n", sortie);
}













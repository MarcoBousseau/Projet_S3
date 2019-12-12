INCL=/Projet_S3

addition_matrice.o : addition_matrice.c /include/fonctions.h
    gcc -o addition_matrice.o -c addition_matrice.c -I /include

affiche_matrice.o : affiche_matrice.c /include/fonctions.h
    gcc -o affiche_matrice.o -c affiche_matrice.c -I /include

produit_matrice.o : produit_matrice.c /include/fonctions.h
    gcc -o produit_matrice.o -c produit_matrice.c -I /include

transposee_matrice.o : transposee_matrice.c /include/fonctions.h
    gcc -o transposee_matrice.o -c transposee_matrice.c -I /include

affiche_couche.o : affiche_couche.c /include/fonctions.h
    gcc -o affiche_couche.o -c affiche_couche.c -I /include

libFonctions.a : addition_matrice.o affiche_matrice.o produit_matrice.o transposee_matrice.o affiche_couche.o
    ar rcs /lib/libFonctions.a addition_matrice.o affiche_matrice.o produit_matrice.o transposee_matrice.o affiche_couche.o

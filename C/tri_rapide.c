#include "stdlib.h"
#include "stdio.h"

int* tri_rapide(int* tableau, int taille) {
    int pivot = tableau[0];
    int* gauche = malloc(taille * sizeof(int));
    int* droite = malloc(taille * sizeof(int));
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < taille) {
        if (tableau[i] < pivot) {
            gauche[j] = tableau[i];
            j++;
        } else {
            droite[k] = tableau[i];
            k++;
        }
        i++;
    }
    if (j > 1) {
        gauche = tri_rapide(gauche, j);
    }
    if (k > 1) {
        droite = tri_rapide(droite, k);
    }
    int* resultat = malloc((j + k) * sizeof(int));
    i = 0;
    while (i < j) {
        resultat[i] = gauche[i];
        i++;
    }
    resultat[i] = pivot;
    i++;
    while (i < j + k) {
        resultat[i] = droite[i - j];
        i++;
    }
    free(gauche);
    free(droite);
    return resultat;
}

int main() {

    int tableau[] = {5, 4, 3, 2, 1};

    tri_rapide(tableau, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
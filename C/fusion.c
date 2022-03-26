#include "stdlib.h"
#include "stdio.h"

void tri_fusion(int* tableau, int taille) {
    int i, j, k, m, n, p, q, r, s, t;
    int* tableau_tmp = (int*) malloc(taille * sizeof(int));
    for (i = 0; i < taille; i++) {
        tableau_tmp[i] = tableau[i];
    }
    for (j = 0; j < taille; j++) {
        for (k = 0; k < taille; k++) {
            if (tableau_tmp[j] < tableau_tmp[k]) {
                m = tableau_tmp[j];
                tableau_tmp[j] = tableau_tmp[k];
                tableau_tmp[k] = m;
            }
        }
    }
    for (n = 0; n < taille; n++) {
        for (p = 0; p < taille; p++) {
            if (tableau_tmp[n] < tableau_tmp[p]) {
                q = tableau_tmp[n];
                tableau_tmp[n] = tableau_tmp[p];
                tableau_tmp[p] = q;
            }
        }
    }
    for (r = 0; r < taille; r++) {
        for (s = 0; s < taille; s++) {
            if (tableau_tmp[r] < tableau_tmp[s]) {
                t = tableau_tmp[r];
                tableau_tmp[r] = tableau_tmp[s];
                tableau_tmp[s] = t;
            }
        }
    }
    for (i = 0; i < taille; i++) {
        tableau[i] = tableau_tmp[i];
    }
    free(tableau_tmp);
}

int main() {

    int liste[] = {5, 8, 3, 2, 1};

    tri_fusion(liste, 5);

    printf("%d %d %d %d %d\n", liste[0], liste[1], liste[2], liste[3], liste[4]);

    return EXIT_SUCCESS;

}
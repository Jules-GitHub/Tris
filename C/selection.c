#include "stdlib.h"
#include "stdio.h"

void selection(int* tableau, int taille) {
    int i, j, tmp, min;
    for (i = 0; i < taille - 1; i++) {
        min = i;
        for (j = i + 1; j < taille; j++) {
            if (tableau[j] < tableau[min]) {
                min = j;
            }
        }
        if (min != i) {
            tmp = tableau[i];
            tableau[i] = tableau[min];
            tableau[min] = tmp;
        }
    }
}

int main() {

    int tableau[] = {5, 4, 7, 2, 1};

    selection(tableau, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
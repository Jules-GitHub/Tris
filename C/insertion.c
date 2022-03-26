#include "stdlib.h"
#include "stdio.h"

void insertion(int* tableau, int taille) {
    int i, j, tmp;
    for (i = 1; i < taille; i++) {
        tmp = tableau[i];
        j = i - 1;
        while (j >= 0 && tableau[j] > tmp) {
            tableau[j + 1] = tableau[j];
            j--;
        }
        tableau[j + 1] = tmp;
    }
}

int main() {

    int tableau[] = {5, 9, 3, 2, 1};

    insertion(tableau, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
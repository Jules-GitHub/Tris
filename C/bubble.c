#include "stdlib.h"
#include "stdio.h"

void bubble_sort(int* tableau, int taille) {
    int i, j, tmp;
    for (i = 0; i < taille - 1; i++) {
        for (j = 0; j < taille - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                tmp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = tmp;
            }
        }
    }
}

int main() {

    int tableau[] = {5, 6, 3, 2, 1};

    bubble_sort(tableau, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
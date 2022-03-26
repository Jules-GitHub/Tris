#include "stdlib.h"
#include "stdio.h"

int partitionne(int* tableau, int debut, int fin) {
    int pivot = tableau[debut];
    int i = debut + 1;
    int j = fin;
    int tmp;
    while (i <= j) {
        while (i <= j && tableau[i] <= pivot) {
            i++;
        }
        while (i <= j && tableau[j] > pivot) {
            j--;
        }
        if (i < j) {
            tmp = tableau[i];
            tableau[i] = tableau[j];
            tableau[j] = tmp;
        }
    }
    tmp = tableau[debut];
    tableau[debut] = tableau[j];
    tableau[j] = tmp;
    return j;
}

void tri_rapide(int* tableau, int debut, int fin) {
    if (fin-debut >= 2) {
        int pivot = partitionne(tableau, debut, fin);
        tri_rapide(tableau, debut, pivot);
        tri_rapide(tableau, pivot + 1, fin);
    }
}

int main() {

    int tableau[] = {5, 4, 3, 2, 1};

    tri_rapide(tableau, 0, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
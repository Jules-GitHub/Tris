#include "stdlib.h"
#include "stdio.h"

int* tri_par_tas(int* tableau, int taille);

int main() {

    int tableau[] = {5, 6, 3, 9, 1};

    tri_par_tas(tableau, 5);

    printf("%d %d %d %d %d\n", tableau[0], tableau[1], tableau[2], tableau[3], tableau[4]);

    return EXIT_SUCCESS;

}
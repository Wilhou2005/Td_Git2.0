#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    printf("Entrez une taille pour l'etoile (entre 5 et 10) : ");
    scanf("%d", &n);

    int width = n * n;
    int max_height = 3 * n - 1;

    char img[max_height][width];

    return 0;
}












 
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    do {
        printf("Entrez une taille pour l'etoile (entre 5 et 10) : ");
        scanf("%d", &n);
    } while (n < 5 || n > 10);

    int width = n * n;
    int max_height = 3 * n - 1;

    char img[max_height][width];

    for (int i = 0; i < max_height; i++) {
        for (int j = 0; j < width; j++) {
            img[i][j] = ' ';
        }
    }

    return 0;
}

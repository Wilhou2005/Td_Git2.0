#include <stdio.h>

int main() {
    char nom[6];// Il faut augmenter le nombre de caracteres
    printf("Nom ? ");
    scanf("%s", &nom);// Il manque le &
    printf("Bonjour %s\n", nom);
    return 0;
}

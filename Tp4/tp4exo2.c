#include <stdio.h>
#include <stdlib.h>

void afficher_menu() {
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int main() {
    int choix;
    afficher_menu();
    printf("Votre choix : ");
    scanf("%d",&choix);
    return 0;
}

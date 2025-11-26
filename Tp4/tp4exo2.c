#include <stdio.h>
#include <stdlib.h>

void afficher_menu() {
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int saisir_montant() {
    int m;
    printf("Montant a retirer : ");
    scanf("%d",&m);
    return m;
}

int main() {
    int choix;
    afficher_menu();
    printf("Votre choix : ");
    scanf("%d",&choix);

    if (choix == 1) {
        int m = saisir_montant();
    }

    return 0;
}

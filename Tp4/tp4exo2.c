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

int montant_valide(int montant) {
    if (montant < 5 || montant > 1000 || montant % 5 != 0) {
        printf("Erreur : montant invalide.\n");
        printf("Le montant doit etre entre 5 euros et 1000 euros, divisible par 5.\n");
        return 0;
    }
    return 1;
}

int main() {
    int choix;
    afficher_menu();
    printf("Votre choix : ");
    scanf("%d",&choix);

    if (choix == 1) {
        int m = saisir_montant();
        montant_valide(m);
    }

    return 0;
}

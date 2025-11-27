#include <stdio.h>

void afficher_menu() {
    printf("=== BANQUE - DISTRIBUTEUR ===\n");
    printf("1 - Faire un retrait\n");
    printf("2 - Quitter\n");
}

int saisir_montant() {
    int m;
    printf("Montant a retirer : ");
    scanf("%d", &m);
    return m;
}

int montant_valide(int montant) {
    if (montant >= 5 && montant <= 1000 && montant % 5 == 0) {
        return 1;
    }
    return 0;
}

void calcul_distribution(int montant) {
    int reste = montant;

    int nb50 = reste / 50;
    reste = reste - nb50 * 50;

    int nb20 = reste / 20;
    reste = reste - nb20 * 20;

    int nb10 = reste / 10;
    reste = reste - nb10 * 10;

    int nb5 = reste / 5;

    printf("Billets distribuer :\n");
    printf("%d billets de 50 euros\n", nb50);
    printf("%d billets de 20 euros\n", nb20);
    printf("%d billets de 10 euros\n", nb10);
    printf("%d billets de 5 euros\n", nb5);
}

int main() {

    int choix = 0;

    while (choix != 2) {

        afficher_menu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        if (choix == 1) {

            int montant = saisir_montant();

            if (montant_valide(montant) == 1) {
                calcul_distribution(montant);
            } else {
                printf("Erreur : montant invalide.\n");
                printf("Le montant doit etre entre 5 et 1000 euros, divisible par 5.\n");
            }
        }
        else if (choix != 2) {
            printf("Choix invalide.\n");
        }
    }

    return 0;
}

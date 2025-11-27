#include <stdio.h>

void menu_affichage() {

    printf("=== BANQUE - DISTRIBUTEUR ===\n");

    printf("1 - Faire un retrait\n");

    printf("2 - Quitter\n");

}

 

int demander_retrait() {

    int saisie;

    printf("Montant a retirer : ");

    scanf("%d", &saisie);

    return saisie;

}

int montant_correct(int valeur) {
    if ( (valeur >= 5) && (valeur <= 1000) && (valeur % 5 == 0) ) {
        return 1;
    }

    return 0;

}

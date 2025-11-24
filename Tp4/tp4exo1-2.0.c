#include <stdio.h>
#include <stdlib.h>

int afficherMenu() {
    printf("===== GESTION DE NOTES =====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Afficher toutes les notes\n");
    printf("4. Afficher la moyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher la meilleure note de chaque controle\n");
    printf("0. Quitter\n");
    return 0;
}

int lirechoix() {
    int choix;
    scanf("%d",&choix);
    return choix;
}

int saisirnombreeleves() {
    int n;
    printf("Nombre d'eleves (1-30) : ");
    scanf("%d",&n);
    while (n < 1 || n > 30) {
        printf("Nombre d'eleves (1-30) : ");
        scanf("%d",&n);
    }
    return n;
}

int saisirNotes(int notes[30][3], int nb) {
    int i;
    int j;
    int note;
    for (i = 0; i < nb; i++) {
        printf("Eleve %d :\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Note du controle %d (0 a 20) : ", j + 1);
            scanf("%d",&note);
            while (note < 0 || note > 20) {
                printf("Note du controle %d (0 a 20) : ", j + 1);
                scanf("%d",&note);
            }
            notes[i][j] = note;
        }
    }
    return 0;
}

int afficherNotes(int notes[30][3], int nb) {
    int i;
    int j;
    printf("Tableau des notes\n");
    printf("Eleve  C1  C2  C3\n");
    for (i = 0; i < nb; i++) {
        printf("%d  ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d  ", notes[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int notes[30][3];
    afficherMenu();
    int choix = lirechoix();
    int nb = saisirnombreeleves();
    saisirNotes(notes, nb);
    afficherNotes(notes, nb);
    return 0;
}

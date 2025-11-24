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

int saisirNotes(float notes[30][3], int nb) {
    int i;
    int j;
    float note;
    for (i = 0; i < nb; i++) {
        printf("Eleve %d :\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Note du controle %d (0 a 20) : ", j + 1);
            scanf("%f",&note);
            while (note < 0 || note > 20) {
                printf("Note du controle %d (0 a 20) : ", j + 1);
                scanf("%f",&note);
            }
            notes[i][j] = note;
        }
    }
    return 0;
}

int afficherNotes(float notes[30][3], int nb) {
    int i;
    int j;
    printf("Tableau des notes\n");
    printf("Eleve  C1  C2  C3\n");
    for (i = 0; i < nb; i++) {
        printf("%d  ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%f  ", notes[i][j]);
        }
        printf("\n");
    }
    return 0;
}

float calculerMoyenneEleve(float notes[30][3], int indice_eleve){
    float total=0;
    total += notes[indice_eleve][0] + notes[indice_eleve][1] + notes[indice_eleve][2];
    return total/3;
}

float calculerMoyenneGeneral(float notes[30][3],int nb){
    float total=0;
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total+=notes[i][j];
            
        }
    
    }
    return total/(nb*3);

    
}
void meilleurnote(float notes[30][3],int nb){
    float total=0;
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            total+=notes[i][j];
            
        }
    
    }
    
}


int main() {
    float notes[30][3];
    afficherMenu();
    int choix = lirechoix();
    int nb = saisirnombreeleves();
    saisirNotes(notes, nb);
    afficherNotes(notes, nb);
    int indice_eleve;
    printf("Entrez l'indice de l'eleve: ");
    scanf("%i",&indice_eleve);
    printf("%f\n",calculerMoyenneEleve(notes,indice_eleve-1));
    int moyenne;
    printf("Moyenne general:%f",calculerMoyenneGeneral(notes,nb));
    return 0;
    
}


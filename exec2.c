#include <stdio.h>

int main() {
    int tab[10];// Valeur du tableau hors limite il faut donc mettre 10
    
    for (int i = 0; i < 10; i++) {
        tab[i] = i;  
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n",tab[i]);  
    }
    printf("fait\n");
    return 0;
}

#include <stdio.h>

// ici le comilateur ne dit malheureusement rien mais il devrait,
// executer pour essayer de comprendre ce qu'il se passe 
int main() {
    int tableau[5];
    int i = 12;
    for (int j = 0; j < 5; j++)
    {
        tableau[j] = 1;
    }
    printf("OK %d\n", tableau[4]);//Si on avait laisser tableau[5] cela n'aurait pas marcher car ça aurait été hors limite donc il faut mettre 4
    return 0;
}

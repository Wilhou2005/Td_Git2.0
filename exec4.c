#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++// I n'est jamais modifie dans la boucle il faut donc mettre i++
    }
    return 0;
}

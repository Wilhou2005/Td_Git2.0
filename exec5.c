#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0';//Avec cette ligne il va lire les caracteres jusqu'à 0 sans ça ça peut ne pas fonctionner
    printf("%s\n", s); 
    return 0;
}

#include <stdio.h>

int main() {
    char s[5] = "Hello";//initializer-string for array of chars is too long La taille n'etait pas suffisante pour Hello donc ça ne pouvait pas compiler 
    printf("%s\n", s);
    return 0;
}

#include <stdio.h>

int main() {
    int x =42;//initialization makes integer from pointer without a cast [-Wint-conversion] Les "" etaient l'erreur 
    printf("%d\n", x);
    return 0;
}

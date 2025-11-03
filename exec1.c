#include <stdio.h>

int main() {
    int a = 2;
    int b = 1;
    int c = a / b;  // crash / comportement indéfini // On ne peut pas diviser par 0
    printf("%d\n", c);
    return 0;
}

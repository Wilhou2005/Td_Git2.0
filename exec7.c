#include <stdio.h>

int main() {
    float distance_km = 100;//En divisant on peut avoir un nombre décimal donc on utilise float
    float vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    float minutes = temps * 60;
    printf("minutes = %f\n", minutes); //%f car on utilise float
    return 0;
}

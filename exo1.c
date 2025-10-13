#include <stdio.h>

int main() {
    int total_seconds;
    int heures, minutes, secondes;

    printf(" nombre total de secondes : ");
    scanf("%d", &total_seconds);

    heures = total_seconds / 3600;            
    minutes = (total_seconds % 3600) / 60;
    secondes = total_seconds % 60;            

    printf("%d secondes = %d heure(s), %d minute(s) et %d seconde(s)\n",
           total_seconds, heures, minutes, secondes);

    return 0;
}

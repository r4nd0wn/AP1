#include <stdio.h>
#include <math.h>

int main(){
    printf("Programm zur Floorfunktion | jbachma2\n\n");
    printf("Bitte geben Sie den Wert ein: ");
    double read_value;
    scanf("%lf", &read_value);
    printf("Der Floorwert von %lf ist: %lf\n", read_value, floor(read_value));
}

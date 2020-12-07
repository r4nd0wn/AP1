#include <stdio.h>
#include <stdlib.h>

int main(){
    char matrix[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            matrix[i][j] = '+';
        }
    }
    printf("Die MAtrix sieht so aus:\n")
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Optionen:\n(1) Fülle alle Felder mit 0\n");
    printf("(2) Fülle die beiden Diagonalen mit 0\n");
    printf("(3) Fülle ein spezielles Feld mit 0 (Spalte, Zeile)\n");
    printf("(4) Refresh: Fülle alle Felder wieder mit +\n");
    printf("(5) Ausgabe der Matrix auf dem Bildschirm\n");
    printf("(6) Ende des Programms\n");
}
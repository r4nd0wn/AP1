#include <stdio.h>
#include <stdlib.h>

// Bei Aufruf der Funktion wird das Menü ausgegeben
void print_menu(){
    printf("Optionen:\n(1) Fülle alle Felder mit 0\n");
    printf("(2) Fülle die beiden Diagonalen mit 0\n");
    printf("(3) Fülle ein spezielles Feld mit 0 (Spalte, Zeile)\n");
    printf("(4) Refresh: Fülle alle Felder wieder mit +\n");
    printf("(5) Ausgabe der Matrix auf dem Bildschirm\n");
    printf("(6) Ende des Programms\n");
}


int main(){
    char matrix[5][5];
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            matrix[i][j] = '+';
        }
    }
    printf("Die Matrix sieht so aus:\n\n");
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n\n");
    }

    print_menu();

    int menu_blocker = 1, menu_selection;
    while (menu_blocker == 1){
        scanf("%i", &menu_selection);
        switch (menu_selection)
        {
        case 1:
            printf("option1\n");
            break;
        case 2:
            printf("option2\n");
            break;
        case 3:
            printf("option3\n");
            break;
        case 4:
            printf("option4\n");
            break;
        case 5:
            printf("option5\n");
            break;
        case 6:
            return 0;
            break;
        default:
            printf("Dieser Menüpunkt ist leider invalid. Bitte probieren sie es noch mal.\n");
            print_menu();
            break;
        }
    }
}
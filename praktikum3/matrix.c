#include <stdio.h>
#include <stdlib.h>
#define QUADRAT 5
// Bei Aufruf der Funktion wird das Menü ausgegeben
void print_menu()
{
    printf("Optionen:\n(1) Fülle alle Felder mit 0\n");
    printf("(2) Fülle die beiden Diagonalen mit 0\n");
    printf("(3) Fülle ein spezielles Feld mit 0 (Spalte, Zeile)\n");
    printf("(4) Refresh: Fülle alle Felder wieder mit +\n");
    printf("(5) Ausgabe der Matrix auf dem Bildschirm\n");
    printf("(6) Ende des Programms\n");
}
void print_matrix(char matrixx[QUADRAT][QUADRAT]){
    printf("Die Matrix sieht so aus:\n\n");
    for (int i = 0; i < QUADRAT; i++)
    {
        for (int j = 0; j < QUADRAT; j++)
        {
            printf("%c ", matrixx[i][j]);
        }
        printf("\n\n");
    }
}

void diagonal_zero(char matrixx)
{   
    // einmal eine doppeltes setzen der Variablen, dafür nur 3 Zeilen Code.
    for (int i = 0; i < QUADRAT; i++){
        matrixx[i][i] = 0;
        matrixx[i][5-i] = 0;
    }
}

int main()
{
    char matrix[QUADRAT][QUADRAT];
    for (int i = 0; i < QUADRAT; i++)
    {
        for (int j = 0; j < QUADRAT; j++)
        {
            matrix[i][j] = '+';
        }
    }

    print_matrix(matrix);
    print_menu();

    int menu_blocker = 1, menu_selection;
    while (menu_blocker == 1)
    {
        scanf("%i", &menu_selection);
        switch (menu_selection)
        {
        case 1:
            
            break;
        case 2:
            matrix = diagonal_zero(matrix);
            print_matrix(matrix);
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
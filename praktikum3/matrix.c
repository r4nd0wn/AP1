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
    printf("Eingabe: ");
}
void print_matrix(char matrixx[QUADRAT][QUADRAT]){
    printf("Die Matrix sieht so aus:\n\n");
    for (int i = 0; i < QUADRAT; i++)
    {
        for (int j = 0; j < QUADRAT; j++)
        {
            printf("%c ", matrixx[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void diagonal_zero(char matrixx[][QUADRAT])
{   
    // einmal eine doppeltes setzen der Variablen, dafür nur 3 Zeilen Code.
    for (int i = 0; i < QUADRAT; i++){
        matrixx[i][i] = '0';
        matrixx[i][QUADRAT -1 -i] = '0';
    }
}

void fill_matrix(char matrixx[][QUADRAT], char fill_char){
    for (int i = 0; i < QUADRAT; i++)
    {
        for (int j = 0; j < QUADRAT; j++)
        {
            matrixx[i][j] = fill_char;
        }
    }
}

int main()
{
    char matrix[QUADRAT][QUADRAT];
    
    fill_matrix(matrix, '+');
    print_matrix(matrix);
    print_menu();

    int menu_blocker = 1, menu_selection;
    while (menu_blocker == 1)
    {
        scanf("%i", &menu_selection);
        switch (menu_selection)
        {
        case 1:
            fill_matrix(matrix, '0');
            printf("\nEingabe: ");
            break;
        case 2:
            diagonal_zero(matrix);
            printf("\nEingabe: ");
            break;
        case 3:
            printf("\nEingabe: ");
            break;
        case 4:
            fill_matrix(matrix, '+');
            printf("\nEingabe: ");
            break;
        case 5:
            print_matrix(matrix);
            printf("\nEingabe: ");
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
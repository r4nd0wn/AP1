#include <stdio.h>

int main()
{

    int ziel;  //Zahl, bis zu der die Primzahlen gefunden werden sollen
    int i = 0; //Laufvariable für Durchlauf
    int j = 0; //Laufvariable zum Streichen von vielfachen
    int k = 2; //Variable, mit der Vielfache ausmultipliziert werden

    printf("Programm zur berechnung von Primzahlen\n");

    printf("\nGeben Sie eine Zahl zwischen 2 und 1000 ein: ");
    scanf("%i", &ziel);

    //array erstellen
    int zahlen[ziel];
    zahlen[0] = 0;

    //Überprüfen ob die Eingabe nicht korrekt war
    if (ziel < 2 || ziel > 1000)
    {
        printf("%i ist nicht erlaubt\n", ziel);
        return 1; //beendet Programm und kann als Fehlercode genutzt werden
    }

    //setze alle Zahlen auf wahr, bis auf die 1
    for (i = 1; i < ziel; i++)
    {
        zahlen[i] = 1;
    }

    printf("\nDie Zahlen sind: ");
    //Sieb anwenden
    for (i = 2; i < ziel; i++)
    {

        if (zahlen[i] == 1)
        {
            for (j = 2 * i; j < ziel; j += i)
            {
                zahlen[j] = 0;
            }
            //k = 2; //muss vor dem nächsten durchlauf wieder auf 2 gesetzt werden
        }
    }
    for (i = 1; i < ziel; i++)
    {
        if (zahlen[i] == 1)
        {
            printf("%i, ", i + 1);
        }
    }

    printf("\n");
    return 0;
}
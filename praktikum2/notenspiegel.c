#include <stdio.h>

int main()
{
    printf("\nProgramm Notenspiegel\n\n");
    int i;
    int notenanzahl[5];
    for (i = 1; i < 6; i++)
    {
        printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein: ", i);
        scanf("%i", &notenanzahl[(i - 1)]);
    }
    printf("\nDer Notenspiegel sieht dann so aus:\n\n");
    printf("%-10s%-10i%-10i%-10i%-10i%-10i%-10s", "Note", 1, 2, 3, 4, 5, "Gesamt");
    printf("\n");
    int summe = 0;
    int gesamtanzahl = 0;
    for (i = 0; i < 7; i++)
    {
        if (i == 0)
        {
            printf("%-10s", "Anzahl");
        }
        else if (i == 6)
        {
            printf("%-10i\n\n", gesamtanzahl);
        }
        else
        {
            printf("%-10i", notenanzahl[i - 1]);
            gesamtanzahl += notenanzahl[i-1];
        }
    }
    for (i = 1; i<6; i++)
    {
        summe = summe + (notenanzahl[i-1] * i );
    }
    printf("Durchschnittsnote: %.1f \n\n", summe / (float)gesamtanzahl);
    printf("Durchfallquote: %.1f %%\n", (notenanzahl[4] / (float)gesamtanzahl) * 100);
    return 0;
}


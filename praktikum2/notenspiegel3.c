#include <stdio.h>
#include <stdlib.h>

int main()
{
 printf("\nProgramm Notenspiegel | jbachma2\n\n");
 int i, summe = 0, gesamtanzahl = 0;
 int notenanzahl[5] = {0};
 for (i = 0; i < 5; i++)
 {
		printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein: ", i + 1);
		scanf("%i", &notenanzahl[i]);
		fflush(stdin);
 }
 printf("\nDer Notenspiegel sieht dann so aus:\n\n");
 printf("%-10s%-10i%-10i%-10i%-10i%-10i%-10s", "Note", 1, 2, 3, 4, 5, "Gesamt");
 printf("\n");
 printf("%-10s", "Anzahl");
 for (i = 0; i < 5; i++)
 {
		printf("%-10i", notenanzahl[i]);
		// Neben der Ausgabe die Gesamtanzahl der Arbeiten und das Produkt für die Durchschnittsberechnung bilden.
		gesamtanzahl += notenanzahl[i];
		summe += notenanzahl[i] * i;
 }
 printf("%-10i\n\n", gesamtanzahl);
 printf("%-20s%.1f \n\n", "Durchschnittsnote: ", summe / (float)gesamtanzahl);
 printf("%-20s%.1f %%\n", "Durchfallquote: ", (notenanzahl[4] / (float)gesamtanzahl) * 100);
 return 0;
}

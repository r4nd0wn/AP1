#include <stdio.h>
#include <stdlib.h>

int main()
{
 int maximalwert, counter = 0;
 /*
 * Genauso möglich: Ein Array erstellen, Werte invertieren, sodass jede Primzahl eine 1 und nicht eine 0 erhält.
 * Aufgrund der Funktionsweise des Siebes habe ich mich aber entschieden die "gestrichenen" Zahlen zu markieren.
 */
 int sieb_gestrichen[1000] = {0};

 printf("Bitte definieren sie x für die Bestimmung von Priemzahlen im Bereich von 0 bis x wobei 1 < x < 1000 gilt: ");
 scanf("%d", &maximalwert);
 fflush(stdin);
 while (!(maximalwert <= 1001) || !(maximalwert > 1))
 {
		printf("Die Eingabe war ungültig. Für x muss gelten: 0 < x < 1000\nBitte probieren sie es erneut, oder beenden sie das Programm mit STRG+C");
		scanf("%d", &maximalwert);
		fflush(stdin);
 }
 for (int i = 2; i <= maximalwert + 2; i++)
 {
		if (!sieb_gestrichen[i])
		{
			for (int j = 2 * i; j <= maximalwert + 2; j += i)
			{
				sieb_gestrichen[j] = 1;
			}
		}
 }
 for (int i = 2; i < maximalwert; i++)
 {
		if (sieb_gestrichen[i] == 0)
		{
			counter += 1;
			printf("Primzahl Nr. %i: %i\n", counter, i);
		}
 }
 printf("Es wurden insgesamt %i Primzahlen gefunden.\n", counter);
 return 0;
}

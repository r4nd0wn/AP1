#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Bitte definieren sie x für die Bestimmung von Priemzahlen im Bereich von 0 bis x wobei 0 < x < 1000 gilt: ");
    int maximalwert;
    scanf("%d", &maximalwert);
    if (!(maximalwert <= 1001) || !( maximalwert >= 0) ){
        printf("Die Eingabe war ungültig. Für x muss gelten: 0 < x < 1000\n");
        exit(1);
    }

    /*
     * Genauso möglich: Ein Array erstellen, werte invertieren, sodass jede Primzahl eine 1 und nicht eine 0 erhält.
     * Aufgrund der Funktionsweise des Siebes habe ich mich aber entschieden die "gestrichenen" Zahlen zu markieren.
     */

    int sieb_gestrichen[1000] = {0}; //index 0 auf 0 stellen, alle anderen werden automatisch mit 0 (false) initialisiert

    for (int i = 2; i < maximalwert + 1; i++)
    {
        if (!sieb_gestrichen[i])
        {
            for (int j = 2 * i; j <= maximalwert + 1; j += i)
            {
                sieb_gestrichen[j] = 1;
            }
        }
    }
    int counter = 0;
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


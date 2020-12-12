#include <stdio.h>
#include "myfunctions.h"

int main()
{
    char eingabe[200];
    char entscheidung, suche;
    printf("Bitte Namen eingeben: ");
    fflush(stdin);
    scanf(" %s", &eingabe);

    printf("%s hat %i Zeichen.\n", eingabe, laengeZeichenkette(eingabe));
    do
    {
        printf("Möchtest Du nach einem Buchstaben in %s suchen (j / n)? ", eingabe);
        fflush(stdin);
        scanf(" %c", &entscheidung);
        if (entscheidung == 'j')
        {
            printf("Bitte Buchstaben eingeben: ");
            fflush(stdin);
            scanf(" %c", &suche);
            printf("Der buchstabe %c kommt %i-mal vor.\n", suche, sucheZeichen(eingabe, suche));
        }
    } while (entscheidung == 'j');
    printf("Auf Wiedersehen!\n");
    return 0;
}
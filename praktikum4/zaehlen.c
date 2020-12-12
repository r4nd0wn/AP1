#include <stdio.h>
#define ARRAYLENGTH(x)  (sizeof(x) / sizeof((x)[0]))

int sucheZeichen(const char s[], char c)
{
    int counter = 0;
    for (int i = 0; i < (sizeof(s) / sizeof(char)); i++)
    {
        if (c == s[i])
        {
            counter++;
        }
    }
    return counter;
}

int laengeZeichenkette(const char s[])
{
    int size;
    while(s[i++]);
    return (size - 1);
}

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
        scanf(" %c", &entscheidung);
        if (entscheidung == 'j')
        {
            printf("Bitte Buchstaben eingeben: ");
            scanf(" %c", &suche);
            printf("Der buchstabe %c kommt %i-mal vor.\n", suche, sucheZeichen(eingabe, suche));
        }
    }while(entscheidung == 'j');
    printf("Auf Wiedersehen!\n");
    return 0;
}
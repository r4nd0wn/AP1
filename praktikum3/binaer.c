#include <stdio.h>

#define BITARRAY_LENGTH 8

int main()
{
    int eingabe;
    int dualzahl[BITARRAY_LENGTH];

    printf("Programm Dualzahl | jbachma2\n\n");
    printf("Geben Sie bitte eine ganze Zahl ein: ");
    scanf("%i", &eingabe);
    // sanity check, es dürfen nur Zahlen zwischen 0 und 255 eingegeben werden
    if (eingabe >= 0 && eingabe <= 255){

        // msb first, daher wird der loop bei dem höchsten Arraywert gestartet
        for (int i = BITARRAY_LENGTH - 1; i >= 0; i--)
        {
            dualzahl[i] = eingabe % 2;
            eingabe = eingabe / 2;
        }
        for (int i = 0; i < BITARRAY_LENGTH; i++)
        {
            printf("%i", dualzahl[i]);
        }
        printf("\n");
    }
    else {
        printf("Das hat nicht geklappt.\n");
        printf("Bitte gib das nächste mal eine Ganzzahl x ein für die gilt: 0 >= x <= 255.\n")
    }
    return 0;
}
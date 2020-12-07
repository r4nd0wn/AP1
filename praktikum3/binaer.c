#include <stdio.h>

int main()
{
    int eingabe;
    int dualzahl[BITARRAY_LENGTH];
#define BITARRAY_LENGTH 8

    printf("Programm Dualzahl | jbachma2\n\n");
    printf("Geben Sie bitte eine ganze Zahl ein: ");
    scanf("%i", &eingabe);
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
    return 0;
}
#include <stdio.h>
#include "stringFunctions.h"

#define MAXSTRINGLENGTH 200

int main()
{
    char firma0[MAXSTRINGLENGTH];
    char firma1[MAXSTRINGLENGTH];
    printf("Programm zur Konkurrenzermittlung | jbachma2\n\n");
    printf("Bitte geben sie den 1. Firmennamen ein: ");
    scanf(" %s", firma0);
    printf("Bitte geben sie den 2. Firmennamen ein: ");
    scanf(" %s", firma1);
    if (equal(firma0, firma1) == 0)
    {
        printf("\nStatus: %s hat keine Konkurrenten.\n", firma0);
    }
    else
    {
        printf("\nStatus: %s sind Konkurrenten.\n", stringconcentrate(firma0, firma1));
    }

    return 0;
}
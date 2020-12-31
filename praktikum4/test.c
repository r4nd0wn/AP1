#include <stdio.h>

int main()
{
    char eingabe[200];

    printf("Bitte Namen eingeben: ");
    fflush(stdin);
    scanf(" %s", &eingabe);
    printf(" %s", eingabe);
    return 0;
}

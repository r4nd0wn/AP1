#include <stdio.h>
#include "myfunctions.h"

int sucheZeichen(const char s[], const char c)
{
    int counter = 0;
    for (int i = 0; i < laengeZeichenkette(s); i++)
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
    int size = 0;
    while (s[size++]);
    return (size - 1);
}


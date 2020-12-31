int equal(const char x[], const char y[]);
const char *stringconcentrate(const char x[], const char y[]);

int equal(const char x[], const char y[])
{
    int i = -1;
    do
    {
        i++;
        if (x[i] != y[i])
        {
            return 1;
        }
    } while (x[i] != '\0');
    return 0;
}

const char *stringconcentrate(const char x[], const char y[])
{
    char *combined;
    int i = 0, j = 0;
    while (x[i] != '\0')
    {
        combined[i] = x[i];
        i++;
    }
    combined[i] = ' ';
    i++;
    combined[i] = '&';
    i++;
    combined[i] = ' ';
    i++;
    while (y[j] != '\0')
    {
        combined[i] = y[j];
        i++;
        j++;
    }
    return combined;
}
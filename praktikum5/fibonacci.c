#include <stdio.h>

typedef struct Fibo_
{
    int n;
    struct Fibo_ *next;
} Fibo;

int fibcalc(int n, int i, int sum)
{
    if (sum == 0)
    {
        i++;
        fibcalc(n, i, sum + 1);
    }
    else if (n != i)
    {
        i++;
        fibcalc(0, i, sum + i);
    }
    else
    {

        return sum;
    }
    if (i <= n && i > 1)
    {
        printf("Die FibSumme bei n=%d ist: \t%d\n", i, sum);
        i++;
        fibcalc(n, i, sum + i);
    }
    else if (i == 1)
    {
        printf("Die FibSumme bei n=%d ist: \t%d\n", i, sum);
        fibcalc(n, ++i, sum + 1);
    }
    else if (i == 0)
    {
        printf("Die FibSumme bei n=%d ist: \t%d\n", i, sum);
        fibcalc(n, ++i, sum);
    }
    else
    {
        return sum;
    }
}

int main()
{
    while (1)
    {
        int f;
        printf("Bitte geben sie eine Zahl für die fibonacci Berechnung ein: ");
        scanf("%d", &f);
        printf("ihre Fibonacci Zahl ist %d.\n", fibcalc(f, 0, 0));
    }
}
#include <stdio.h>

typedef struct Fibo_
{
    int n;
    struct Fibo_ *next;
} Fibo;

int fibcalc(int n, int limit, int fn)
{
    if (n == 0){
        fn = 0;
        n++;
        fibcalc(n, limit, fn);
    }
    else if (n == 1) {
        fn == 1;
        n++;
        fibcalc(n, limit, fn);
    }
    else if (n > 1 && n <= limit){
        fn = fn + n;
        n++;
        fibcalc(n, limit, fn);
    }
    else {
        return fn;
    }
}

int main()
{
    while (1)
    {
        int limit;
        printf("Bitte geben sie eine Zahl für die fibonacci Berechnung ein: ");
        scanf("%d", &limit);
        printf("ihre Fibonacci Zahl ist %d.\n", fibcalc(0, limit, 0));
    }
}
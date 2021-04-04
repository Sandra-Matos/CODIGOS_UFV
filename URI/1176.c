#include <stdio.h>
int main()
{
    int T, N, i, Fib[60];
    Fib[0] = 0;
    Fib[1] = 1;
    Fib[2] = 1;
    for (i = 3; i <= 60; i++)
    {
        Fib[i] = Fib[i - 2] + Fib[i - 1];
    }
    scanf("%d",&T);
    for (i = 0; i <= T; i++)
    {
        scanf("%d", &N);
        if (N >= 0 && N <= 60)
        {
            int X = Fib[N];

            printf("Fib(%d) = %d\n", N, X);
        }
    }

    return 0;
}
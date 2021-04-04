#include <stdlib.h>
#include <stdio.h>
int main()
{
    double M[12][12];
    int i, j, C, soma = 0;
    char T[2];
    scanf("%d", &C);
    scanf("%s", &T);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            soma = soma + M[i][j];
            if (T[0] == 'S')
                printf("%.1lf\n", soma);
            else
                printf("%.1lf\n", soma / 12.0);
        }

        return 0;
    }
}
#include <stdio.h>

int main()
{

    int i, j, soma, media, cont;
    float M[12][12];
    char O[2];
    scanf("%s", &O);
    soma = 0;
    cont = 0;
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%d", M[i][j]);
        }
    }
    if (j > i)
    {
        soma = soma + M[i][j];
        cont = cont + 1;
        media = soma / cont;
    }
    else if (O == 'S')
        printf("%.1f", soma);
    else if (O == 'M')
        printf("%.1f", soma / cont);

    return 0;
}
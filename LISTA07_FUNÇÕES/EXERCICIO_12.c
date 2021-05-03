// Faça uma função que receba como parâmetro uma matriz de tamanho
//NxN e retorne 1 se a matriz for diagonal superior, e 0 caso contrário
#include <stdio.h>
#include <stdlib.h>

int preenchematriz(int N, int (*matriz)[N])
{
    int i, j, soma = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (i > j)
            {
                soma == soma + matriz[i][j];
            }
        }
    }
    if (soma == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i, j, resultado;
    int A;
    printf("Digite o tamanho da matriz NxN: ");
    scanf("%d", &A);
    int matriz[A][A];
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < A; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (preenchematriz(A, matriz) == 1)
    {
        printf("Esta matriz e uma matriz triagular superior! \n");
    }
    else
    {
        printf("Esta matriz nao e uma matriz triangular superior! \n");
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N, i, media, soma = 0;

    printf("Digite ate 50 valores: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &N);
        soma = soma + N;
    }
    media = soma / 50;
    printf("A media dos valores digitados e: %d", media);
    return 0;
}

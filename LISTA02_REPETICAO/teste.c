#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A1, A2, A3, A4;
    int S1, S2, S3;
    int acerto = 0;
    printf("Digite 4 numeros apostados: ");
    scanf("%d %d %d %d", &A1, &A2, &A3, &A4);
    printf("Digite 3 numeros para saber se foram sorteados: ");
    scanf("%d %d %d", &S1, &S2, &S3);

    if ((A1 == S1) || (A1 == S2) || (A1 == S3))
    {
        acerto = acerto + 1;
    }
    if ((A2 == S1) || (A2 == S2) || (A2 == S3))
    {
        acerto = acerto + 1;
    }
    if ((A3 == S1) || (A3 == S2) || (A3 == S3))
    {
        acerto = acerto + 1;
    }
    if ((A4 == S1) || (A4 == S2) || (A4 == S3))
    {
        acerto = acerto + 1;
    }

    acerto = A1 + A2 + A3 + A4;

    printf("%d", acerto);
    return 0;
}
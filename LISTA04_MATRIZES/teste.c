#include <stdio.h>
#include <stdlib.h>
int main()
{

    float num1, num2, num3, soma;

    printf("Digite o valor de tres numeros: ");
    scanf("%f", num1);
    scanf("%f", num2);
    scanf("%f", num3);
    soma = num2 + num3;

    if (num1 > soma)
    {
        printf("O primeiro valor digitado é maior que a soma dos outros dois valores.");
    }
    else
    {
        printf("O primeiro valor digitado nao e maior que a soma dos outros dois valores.");
    }
    return 0;
}
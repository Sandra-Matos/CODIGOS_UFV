//Faça uma função que receba dois números por parâmetro e retorne a
//soma de todos os números inteiros existentes entre eles, incluindo-os.
#include <stdio.h>
#include <stdlib.h>
int somaNumeros(int n1, int n2)
{
    int i, soma = 0; //posso declarar essas variaveis nessa função
    if (n2 > n1){
        for (i = n1; i <= n2; i++)
        {
            soma = soma + i;
        }
    } else 
    {
        for (i = n2; i <=n1; i++){
            soma = soma + i;
        }
    }
    return soma;
}
int main()
{
    int resultado,num_1,num_2;
    printf("Digite o valor 1: ");
    scanf("%d",&num_1);
    printf("Digite o valor 2: ");
    scanf("%d",&num_2);
    resultado = somaNumeros(num_1,num_2);
    printf("O resultado da soma e %d",resultado);
    return 0;
}
//Faça um programa, contendo uma função que retorne 1 se o número
//do parâmetro for par ou 0 se o número do parâmetro for ímpar
#include <stdlib.h>
#include <stdio.h>
 
int parImpar(int num) // aqui declarei o tipo, nome, e o paramento com o tipo e o nome da variavel
{
    if(num % 2 == 0){// corpo do texto com condiçao
        return 1;
    }else{
        return 0;
    }
}
 
int main() // int main padrao
{
    int valor, resultado; // declarando dois valores
 
    printf("Digite um valor: ");
    scanf("%d",&valor);
 
    resultado = parImpar(valor); //aqui eu atribuo o valor do resultado da variavel da funcao la em cima
    //e dentro do seu parametro, que e a condicao if sera filtrado o digito recebido em valor
 
    printf("%d",resultado);
 
    return 0;
}
 
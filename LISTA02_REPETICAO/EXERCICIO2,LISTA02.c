//Escreva um algoritmo que leia um número N inteiro e escreva a soma de todos os números de 1 até N
#include <stdio.h>
#include <stdlib.h>
int main(){
    int N,soma, i,valor;
    printf("Digite um número indicando a soma total dele entre os outros números antecendentes: ");
    scanf("%d",&N);
    i=0;
    soma=0;

    while(i<=N){
        soma+=i;
        i++;
    }
    printf ("A soma dos valores e %d\n, é",soma);

    return 0;
}

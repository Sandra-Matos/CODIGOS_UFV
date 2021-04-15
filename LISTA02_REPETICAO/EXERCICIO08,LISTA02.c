//8. Faça um programa que leia um inteiro não-negativo n, calcula e //mostra o valor de n! (fatorial de n)
#include<stdio.h>
#include<stdlib.h>
int main (){
    int n,i,soma;
    soma=1;
    printf("Digite um valor:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        soma=soma*i;

    }
    printf("%d",soma);
    return 0;

}

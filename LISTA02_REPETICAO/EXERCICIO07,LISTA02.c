// Faça um algoritmo que calcule a média de 50 valores inteiros lidos do usuário
#include <stdio.h>
#include <stdlib.h>
int main(){
    int  media, soma,i,num;

    soma=0;
    printf("Digite até 50 valores: ");
    for(i=0;i<50;i++)
        scanf("%d",&num);
        soma = soma+num;
    media= soma/50;
    printf("%d",media);
    return 0;
    }


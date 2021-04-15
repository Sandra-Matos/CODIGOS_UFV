//Faça um algoritmo que leia e calcule a média de N valores inteiros valor de N deve ser lido da entrada).
#include <stdio.h>
#include<stdlib.h>
int main(){
    int  valor,soma,quant,i;
    float media;
    printf("Digite a quantidade de números para realizar a média.");
    scanf("%d",&quant);
    i=0;
    soma=0;
    media=0;
    while(i<quant){
        printf("Digite um valor.");
        scanf("%d",&valor);
        soma= soma+valor;
        i++;
    }
    media= soma/quant;


    printf("\n A média total é:%f ",media);
    return 0;
}

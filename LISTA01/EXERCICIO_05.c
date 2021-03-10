//Em uma padaria existem dois tipos de pães: Sal que custa R$0,10 e
//doce que custa R$0,15. Supondo que o cliente fizesse a compra de
//apenas um tipo de pão, faça um programa que leia a quantidade de
//pães, leia o tipo do pão escolhido e calcule e imprima o valor a ser
//pago.
#include <stdio.h>
#include<stdlib.h>
int main (){
    int pao, quant;
    float total_sal, total_doce;
    printf("Digite 1 para pao de sal ou 2 para pao de doce. ");
    scanf("%d",&pao);
    printf("Digite a quantidade de pao desejada: ");
    scanf("%d",&quant);

    if(pao==1){
        total_sal= 0.10*quant;
        printf("O pao escolhido foi de sal e o total a pagar pela quantidade foi R$: \n%.2f", total_sal);
    }
    else if(pao==2){
        total_doce= 0.15*quant;
        printf("O pao escolhido foi de doce e o total a pagar pela quantidade foi R$:\n %.2f",total_doce);

    }
        
 return 0;       
    


}
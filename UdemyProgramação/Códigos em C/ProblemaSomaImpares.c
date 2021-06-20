//Leia dois valores inteiros X e Y (em qualquer ordem). A seguir calcule e mostre a soma dos numeros 
//impares deles
#include <stdio.h>
#include<stdlib.h>
int main (){
    int X,Y;
    int soma,troca,i;
    printf("Digite o valor de X: ");
    scanf("%d",&X);
    printf("Digite o valor de Y: ");
    scanf("%d",&Y);
    soma=0;
    if( X > Y ){
        troca = X;
        X = Y;
        Y = troca;
    }
    for (i= X + 1; i < Y ; i++){
        if(i%2!=0){
            soma = soma + i;
        }
    }
    printf("A soma dos impares e: %d.",soma);
    return 0;
}
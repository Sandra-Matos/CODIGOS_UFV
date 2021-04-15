//4. Escreva um programa que leia 200 números e escreva quantos são pares e quantos são ímpares
#include <stdio.h>
#include <stdlib.h>
int numero, par, impar,i;
int main(){
    int par,impar,i,numero;
    par=0;
    impar=0;
    i=0;
    numero=0;
    printf("Digite até 200 valores.");
    while(i<200){
        scanf("%d",&numero);
        if(numero%2==0){
            par = par+1;
        }
        else{
            impar =impar +1;

        }

        i++;
    }

    printf("Os valores par e impar respectivamente são: %d %d ", par, impar);
    return 0;
}


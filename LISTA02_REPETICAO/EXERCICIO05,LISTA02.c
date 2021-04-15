//Faça um programa que leia um valor inteiro n, e em seguida leia uma
//seqüência de n números inteiros, e calcule e mostre a soma dos
//números lidos que são pares

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,valores,soma;
printf("Digite um valor: ");
scanf("%d",n);
printf("Digite uma quantidade de valores correspondente ao valor anterior para obter a soma de seus pares: %d");
for(;valores<n; n--)
    scanf("%d",&valores);
    if(valores%2==0){
         soma= soma+valores+valores;
        printf(soma);
    }
   return 0;


}


//Faça um programa para ler 03 números reais do teclado e verificar se o primeiro é maior 
//que a soma dos outros dois.
#include<stdio.h>
#include<stdlib.h>
int main (){
float n1,n2,n3, soma;
printf("Digite tres valores para descobrir se o primeiro valor e maior que a soma dos dois ultimos.");
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
soma = n2+n3;

if(n1>soma){
     printf("O primeiro valor e maior que a soma dos outros dois.");
}else
    printf("O primeiro valor nao e amior que a soma dos outros dois.");

    
return 0;
}

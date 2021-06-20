//Faça um programa para ler um numero indeterminado de dados, contendo cada um,
// a idade de um individuo.O ultimo dado, que nao entrara nos calculos, contem um valor de idade 
//negativa. Calcular e imprimir a idade media deste grupo de individuos. Se entrado um valor negativo
//na primeira vez, mostrar a mensagem "impossivel calcular."
#include<stdio.h>
#include<stdlib.h>
int main (){
    int idade,N,i,cont=0;
    float idademedia,soma=0;
    printf("Digite as idades: ");
    while(idade<0){
        scanf("%d",&idade);
        soma= soma+idade;
    }
   
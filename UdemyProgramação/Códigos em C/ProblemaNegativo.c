//Faça um programa que leia um numero inteiro positivo N (maximo = 10) e depois N numeros inteiros
// e armazene-os em um vetor. Em seguida, mostrar na tela todos os numeros negativos lidos
#include<stdio.h>
#include<stdlib.h>
int main(){
    int N,i;
    printf("Digite um numero que seja menor ou igual a 10: ");
    scanf("%d",&N);
    int vetor[N];
    for(i=0,i<N;i++){
        printf("Agora, digite o mesmo valor em quantidade para preencher o vetor: ");
        scanf("%d",&vetor[i]);
        if(i<0){
            printf(vetor[i]);
        }
    return 0;

    }
    
   
    
    
}
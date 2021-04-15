// Escreva um algoritmo que leia um vetor de tamanho 30 e escreva:
//• a soma de todos os elementos armazenados em índices pares;
//• o total de elementos ímpares existentes no vetor;
//• a soma de todos os elementos múltiplos de 3.

#include<stdio.h>
#include<stdlib.h>
int main (){
    int vetor[30],i=0,soma_par=0,multiplo=0,total_impar=0;
    printf("Digite ate 30 valores: ");
    for(i=0;i<30;i++){
          scanf("%d", &vetor[i]);

    }
  
    for (i=0;i<30;i++){
        if(vetor[i]){
            i%2==0;
            soma_par=soma_par+vetor[i];
            
        }
    }
    printf(" A  soma de todos os elementos armazenados em indices pares e: %d\n", soma_par);

    for(i=0;i<30;i++){
        if(vetor[i]%2!=0){
            total_impar=total_impar+vetor[i];
        }
    }
    printf("\n");
    printf(" O total de elementos impares existentes no vetor e %d\n ",total_impar);

    for (i=0;i<30;i++){
        if(vetor[i]%3==0){
            multiplo=multiplo+vetor[i];
        }
    }
    printf("\n");
    printf("A soma de todos os elementos multiplos de 3 e: %d",multiplo);



    return 0;


}
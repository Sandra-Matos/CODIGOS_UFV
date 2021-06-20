//Fazer um programa para ler tres numeros inteiros. Em seguida mostrar qual o 
//menor dentre os tres numeros lidos. Em caso de empate, mostrar apenas uma vez.
#include <stdio.h>
#include<stdlib.h>
int main (){
    int A,B,C,menor;
    printf("Digite tres valores para saber qual sera o menor: \n");
    printf("Primeiro numero: ");
    scanf("%d",&A);
    printf("Segundo numero: ");
    scanf("%d",&B);
    printf("Terceiro numero: ");
    scanf("%d",&C);
    if( A<B && A<C){
        menor = A;
        

    }else if(B<A && B<C){
        menor = B;
       


    }else{
        menor = C;
    }
    printf ("Menor = %d. ",menor);
    return 0;
}
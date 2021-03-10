//Escreva um programa para determinar se um número A é divisível por
//um outro número B. Esses valores devem ser fornecidos pelo usuário
#include<stdio.h>
#include<stdlib.h>
int main (){
    int A,B;
    printf("Digite o valor de A. ");
    scanf("%d",&A);
    printf("Digite o valor de B. ");
    scanf("%d",&B);
    if(A%B==0)
        printf("A e divisível por B. ");
    else
        printf("A nao e divisivel por B.");

return 0;
}
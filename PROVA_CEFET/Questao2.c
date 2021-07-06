#include<stdio.h>
#include<stdlib.h>
int main (){
    int A,B,C,soma,media,decrescente;
    printf("Digite o valor de A: ");
    scanf("%d",&A);
    printf("Digite o valor de B: ");
    scanf("%d",&B);
    printf("Digite o valor de C: ");
    scanf("%d",&C);
    soma = A+B+C;
    media = soma/3;
    if ( A>B && B> C){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d", A,B,C);


    }else if(A>C && C>B){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d",A,C,B);

    }
    else if(B>A&& A>C ){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d e a media %d: ", A,B,C,media);
    }
    else if(B > C && C > A){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d e a media %d:", B,C,A,media);

    }else if ( C>A && A >B){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d e a media e %d:", C,A,B,media);
    }
    else if (C>B && B>A){
        printf(" Os numeros em ordem decrescente sao: %d, %d, %d e a media e %d:", C,B,A,media);
    }
    return 0;
}
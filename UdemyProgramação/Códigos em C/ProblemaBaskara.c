//Fazer um programa para ler os tres coeficientes de uma equaçao do segundo grau. Usando a formula de 
//Baskara, calcular e mostrar os valores das raizes x1 e x2 da equacao com quatro casas decimais
//conforme exemplo. Se a equacao nao possuir raizes reais, mostrar uma mensagem.
#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main (){
    double A, B, C,delta, X1,X2;
    printf("Digite o valor do coeficiente A: ");
    scanf("%lf",&A);
    printf("Digite o valor do coeficiente B: ");
    scanf("%lf",&B);
    printf("Digite o valor do coeficiente C: ");
    scanf("%lf",&C);
    delta= (pow(B,2)-4*A*C);
    if(delta<0 || A==0){
        printf("Esta equacao nao possui numerpos reais.\n ");
    }else{
        X1= (-B+ sqrt(delta))/(2*A);
        X2= (-B- sqrt(delta))/(2*A);
        printf("X1 = %.4lf\n",X1);
        printf("X2 = %.4lf\n",X2);

    }
    

}
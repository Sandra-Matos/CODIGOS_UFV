#include<stdio.h>
#include<stdlib.h>
int main(){
    float salario_minimo,salario,quant;
    printf("Qual e o valor do salario minimo? ");
    scanf("%f",&salario_minimo );
    printf("Qual e o seu salario? ");
    scanf("%f",&salario);
    quant= salario/salario_minimo;
    if(salario>salario_minimo)
        printf("Voce possui: %.1f salarios minimos",quant);
    else
    printf("Seu salario e inferior ao de um salario minimo.");

    return 0;

}


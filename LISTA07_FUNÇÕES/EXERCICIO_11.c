//Faça uma função que receba como parâmetro valores de hora, minuto
//e segundo, e transforme esses valores em segundos. Ex.
//2h40min10seg = 9610 segundos. Retornar o valor em segundos.

#include <stdio.h>
#include <stdlib.h>
int valores (int horas, int minutos,int segundos){
    int tempo;
    tempo= (horas*3600)+(minutos*60)+segundos; 
    return tempo;   
};
int main (){
    int h,m,s,resultado;
    printf("Digite as horas a serem convertidas em segundo: ");
    scanf("%d",&h);
    printf("Digite os minutos a serem convertidos em segundos: ");
    scanf("%d",&m);
    printf("Digite os segundos: ");
    scanf("%d",&s);
    resultado = valores(h,m,s);
    printf("%d",resultado,"segundos.");
    return 0;

}
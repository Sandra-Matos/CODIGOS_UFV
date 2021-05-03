//Faça uma função que recebe a idade de uma pessoa em anos, meses e dias, e retorna essa idade expressa em dias.
#include <stdio.h>
#include <stdlib.h>
int quantdias (int dia, int mes, int ano){
    int calculo;
    calculo = (ano * 31536000)+ (mes*2592000)+ (dia*86400);

    return calculo;
};
int main (){
    int d,m,a,resultado,atual,calculo;
    printf("Digite o ano atual: ");
    scanf("%d",&atual);
    printf("Digite o dia do seu nascimento: ");
    scanf("%d",&d);
    printf("Digite o mes que nasceu em numeros: ");
    scanf("%d",&m);
    printf("Digite o ano que nasceu: ");
    scanf("%d",&a);
    calculo =atual-a;
    resultado = quantdias(d,m,calculo);
    printf("A quantidade de dias de vida que voce tem e: %d",resultado);
    return 0;
}
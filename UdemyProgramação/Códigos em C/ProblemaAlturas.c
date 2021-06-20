//Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, 
//mostrar na tela a altura media das pessoas, e mostrar também a porcentagem de pessoas
//com menos de 16 anos, bem como o nome dessas pessoas caso houver.
#include<stdlib.h>
#include<stdio.h>
int main (){
    char nome[20];
    int idade[10], N=0;
    double altura[10], soma=0,media=0, porcentagem=0, percentual;
    printf("Digite a quantidade de pessoas: ");
    scanf("%d",&N);
    for (int i=0;i<N;i++){
        printf("Dados da %d pessoa: \n",i+1);
        printf("Digite o nome da pessoa: ");
        scanf("%s",&nome[i]);
        printf("Digite a idade: ");
        scanf("%d",&idade[i]);
        printf("Digite a altura: ");
        scanf("%lf",&altura[i]);
    }
    for(int i=0;i<N;i++){
        soma= soma+ altura[i];
    }
    media = soma/N;
    printf("Altura media: %.2lf\n ",media);
    for(int i=0;i<N;i++){
        if(idade[i]<16){
            porcentagem = porcentagem+1;
        }
    }
    percentual= porcentagem*100.0/N;
    printf("Pessoas com menos de 16 anos e: %.1lf %%\n",percentual);

}
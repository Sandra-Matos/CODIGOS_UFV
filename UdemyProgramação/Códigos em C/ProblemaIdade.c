#include<stdio.h>
#include<stdlib.h>
//Fazer um programa para ler o nome e idade de duas pessoas. Ao final mostrar uma
// mensagem com os nomes e a idade media entre essas pessoas, com uma casa decimal,
// conforme exemplo;
#include<stdio.h>
#include<stdlib.h>
int main (){
    char nome[50], nome2[50];
    int idade,idade2;
    double media;
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    scanf("%s",&nome);
    printf("Idade: ");
    scanf("%d",&idade);
    printf("Dados da segunda pessoa: \n");
    printf("Nome: ");
    scanf("%s",&nome2);
    printf("Idade: ");
    scanf("%d",&idade2);
    media =((idade+idade2)/2);
    printf(" A idade media de %s e %s e de %.1lf anos. ",nome,nome2,media);
    return 0;

    }
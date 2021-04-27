//Faça um programa que leia um inteiro N e:
//a) Crie e leia um vetor com dados de N livros: título (máximo 30
//caracteres), autor (máximo 15 caracteres) e ano de publicação.
//b) Dê a opção para o usuário pesquisar por um livro pelo título,
//digitando um termo para pesquisa.
//c) Mostre os dados de todos os livros cujos nomes começam com o
//termo digitado pelo usuário.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livros l;
struct livros{
    char titulo[30];
    char autor [15];
    int ano;

};

int main (){
    int N;
    printf("Digite o valor de N:");
    scanf("%d",&N);
    char titulo[30];
    int i,j, tamanhomenor, comeco=1;
    // resolução alternativa a;
    l livros[N];
    for(i=0;i<N;i++){
        printf("Digite o titulo do  livro: ");
        scanf(" %[^\n]s",livros[i].titulo);
        printf("Digite o autor do livro: ");
        scanf(" %[^\n]s",livros[i].autor);
        printf("Digite o ano do livro: ");
        scanf("%d",&livros[i].ano);
    }

     for(i=0;i<N;i++){
         printf("Titulo: %s \n",livros[i].titulo);
         printf("Autor: %s \n",livros[i].autor);
         printf("Ano: %d \n",livros[i].ano);

     }
     // resolução alternativa b
     printf("Digite o titulo da consulta: ");
     scanf(" %[^\n]s",titulo);
    

    //resolucao alternativa c
    printf(" Resultados para a consulta: %s \n",titulo);
    for (i=0;i<N;i++){
         if(strstr(livros[i].titulo,titulo)!=NULL)
            printf("%s\n",livros[i].titulo);
            
     }
   

      
    

    return 0;
}   



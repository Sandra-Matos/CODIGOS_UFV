//Utilizando Structs, fazer um programa em C que permita a entrada
//nome, endereço e telefone de 5 pessoas. Armazene esses dados em um
//vetor e depois percorra e imprima o nome e telefone de todas elas
# include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct pessoas{
    char nome [50], endereco[50];
    int telefone;

};
int main (){
    int i, N=2;
    struct pessoas pessoas[N];
    for (i=0;i<N;i++){
        fflush(stdin);
        printf("Digite o nome da pessoa: \n");
        gets(pessoas[i].nome);
        fflush(stdin);
        printf("Qual o logradouro do endereco da pessoa:\n");
        gets(pessoas[i].endereco);
        fflush(stdin);
        printf("Digite o telefone da pessoa \n");
        scanf("%d",&pessoas[i].telefone);

    }
    for (i=0;i<N;i++){
        printf(" O telefone de contato de %s e %d.\n",pessoas[i].nome,pessoas[i].telefone);
    }
    return 0;
}
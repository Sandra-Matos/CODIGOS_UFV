//Foi realizada uma pesquisa de algumas características físicas de 50
//habitantes de uma certa região. De cada habitante foram coletados os
//seguintes dados: sexo, cor dos olhos (azuis, verdes ou castanhos), cor
//dos cabelos (louros, pretos ou castanhos) e idade. Faça um
//procedimento que leia esses dados em um vetor de registro (Struct). O
//vetor de registro deve ser enviado por referência para a função e os
//valores devem ser preenchidos no corpo da função
#include<stdio.h>
typedef struct
{
    char sexo[2];
    char cor_dos_olhos[9];
    char cor_do_cabelo[9];
    int  idade;
}dados;

void preencherDados(dados *vetorDados,int N)
{  
    int i;
    
    for(i=0;i<N;i++){
        printf("Digite o sexo: F para feminino ou M para masculino: ");
        scanf(" %[^\n]s",vetorDados[i].sexo);
        printf("Digite qual a cor dos olhos:");
        scanf(" %[^\n]s",vetorDados[i].cor_dos_olhos);
        printf("Digite qual a cor dos cabelos:");
        scanf(" %[^\n]s",vetorDados[i].cor_do_cabelo);
        printf("Digite qual a idade:");
        scanf(" %d",&vetorDados[i].idade);
    }
}

int main(){
    int N = 50;
    dados vetorDados[N];
    preencherDados(vetorDados,N);
}
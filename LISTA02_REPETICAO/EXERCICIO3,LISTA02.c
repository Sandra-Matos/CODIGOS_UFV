//Criar um algoritmo que apresente o maior número digitado pelo usuário. A quantidade de números que serão lidos deve ser informada pelo usuário.
#include <stdio.h>
#include <stdlib.h>
int main (){
    int quant, numero, i, maior;
    numero=1;
    maior= 0;

    printf("Digite a quantidade de números a serem digitados:");
    scanf("%d",&quant);

    while(quant!=numero){
        printf("Digite um valor: ");
        scanf("%d",&numero);
        if(numero>quant){
            maior=numero;
        }
        quant=numero;
        printf("Numero maior:%d\n",maior);
        system("pause");

        return 0;



    }
}

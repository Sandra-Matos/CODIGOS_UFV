
#include <stdio.h>
#include <stdlib.h>
int main(){
    float salario, prestacao, porcentagem,conta;

    conta = 1;
    while(salario>=0){

        printf("Digite o valor do salário bruto:");
        scanf("%f",&salario);

        printf("Digite o valor da prestação solicitada: ");
        scanf("%f",&prestacao);
        conta= salario*30/100;
        if(prestacao> conta){

            printf("O emprestimo nao pode ser concedido.\n");
        }else
            printf("O emprestimo pode ser concedido.\n");


    }

    return 0;

}

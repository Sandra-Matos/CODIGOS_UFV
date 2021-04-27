// Faça um programa que gerencie o estoque de um mercado e:
//a) Crie e leia um vetor de 5 produtos, com os dados: código (inteiro),
//nome (máximo 15 letras), preço e quantidade.
//b) Leia um pedido, composto por um código de produto e a
//quantidade. Localize este código no vetor e, se houver quantidade
//suficiente para atender ao pedido integralmente, atualize o estoque e
//informe o usuário. Repita este processo até ler um código igual a zero
//c) Se por algum motivo não for possível atender ao pedido, mostre
//uma mensagem informando qual erro ocorreu.
#include <stdlib.h>
#include <stdio.h>
typedef struct mercado m;
struct mercado
{
    int codigo;
    char nomeproduto[15];
    float preco;
    int quantidade;
};
int main()
{
    int N = 5, i;
    m mercado[N];
    int prod_desejado, quantdesejada;
    for (i = 0; i < N; i++)
    {
        printf("Digite o codigo do produto %d: ", i + 1);
        scanf("%d", &mercado[i].codigo);
        printf("Digite o nome do produto: \n");
        scanf(" %[^\n]s", mercado[i].nomeproduto);
        printf("Digite a quantidade do produto: \n");
        scanf("%d", &mercado[i].quantidade);
        printf("Digite o preco do produto: \n");
        scanf("%f", &mercado[i].preco);
    }
    //b
    printf("Digite o codigo do produto desejado:");
    scanf("%d", &prod_desejado);
    printf("Digite a quantidade do produto desejado: ");
    scanf("%d", &quantdesejada);
    while (prod_desejado != 0)
    {
        for (i = 0; i < N; i++)
        {
            if (prod_desejado == mercado[i].codigo && mercado[i].quantidade >= quantdesejada)
            {
                printf("Ha desse produto no estoque.\n");
            }
            else if (prod_desejado == mercado[i].codigo && quantdesejada > mercado[i].quantidade)
            {
                printf(" Nao ha desse produto no estoque.\n");
            }
        }
        printf("Digite o codigo do produto desejado:");
        scanf("%d", &prod_desejado);
        printf("Digite a quantidade do produto desejado: ");
        scanf("%d", &quantdesejada);
        
    }

    return 0;
}

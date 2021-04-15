
//A tabela abaixo mostra um cenário de três produtos estocados em três
//armazéns de uma empresa. É fornecido também o preço de cada um
//dos produtos, que devem ser lidos e armazenados em um vetor. Faça
//um algoritmo que:
//a) Leia os valores para preencher a tabela com a quantidade de cada
//produto em cada armazém.
//b) Determine e imprima quantos produtos estão armazenados em cada
//armazém;
//c) Apresente qual armazém possui maior quantidade do Produto 2
//d) Apresente o valor total de estoque em cada armazém

#include <stdio.h>
#include <stdlib.h>
int main()
{
    double matrizpreco[3][3], soma1 = 0, soma2 = 0, soma3 = 0;
    int i, j, maiorquant = 0, cont = 0, matrizquant[3][3], armazemmaiorquant = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Digite os preços dos produtos do armazém %d : ", i);
        scanf(" %lf", &matrizpreco[i][0]);
        scanf(" %lf", &matrizpreco[i][1]);
        scanf(" %lf", &matrizpreco[i][2]);
        printf("Digite a quantidade de produto em cada armazem %d: ", i);
        scanf(" %d", &matrizquant[i][0]);
        scanf(" %d", &matrizquant[i][1]);
        scanf(" %d", &matrizquant[i][2]);
        //imprima quantos produtos estão armazenados em cada armazém.
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf(" %d ", matrizquant[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf(" %.1lf ", matrizpreco[i][j]);
        }
    }

    //apresente qual armazem possui maior quantidade de produto 2
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j == 1)
            {
                if (matrizquant[i][1] > maiorquant)
                {
                    maiorquant = matrizquant[i][1];
                    armazemmaiorquant = i;
                }
            }
        }
    }

    for (i = 0; i < 3; i++)
    {

        soma1 = (matrizquant[i][0] * matrizpreco[i][0]) + (matrizquant[i][1] * matrizpreco[i][1]) + (matrizquant[i][2] * matrizpreco[i][2]);
        printf("\n O valor total do armazem %d foi  : %.2lf \n", i + 1, soma1);
    }


return 0;
}

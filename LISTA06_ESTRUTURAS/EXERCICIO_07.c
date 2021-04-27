//Fazer um programa para simular uma agenda de telefones. Para cada
//pessoa devem-se ter os seguintes dados:
//Nome, E-mail, Endereço (contendo os campos para Rua, número,
//complemento, bairro, cep, cidade, estado, país), Telefone (contendo
//campos para DDD e número), Data de aniversário (contendo campo
//para dia, mês, ano), observações (Uma string para alguma observação
//especial).
//(a) Definir as estruturas acima.
//(b) Declarar a variável agenda (vetor) com capacidade de agendar até
//100 registros.
//(c) Faça um menu principal de opções em que o usuário possa:
//1) Inserir uma pessoa na agenda;
//2) Pesquisar por um nome: Imprime os dados da pessoa com esse
//nome (se tiver mais de uma pessoa, imprime para todas);
//3) buscar por mês de aniversário: Imprime os dados de todas as
//pessoas que fazem aniversário no mês digitado;
//4) Imprimir a agenda: imprime nome, telefone e e-mail de todos os
//registros.
//5) Sair
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct agenda;
struct agenda
{
    char nome[30];
    char email[30];
    int telefone[11];
    int dia[2];
    int mes[2];
    int ano[4];
    char endereco[30];
};
struct endereco
{
    char rua[30];
    int numero[4];
    char complemento[12];
    char bairro[30];
    int cep[8];
    char cidade[30];
    char estado[2];
    char pais[30];
};

int main()
{
    int A = 100, i=0, aa, mm, aaaa,num=0;
    struct agenda a[A];
    struct endereco e[A];
    int escolha = -1;
    while (escolha != 5)
    {
        printf("MENU\n");
        printf("1...Inserir pessoa na agenda.\n");
        printf("2...Pesquisar por um nome.\n");
        printf("3...Buscar por mes de aniversario.\n");
        printf("4...Mostrar a agenda\n");
        printf("5...Sair.\n");

        printf("Escolha a sua opcao:");
        scanf("%d", &escolha);
        system("cls");

        if (escolha == 5)
        {
            break;
        }
        else if (escolha == 1)
        {
            printf("Digite aqui o novo contato: %d \n" ,num+1);
            printf("Digite o nome do contato %d: ", num+1);
            scanf("%s", &a[num].nome);
            printf("Digite o email do contato %d", num+1);
            scanf("%s", &a[num].email);
            printf("Digite o telefone do contato %d: ", num+1);
            scanf("%d", &a[num].telefone);
            printf("Digite a data de nascimento do contato %d: ", num+1);
            scanf("%d %d %d", a[num].dia, a[num].mes, a[num].ano);
            printf("Digite a rua do endereco do contato %d: ", num+1);
            scanf("%s", e[num].rua);
            printf("Digite o numero da imovel do contato %d :", num+1);
            scanf("%d", e[num].numero);
            printf("Digite o complemento do imovel do contato %d: ", num+1);
            scanf("%s", &e[num].complemento);
            printf("Digite o bairro do contato %d: ", num+1);
            scanf("%s", &e[num].bairro);
            printf("Digite o cep do contato %d: ", num+1);
            scanf("%d", &e[num].cep);
            printf("Digite a cidade do contato %d: ", num+1);
            scanf("%s", &e[num].cidade);
            printf("Digite o estado do contato %d: ", num+1);
            scanf("%s", &e[num].estado);
            printf("Digite o pais do contato %d: ", num+1);
            scanf("%s", &e[num].pais);
            num++;
        }
        else if (escolha == 2)
        {
            char contato[30];
            printf("Digite o nome do contato que deseja: ");
            scanf(" %s", &contato);
            for (i = 0; i < A; i++)
            {
                if (strstr(a[i].nome, contato) != NULL){
                    printf("%s\n", a[i].nome);
                    printf("%s\n", a[i].email);
                    printf("%d\n", a[i].telefone);
                    printf("%s\n", e[i].rua);
                    printf("%d\n", e[i].numero);
                    printf("%s\n", e[i].complemento);
                    printf("%s\n", e[i].bairro);
                    printf("%d\n", e[i].cep);
                    printf("%s\n", e[i].cidade);
                    printf("%s\n", e[i].estado);
                    printf("%s\n", e[i].pais);
                  
                }
                    
            }
        }
        else if (escolha == 3)
        {
            int pesquisames;
            for (i = 0; i < A; i++)
            {
                printf("Digite o mes (mm) de aniversario desejado: ");
                scanf("%d", &pesquisames);

                if (pesquisames == a[i].mes)
                {
                    printf("O nome do contado e %s\n, o email e %s\n, o telefone e %d\n, a rua e %s\n, o numero da casa e %d\n, o complemento e %s\n, o bairro e %s\n, o cep e %d\n, a cidade e %s\n, o estado e %s\n, o pais e %s\n.", a[i].nome, a[i].email, a[i].telefone, e[i].rua, e[i].numero, e[i].complemento, e[i].bairro, e[i].cep, e[i].cidade, e[i].estado, e[i].pais);
                }
            }
        }
        else if (escolha == 4)
        {
            for (i = 0; i < A; i++)
            {
                printf("%s", a[i].nome);
                printf("%d", a[i].telefone);
                printf("%s", a[i].email);
            }
        }
    }
    
return 0;
}



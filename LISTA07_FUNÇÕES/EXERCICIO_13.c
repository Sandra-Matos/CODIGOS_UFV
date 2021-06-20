//Fazer um programa para simular uma agenda de telefones. Para cada
//pessoa devem-se ter os seguintes dados em um registro de Contato:
//Nome, E-mail, Endereço (contendo os campos para Rua, número,
//complemento, bairro, cep, cidade, estado, país), Telefone (contendo
//campos para DDD e número), Data de aniversário (contendo campo
//para dia, mês, ano), observações (Uma string para alguma observação
//especial).
//(a) Definir as estruturas acima.
//(b) Declarar a variável agenda (vetor) com capacidade de agendar até
//100 registros de Contatos.
//(c) Faça um menu principal com as opções abaixo. Para cada opção,
//criar uma função correspondente que receba os parâmetros
//correspondentes e realiza o que for necessário. Observe que a agenda
//deve ser passada como referência como parâmetro quando for
//necessário alterá-la:
//1) Inserir uma pessoa na agenda;
//2) Pesquisar por um nome: Imprime os dados da pessoa com esse
//nome (se tiver mais de uma pessoa, imprime para todas);
//3) Buscar por mês de aniversário: Imprime os dados de todas as
//pessoas que fazem aniversário no mês digitado;
//4) Imprimir a agenda: imprime nome, telefone e e-mail de todos os
//registros.
//5) Sai

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100;

typedef struct{
    char rua[32];
    int numero;
    char complemento [16];
    char bairro [32];
    char cep[10];
    char cidade[64];
    char estado [3];
    char pais [32];

} endereco;

typedef struct{
    char ddd[5];
    char numero [11];
} telefone;

typedef struct{
    int dia;
    int mes;
    int ano;

} data;
//a)
typedef struct {
    char nome [32];
    char email [32];
    endereco end;
    telefone tel;
    data nascimento;
    char observacoes [64];
} contato;

//c
void insere_contato_agenda(contato*agenda, int* qtd_contatos_agenda){
    printf("\n---------- Adicionar contato na agenda: ----------");
    printf("Digite o nome do contato: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].nome);
    printf("Digite o e-mail da pessoa: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].email);//não precisa usar &;

    printf("\n Digite os campos de endereco da pessoa: \n");
    printf("Digite o nome da rua: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.rua);
    printf("Digite o numero da casa: ");
    scanf("%d", agenda[*qtd_contatos_agenda].end.numero);
    printf("Digite o complemento do endereco:");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.complemento);
    printf("Digite o bairro: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.bairro);
    printf("Digite o CEP: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.cep);
    printf("Digite a cidade: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.cidade);
    printf("Digite o estado: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.estado);
    printf("Digite o pais: ");
    scanf("%[^\n]s", agenda[*qtd_contatos_agenda].end.pais);

    printf("\n Digite os campos do telefone: \n");
    printf("Digite o DDD do telefone: ");
    scanf("%s", agenda[*qtd_contatos_agenda].tel.ddd);
    printf("Digite o numero do telefone: ");
    scanf("%s", agenda[*qtd_contatos_agenda].tel.numero);

    printf("\Digite a data de nascimento da pessoa: \n");
    printf("Digite o dia de nascimento: ");
    scanf("%d",&agenda[*qtd_contatos_agenda].nascimento.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d",&agenda[*qtd_contatos_agenda].nascimento.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", agenda[*qtd_contatos_agenda].nascimento.ano);
    
    printf("Digite alguma observacao: ");
     scanf("%[^\n]s", agenda[*qtd_contatos_agenda].observacoes);
     (*qtd_contatos_agenda)++;

    
}
// c

int compara_inicio_string(char *s1, char *s2){
    int i, mesmo_comeco=1,tamanho_menor;
    if(strlen(s1)) <= strlen(s2)) {
        tamanho_menor = strlen(s1);
    }
    else {
        tamanho_menor = strlen(s2);
    }

    for (i=0;i<tamanho_menor;i++){
        if(s1[i] != s2[i]){
            mesmo_comeco=0;
            break;
        }
    }

    return mesmo_comeco;
}
void imprime_pessoa (contato *agenda, int indice_pessoa){
    printf ("Informarcoes do %d contato da agenda: ", indice_pessoa+1){
    printf("\n---------- Adicionar contato na agenda: ----------");
    printf("Digite o nome do contato: ");
    scanf("%[^\n]s", agenda[indice_pessoa].nome);
    printf("Digite o e-mail da pessoa: ");
    scanf("%[^\n]s", agenda[indice_pessoa].email);//não precisa usar &;

    printf("\n Digite os campos de endereco da pessoa: \n");
    printf("Digite o nome da rua: ");
    scanf("%[^\n]s", agenda[indice_pessoa].end.rua);
    printf("Digite o numero da casa: ");
    scanf("%d", agenda[indice_pessoa].end.numero);
    printf("Digite o complemento do endereco:");
    scanf("%[^\n]s", agenda[indice_pessoa].end.complemento);
    printf("Digite o bairro: ");
    scanf("%[^\n]s", agenda[indice_pessoa].end.bairro);
    printf("Digite o CEP: ");
    scanf("%[^\n]s", agenda[indice_pessoa].end.cep);
    printf("Digite a cidade: ");
    scanf("%[^\n]s", agenda[indice_pessoaa].end.cidade);
    printf("Digite o estado: ");
    scanf("%[^\n]s", agenda[indice_pessoa].end.estado);
    printf("Digite o pais: ");
    scanf("%[^\n]s", agenda[indice_pessoa].end.pais);

    printf("\n Digite os campos do telefone: \n");
    printf("Digite o DDD do telefone: ");
    scanf("%s", agenda[indice_pessoa].tel.ddd);
    printf("Digite o numero do telefone: ");
    scanf("%s", agenda[indice_pessoa].tel.numero]);

    printf("\Digite a data de nascimento da pessoa: \n");
    printf("Digite o dia de nascimento: ");
    scanf("%d",&agenda[indice_pessoa].nascimento.dia);
    printf("Digite o mes de nascimento: ");
    scanf("%d",&agenda[indice_pessoaa].nascimento.mes);
    printf("Digite o ano de nascimento: ");
    scanf("%d", agenda[indice_pessoa].nascimento.ano);
    
    printf("Digite alguma observacao: ");
     scanf("%[^\n]s", agenda[indice_pessoa].observacoes);
     (indice_pessoa)++;


}
void pesquisa_pessoa_nome (contato*agenda, int qtd_contatos_agenda){
     int i;
     char nome_pesquisa[32];
     printf ("\n Digite o nome de pesquisa: ");
     scanf(" %[^\n]s",nome_pesquisa;i++){
        
    for (i=0; i<qtd_contatos_agenda; i++){
        if(compara_inicio_string(nome_pesquisa, agenda[i].nome)){
            imprime_pessoa(agenda,i);

        }
    }
     }
}
//c)3
void pesquisa_contato_mes_aniversario( contato *agenda, int qtd_contatos_agenda){
    int i, mes_pesquisa;
    printf("\n Digite o mes de pesquisa: ");
    scanf("%d", &mes_pesquisa);
    for (i=0; i<qtd_contatos_agenda;i++){
        if(mes_pesquisa==agenda[i].nascimento.mes){
            imprime_pessoa(agenda,i);
        }
    }
}
// c)4
void imprime_agenda(contato*agenda, int qtd_pessoas_agenda){
    int i;
    printf("\n\n--- Imprimindo a agenda completa: ---\n\n");
    for (i=0;i<qtd_contatos_agenda;i++){

        printf("Nome da pessoa: %s \n", agenda[i].nome);
        printf("E-mail da pessoa: %s\n",agenda[i].email);
        printf("Telefone: %s %s\n", agenda[i].tel.ddd,agenda[i].tel.numero);


    }
}
int main (){
    int opcao_menu, qtd_contatos_agenda=0;
    //b
    contato agenda[N];
    //c
    while(1){
        printf("Digite a opcao correspondente a funcionalidade: (1-5, 5 para sair):");
        scanf("%d",&opcao_menu);
        if(opcao_menu ==5)
        break;
        //as chamadas para cada funcao
        switch (opcao_menu){
            case 1:
            insere_pessoa_agenda(agenda,&qtd_contatos_agenda);
            break;
            case 2:
            pesquisa_pessoa_nome(agenda,qtd_contatos_agenda);
            break;
            case 3:
            pesquisa_contato_mes_aniversario(agenda,qtd_contatos_agenda);
            break;
            case 4:
            imprime_agenda(agenda,qtd_contatos_agenda);
            default:
            printf("Opcao invalida!, Digite novamente.\n");


        }
 
    }

    return 0;
}

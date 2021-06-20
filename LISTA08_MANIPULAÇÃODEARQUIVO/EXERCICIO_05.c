//Fazer um programa para simular uma agenda de telefones. Essa
//agenda deve ser armazenada em um arquivo. Ou seja, sempre que o
//programa for executado, primeiramente deve ser lido do arquivo os
//registros de contatos jÃ¡ armazenados. E cada alteraÃ§Ã£o na agenda deve
//ser salva no arquivo.
//Para cada pessoa devem-se ter os seguintes dados em um registro de
//Contato:
//Nome, E-mail, EndereÃ§o (contendo os campos para Rua,
//nÃºmero, complemento, bairro, cep, cidade, estado, paÃ­s),
//Telefone (contendo campos para DDD e nÃºmero), Data de
//aniversÃ¡rio (contendo campo para dia, mÃªs, ano), observaÃ§Ãµes
//(Uma string para alguma observaÃ§Ã£o especial).
//(a) Definir as estruturas acima.
//(b) Declarar a variÃ¡vel agenda (vetor) com capacidade de
//agendar atÃ© 100 registros de Contatos.
//(c) FaÃ§a um menu principal com as opÃ§Ãµes abaixo. Para cada
//opÃ§Ã£o, criar uma funÃ§Ã£o correspondente que receba os
//parÃ¢metros correspondentes e realiza o que for necessÃ¡rio.
//Observe que a agenda deve ser passada como referÃªncia como
//parÃ¢metro quando for necessÃ¡rio alterÃ¡-la:
//1) Inserir uma pessoa na agenda
//2) Pesquisar por um nome: Imprime os dados da pessoa com
//esse nome (se tiver mais de uma pessoa, imprime para todas);
//3) Buscar por mÃªs de aniversÃ¡rio: Imprime os dados de todas
//as pessoas que fazem aniversÃ¡rio no mÃªs digitado;
//4) Imprimir a agenda: imprime nome, telefone e e-mail de
//todos os registros.
//5) Sair

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	char rua[32];
	int numero;
	char complemento[16];
	char bairro[32];
	char cep[10];
	char cidade[64];
	char estado[3];
	char pais[32];

} endereco;

typedef struct {
	char ddd[5];
	char numero[11];
} telefone;

typedef struct {
	int dia;
	int mes;
	int ano;

} data;
//a)
typedef struct {
	char nome[32];
	char email[32];
	endereco end;
	telefone tel;
	data nascimento;
	char observacoes[64];
} contato;

//c
void insere_contato_agenda(contato *agenda, int *quant_contatos_agenda) {
	printf("\n---------- Adicionar contato na agenda: ----------");
	printf("\nDigite o nome do contato: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].nome);
	printf("Digite o e-mail da pessoa: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].email); //nÃ£o precisa usar &;

	printf("\n Digite os campos de endereco da pessoa: \n");
	printf("Digite o nome da rua: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.rua);
	printf("Digite o numero da casa: ");
	scanf(" %d", &agenda[*quant_contatos_agenda].end.numero);
	printf("Digite o complemento do endereco:");
	scanf(" %[^\n]s   ", agenda[*quant_contatos_agenda].end.complemento);
	printf("Digite o bairro: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.bairro);
	printf("Digite o CEP: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.cep);
	printf("Digite a cidade: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.cidade);
	printf("Digite o estado: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.estado);
	printf("Digite o pais: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].end.pais);

	printf("\n Digite os campos do telefone: \n");
	printf("Digite o DDD do telefone: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].tel.ddd);
	printf("Digite o numero do telefone: ");
	scanf("%d", &agenda[*quant_contatos_agenda].tel.numero);

	printf("Digite a data de nascimento da pessoa: \n");
	printf("Digite o dia de nascimento: ");
	scanf("%d", &agenda[*quant_contatos_agenda].nascimento.dia);
	printf("Digite o mes de nascimento: ");
	scanf("%d", &agenda[*quant_contatos_agenda].nascimento.mes);
	printf("Digite o ano de nascimento: ");
	scanf("%d", &agenda[*quant_contatos_agenda].nascimento.ano);

	printf("Digite alguma observacao: ");
	scanf(" %[^\n]s", agenda[*quant_contatos_agenda].observacoes);
	(*quant_contatos_agenda)++;
}
// c 

int compara_inicio_string(char *s1, char *s2) {
	int i, mesmo_comeco = 1, tamanho_menor;
	if (strlen(s1) <= strlen(s2)) {
		tamanho_menor = strlen(s1);
	} else {
		tamanho_menor = strlen(s2);
	}

	for (i = 0; i < tamanho_menor; i++) {
		if (s1[i] != s2[i]) {
			mesmo_comeco = 0;
			break;
		}
	}

	return mesmo_comeco;
}
void imprime_pessoa(contato *agenda, int indice_pessoa) {
	printf("\nInformarcoes do %d contato da agenda: ", indice_pessoa + 1);
	printf("\n----------  Contato na agenda  ----------");
	printf("\nNome do contato: %s", agenda[indice_pessoa].nome);
	printf("E-mail da pessoa: %s",agenda[indice_pessoa].email);
	printf("\nEndereco da pessoa: ");
	printf("\nNome da rua: %s", agenda[indice_pessoa].end.rua);
	printf("\nNumero da casa: %d", agenda[indice_pessoa].end.numero);
	printf("\nComplemento do endereco: %s",agenda[indice_pessoa].end.complemento);
	printf("\nBairro: %s",agenda[indice_pessoa].end.bairro);
	printf("\nCEP: %s", agenda[indice_pessoa].end.cep);
	printf("\nCidade: %s", agenda[indice_pessoa].end.cidade);
	printf("\nDigite o estado: %s", agenda[indice_pessoa].end.estado);
	printf("\nDigite o pais: %s",agenda[indice_pessoa].end.pais);
	printf("\nTelefone: \n");
	printf("\nDDD do telefone: %s", agenda[indice_pessoa].tel.ddd);
	printf("\nNumero do telefone: %d", agenda[indice_pessoa].tel.numero);
	printf("\nData de nascimento da pessoa: \n");
	printf("\nDia de nascimento: %d", &agenda[indice_pessoa].nascimento.dia);
	printf("\nMes de nascimento: %d", &agenda[indice_pessoa].nascimento.mes);
	printf("\nAno de nascimento: %d", &agenda[indice_pessoa].nascimento.ano);
	printf("\nObservacao: %s",agenda[indice_pessoa].observacoes);
}
void pesquisa_pessoa_nome(contato *agenda, int quant_contatos_agenda) {
	int i;
	char nome_pesquisa[32];
	printf("\n Digite o nome de pesquisa: ");
	scanf(" %[^\n]s", nome_pesquisa);

	for (i = 0; i < quant_contatos_agenda; i++) {
		if (compara_inicio_string(nome_pesquisa, agenda[i].nome)) {
			imprime_pessoa(agenda, i);
		}
	}
}
//c)3
void pesquisa_contato_mes_aniversario(contato *agenda, int quant_contatos_agenda) {
	int i, mes_pesquisa;
	printf("\n Digite o mes de pesquisa: ");
	scanf("%d", &mes_pesquisa);
	for (i = 0; i < quant_contatos_agenda; i++) {
		if (mes_pesquisa == agenda[i].nascimento.mes) {
			imprime_pessoa(agenda, i);
		}
	}
}
// c)4
void imprime_agenda(contato *agenda, int quant_contatos_agenda) {
	int i;
	printf("\n\n--- Imprimindo a agenda completa: ---\n\n");
	for (i = 0; i < quant_contatos_agenda; i++) {

		printf("Nome da pessoa: %s \n", agenda[i].nome);
		printf("E-mail da pessoa: %s\n", agenda[i].email);
		printf("Telefone: %s %s\n", agenda[i].tel.ddd, agenda[i].tel.numero);
	}
}
void carrega_agenda(contato *agenda, int *quant_contatos_agenda) {
	FILE *arquivo;
	if ((arquivo = fopen("contatos.txt", "r")) == NULL) {
		printf("Nao foi possivel abrir o arquivo!\n");
	} else {
		while (!feof(arquivo)) {
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].nome);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].email);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.rua);
			fscanf(arquivo, " %d", agenda[*quant_contatos_agenda].end.numero);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.complemento);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.bairro);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.cep);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.cidade);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.estado);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].end.pais);
			fscanf(arquivo, " %s", agenda[*quant_contatos_agenda].tel.ddd);
			fscanf(arquivo, " %s", agenda[*quant_contatos_agenda].tel.numero);
			fscanf(arquivo, " %d", agenda[*quant_contatos_agenda].nascimento.dia);
			fscanf(arquivo, " %d", agenda[*quant_contatos_agenda].nascimento.mes);
			fscanf(arquivo, " %d", agenda[*quant_contatos_agenda].nascimento.ano);
			fscanf(arquivo, " %[^\n]s", agenda[*quant_contatos_agenda].observacoes);
			(*quant_contatos_agenda)++;
		}

		(*quant_contatos_agenda)--;
	}
	fclose(arquivo);
}

void salva_agenda(contato *agenda, int quant_contatos_agenda) {
	FILE *arquivo;
	int i;
	if ((arquivo = fopen("contatos.txt", "w")) == NULL) {
		printf("Nao foi possivel criar o arquivo!\n");
	} else {
		for (i = 0; i < quant_contatos_agenda; i++) {
			fprintf(arquivo, "%s\n", agenda[i].nome);
			fprintf(arquivo, "%s\n", agenda[i].email);
			fprintf(arquivo, "%s\n", agenda[i].end.rua);
			fprintf(arquivo, "%d\n", agenda[i].end.numero);
			fprintf(arquivo, "%s\n", agenda[i].end.complemento);
			fprintf(arquivo, "%s\n", agenda[i].end.bairro);
			fprintf(arquivo, "%s\n", agenda[i].end.cep);
			fprintf(arquivo, "%s\n", agenda[i].end.cidade);
			fprintf(arquivo, "%s\n", agenda[i].end.estado);
			fprintf(arquivo, "%s\n", agenda[i].end.pais);
			fprintf(arquivo, "%s\n", agenda[i].tel.ddd, agenda[i].tel.numero);
			fprintf(arquivo, "%d\n", agenda[i].nascimento.dia);
			fprintf(arquivo, "%d\n", agenda[i].nascimento.mes);
			fprintf(arquivo, "%d\n", agenda[i].nascimento.ano);
			fprintf(arquivo, "%s\n", agenda[i].observacoes);
		}
	}
	fclose(arquivo);
}

int main() {
	int opcao_menu, quant_contatos_agenda = 0;
	//b
	int N=100;
	contato agenda[N];
	//c
	while (opcao_menu!=5) {
		printf("Digite a opcao correspondente a funcionalidade: (1-5, 5 para sair):");
		scanf("%d", &opcao_menu);
		if (opcao_menu == 5)
			break;
		//as chamadas para cada funcao
		switch (opcao_menu) {
			case 1:
				insere_contato_agenda(agenda,  &quant_contatos_agenda);
				break;
			case 2:
				pesquisa_pessoa_nome(agenda, quant_contatos_agenda);
				break;
			case 3:
				pesquisa_contato_mes_aniversario(agenda, quant_contatos_agenda);
				break;
			case 4:
				imprime_agenda(agenda, quant_contatos_agenda);
			default:
				printf("Opcao invalida!, Digite novamente.\n");
				break;
		}
	}

	return 0;
}
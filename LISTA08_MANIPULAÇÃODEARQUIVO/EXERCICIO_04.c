//FaÃƒÂ§a um programa para armazenar os registros de livros de uma
//biblioteca. Cada livro deve ter um tÃƒÂ­tulo (mÃƒÂ¡ximo 30 caracteres), um
//autor (mÃƒÂ¡ximo 15 caracteres) e ano de publicaÃƒÂ§ÃƒÂ£o. Os livros devem
//ser armazenados em um arquivo. Sempre que iniciar o programa, deve
//ser lida a lista de livros no arquivo. Crie opÃƒÂ§ÃƒÂµes para o usuÃƒÂ¡rio
//pesquisar um livro pelo tÃƒÂ­tulo, inserir um novo livro (deve ser refletido
//no arquivo), e listar todos os livros.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 100
typedef struct
{
	char titulo[30];
	char autor[15];
	int ano_publi;
} livro;

void lista_livros(livro *livros, int *quant_livros)
{
	int i;
	printf("Listar todos os livros.");
	for (i = 0; i < quant_livros; i++)
	{
		printf("\nLivro:%d\n", i + 1);
		printf("Titulo: %s, Autor: %s, Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publi);
	}
}
int compara_inicio_strings(char *s1, char *s2)
{
	int i, mesmo_inicio = 1, tamanho_menor;
	if (strlen(s1) <= strlen(s2))
	{
		tamanho_menor = strlen(s1);
	}
	else
	{
		tamanho_menor = strlen(s2);
	}
	for (i = 0; i < tamanho_menor; i++)
	{
		if (s1[i] != s2[i])
		{
			mesmo_inicio = 0;
			break;
		}
	}
	return mesmo_inicio;
}
void pesquisa_livros(livro *livros, int quant_livros)
{
	int i;
	char palavra_pesquisada[30];
	printf("Digite a palavra:");
	scanf(" %[^\n]s", palavra_pesquisada);
	printf("\n Pesquisa por titulo do livro: '%s'\n", palavra_pesquisada);
	for (i = 0; i < quant_livros; i++)
	{
		if (compara_inicio_strings(palavra_pesquisada, livros[i].titulo))
		{
			printf("\nLivro: %d\n", i + 1);
			printf("Titulo: %c, Autor: %c, Ano: %d\n", livros[i].titulo, livros[i].autor, livros[i].ano_publi);
		}
	}
}
void insere_livro(livro *livros, int *quant_livros)
{
	printf("\n Inserir livro\n");
	printf("Digite o titulo do livro: ");
	scanf(" %[^\n]s", livros[*quant_livros].titulo);
	printf("Digite o autor do livro: ");
	scanf(" %[^\n]s", livros[*quant_livros].autor);
	printf("Digite o ano de publicacao do livro: ");
	scanf("%d", &livros[*quant_livros].ano_publi);
	(*quant_livros)++;
}
void salva_livros(livro *livros, int quant_livros)
{
	FILE *arquivo;
	int i;
	printf("\n Salvar livros\n");
	if ((arquivo = fopen("livros.txt", "r")) == NULL)
	{
		printf("Nao foi possivel criar o arquivo! \n");
	}
	else
	{
		for (i = 0; i < quant_livros; i++)
		{
			fprintf(arquivo, " %s\n ", livros[i].titulo);
			fprintf(arquivo, " %s\n ", livros[i].autor);
			fprintf(arquivo, " %0d\n ", livros[i].ano_publi);
		}
	}
	fclose(arquivo);
};
int main (){

	FILE *arquivo;
	char titulo[30];
	char autor[15];
	int ano_publi, quant_livros = 0, opcao_menu;
	livro livros[N];
	if ((arquivo = fopen("livros.txt", "r")) == NULL)
	{
		printf("Nao foi possivel abrir o arquivo!\n");
	}
	else
	{
		while (!feof(arquivo))
		{
			fscanf(arquivo, "%[^\n]s\n", titulo);
			fscanf(arquivo, "%[^\n]s\n", autor);
			fscanf(arquivo, "%d\n", &ano_publi);
			strcpy(livros[quant_livros].titulo, titulo);
			strcpy(livros[quant_livros].autor, autor);
			livros[quant_livros].ano_publi = ano_publi;
			quant_livros++;
		}
	}
	fclose(arquivo);
	while (1)
	{
		printf("\nDigite a opcao (1 - pesquisar, 2 - listar todos, 3 - inserir, 4 - limpar tela, 5 -Salvar, 0 - sair ): ");
		scanf("%d", &opcao_menu);
		if (opcao_menu == 0)
		{
			printf("Sair!\n");
			break;
		}
		switch (opcao_menu){
			case 1:
			pesquisa_livros(livros, quant_livros);
			break;
			case 2:
			lista_livros(livros, quant_livros);
			break;
			case 3:
			insere_livro(livros, &quant_livros);
			break;
			case 4:
			system("cls");
			break;
			case 5:
			salva_livros(livros, quant_livros);
			break;
			default:
			printf("Opcao invalida! \n");
			break;
		}
	}

	return 0;
}
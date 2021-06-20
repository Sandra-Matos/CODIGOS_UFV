//1. (1 ponto) Estruturas de Dados:
//a) Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deverá conter o número de
//CPF do aluno, seu nome e o curso.
//b) Crie uma estrutura para representar uma disciplina, contendo um código numérico, um nome e o número
//de vagas disponíveis.
//c) Crie uma estrutura para representar uma matrícula de um aluno em uma disciplina, contendo o CPF do
//aluno, código da disciplina e a nota do aluno na disciplina (incialmente 0.0).
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int CPF;
    char nome[30];
    char curso[30];
} aluno;

typedef struct
{
    int codigo;
    char nome[30];
    int vagas;
} disciplina;

typedef struct
{
    aluno CPF;
    disciplina codigo;
    float nota; //nota =0.0

} matricula;

//2. (1 ponto) Crie vetores para armazenar:

//a) uma lista com no máximo 100 alunos
//b) uma lista com no máximo 10 disciplinas
//c) uma lista com no máximo 1000 matrículas

//3. (2 pontos) Implemente uma função para ler os dados de um aluno e inserir na lista de alunos. Faça um
//código na função main() para ler os dados de 5 alunos

void ler_dados_aluno(aluno *alunos, int *quant_alunos)
{
    printf("*** Inserindo dados do(a) aluno (a) ***");
    printf("Digite o nome: \n");
    scanf(" %[^/n]s", alunos[*quant_alunos].nome);
    printf("Digite o CPF: \n");
    scanf("%d", alunos[*quant_alunos].CPF);
    printf("Digite o nome do curso: \n");
    scanf(" %[^/n]s", alunos[*quant_alunos].curso);
    (*quant_alunos)++;
}

//4. (2 pontos) Implemente uma função para ler os dados de uma disciplina e inserir na lista de disciplinas.
//Faça um código na função main() para ler os dados de 5 disciplinas.
void ler_dados_disciplina(disciplina *alunos, int *quant_alunos)
{
    printf("*** Inserindo dados sobre a disciplina ***");
    printf("Digite o nome do(a) aluno (a): \n");
    scanf("% [^/n]s", alunos[*quant_alunos].nome);
    printf(" Digite o codigo da disciplina: \n");
    scanf("%d", alunos[*quant_alunos].codigo);
    printf("Digite o numero da vaga: \n");
    scanf(" %d", alunos[*quant_alunos].vagas);
}

//5. (3 pontos) Faça uma função para pesquisar na lista de alunos pelo CPF. Essa função deve receber como
//parâmetro um valor de CPF, e retornar 1 caso o aluno esteja na lista, e 0 caso contrário.
int pesquisa_cpf(aluno *alunos, int quant_alunos)
{   int numerocpf;
    printf("Digite o CPF do aluno que deseja pesquisar:");
    scanf("%d",numerocpf); 
    if (alunos[quant_alunos].CPF == numerocpf)
    {
        printf("1.");
    }
    else
    {
        printf("0.");
    }
}
//6. (3 pontos) Faça uma função para pesquisar na lista de disciplinas pelo código. Essa função deve receber
//como parâmetro um código de disciplina, e retornar 1 caso a disciplina esteja na lista, e 0 caso contrário.
int pesquisa_codigo(disciplina *alunos, int quant_alunos)
{   int numerocodigo;
    printf("Digite o codigo da disciplina que deseja pesquisar:");
    scanf("%d",&numerocodigo);
    if (alunos[quant_alunos].codigo== numerocodigo)
    {
        printf("1.");
    }
    else
    {
        printf("0.");
    }
}
//7. (4 pontos) Faça uma função para matricular um aluno em uma disciplina. Essa função deve receber como
//parâmetro um CPF de aluno e um código de disciplina, fazer as devidas verificações (aluno existe, disciplina
//existe, disciplina tem vaga) e, caso seja válido, inserir uma matrícula na lista de matrículas. Essa inserção
//deve diminuir a quantidade de vagas da respectiva disciplina

void matricula_aluno_disciplina(aluno *alunos, disciplina *quant_alunos)
{
    int vetormatricula[10000];
    int cpfvalido, i, j;
    char codigovalido;
    printf("** Matricula aluno em uma disciplina. ***");
    printf("Digite o cpf para realizar o cadastro: ");
    scanf("%d", &cpfvalido);
    for (i = 0; i < quant_alunos; i++)
    {
        if (cpfvalido == alunos[*quant_alunos].CPF)
        {
            printf("Aluno existe.");
        }
        else
        {
            printf("Nao existe esse aluno.");
        }
    }
    printf("Digite o codigo da disciplina que deseja matricular: \n ");
    scanf("%d", &codigovalido);
    for (j = 0; j < quant_alunos; j++)
    {
        if (codigovalido ==alunos[*quant_alunos].codigo )
        {
            for (i < 0; i < 1000; i++)
            {
                printf("Ha vagas, digite sua matricula para ser inserido (a): ");
                scanf("%d", &vetormatricula);
                i--;
            }
        }
    }
}
//8. (4 pontos) Faça uma função para lançar a nota do aluno em uma disciplina. Essa função deve receber o
//CPF do aluno, o código da disciplina e a nota, e atribuir a nota na matrícula do aluno na disciplina. A nota
//deve ser um valor de 0.0 a 10.0 e só pode ser lançada para uma matrícula existente.

void nota_aluno_disciplina (aluno *alunos, disciplina *quant_alunos,matricula *matriculas){
    int valor_cpf;
    int valor_codigo;
    float valor_nota=0.0;
    printf("Digite o cpf: \n");
    scanf("%d",&alunos->CPF;
    printf("Digite o codigo: \n");
    scanf("%d",&quant_alunos->codigo;
    printf("Digite o valor da nota do(a) aluno(a) de 0.0 ate 10.0.");
    scanf("%f",&matriculas->nota);
    
}
//9. (5 pontos) Faça duas funções, sendo uma para escrever e outra para ler os dados de matrícula em um
//arquivo binário. Atualize o código já desenvolvido (questões anteriores) para que a função de leitura seja
//utilizada no começo da execução do programa, e a função de escrita seja utilizada sempre que alguma
//mudança for feita em uma matrícula.

void escrever_dados_matricula(aluno *alunos, matricula *quant_alunos){
    FILE *arquivo;
    int i;
    if((arquivo = fopen("arquivobinario.txt","w+"))=NULL){
        printf("Nao foi possivel criar o arquivo.\n");

    }else{
        for(i=0; i<alunos; i++){
            fprintf(arquivo," %[^/n]s", alunos[*quant_alunos].nome);
            fprintf(arquivo,"%d", alunos[*quant_alunos].CPF);
            fprintf(arquivo," %[^/n]s", alunos[*quant_alunos].curso);
        }
        fclose(arquivo);


            

    }
}

void ler_dados_matricula(aluno *alunos, matricula *quant_alunos){
    FILE *arquivo2;
    int i;
    if((arquivo2 = fopen("arquivobinario.txt","r"))=NULL){
        printf("Nao foi possivel criar o arquivo.\n");

    }else{
        for(i=0; i<alunos; i++){
            fprintf(arquivo," %[^/n]s", alunos[*quant_alunos].nome);
            fprintf(arquivo,"%d", alunos[*quant_alunos].CPF);
            fprintf(arquivo," %[^/n]s", alunos[*quant_alunos].curso);
        }
        fclose(arquivo2);


            

    }
}
int main (){
    int quant_alunos =0,alunos,matriculas;
    int opcao_menu, vetoralunos[100], vetormatricula[1000],vetordisciplinas[10];
    while(opcao_menu!=9){
        printf("*** Menu ***");
        printf("Digite 1 para ler os dados do(a) aluno (a) \n ");
        printf("Digite 2 para ler dados da disciplina. \n");
        printf("Digite 3 para pesquisa por cpf.\n");
        printf("Digite 4 para pesquisa do codigo. \n");
        printf("Digite 5 para matricular um aluno em uma disciplina: \n");
        printf(" Digite 6 para lancar nota de um aluno. \n");
        printf("Digite 7 para escrever os dados da matricula.");
        printf ("Digite 8 para ler os dados da matricula");
        printf("Digite 9 para encerrar o sistema.\n");
        if(opcao_menu==9){
            break;
        }
        switch(opcao_menu){
            case 1:
            ler_dados_aluno(alunos,&quant_alunos);
            break;
            case 2:
            ler_dados_disciplina(alunos,&quant_alunos);
            break;
            case 3:
            pesquisa_cpf(alunos,&quant_alunos);
            break;
            case 4:
            pesquisa_codigo(alunos,quant_alunos);
            break;
            case 5:
            matricula_aluno_disciplina(alunos,quant_alunos);
            break;
            case 6:
            nota_aluno_disciplina (alunos,quant_alunos,matriculas);
            break;
            case 7:
            escrever_dados_matricula(alunos,quant_alunos);
            break;
            case 8:
            ler_dados_matricula(alunos,quant_alunos);
            break;








        }

    }
 return 0;
}

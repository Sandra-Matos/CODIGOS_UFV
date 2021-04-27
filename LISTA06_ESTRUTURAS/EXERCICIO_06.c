//Dada a estrutura cuja representação gráfica é dada a seguir, defina a
//estrutura com os campos com os tipos básicos necessários.
//(a) Crie um vetor de Cadastro com 5 elementos.
//(b) Permita ao usuário entrar com dados para preencher esses 5
//cadastros.
//(c) Encontre e imprima o nome, a identidade e a idade da pessoa com
//maior idade entre os cadastrados
//(d) Encontre e imprima os nomes de todas as pessoas do sexo
//masculino
//(e) Encontre e imprima os nomes e os salários de todas as pessoas
//com salário maior que 1000.
//(f) Imprima os dados da pessoa cuja identidade seja igual a um valor
//fornecido pelo usuário (o programa deve ser a identidade do teclado)
//(g) Imprima os dados de todas as pessoas que moram em uma cidade
//fornecida pelo usuário (o programa deve ler a cidade do teclado)
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct cadastro c;
struct cadastro {
    char nome [30];
    int identidade;
    int idade;
    int telefone;
    int cpf;
    char sexo [10];
    float salario;
    char estadocivil[30];
    char endereco [30];
} cadastro;

struct endereco{
    char rua[30];
    char bairro[16];
    char cidade[32];
    char estado[2];
    char cep[10];
} endereco;
int main (){
    int N= 5,i;
    int maior_idade=0;
    struct cadastro c [N];
    struct endereco e [N];
    //b
    for (i=0; i<N;i++){
        printf("Digite o seu nome: ");
        scanf(" %[^\n]s", c[i].nome);
        printf("Digite a sua identidade: ");
        scanf("%d",&c[i].identidade);
        printf("Digite a sua idade: ");
        scanf("%d",&c[i].idade);
        printf("Digite o sexo: ");
        scanf("%s",c[i].sexo);
        printf("Digite o seu salario: ");
        scanf("%f",&c[i].salario);
        printf("Digite a sua cidade: ");
        scanf("%s",e[i].cidade);
    }
    //c
    for(i=0;i<N;i++){
        if(c[i].idade>=18){
            printf("O nome da pessoa com maior idade e %s, sua identidade e %d e a sua idade e %d.\n",c[i].nome, c[i].identidade,c[i].idade);
        }
    }
    //d Encontre e imprima os nomes de todas as pessoas do sexo masculino
    for (i=0;i<N;i++){
        if(c[i].sexo=='M'){
            printf("As pessoas do sexo masculino sao do nome %s",c[i].nome);
        }
    }
    // e Encontre e imprima os nomes e os salários de todas as pessoas com salário maior que 1000.
    for (i=0;i<N;i++){
        if(c[i].salario >= 1000){
            printf("A pessoa %d, nome %s, possui salario %.2f, maior que 1.000.\n",i, c[i].nome,c[i].salario);
                
        }
    }

    
    //f Imprima os dados da pessoa cuja identidade seja igual a um valor fornecido pelo usuário (o programa deve ser a identidade do teclado)
    int confereid=0;
    
    printf("Informe a identidade para localizar a pessoa: \n");
    scanf("%d",&confereid);
    
    for (i=0;i<N;i++){
        if(confereid == c[i].identidade){
            printf( "O nome da pessoa e %s, a identidade e %d, a idade e %d, o sexo e %s, o salario e %.2f e a cidade e %s.\n",c[i].nome,c[i].identidade,c[i].idade,c[i].sexo,c[i].salario,e[i].cidade);
        }
    }
    char city[30];
    printf("Informe a cidade, sera mostrado os moradores que la vivem: \n");
    scanf("%s",&city);
    //g Imprima os dados de todas as pessoas que moram em uma cidade fornecida pelo usuário (o programa deve ler a cidade do teclado)
    for (i=0;i<N;i++){
        if(!strcmp(city,e[i].cidade)){
            printf(" Os dados da pessoa %d sao: nome %s, identidade %d, idade %d, sexo %s, salario %.2f, cidade %s.\n",i, c[i].nome,c[i].identidade,c[i].idade,c[i].sexo,c[i].salario,e[i].cidade);
        }

    }

    return 0;
}
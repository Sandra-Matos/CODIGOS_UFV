#include <stdio.h>
#define N 5
//1)
typedef struct 
{
    int cpf;
    char nome[20];
    char curso[20];
}aluno;
typedef struct 
{
    int codigo;
    char nome_dis[20];
    int vagas_disponivel;
}disciplina;
typedef struct 
{
    int cpf;
    int codigo;
    float nota_aluno;
}matricula;
void ler_arquivo(matricula *m, int *cont){
   FILE *arquivo;
    arquivo=fopen("Matriculas.txt","rb");
    if(arquivo==NULL){
        printf("Impossivel ler um arquivo!!\n");
        return 1;
    }
    while (!feof(arquivo))
    {
       fscanf(arquivo,"---Matricula %d---\n",&*cont);
       fscanf(arquivo,"CPF=%d\n",&m[*cont].cpf);
       fscanf(arquivo,"Codigo Disciplina=%d\n",&m[*cont].codigo);
       fscanf(arquivo,"Nota=%f\n\n",&m[*cont].nota_aluno);
       (*cont)++;
    }
    fclose(arquivo);
}
void salvar_arquivo(matricula *m, int cont){
   FILE *arquivo;
    arquivo=fopen("Matriculas.txt","ab");
    if(arquivo==NULL){
        printf("Impossivel abrir um arquivo!!\n");
        return 1;
    }
    fprintf(arquivo,"---Matricula %d---\n",cont);
    fprintf(arquivo,"CPF=%d\n",m[cont].cpf);
    fprintf(arquivo,"Codigo Disciplina=%d\n",m[cont].codigo);
    fprintf(arquivo,"Nota=%f\n\n",m[cont].nota_aluno);
    fclose(arquivo);
}
void atualizar_arquivo(matricula *m, int cont){
   FILE *arquivo;
   int i;
   arquivo=fopen("Matriculas.txt","wb");
   if(arquivo==NULL){
        printf("Impossivel abrir um arquivo!!");
        return 1;
    }
    for(i=0;i<cont;i++){
        fprintf(arquivo,"---Matricula %d---\n",i);
        fprintf(arquivo,"CPF=%d\n",m[i].cpf);
        fprintf(arquivo,"Codigo Disciplina=%d\n",m[i].codigo);
        fprintf(arquivo,"Nota=%f\n\n",m[i].nota_aluno);
    }
    fclose(arquivo);
}
void dados_aluno(int *cont, aluno *a){
    printf("Qual o CPF:");
    scanf("%d",&a[*cont].cpf);
    printf("Qual o Nome:");
    scanf(" %[^\n]s",&a[*cont].nome);
    printf("Qual o Nome do curso:");
    scanf(" %[^\n]s",&a[*cont].curso);
    (*cont)++;
}
void dados_disciplina(int *cont, disciplina *d){
    printf("Qual o Codigo:");
    scanf("%d",&d[*cont].codigo);
    printf("Qual o nome:");
    scanf(" %[^\n]s",d[*cont].nome_dis);
    printf("Quantas Vagas:");
    scanf("%d",&d[*cont].vagas_disponivel);
    (*cont)++;
}
void pesquisar_cpf(aluno *a,int cont,int digitado){
    int i;
    for(i=0;i<cont;i++){
       if(digitado==a[i].cpf){
          printf("Ta na lista!!!\n\n");
          return 1;
       }
       else{
          printf("Nao ta na lista!!!\n\n");
          return 0;
       }
    }
}
void pesquisar_disciplina(disciplina *d,int cont,int digitado){
    int i;
    for(i=0;i<cont;i++){
       if(digitado==d[i].codigo){
          printf("Ta na lista!!!\n");
          printf("A Disciplina tem %d Vagas\n",d[i].vagas_disponivel);
          return 1;
       }
       else{
          printf("Nao ta na lista!!!\n\n");
          return 0;
       }
    }
}
void matricular(aluno *a,matricula *m,disciplina *d,int cpf_aluno, int codigo_dis,int cont_aluno, int cont_disciplina,int *cont_matricula){
     int i,cont_cpf=0,cont_cod=0;
     int vagas;
     for(i=0;i<cont_aluno;i++){
        if(cpf_aluno==a[i].cpf){
           if(codigo_dis==d[i].codigo){
               d[i].vagas_disponivel--;
               vagas=d[i].vagas_disponivel;
               if(d[i].vagas_disponivel>=0){
                  m[*cont_matricula].cpf=cpf_aluno;
                  m[*cont_matricula].codigo=codigo_dis;
                  m[*cont_matricula].nota_aluno=0;
                  printf("Matricula concluida!!!!\n");
                  d[i].vagas_disponivel=vagas;
               }else{
                  printf("Nao ah vagas!!!\n");
               }
           }
           else{
              cont_cod++;
           }
        }else{
          cont_cpf++;
        }
     }
     if(cont_cpf>0){
        printf("Cpf nao encontrado no sistema dos alunos!!!\n\n");
     }
     if(cont_cod>0){
        printf("Codigo nao eh de nenhuma disciplina!!!\n\n");
     }
}
void nota(matricula *m, int cont){
   int digitado,matdigitado,i;
   float nota;
   int cont_alun=0;
   printf("Digite o cpf do aluno:");
   scanf("%d",&digitado);
   printf("Digite o codigo da disciplina:");
   scanf("%d",&matdigitado);
   printf("Digite a nota da disciplina:");
   scanf("%f",&nota);
   for(i=0;i<cont;i++){
      if(digitado==m[i].cpf){
           cont_alun++;
           m[i].nota_aluno=nota;
           printf("Nota Lancada com sucesso!!!\n");
      }
   }
   if(cont_alun==0){
      printf("Aluno nao esta matriculado na materia!!!\n");
   }
}
int main(){
    int i,opcao,digitado,matdigitado;
    int cont_aluno=0,cont_disciplina=0;
    int cont_matricula=0;
    //2)
    aluno a[100];
    disciplina d[10];
    matricula  m[10000];
    ler_arquivo(m,&cont_matricula);
    while (1)
    {
        printf("Menu:\n1)Cadastrar Alunos\n2)Cadastrar disciplinas\n3)Pesquisar Aluno por Cpf\n4)Pesquisar por codigo de disciplina\n5)Matricular Aluno\n6)Lancar Nota\n7)Sair\n");
        printf("R=");
        scanf("%d",&opcao);
        if(opcao==1){
           //3)
            for ( i = 0; i < N; i++){
               printf("Dados do aluno %d\n",(i+1));
               dados_aluno(&cont_aluno,a);
            }
        }
        else if(opcao==2){
           //4)
            for ( i = 0; i < N; i++){
               printf("Dados das disciplina %d\n",(i+1));
               dados_disciplina(&cont_disciplina,d);
            }
        }
        else if(opcao==3){
           //5)
           printf("---Pesquisar por Cpf---\n");
           printf("Digite o Cpf pra pesquisar:");
           scanf("%d",&digitado);
           pesquisar_cpf(a,cont_aluno,digitado);
        }
        else if(opcao==4){
           //6)
           printf("---Pesquisar por Codigo---\n");
           printf("Digite o codigo da disciplina:");
           scanf("%d",&digitado);
           pesquisar_disciplina(d,cont_disciplina,digitado);
        }
         else if(opcao==5){
            //7)
           printf("---Matricular---\n");
           printf("Digite o cpf do aluno:");
           scanf("%d",&digitado);
           printf("Digite o codigo da disciplina:");
           scanf("%d",&matdigitado);
           matricular(a,m,d,digitado,matdigitado,cont_disciplina,cont_aluno,&cont_matricula);
           salvar_arquivo(m,(cont_matricula));
           cont_matricula++;
        }
        else if(opcao==6){
           //8)
           printf("---Lancar Nota---\n");
           nota(m,cont_matricula);
           atualizar_arquivo(m,cont_matricula);
           
        }
        else if(opcao==7){
           printf("Volte Sempre\n");
           break;      
        }
        else{
            printf("Opcao invalida!!!!\n\n");
        }
    }  
}
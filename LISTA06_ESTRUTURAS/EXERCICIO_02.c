//Faça um programa que leia os dados de 10 alunos (Nome, matricula,
//Média Final), armazenando em um vetor. Uma vez lidos os dados,
//divida os alunos em 2 novos vetores: o vetor dos aprovados e o vetor
//dos reprovados. A média mínima para a aprovação é de 5.0. Exibir na
//tela os dados do vetor de aprovados, seguido dos dados do vetor de
//reprovados
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct alunos a;
struct alunos {
    char nome [50];
    int matricula;
    float mfinal;
};

int main (){
    int i, N=2;
    int mfinal,vet_apro[10],vet_rep[10];
    a alunos[N];
    a alunos_aprovados[N];
    a alunos_reprovados[N];
    for (i=0;i<N;i++){
        printf("Digite o nome do aluno: \n");
        scanf(" %[^\n]s ",alunos[i].nome);
        printf("Digite a matricula do aluno: \n");
        scanf("%d",&alunos[i].matricula);
        printf("Digite a media final do aluno: \n");
        scanf("%f",&alunos[i].mfinal);
    }

    int i2=0;
    int i3=0;
    int aprovado=0;
    int reprovado=0;
    for(i=0;i<N;i++){
        if(alunos[i].mfinal>=5){
            strcpy(alunos_aprovados[i2].nome,alunos[i].nome);
            alunos_aprovados[i2].matricula= alunos[i].matricula;
            alunos_aprovados[i2].mfinal=alunos[i].mfinal;
            i2++;
            aprovado++;
        }
        else if(alunos[i].mfinal<5){
            strcpy(alunos_reprovados[i3].nome,alunos[i].nome);
            alunos_reprovados[i3].matricula= alunos[i].matricula;
            alunos_reprovados[i3].mfinal=alunos[i].mfinal;
            i3++;
            reprovado++;

        }

    }

    for(i=0;i<aprovado;i++){
        printf("O aluno %s com a matricula %d foi aprovado com a media de %.2f\n",
        alunos_aprovados[i].nome,alunos_aprovados[i].matricula,alunos_aprovados[i].mfinal);

    }
    for(i=0;i<reprovado;i++){
        printf("O aluno %s com a matricula %d foi reprovado com a media de %.2f\n",
        alunos_reprovados[i].nome,alunos_reprovados[i].matricula,alunos_reprovados[i].mfinal);

    }


    return 0;
}
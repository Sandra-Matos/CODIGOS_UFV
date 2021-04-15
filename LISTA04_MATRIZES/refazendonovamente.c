//a) leia o valor N de alunos (N<=2000)
//b)leia as informações sobre os N alunos (matriculas,sexo,curso e coeficiente)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    printf("Informe a quantidade de alunos(as): ");
    scanf("%d", &N);
    int matriz[N][3], j, alunomaior = 0;
    int i, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
    double soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, maiorcoef = 0;
    double media1 = 0, media2 = 0, media3 = 0, media4 = 0, media5 = 0;
    // perguntar a quantidade de alunos que irao participar

    if (N <= 2000)
    {

        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (j==0)
                {
                    printf("Digite o numero de matricula do(a) aluno(a) %d:", i);
                    scanf("%d", &matriz[i][0]);
                }
                if (j==1)
                {
                    printf("Digite 1 para masculino e 0 para feminino para informar o sexo do(a) aluno(a) %d:", i);
                    scanf("%d", &matriz[i][1]) ;
                }

                if (j==2)
                {
                    printf("Digite o numero de curso de 1 ate 5 do aluno(a) %d:", i);
                    scanf("%d", &matriz[i][2]);
                }
                if (j==3)
                {
                    printf("Digite o coeficiente de rendimento do curso do(a) aluno (a) %d:", i);
                    scanf("%d", &matriz[i][3]);
                }
            }
        }

        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (matriz[i][2] == 1)
                {
                    soma1 = soma1 + matriz[i][3];
                    cont1 = cont1 + 1;
                    media1 = soma1 / cont1;
                }
                else if (matriz[i][2] == 2)
                {
                    soma2 = soma2 + matriz[i][3];
                    cont2 = cont2 + 1;
                    media2 = soma2 / cont2;
                }
                else if (matriz[i][2] == 3)
                {
                    soma3 = soma3 + matriz[i][3];
                    cont3 = cont3 + 1;
                    media3 = soma3 / cont3;
                }
                else if (matriz[i][2] == 4)
                {
                    soma4 = soma4 + matriz[i][3];
                    cont4 = cont4 + 1;
                    media4 = soma4 / cont4;
                }
                else if (matriz[i][2] == 5)
                {
                    soma5 = soma5 + matriz[i][3];
                    cont5 = cont5 + 1;
                    media5 = soma5 / cont5;
                }
            }
        }

        //Mostre o numero de matricula e o sexo do aluno do curso 4 que obteve o melhor coeficiente.

        for (i = 0; i < N; i++)
        {
            for (j = 0; j <= 3; j++)
            {
                if (matriz[i][2] == 4)
                {
                    if (matriz[i][3] > maiorcoef)
                    {
                        maiorcoef = matriz[i][3];
                        alunomaior = i;
                    }
                }
            }
        }
        printf("A matricula do(a) aluno(a) com maior coeficiente do curso 4 foi : %d\n", matriz[alunomaior][0]);
        printf("O sexo do(a) aluno(a) e: %d\n",matriz[alunomaior][1]);
        printf("A media do curso 1 foi: %.2lf\n", media1);
        printf("A media do curso 2 foi: %.2lf\n", media2);
        printf("A media do curso 3 foi: %.2lf\n", media3);
        printf("A media do curso 4 foi: %.2lf\n", media4);
        printf("A media do curso 5 foi: %.2lf\n", media5);
    }

    return 0;
}
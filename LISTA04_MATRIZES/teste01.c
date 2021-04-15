//Crie uma matriz para armazenar as informações de N alunos de uma
//Universidade. Cada aluno será representado em uma linha da matriz.
//Para cada aluno, deverão ser armazenados a matrícula, o sexo (0 ou 1),
//o número do curso (1 a 5) e o coeficiente de rendimento (0 a 100 em
//valores inteiros). Faça um algoritmo que:
//a) Leia o valor N de alunos (N <= 2000)
//b) Leia as informações sobre os N alunos (matrícula, sexo, curso e
//coeficiente)
//c) Mostre a média dos coeficientes para cada curso.
//d) Mostre o número de matrícula e o sexo do aluno do curso 4 que
//obteve o melhor coeficiente.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, i, j, n = 4, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0;
    int media1 = 0, media2 = 0, media3 = 0, media4 = 0, media5 = 0;
    int cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
    int melhor_coef = 0; 
    int matriz[N][j];

    printf("Digite o valor do numero de alunos: \n");
    scanf("%d", &N);
    if (N <= 2000){
        for (i = 0; i < N; i++)
        {
            printf("Digite a matricula do(a) aluno(a) %d: ", i);
            scanf("%d", &matriz[i][0]);
            printf("Digite 0 para feminino e 1 para masculino do(a) aluno(a) %d: ", i);
            scanf("%d", &matriz[i][1]);
            printf("Digite o numero do curso de 1 a 5 do(a) aluno(a) %d: ", i);
            scanf("%d", &matriz[i][2]);
            printf("Digite o coeficiente de rendimento de 0 a 100 do(a) aluno(a) %d: ", i);
            scanf("%d", &matriz[i][3]);
        }
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 4)
                {
                    if (matriz[i][3] == 1)
                    {
                        cont1 = cont1 + 1;
                        soma1 = soma1 + matriz[i][3];
                    }
                    else if (matriz[i][3] == 2)
                    {
                        cont2 = cont2 + 1;
                        soma2 = soma2 + matriz[i][3];
                    }
                    else if (matriz[i][3] == 3)
                    {
                        cont3 = cont3 + 1;
                        soma3 = soma3 + matriz[i][3];
                    }
                    else if (matriz[i][3] == 4)
                    {
                        cont4 = cont4 + 1;
                        soma4 = soma4 + matriz[i][3];
                    }
                    else if (matriz[i][3] == 5)
                    {
                        cont5 = cont5 + 1;
                        soma5 = soma5 + matriz[i][3];
                    }
                }
            }
        }

        media1 = soma1 / cont1;
        media2 = soma2 / cont2;
        media3 = soma3 / cont3;
        media4 = soma4 / cont4;
        media5 = soma5 / cont5;
        printf("A média do coeficiete do curso 1 foi:%d\n ", media1);
        printf("A média do coeficiete do curso 2 foi:%d\n ", media2);
        printf("A média do coeficiete do curso 3 foi:%d\n ", media3);
        printf("A média do coeficiete do curso 4 foi:%d\n ", media4);
        printf("A média do coeficiete do curso 5 foi:%d\n ", media5);

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 3)
                {
                    if (matriz[i][3] > melhor_coef)
                    {
                        melhor_coef = matriz[i][3];
                        printf("O(A) aluno(a) do curso 4 que obteve o melhor coeficiente, tem matricula %d. é do sexo %d", matriz[i][j]);
                    }
                }
            }
        }
    }

    return 0;
}

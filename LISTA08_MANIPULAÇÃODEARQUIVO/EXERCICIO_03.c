#include <stdio.h>
typedef struct
{
	char matricula[4];
	char nome[31];
	float nota1, nota2, nota3;
} aluno;

int main(){	
	int n = 50, i;
	aluno v_aluno[n];
	FILE *arquivo;
	float media;
	int indice = 0;
	
	arquivo = fopen("alunos.txt", "r");
	while (!feof(arquivo)){
		fscanf(arquivo, " %s %s %f %f %f\n", v_aluno[indice].matricula, v_aluno[indice].nome,&v_aluno[indice].nota1,&v_aluno[indice].nota2,&v_aluno[indice].nota3);
		indice++;
	}
	for (i = 0; i < indice; i++){
		media = (v_aluno[i].nota1 + v_aluno[i].nota2 + v_aluno[i].nota3) / 3.0;
		if (media >= 8.5){
			printf("Excelente:%s %s %2.f\n", v_aluno[i].matricula, v_aluno[i].nome, media);
		}
		else if (media >= 7.0 && media < 8.5)
		{
			printf("Bom:%s %s %2.f\n", v_aluno[i].matricula, v_aluno[i].nome, media);
		}
		else if (media < 7.0)
		{
			printf("Preocupante:%s %s %2.f \n", v_aluno[i].matricula, v_aluno[i].nome, media);
		}
		media = 0;

		
	}
	fclose(arquivo);
}


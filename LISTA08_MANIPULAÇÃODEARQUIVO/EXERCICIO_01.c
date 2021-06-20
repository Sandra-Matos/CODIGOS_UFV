//Desenvolva uma calculadora simples com operações de adição e
//subtração. O programa deve ler dois números inteiros e a operação a
//ser realizada. Em seguida esses dados devem ser gravados em um
//arquivo denominado “calculadora.txt” da seguinte maneira:
//N1 OP N2 = RESULTADO
//onde N1 e N2 são os números lidos, OP é operador (SUBTRAÇÃO
//ou ADIÇÃO) e RESULTADO é o resultado da operação.
#include <stdio.h>
#include<stdlib.h>
int main (void) {

	FILE *calculadora_arquivo;
	char OP;
	char resultados;
	float N1,N2, RESULTADO=0,soma=0,subtracao=0;
	calculadora_arquivo= fopen("Calculadora.txt","w+");
	if(calculadora_arquivo == NULL) {
		printf("Erro na abertura do arquivo!");
		return 1;
	} else {
		printf("Digite os numeros e a operacao a ser executada entre eles no seguinte modelo: N1 OP(escreva a para adicao ou s para subtracao) N2 = RESULTADO ");
		
		scanf("%f",&N1);
		scanf(" %c ",&OP);	
		scanf("%f",&N2);
				
		
		if (OP =='a') {
			soma= N1+N2;
			printf("%f",soma);
			fprintf(calculadora_arquivo,"%f adicao %f = %f",N1,N2,soma);
		} else if (OP == 's') {
			subtracao= N1-N2;
			printf( "%f",subtracao);
			fprintf(calculadora_arquivo, "%f subtracao %f = %f",N1,N2, subtracao);
		
		}
	
		
		fclose(calculadora_arquivo);
		printf("Dados gravados com sucesso!");



	}
	return 0;
}

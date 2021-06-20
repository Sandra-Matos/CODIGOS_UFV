//Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestre de uma 
//disciplina anual. Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano
//juntamente com um texto explicativo. Caso a nota final do aluno seja inferior a 60.00, mostrar a 
//mensagem "REPROVADO", conforme exemplos:
#include <stdio.h>
#include<stdlib.h>
double nota, nota1, notaFinal;
int main (){
    printf("Digite a nota obtida pelo aluno no primeiro semestre: ");
    scanf("%lf",&nota);
    printf("Digite a nota obtida pelo aluno no segundo semestre: ");
    scanf("%lf",&nota1);
    notaFinal= nota+nota1;
    printf("Nota final: %.1lf\n",notaFinal);
    if(notaFinal<60.0){
        printf("Reprovado.");

    }else{
        printf("Aprovado.");
    }
    return 0;
}
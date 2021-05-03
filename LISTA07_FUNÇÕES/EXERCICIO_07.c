//Faça uma função que receba a idade de um nadador por parâmetro e
//retorna a categoria desse nadador de acordo com a tabela abaixo:
#include <stdio.h>
#include <stdlib.h>
char* idadenadador (int idades){
    if(idades >=5 && idades <=7)
        return ("Infantil A");
    else if( idades >= 8 && idades <=10)
        return("Infantil B");
    else if(idades >= 11 && idades <= 13)
        return  ("Juvenil A");
    else if(idades>=14 && idades <=17)
        return ("Juvenil B");
    else if (idades >=18)
        return("Adulto.");

    return ("Não definido.");
}
int main (){
    int res;
    char* resultado;
    printf("Digite a sua idade para saber qual categoria voce pertence: ");
    scanf("%d",&res);
    resultado = idadenadador(res);
    printf("Voce pertence a categoria: %s ", resultado);

    return 0;

}
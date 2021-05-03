//. Criar uma função que receba um caractere como parâmetro e retorne 1
//caso seja uma vogal e zero caso não seja vogal. 
#include <stdio.h>
#include <stdlib.h>
int caractere (char palavra){
    if(palavra == 'A'|| palavra == 'E' || palavra == 'I' || palavra == 'O'|| palavra == "U"){
        printf("1");

    }
    else{    
        printf("0");
    }
    return caractere;
};
int main (){
    char letra;
    int resultado;
    printf("Digite uma letra para saber se e vogal o valor sera 1, se for consoante, sera 0: \n" );
    scanf("%c",&letra);
    resultado = caractere (letra);
    printf("%c",resultado);
    return 0;   
}
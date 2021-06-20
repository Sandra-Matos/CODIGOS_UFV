//Leia uma quantidade indeterminada de duplas de valores inteiros X e Y.Escreva para cada X e para 
//cada Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou
// decrescente. O programa deve finalizar quando forem digitados dois valores iguais.
#include<stdio.h>
#include <stdlib.h>
int main (){
    int X, Y;
    while(X!=Y){
        printf("Digite o valor de X: ");
        scanf("%d",&X);
        printf("Digite o valor de Y: ");
        scanf("%d",&Y);
        if(X<Y){
            printf("Os valores foram digitados em ordem crescente.\n");
        }else{
            printf("Os valores foram digitados em ordem decrescente.\n");
        }

    }
    return 0;
}

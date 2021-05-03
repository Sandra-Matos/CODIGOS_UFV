// Faça um programa contendo uma função que receba um número como
//parâmetro e que retorne 1 se o número for positivo ou 0 se o número
//for negativo.
#include <stdio.h>
int pos (int num){
    if(num<0){
        return 0;
    }
    else{
        return 1;
    }

}
int main (){
    int n, x;
    printf("Digite um valor: ");
    scanf("%d",&n);
    x = pos (n);
    printf("%d",x);
    return 0;
}
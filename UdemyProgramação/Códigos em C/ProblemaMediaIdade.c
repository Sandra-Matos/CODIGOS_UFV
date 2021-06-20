//Ler um numero inteiro N, dai mostrar na tela a tabuada de N para 1 a 10.
#include<stdio.h>
#include<stdlib.h>
int main (){
    int N,i,r;
    printf("Digite o numero que deseja saber a tabuada: ");
    scanf("%d",&N);
    for(i=0;i<=10;i++){
        r= N * i;
        printf("%d X %d = %d\n",N,i,r);

    }
   
    return 0;

}
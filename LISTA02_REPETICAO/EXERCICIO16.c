//Faça um algoritmo utilizando o comando FOR que receba como
//entrada um valor N e calcula e escreva a tabuada de 1 até N. Mostre a
//tabuada na forma:
#include <stdio.h>
#include<stdlib.h>
int main (){
    int n, tabuada,i;
    printf("Digite o valor de N para saber sua tabuada:");
    scanf("%d",&n);
    i=1;
  while(i<=n){
        tabuada=i*n;
        printf("%d X %d = %d\n",i,n,tabuada);
        i++;
    }

    return 0;



}

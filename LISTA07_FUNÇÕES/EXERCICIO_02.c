//Faça um programa contendo uma função que receba um número
//inteiro como parâmetro e retorne o valor do fatorial deste número.
#include <stdlib.h>
#include <stdio.h>
int numero (int i);
int main(){
    int n,i, f=1;
    printf("Digite o valor de n:");
    scanf("%d",&n);
    for (i=1;i<n;i++)
        f=f*i;
    printf ("Fatorial de n = %d\n",f);
    system ("pause");
    return f;
    
}
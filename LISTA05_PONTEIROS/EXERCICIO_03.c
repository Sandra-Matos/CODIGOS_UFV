//Assumindo que o endereço da variável x foi atribuído a um ponteiro
//px, escreva uma expressão que não usa x e divida x por 5.

#include <stdlib.h>
#include<stdio.h>
int main (){
int *px= NULL,x,div;
printf("Digite um valor para x: ");
scanf("%d",&x);
*px = x;
div = *px/5;
printf("%d",div);
return 0;

}
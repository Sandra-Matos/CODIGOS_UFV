#include <stdio.h>
#include <stdlib.h>

int main (){
    int cubo,i,n ;
    i=400;
    cubo=0;
    while(i>0){
         printf("Digite um valor:");
         scanf("%d",&n);
         cubo= n*n*n;
         i--;
         printf("%d\n", cubo);
    }
  return 0;
    };




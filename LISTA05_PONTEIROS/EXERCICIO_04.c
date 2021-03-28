//Qual o valor das seguintes expressões, considerando o código abaixo:
//int i=3, j=5;
//int *p=&i, *q=&j;
//a) p == &i b) *p - *q

#include  <stdlib.h> 
#include  <stdio.h> 
int main(){
    int i=3,j=5;
    int *p=&i,*q=&j;
    int atb,sub;
    //a) p ==&i
    atb =p==&i;
    printf("%d",atb);
    //b)*p-*q
    sub= *p-*q;
    printf("%d",sub);
    return 0;
    

}


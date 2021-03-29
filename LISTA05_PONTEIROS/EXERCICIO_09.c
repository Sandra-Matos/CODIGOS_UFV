//Faça um programa que declare 3 variáveis, dos tipos inteiro, real e
//caracter, atribua valores para estas variáveis e mostre seus valores assim
//como seu tamanho em bytes e seu endereço na memória. Utilize o comando
//sizeof() para mostrar o tamanho de uma variável.
#include <stdio.h>
#include <stdlib.h>
int main (){

    int a=2, *ap;
    float b=2.0, *bp;
    char c[3]="lua", *cp;
    ap= &a;
    bp=&b;
    cp=&c;
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    printf(" O endereco de memoria da variavel a e:%d \n",ap);
    printf(" O endereco de memoria da variavel b e:%d \n",bp);
    printf(" O endereco de memoria da variavel c e:%d \n",cp);
    printf("O tamanho da variavel a em bytes e: %d\n",sizeof(a));
    printf("O tamanho da variavel b em bytes e: %d\n",sizeof(b));
    printf("O tamanho da variavel c em bytes e: %d\n",sizeof(c));

    return 0;
}
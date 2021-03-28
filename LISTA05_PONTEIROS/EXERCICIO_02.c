//Assumindo que o endereço de num foi atribuído a um ponteiro pnum,
//quais das seguintes expressões são verdadeiras? Faça um código para
//testar.
//a) num == &pnum c) pnum == *num
//b) num == *pnum d) pnum == &num
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num,*pnum;
    num=2;
    *pnum= NULL;
    printf("Entre com o valor de n\n: ");
    scanf("%d",&num);
    *pnum=&num;
   
    printf("* mostra o valor apontado pelo ponteiro pnum= %d\n",*pnum);
   
    printf("pnum mostra que o endereco da memoria =%d\n", &pnum);
    pnum++;

    printf("pnum mostra que o endereco de memoria foi atualizado para =%d\n",pnum);
    getch();
    return 0;
}

//As alternativas b e d são as corretas
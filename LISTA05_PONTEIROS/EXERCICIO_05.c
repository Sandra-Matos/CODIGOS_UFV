//Qual é a saída deste programa? Explique o significado de cada valor
//impresso.
//main () {
//int i = 5, *p = &i;
//printf (“%d %d %d %d %d \n”, p, *p+2, **&p, 3**p, **&p+4);}
#include <stdio.h>
#include <stdlib.h>
main () {
int i = 5, *p = &i;

printf (" %d %d %d %d %d \n ", p, *p+2, **&p, 3**p, **&p+4);
return 0;
// p está imprimindo o endereço de memoria de i.
//*p+2 está imprimindo o valor de i que é 5 e somando com 2, resultando em 7.
//


}

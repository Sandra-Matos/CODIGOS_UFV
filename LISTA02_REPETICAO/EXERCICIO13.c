#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    float numerador, denominador, E;
    E=0;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    numerador=1;
    for(denominador=1;denominador<=n;denominador++)
        E= E+ (numerador/denominador);
    printf("%f",E);
    return 0;


}

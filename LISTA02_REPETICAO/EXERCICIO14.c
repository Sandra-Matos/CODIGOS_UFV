#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    float numerador, denominador, E;
    E=0;
    printf("Digite o valor de N: ");
    scanf("%d",&n);
    numerador=1;
    denominador=1;
    while(denominador<=n){
        E= E+ (numerador/denominador);
        denominador ++;
    }
    printf("%f",E);
    return 0;
}

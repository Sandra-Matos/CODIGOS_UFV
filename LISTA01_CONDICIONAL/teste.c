#include <stdio.h>
#include<stdlib.h>
int main (){
    float custo_consumidor, custo_fabrica;
    printf("Digite o valor do custo de fabrica: ");
    scanf("%f",&custo_fabrica);
    float percentual_distribuidor=28/100;
    float impostos_custfabrica=45/100;
    
    custo_consumidor= (custo_fabrica+percentual_distribuidor)*(impostos_custfabrica*custo_fabrica);
    printf("O custo do consumidor foi: %.2f",custo_consumidor);
    return 0;
}
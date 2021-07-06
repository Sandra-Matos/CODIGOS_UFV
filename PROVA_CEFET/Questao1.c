#include <stdio.h>
#include <stdlib.h>
int main (){
    double pagamento, desconto,valoraserpago,calculo;
    printf("Digite o valor a ser pago: ");
    scanf("%lf",&valoraserpago);
    printf("Digite 1 se o pagamento for no cartao, 0 se em dinheiro.");
    scanf("%lf",&pagamento);
    if(pagamento == 1){
        printf("O valor a ser pago e R$ %.2lf ",valoraserpago);

    }else if(pagamento == 0){
        calculo = (valoraserpago*0.2);
        desconto = (  valoraserpago - calculo);
        printf("O valor a ser pago com desconto e R$ %.2lf ",desconto);



    }
    return 0;

}

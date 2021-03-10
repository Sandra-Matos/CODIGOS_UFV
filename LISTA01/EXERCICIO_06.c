//Leia a velocidade máxima permitida em uma avenida e a velocidade
//com que o motorista estava dirigindo nela e calcule a multa que uma
//pessoa vai receber, sabendo que são pagos:
//a) 50 reais se o motorista ultrapassar em até 10km/h a
//velocidade permitida (ex.: velocidade máxima: 50km/h; motorista a
//60km/h ou a 56km/h);
//b) 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade
//permitida.
//c) 200 reais, se estiver acima de 30km/h da velocidade permitida.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v_maxima, v_dirigindo;
    float multa;

    printf("Qual a velocidade máxima permitida em uma avenida?");
    scanf("%f", &v_maxima);
    printf("Qual a velocidade que o motorista estava dirigindo?");
    scanf("%f", &v_dirigindo);
    if (v_dirigindo <= v_maxima + 10)
    {
        multa = 50.00;
        printf("A multa foi R$: %.2f", multa);
    }
    else if (v_dirigindo >= v_maxima + 11 && v_dirigindo < v_maxima + 30)
    {
        multa = 100.00;
        printf("A multa foi R$: %.2f", multa);
    }
    else if (v_dirigindo >= v_maxima + 30)
    {

        multa = 200.00;
        printf("A multa foi R$: %.2f", multa);

        return 0;
    }
}
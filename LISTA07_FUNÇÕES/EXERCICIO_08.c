//. Faça uma função que receba, por parâmetro, a altura e o sexo de uma
//pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal
//usando a fórmula peso_ideal = 72.7 x altura – 58.0 e, para mulheres,
//peso_ideal = 62.1 x altura - 44.7.

#include <stdio.h>
#include <stdlib.h>
int dados (float altura, char sexo){
    char s;
    float peso_ideal;
    if (sexo == 'M'){
        peso_ideal = (72.7*altura) -58.0;

    } else if( sexo == 'F'){
        peso_ideal = (62.1*altura)-44.7;
    }
    return peso_ideal;

}
int main (){
    float alt, resultado;
    char sex;
    printf("Digite sua altura: ");
    scanf("%f",&alt);
    printf("Digite M para masculino ou F para feminino: ");
    scanf("%s",&sex);
    resultado = dados (alt,sex);
    printf("%.2f", resultado);

    return 0;


}

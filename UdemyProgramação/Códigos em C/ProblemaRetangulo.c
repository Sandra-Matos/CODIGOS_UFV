//Fazer um programa para ler as medidas da base e altura de um retangulo. Em seguida,
// mostrar o valor da area, perimetro e diagonal deste retangulo, com quatro casas decimais.


#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main () {
    float base;
    float altura;
    float area, perimetro, diagonal;
    printf("Digite o valor da base: ");
    scanf("%f",&base);
    printf("Digite o valor da altura: ");
    scanf("%f",&altura);
    area = base*altura;
    perimetro = base+base+altura+altura;
    diagonal= sqrt(base*base+altura*altura);
    printf(" A area e %.4f, o perimetro e %.4f e a diagonal e %.4f.",area,perimetro,diagonal);
    return 0;

}
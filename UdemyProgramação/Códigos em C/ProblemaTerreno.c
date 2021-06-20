//Fazer um programa para ler as medidas da largura e comprimento de um terreno retangular com uma
// casa decimal, bem como o valor do metro quadrado do terreno com duas casas decimais. Em seguida,
//o programa deve mostrar o valor da area do terreno, bem como o valor do preço do terreno, ambos 
// com duas casas decimais, conforme exemplo.
#include<stdio.h>
#include<stdlib.h>
int main (){
    double largura, comprimento, valormetroquadrado,area,preco;
    printf("Digite o valor da largura do terreno: ");
    scanf("%lf",&largura);
    printf("Digite o valor do comprimento: ");
    scanf("%lf",&comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&valormetroquadrado);
    area = largura*comprimento;
    preco = area*valormetroquadrado;
    printf("A area do terreno = %.2lf \n",area);
    printf("Preco do terreno = %.2lf \n",preco);
    return 0;
}
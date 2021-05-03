//Elabore um programa contendo uma função que receba três notas de
//um aluno como parâmetros e uma letra. Se a letra for ‘A’, a função
//deverá calcular a média aritmética das notas do aluno; se for ‘P’, a
//função deverá calcular a média ponderada, com pesos 5, 3 e 2 para
//cada nota. A média calculada deverá ser retornada ao programa
//principal para ser exibida
#include <stdio.h>
#include <stdlib.h>
float notas (float n1,float n2, float n3, char letra){
    float media;
    if(letra == 'A'){
        media =(n1+n2+n3)/3;
        printf("A media da opcao %c e: %.2f.",letra,media);
        
    }else if (letra=='P'){
        media = (n1*5+n2*3+n3*2)/(5+2+3);
        
        printf("A media ponderada da opcao %c e: %.2f.",letra,media);
    }
    else{
        printf("Opcao invalida.\n");
    }



    
    return media;

};
int main (){
    float nota1,nota2,nota3,resultado;
    char letras;
    printf("Digite o valor da nota 1:\n ");
    scanf("%f",&nota1);
    printf("Digite o valor da nota 2:\n ");
    scanf("%f",&nota2);
    printf("Digite o valor da nota 3:\n ");
    scanf("%f",&nota3);
    printf("Digite A para saber a media das notas ou P para saber a media ponderada:\n ");
    scanf("%s",&letras);
    resultado = notas(nota1,nota2,nota3,letras);
    return 0;
    

}

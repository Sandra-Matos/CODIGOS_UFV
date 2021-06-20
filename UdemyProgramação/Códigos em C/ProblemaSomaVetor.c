//Faça um programa que leia N numeros reais e armazene-os em um vetor. Em seguida:
//- Imprimir todos os elementos do vetor
//- Mostrar na tela a soma e a media dos elementos do vetor
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N, i;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);
    double vetor[N];
    double media, soma;
    
    for (i = 0; i < N; i++)
    {   
        printf("Digite os valores a serem preenchidos no vetor: ");
        scanf("%lf",&vetor[i]);
    }
    printf("\n");
    printf("VALORES: \n");
    for(i=0;i<N;i++){
       printf(" %1.lf ",vetor[i]);
    }
    
    for (i=0; i<N;i++){
        soma=soma+vetor[i];
    }
    printf("\nSOMA: %.2f\n",soma);

    media = soma/N;
    printf("MEDIA = %.2f\n",media);

    return 0;
     
   
}
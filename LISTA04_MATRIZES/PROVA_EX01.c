//1. (4 pontos) Durante uma corrida de automóveis com N voltas de duração, foram anotados para um
//piloto, na ordem, os tempos registrados em cada volta. Faça um algoritmo que receba o número de
//voltas N e, para cada volta, o tempo correspondente. O tempo de cada volta deverá ser armazenado
//em um vetor. Acesse o vetor para calcular e exibir o melhor tempo (menor tempo) e a volta em que
//ocorre.
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int N,i = 0;
    printf("Digite o valor de N :");
    scanf("%d", &N);
    double tempo[N],  menortempo = 0, volta;
    
    printf("Digite o tempo correspondente a volta:");
    for(i=0;i<N;i++){
        scanf("%lf",&tempo[i]);
        
    }
    
    for(i = 0; i < N; i++){
        if (tempo[i]<menortempo){
            menortempo = tempo[i];
            volta = i;
        }
    }
    printf("O melhor tempo foi %ld  na volta %ld. ", menortempo, volta);

    return 0;
    
}
// Faça um algoritmo para ler valores reais e armazenar em uma matriz 5x5 e
//depois salvar em outra matriz, também 5x5, o resultado do cubo dos
//valores originais, nas mesmas posições. !
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main (){
    int x=5,i=0,j=0;;
    float matriz[x][x], matriz_cubo[x][x];
    printf("Digite cinco valores reais para uma matriz.");
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Posicao [%d][%d]= ",i,j);
            scanf("%f",&matriz[i][j]);
            

        }

    }
    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
            matriz_cubo[i][j] =(matriz[i][j]*matriz[i][j]*matriz[i][j]);
            printf(" %.1f ",matriz_cubo[i][j]);
        }    
    }
     return 0;   
        
        

    }

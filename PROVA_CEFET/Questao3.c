#include<stdlib.h>
#include<stdio.h>
int main (){
    int numero,numeroAleatorio;
    printf("Digite um valor de 0 a 6: ");
    scanf("%d",&numero);
    if(numero >=0 && numero <= 6){
        numeroAleatorio = rand()%10;
        if(numero == numeroAleatorio){
            printf("O numero sorteado foi : %d, voce acertou!",numeroAleatorio);

        }else{
            printf("O numero sorteado foi : %d, voce errou!",numeroAleatorio);
        }
         


        
    }
   
    return 0;
}

//Faça um programa que controle o fluxo de voos nos aeroportos de um
//país com V=5 (voos) e A=5 (aeroportos) e:
//a) Crie e leia um vetor de voos, sendo que cada voo contém um
//código de aeroporto de origem e um de destino.
//b) Com base nos voos, crie um vetor de aeroportos, sendo que cada
//aeroporto contém seu código, quantidade de voos que saem e
//quantidade de voos que chegam.
//Nota: Cada aeroporto é identificado por um código inteiro entre 0 e
//(A-1). Não aceite aeroportos de código inexistente.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct voo {
    int codigo_origem;
    int codigo_destino;
};

struct aeroporto {
    int quant_saem;
    int quant_chegam;
    int codigo;
};
int main(){
    int i, V=5, A=5;
    struct voo v [V];
    struct aeroporto a [A];
    for(i=0; i<V;i++){
        printf ("Digite o codigo de origem e o codigo de destino do voo %d.",i);
        scanf("%d",&v[i].codigo_origem);
        scanf("%d",&v[i].codigo_destino);
        
        

    }
   for (i=0;i<A;i++){
       printf("Digite o codigo do aeroporto %d :",i);
       scanf("%d",&a[i].codigo);
       printf("Digite a quantidade de voos que saem do aeroporto %d :",i);
       scanf("%d",&a[i].quant_saem);
       printf("Digite a quantidade de voos que chegam do aeroporto %d :",i);
       scanf("%d",&a[i].quant_chegam);
       

   }
   for (i=0;i <A;i++){
       printf("O aeroporto %d teve %d voos de chegada e %d voos de saida.\n", i,a[i].quant_saem,a[i].quant_chegam);
   }
   return 0;

}
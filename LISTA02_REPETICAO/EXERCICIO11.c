#include <stdio.h>
#include<stdlib.h>
int main (){
    int c1,c2,c3,c4, nulo,branco,n,voto,i;
    float percentual;
    printf("Digite a quantidade de eleitores:");
    scanf("%d",&n);
    i=0;
    c1=0;
    c2=0;
    c3=0;
    c4=0;
    nulo=0;
    branco=0;

    while(i<n){
        printf("Digite o seu voto:");
        scanf("%d",&voto);
        if(voto==1)
            c1=c1+1;
        else if(voto==2)
            c2=c2+1;
        else if(voto==3)
            c3=c3+1;
        else if(voto==4)
            c4=c4+1;
        else if(voto==5)
            nulo=nulo+1;
        else if(voto==6)
            branco = branco+1;
        i++;

    }
    percentual = branco+nulo/ (c1+c2+c3+c4+branco+nulo);
    printf("O total de votos para candidato 1:%d\n",c1);
    printf("O total de votos para candidato 2:%d\n",c2);
    printf("O total de votos para candidato 3:%d\n",c3);
    printf("O total de votos para candidato 4:%d\n",c4);
    printf("O total de votos nulos:%d\n",nulo);
    printf("O total de votos brancos:%d\n",branco);
    printf("O total de votos brancos e nulos sobre o percentual do valor total foi:%f\n",percentual);
}

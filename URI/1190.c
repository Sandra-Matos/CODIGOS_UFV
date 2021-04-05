#include <stdio.h>
#include <stdlib.h>
int main(){
    char O[5];
    int i,j,linha=1,coluna=10;
    double M[2][2],soma=0;
    scanf("%s",&O[0]);
    for (i=0;i<2;i++){
        for (j=0;j<2;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=linha;j<=coluna;j++){
            soma+=M[i][j];
            linha++;
            coluna--;
        }
    }

    if (O[0]=='S')
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",soma/30);
    return 0;
}

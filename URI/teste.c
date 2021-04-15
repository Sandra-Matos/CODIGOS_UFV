#include <stdio.h>
int main()
{
    double M[12][12], soma = 0.0;
    int i, j;
    char O;
    scanf("%c", &O);
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
            }
    }
    
    for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            if (i > j){
                soma = soma + M[i][j];
            }
        }
    }
        if (O == 'S')
            printf("%.1lf\n", soma);

        else if (O == 'M')

            printf("%.1lf\n", soma / 121.0 - 12.0);

        return 0;
    
}
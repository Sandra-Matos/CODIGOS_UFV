#include <stdio.h>
 
int main() {
int i,n,linha, num[9][9];
char linha_digitada[18];
 scanf("%d",&n);
 for(i=0;i<n;i++){
     for(linha=0;linha<9;linha++){
             scanf("%s",linha_digitada);
             num[linha][0]= (int) linha_digitada[0];
             num[linha][1]= (int) linha_digitada[2];
             num[linha][2]= (int) linha_digitada[4];
             num[linha][3]= (int) linha_digitada[6];
             num[linha][4]= (int) linha_digitada[8];
             num[linha][5]= (int) linha_digitada[10];
             num[linha][6]= (int) linha_digitada[12];
             num[linha][7]= (int) linha_digitada[14];
             num[linha][8]= (int) linha_digitada[16];
             num[linha][9]= (int) linha_digitada[18];

            

     }
 }
    return 0;
}
#include<stdio.h>
int main (void){
    FILE *file;
    file= fopen("teste.txt","w");
    fprintf(file,"Pao com mortadela. ");
    fclose(file);
    return 0;

}
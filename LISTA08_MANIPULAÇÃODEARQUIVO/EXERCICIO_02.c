#include <stdio.h>
int main() {
    FILE *numeros;

    numeros= fopen("numero.txt","w");
    if(numeros==NULL){
        printf("Nao foi possivel abrir o arquivo!");
        return 1;
    }else{
        fprintf(numeros,"1 2 3 4 5 6 7 8 9 10 11 12 13");
    }    
    fclose(numeros);
    FILE *pares,*verificar;
	int num;
    verificar=fopen("numeros.txt","r");
    pares= fopen("pares.txt","w");
    if(pares==NULL){
        printf("Nao foi possivel abrir o arquivo!");
        return 1;
    }
	else{
        while (!feof(verificar)){
			fscanf(numeros,"%d",&num);
            if(num%2==0){
				printf(" %d ",num);
				fprintf(pares," %d\n ",num);
				}
			fclose(pares);
			
            
        }
        fclose(verificar);
    }    
    fclose(numeros);
}



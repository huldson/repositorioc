#include <stdio.h>
#include <string.h>



void main(){
char x[100];
int i;
	
	
	printf("digite uma frase : ");
	gets(x);


FILE *ponto;



ponto = fopen("minusculo.txt","a");

fprintf(ponto,"%s",x);

fclose(ponto);
	
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	
FILE *mi, *ma;

mi = fopen("minusculo.txt","r");	
ma = fopen("maiusculo.txt","w");
if(mi==NULL|| ma==NULL ){
	
	printf("erro de criar os arquivos.\n");
	system("pause");
	exit(1);
	
}		
	char c = fgetc(mi);
	while(c!= EOF){
		fputc(toupper(c),ma);
		c = fgetc(mi);	
	}
	fclose(mi);
	fclose(ma);
	system("pause");
return 0;}

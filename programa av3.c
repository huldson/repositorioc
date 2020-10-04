#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){
	int x;
   char autor[100],titulo[100],editora[100],edi[100];
	char *l;
	printf("numero: ");
	scanf("%d",&x);
	
	FILE *p;
	l= strstr( "casa bom","simple");
	if(l!=NULL){
		printf("achou");
	}
	else
	{
		printf("nao achou");
	}

	do{
	
		
		if(x==1){
		
			printf("digite autor : ");
			scanf("%s",&autor);
			printf("\ndigite titulo : ");
			scanf("%s",&titulo);
			printf("\ndigite editora : ");
			scanf("%s",&editora);
			printf("\ndigite edicao : ");
			scanf("%s",&edi);
			
			p = fopen("arquivo.txt", "a");
			fprintf(p, "%s %s %s %s\n",autor,titulo,editora,edi);
		
		
			fclose(p);
	
		
		}	
		if(x==2){
				
		
		}
	
		printf("numero : ");
		scanf("%d",&x);
	
	}while(x!=3);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void main(){
	int x y;
   char autor[100],titulo[100],editora[100],edi[100];
	char *l;
	printf("*********************************************************\n");
	printf("\t1>>cadastrar\n\t2>>consultar cadastro\n\t3>>sair do programa");
	printf("\n********************************************************* ");
	printf("\nqual opcao deseja : ");
	scanf("%d",&x);
	
	FILE *p;
	
	
	l= strstr( "casa simples ","ca");//ele apos achar os caracteres iguais ele seleciona todos a frente.
	if(l!=NULL){
	//	printf("achou");
	}
	else
	{
		//printf("nao achou");
	}

     //printf("\n%s\n",l);
     
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
			printf("deseja fazer a busca por autor>>1\ntitulo>>2\neditora>>3\nedicao>>4:");
			scanf("%d",&y);
			if(y==1){
			
			}
			else if(y==2){
			}
			else if(y==3){
			}	
			else if(y==4){
			}
		}
	
			printf("*********************************************************\n");
	printf("\t1>>cadastrar\n\t2>>consultar cadastro\n\t3>>sair do programa");
	printf("\n********************************************************* ");
	printf("\nqual opcao deseja : ");
	scanf("%d",&x);
	
	}while(x!=3);
}

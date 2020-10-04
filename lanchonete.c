#include<stdio.h>


int main (){
	
	
int j,i,x,y,numero=0;

printf("valor de x e valor de y :");
scanf("%d %d",&x,&y);		
printf("\n");
do{
j++;
for(i=1;i<=x;i++){
numero++;	
if(numero<=y){

printf("%d",numero);
printf("   ");
}}	
printf("\n");
}while(numero<=y);
printf("saiu roudou %d",j);
return 0;

	
}

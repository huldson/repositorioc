#include <stdio.h>// fun��o classica
#include <string.h>// fun��o para mexer com string 
#include <stdlib.h>
#include <ctype.h>// biblioteca para incluir a fun��o toupper
void main(){
	
FILE *mi, *ma;//FILE(sempre usar em maiusculo e o tipo arquivo) *mi *ma s�o ponteiro.

mi = fopen("minusculo.txt","r");	// ponteiro(mi)= fopen(file open (abrir arquivo))(nome do texto e sua exten��o separa por um "," oque vai fazer "r" ler
ma = fopen("maiusculo.txt","w");    // mesmo igual a linha acima porem utilizando a w que serve pra criar um aquivo, melhor a utilizar � "a" ele n�o apaga o anterior
if(mi==NULL|| ma==NULL ){// testando para ver se tem erro se for igual a NULL significa que n�o possui erro, pois tem algo dentro do arquivo 
	
	printf("erro de criar os arquivos.\n");
	system("pause");
	exit(1);
	
}		
	char c = fgetc(mi); // ele vai pegar caracter por caracter dentro do vetor que voce seleciona � jogar na variavel c
	while(c!= EOF){      // vai gerar um la�o dentro para testa se c chegou no final dos caracteres, EOF como fosse fazio no final de um texto.
		fputc(toupper(c),ma); // pega a variavel c com a fun��o toupper armazena no ponteiro ma(vai armazenar no arquivo maiusculo.txt)
		c = fgetc(mi);	// testando o proximo caracter jogando na vairavel c, volta ao la�o.
	}
	fclose(mi); // fechar o arquivo minuscuulo.txt
	fclose(ma);// fechando o arquivo maiuscolo.txt
	system("pause");// pausa o arquivo.
}

// Exercicio_8.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"

void main(int argc, char *argv[]) {
	FILE *origem, *destino;
	char arqOrigem[100] = "", arqDestino[100] = "";
	int iCaracter;
	int i;

	for(i = 1; i < argc; i++){
		if (i == 1)
			strcpy(arqOrigem, argv[i]);
		else
			strcpy(arqDestino, argv[i]);
	}

	if( (origem = fopen(arqOrigem,"r")) == NULL ) {
		printf("Arquivo de origem nao pode ser aberto.\n");
		exit(1);
	}

	if( (destino = fopen(arqDestino,"w")) == NULL ) {
		printf("Arquivo de destino nao pode ser criado.\n");
		exit(1);
	}

	while( 1 ) {
		iCaracter = fgetc(origem);
		if( feof(origem) )
			break;

		fputc(iCaracter, destino);
	}

	fclose(origem);
	fclose(destino);
printf("\nFim.\n");
	getchar();

}


// Prova.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdlib.h"

void main(int argc, char *argv[]) {
	FILE *origem1, *origem2, *destino;
	char arqOrigem1[100] = "", arqOrigem2[100] = "", arqDestino[100] = "", nomeProg[100] = "Eduardo Picetti Torezan";
	int iCaracter = 0, i = 0;
	bool bFimOrig1 = false, bFimOrig2 = false;

	if( argc != 4 ) {
		printf("Quantidade de parametros informada invalida. Use: conta arquivo_origem1 arquivo_origem2 arquivo_destino.\n");
		exit(1);
	}

	strcpy(arqOrigem1, argv[1]);
	strcpy(arqOrigem2, argv[2]);
	strcpy(arqDestino, argv[3]);

	if( (origem1 = fopen(arqOrigem1,"rb")) == NULL ) {
		printf("Arquivo de origem 1 não pode ser aberto.\n");
		exit(1);
	}

	if( (origem2 = fopen(arqOrigem2,"rb")) == NULL ) {
		printf("Arquivo de origem 2 não pode ser aberto.\n");
		exit(1);
	}

	if ((destino = fopen(arqDestino,"wb"))==NULL) {
		printf("Arquivo de destino não pode ser criado.\n");
		exit(1);
	}

	while( 1 ) {
		if (bFimOrig1 == false) {
		   iCaracter = fgetc(origem1);
		   if( feof(origem1) )
		 	  bFimOrig1 = true;
		   else
		      fputc(iCaracter, destino);
		}

		if (bFimOrig2 == false) {
		   iCaracter = fgetc(origem2);
		   if( feof(origem2) )
		 	  bFimOrig2 = true;
		   else
		      fputc(iCaracter, destino);
		}

		if ((bFimOrig1) &&
			(bFimOrig2))
			break;
	}

	for (i == 0; nomeProg[i] != '\0'; i++){
		iCaracter = nomeProg[i];

		if (i == 0)
			fputc(32, destino);

		fputc(iCaracter, destino);
	};

	fclose(origem1);
	fclose(origem2);
	fclose(destino);

	if ((destino = fopen(arqDestino,"rb"))==NULL) {
		printf("Arquivo de destino não pode ser aberto para leitura.\n");
		exit(1);
	}

	printf("\nArquivo final:\n");

	while( 1 ) {
       iCaracter = fgetc(destino);
	   if( feof(origem1) )
	 	  break;

	   printf("%c", iCaracter);		   
	}

	fclose(destino);
	
	printf("\n\nFim.");
	getchar();

}


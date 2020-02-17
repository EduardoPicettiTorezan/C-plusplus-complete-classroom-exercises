// Exemplo_8.11.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	FILE *e;
	char nome[100];
	int c;

	printf("\nArquivo? ");
	gets(nome);
	if( (e=fopen(nome,"r"))==NULL ) {
		printf("Arquivo não pode ser aberto\n");
		exit(1);
	}
	while( 1 ) {
		c = fgetc(e);
		if( feof(e) ) break;
		putchar(c);
	}

	getchar();

	fclose(e);

	
}


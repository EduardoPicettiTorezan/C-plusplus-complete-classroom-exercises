// Exercicio_6.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

typedef struct {
	int  numContato;
	char nome[30];
	char fone[20];
	} PESSOA;

void incluiContato(PESSOA contato[5], char pnome[30], char pfone[20], int numContato);
int buscaContato(PESSOA contato[5], char pBusca[30]);

void main(){
	PESSOA contato[5];
	char nomPessoa[30];

	incluiContato(contato, "Eduardo", "321321", 1);
	incluiContato(contato, "Gordinho", "89798798", 2);
	incluiContato(contato, "Vinicius", "45465465", 3);
	incluiContato(contato, "Chuck Noris", "66666666", 4);
	incluiContato(contato, "Ninja Gainde", "9999", 5);

	printf("Informe o nome da pessoa: ");
	gets(nomPessoa);
	fflush(stdin);

	if (buscaContato(contato, nomPessoa) == 0) {
		printf("\nContato nao localizado.");
	};

	getchar();
};

int buscaContato(PESSOA contato[5], char pBusca[30]){
	unsigned short iConta = 0;

	for (iConta = 0; iConta <= 5; iConta++){
		if (strcmp(contato[iConta].nome, pBusca) == 1) {
			printf("\nTelefone: %s", contato[iConta].fone);
			return(1);
		};
	};

	return(0);
};

void incluiContato(PESSOA contato[5], char pnome[30], char pfone[20], int numContato){

	contato[numContato - 1].numContato = numContato;
	strcpy(contato[numContato - 1].nome, pnome);
	strcpy(contato[numContato - 1].fone, pfone);
		
};
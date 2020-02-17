// Exercicio_6.9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

typedef struct {
	int  numContato;
	char nome[30];
	char fone[20];
	} PESSOA;

void incluiContato(PESSOA contato[], char pnome[30], char pfone[20], int numContato);
void ordena		  (PESSOA contato[], int qtd);
void mostra		  (PESSOA contato[], int qtd);
int selmin        (PESSOA contato[], int i, int n);

void main(){
	PESSOA contato[5];
	char nomPessoa[30];

	incluiContato(contato, "Eduardo", "321321", 1);
	incluiContato(contato, "Gordinho", "89798798", 2);
	incluiContato(contato, "Vinicius", "45465465", 3);
	incluiContato(contato, "Chuck Noris", "66666666", 4);
	incluiContato(contato, "Ninja Gainde", "9999", 5);

	ordena(contato, 5);
	mostra(contato, 5);

	getchar();
};


void ordena(PESSOA contato[], int qtd){
	int i, k;
	char x[30];

	for(i = 0; i < qtd - 1; i++) {

		k = selmin(contato, i, qtd);
		strcpy(x, contato[i].nome);
		strcpy(contato[i].nome, contato[k].nome);
		strcpy(contato[k].nome, x);

		strcpy(x, contato[i].fone);
		strcpy(contato[i].fone, contato[k].fone);
		strcpy(contato[k].fone, x);
	};
};

int selmin(PESSOA contato[], int i, int n) {

	int j, k = i;

	for(j = i + 1; j < n; j++)
		if( strcmp(contato[k].nome, contato[j].nome) > 0)
			k = j;
	return k;
}


void mostra(PESSOA contato[], int qtd){
	int iconta = 0;

	for(iconta = 0; iconta < 5; iconta++){
		printf("%s - %s \n", contato[iconta].nome, contato[iconta].fone);
	};
};

void incluiContato(PESSOA contato[], char pnome[30], char pfone[20], int numContato){

	contato[numContato - 1].numContato = numContato;
	strcpy(contato[numContato - 1].nome, pnome);
	strcpy(contato[numContato - 1].fone, pfone);
		
};

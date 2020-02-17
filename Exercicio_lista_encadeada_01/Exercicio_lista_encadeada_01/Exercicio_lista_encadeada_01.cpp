// Exercicio_lista_encadeada_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <string.h>
#include "assert.h"

typedef struct cd {
	char nome_cd[20];
	double valor;
} cd;

typedef struct no {
	cd cd;
	struct no *prox;
} *lista;

lista acessa(lista lista_cd, int i) {

	while( i-->1 && lista_cd != NULL)
		lista_cd = lista_cd->prox;
	return lista_cd;
}

void inserircd(lista *lista_cd){
	char c_nome[20] = "";
	double d_valor = 0;
	lista n = malloc(sizeof(struct no));
	assert( n != NULL );

	printf("\nInforme o nome do CD: ");
	gets(c_nome);
	fflush(stdin);

	printf("\nInforme o valor do CD: ");
	scanf("%f", d_valor);
	fflush(stdin);

	strcpy(n->cd.nome_cd, c_nome);
	n->cd.valor = d_valor;
	n->prox = *lista_cd;
	*lista_cd = n;
	
};

void alterarcd(lista *lista_cd){
	char c_nome[20] = "";
	double d_valor = 0;

	printf("\nInforme o novo nome do CD: ");
	gets(c_nome);
	fflush(stdin);

	printf("\nInforme o novo valor do CD: ");
	scanf("%f", d_valor);
	fflush(stdin);

	strcpy(lista_cd->cd.nome_cd, c_nome);
	lista_cd->cd.valor = d_valor;

};
void removercd(lista *lista_cd){
	lista n = *lista_cd;

	if( n == NULL )
		return;

	*lista_cd = n->prox;

	free(n);
};
void mostrarcd(lista *lista_cd){
	printf("%s %f\n",lista_cd->cd.nome,lista_cd->cd.valor);
                break;
};

void main(){
	int i_opcao = 0, i_pos = 0;
	lista lista_cd = NULL;

	do{
		do{
			i_opcao = 0;
			printf("1 - Inserir cd\n");
			printf("2 - Alterar cd\n");
			printf("3 - Remover cd\n");	
			printf("4 - Mostrar cd\n");	
			printf("5 - Finalizar\n");	
			printf("Informe a opcao desejada: ");

			scanf("%d", &i_opcao);
			fflush(stdin);

			if ((i_opcao < 1) || (i_opcao > 5)) {
			   printf("\nValor informado invalido.\n\n");
			   i_opcao = 0;
			}
		}while(i_opcao == 0);

		if ((i_opcao < 5)) {
			printf("\nInforme a posicao para a acao selecionada: ");
			scanf("%d", &i_pos);
			fflush(stdin);
		}

		lista l_param = acessa(lista_cd, (i_pos - 1));

		switch(i_opcao)
		{
			//calculo conforme operacao informada
			case 1: inserircd(&l_param->prox); break;
			case 2: alterarcd(&l_param); break;
			case 3: removercd(&l_param->prox); break;
			case 4: mostrarcd(&lista_cd->prox; break;
			case 5: exit(-1); break;
		}

		lista_cd = l_param;

	}while( 1 == 1);


	getchar();
	
}


// Exercicio_ponteiros_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void dados_string(char vetor[], int *tamanho, int *qtd_vogais, int *qtde_consoantes){
	int iconta = 0, qv = 0, qc = 0;
	int temp = 0;

	*qtd_vogais = 0;
	*qtde_consoantes = 0;
	
	for(iconta = 0; *(vetor + iconta) != '\0'; iconta++){
		temp = *(vetor + iconta);
		if ((temp >= 97) &&
		    (temp <= 122))
			qv++;
		else if ((temp >= 65) &&
				 (temp <= 90))
			qc++;
	};

	*tamanho = iconta;
	*qtd_vogais = qv;
	*qtde_consoantes = qc;
};

void main(){
	char s_termo[] = " ";
	int tamanho, qtd_vogais, qtde_consoantes;

	tamanho = qtd_vogais = qtde_consoantes = 0;

	printf("Informe :" );
	gets(s_termo);
	fflush(stdin);

	dados_string(s_termo, &tamanho, &qtd_vogais, &qtde_consoantes);

	printf("\nTamanho: %d", tamanho);
	printf("\nVogais: %d", qtd_vogais);
	printf("\nConsoantes: %d", qtde_consoantes);

	getchar();

}


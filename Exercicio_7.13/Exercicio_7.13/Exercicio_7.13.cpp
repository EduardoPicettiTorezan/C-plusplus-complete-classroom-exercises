// Exercicio_7.13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int strchr(char ps_teste[30], char c){

	int i_conta = 0;
	int *pos_vetor = 0;

	pos_vetor = ps_teste;

	

	for (i_conta == 0; ps_teste[i_conta] != '\0'; i_conta++){

		pos_vetor++;

		if (ps_teste[i_conta] == c)
			return pos_vetor;
	};

	return NULL;
};

void main(){
	char s_steste[30] = "banana";

	printf("Primeira ocorrencia da string: %d", strchr(s_steste, 'n'));


	getchar();


	
	
}


// Exercicio_ponteiros_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void ocorrencia(char vetor_char[], char caracter, int *primeira, int *ultima){
	int iconta = 0;

	for(iconta = 0; *(vetor_char + iconta) != '\0'; iconta++){
		
		if ((*primeira == 0) &&
			(*(vetor_char + iconta) == caracter))
			*primeira = iconta + 1;

		if (*(vetor_char + iconta) == caracter)
			*ultima = iconta + 1;
				
	};
};

void main(){
	char s_texto[100] = " ";
	char c_letra;
	int primeira = 0, ultima = 0;

	printf("Informe o texto: ");
	gets(s_texto);
	fflush(stdin);

	printf("\nInforme a letra: ");
	c_letra = getchar();
	fflush(stdin);

	ocorrencia(s_texto, c_letra , &primeira, &ultima);

	printf("\nPrimeira: %d", primeira);
	printf("\nUltima: %d", ultima);

	getchar();
}


// Exercicio_03_pag_42.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main() {
	char c_op;

	printf("Informe o valor: ");
	c_op = getchar();
	fflush(stdin);

	switch(c_op){
		case '(': printf("ABRE_PARENTESES"); break;
		case ')': printf("FECHA_PARENTESES"); break;
		case '[': printf("ABRE_COLCHETES"); break;
		case ']': printf("FECHA_COLCHETES"); break;
		case '{': printf("ABRE_CHAVES"); break;
		case '}': printf("FECHA_CHAVES"); break;
		default:  printf("Valor informado invalido."); break;
	}

	getchar();
}

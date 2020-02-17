// Exercicio_02_pag_25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	float f_valor = 344.67;
	int i_valor = 68;
	long l_valor = 0;
	char c_valor;

	l_valor = f_valor;
	c_valor = i_valor;

	printf("Valor do LONG: %i",l_valor);
	printf("\n");
	printf("Valor do CHAR: %c",c_valor);
	getchar();
}


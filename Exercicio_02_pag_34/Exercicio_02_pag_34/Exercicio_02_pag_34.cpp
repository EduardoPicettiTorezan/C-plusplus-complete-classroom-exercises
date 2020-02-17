// Exercicio_02_pag_34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main() {
    unsigned short us_ano = 0;

	printf("Informe o ano: ");
	scanf("%hd",&us_ano);
	fflush(stdin);

	printf("O ano %hd ", us_ano);
	printf((us_ano % 4 == 0) && (!(us_ano % 100 == 0) || (us_ano % 400 == 0) )? "e" : "nao e");
	printf(" bisexto");

	getchar();
}


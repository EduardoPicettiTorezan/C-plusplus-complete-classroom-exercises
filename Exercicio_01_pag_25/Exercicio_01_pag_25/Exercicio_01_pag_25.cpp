// Exercicio_01_pag_25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main (){
	unsigned short us_limite = 0;
    short s_limite = 0;
	unsigned long ul_limite = 0;
	long l_limite = 0;

	us_limite = 65535 + 1;
	s_limite  = 32767 + 1;
	ul_limite = 4294967295 + 1;
	l_limite  = 2147483647 + 1;

	printf("valor unsigned short: %hd",us_limite);
	printf("\n");

	printf("valor short: %hd",s_limite);
	printf("\n");

	printf("valor unsigned long: %ld",ul_limite);
	printf("\n");

	printf("valor long: %ld",l_limite);
	printf("\n");

	getchar();
}

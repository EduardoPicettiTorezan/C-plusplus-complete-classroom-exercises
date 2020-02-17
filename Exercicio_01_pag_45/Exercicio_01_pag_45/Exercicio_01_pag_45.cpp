// Exercicio_01_pag_45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main (){ 
	short a , b , aux;
	a = b = aux = 0;

	do {
		printf("Informe o primeiro valor: ");
		scanf("%hd", &a);
		fflush(stdin);

		if (a <= 0) {
			printf("Valor deve ser maior que zero.\n");
			a = 0;
		}

	} while (a <= 0);

	do {

		printf("Informe o segundo valor: ");
		scanf("%hd", &b);
		fflush(stdin);

		if (b <= 0) {
			printf("Valor deve ser maior que zero\n.");
			b = 0;
		}

	} while (b <= 0);

	if (b < a) {
		aux = b;
		b = a;
		a = aux;
	}

	aux = 0;
	while (a <= b) {

    if (aux == 0)
       aux = 1;

		if (a % 2 == 0)
			printf("\n %hd", a);

		a = a + 1;
	}

	if (aux == 0)
		printf("Nao existem numeros pares entre %hd e %hd.", a, b);

	getchar();

}


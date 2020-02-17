// Exercicio_01_pag_40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void main () {
	int a, b, c;

	a = b = c = 0;

	printf("Informe o primeiro valor:");
	scanf("%d", &a);
	fflush(stdin);

	printf("Informe o segundo valor:");
	scanf("%d", &b);
	fflush(stdin);

	printf("Informe o terceiro valor:");
	scanf("%d", &c);
	fflush(stdin);

	if (abs(a) > abs(b) && abs(a) > abs(c))
		printf("Primeiro valor.");
	else if (abs(b) > abs(a) && abs(b) > abs(c))
		printf("Segundo valor.");
	else
		printf("Terceiro valor.");

getchar();
}


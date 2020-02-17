// Exercicio_7.20.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#include <stdio.h>
#include <stdlib.h>
#define max 3

typedef struct {
	char nome[21];
	float salario;
} funcionario;

void main(void) {

	int max;
	


	funcionario *f[max];
	int i;

	for(i = 0; i < max; i++) {
		f[i] = malloc( sizeof(funcionario) );

		printf("\nNome: ");
		gets(f[i]->nome);

	printf("Salario: ");
	scanf("%f", &f[i]->salario);
	}

	getchar();
}

// Exercicio_6.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main()
{
	struct {
		char titulo[30];
		char autor[30];
		char editora[30];
		unsigned short ano;
	} livro;

	printf("Informe o titulo: ");
	gets(livro.titulo);
	fflush(stdin);

	printf("Informe o autor: ");
	gets(livro.autor);
	fflush(stdin);

	printf("Informe a editora: ");
	gets(livro.editora);
	fflush(stdin);

	printf("Informe o ano: ");
	scanf("%hd", &livro.ano);
	fflush(stdin);

	printf("\nTitulo: %s", livro.titulo);
	printf("\nAutor: %s", livro.autor);
	printf("\nEditora: %s", livro.editora);
	printf("\nAno: %hd", livro.ano);

	getchar();

}


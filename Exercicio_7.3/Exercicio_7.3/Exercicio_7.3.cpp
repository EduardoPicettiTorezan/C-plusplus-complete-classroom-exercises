// Exercicio_7.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void permuta(int *p, int *q) {
	int x;

	x = *p;
	*p = *q;
	*q = x;
}

void main(void) {
	int a=3, b=7;

	/* RESPOSTA:
	 - Se os operadores & forem omitidos os valores tratados na funcao permita()
	 serao atribuidos aos parametros, ent�o vari�veis locais, logo A e B permanecer�o
	 com seus valores originais determinados nas defini��es das vari�veis.
	 Isso � claro se o progrma compilar sem essa declara��o do &.
	 */

	permuta(a , b);

	a : 3
	main()
	b : 7
	perm()
	p : 3
	q : 7
	x : ?
	
	printf("%d %d", a, b);
}

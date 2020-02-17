// Exercicio_01_pag_46.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main() {
	short cont = 0, n = 1, x = 0, soma = 0;

	while (cont < 4) {
		soma = 0;

		for (x = 1; x <= n/2; x++)
			if (n % 2 == 0)
				soma += x;

		if (soma ==n){
			printf('E perfeito: %h', n);
			cont++;
		}
	}
	getchar();
}


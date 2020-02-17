// Exercicio_7.10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

void main(int argc, char *argv[]) {
	char s_valor[30][3] = 
	{{" "},
	 {" "},
	 {" "}};
	char c_operador = ' ';
	int i_conta = 0;
	float f_valor1 = 0, f_valor2 = 0;


	if ( argc != 4) {
		printf("Numero de parametros incorreto. Quantidade de parametros informados: %d", argc);
		exit(1);
	}

	for (i_conta == 1; i_conta <= 3; i_conta++){

		strcpy(s_valor[i_conta], argv[i_conta]);

		if (i_conta == 1)
			f_valor1 = atof(s_valor[i_conta]);
		else if (i_conta == 3)
			f_valor2 = atof(s_valor[i_conta]);
	};

	printf("\nResultado: ");

	if (strcmp(s_valor[i_conta], "+") > 0)
		printf("%f", (f_valor1 + f_valor2));

	if (strcmp(s_valor[i_conta], "-") > 0)
		printf("%f", (f_valor1 - f_valor2));

	if (strcmp(s_valor[i_conta], "*") > 0)
		printf("%f", (f_valor1 * f_valor2));

	if (strcmp(s_valor[i_conta], "/") > 0)
		printf("%f", (f_valor1 / f_valor2));
	
	getchar();
}


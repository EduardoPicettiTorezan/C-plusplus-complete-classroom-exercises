// Exercicio_04_pag_48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


void main() {

	float f_valor = 0.00, f_total = 0.00;
	char c_operador;

	while(true){

		printf("Informe o valor: ");
		scanf("%f", &f_valor);
		fflush(stdin);

		c_operador = 'E';
		do{
			printf("Informe o operador: ");
			c_operador = getchar();
			fflush(stdin);

			if ((c_operador != '+') &&
				(c_operador != '-') &&
				(c_operador != '/') &&
				(c_operador != 'f') &&
				(c_operador != '*')){
					printf("Operador invalido.");
					c_operador = 'E';
			}

			switch(c_operador){
				case '+': f_total = f_total + f_valor; break;
				case '-': f_total = f_total - f_valor; break;
				case '/': f_total = f_total / f_valor; break;
				case '*': f_total = f_total * f_valor; break;
				default: exit(-1);
			}

		} while (c_operador = 'E');

		printf("Total calculado: %f", f_total);

	}
	getchar();
}


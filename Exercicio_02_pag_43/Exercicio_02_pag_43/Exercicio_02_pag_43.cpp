// Exercicio_02_pag_43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main() {
	float v_a, v_b;
	char c_op;
	v_a = v_b = 0.00;

	printf("Informe o primeiro valor: ");
	scanf("%f", &v_a);
	fflush(stdin);

	printf("Informe o operador: ");
	c_op = getchar();

	printf("Informe o segundo valor: ");
	scanf("%f", &v_b);
	fflush(stdin);

	switch(c_op){
		case '+': printf("Resultado: %f",(v_a + v_b)); break;
		case '-': printf("Resultado: %f",(v_a - v_b)); break;
		case '/': printf("Resultado: %f",(v_a / v_b)); break;
		case '*': printf("Resultado: %f",(v_a * v_b)); break;
		default: printf("Operador informado invalido.");
	}
	getchar();
}


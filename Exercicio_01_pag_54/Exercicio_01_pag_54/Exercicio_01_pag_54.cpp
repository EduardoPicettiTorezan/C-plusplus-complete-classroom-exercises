// Exercicio_01_pag_54.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

float soma (float, float);
float subtracao (float, float);
float multiplicacao (float, float);
float divisao (float, float);

void main () {

	float f_val_p = 0.00, f_val_s = 0.00, f_result = 0.00;
	char c_op;

	printf("Informe o primeiro valor: ");
	scanf("%f", &f_val_p);
	fflush(stdin);

	printf("Informe o operador: ");
	c_op = getchar();
	fflush(stdin);

	printf("Informe o segundo valor: ");
	scanf("%f", &f_val_s);
	fflush(stdin);

	switch(c_op){
		case '+': f_result = soma(f_val_p, f_val_s); break;
		case '-': f_result = subtracao(f_val_p, f_val_s); break;
		case '*': f_result = multiplicacao(f_val_p, f_val_s); break;
		case '/': f_result = divisao(f_val_p, f_val_s); break;
		default: printf("\nValor invalido imbecil.");
	};
	
	printf("\nValor calculado: %f .", f_result);

	getchar();
};

float soma (float v1, float v2){
	return (v1 + v2);
};
float subtracao (float v1, float v2){
	return (v1 - v2);
};
float multiplicacao (float v1, float v2){
	return (v1 * v2);
};
float divisao (float v1, float v2){
	return (v1 / v2);
};
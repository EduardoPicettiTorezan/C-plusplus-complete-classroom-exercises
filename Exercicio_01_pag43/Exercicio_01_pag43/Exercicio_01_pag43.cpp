// Exercicio_01_pag43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	float f_a, f_b, f_c, f_maior, f_meio, f_menor;
	short s_op = 0;
	f_a = f_b = f_c = f_maior = f_meio = f_menor = 0.00;

	printf("Informe a primeira variavel: ");
	scanf("%f", &f_a);
	fflush(stdin);

	printf("Informe a segunda variavel: ");
	scanf("%f", &f_b);
	fflush(stdin);

	printf("Informe a terceira variavel: ");
	scanf("%f", &f_c);
	fflush(stdin);

	printf("1- Mostrar os valores em ordem crescente\n2- Mostrar os valores em ordem decrescente: ");
	scanf("%hd", &s_op);
	fflush(stdin);

	f_maior = f_a;
	if (f_b > f_a)
		f_maior = f_b;
	else if (f_c > f_b)
		f_maior = f_c;

	f_menor = f_a;
	if (f_b < f_a)
		f_menor = f_b;
	else if (f_c < f_b)
		f_menor = f_c;
		
	if ((f_maior != f_a) && (f_maior != f_a))
	   f_meio = f_a;
	else if ((f_maior != f_b) && (f_maior != f_b))
	   f_meio = f_b;
	else if ((f_maior != f_c) && (f_maior != f_c))
	   f_meio = f_c;

	switch(s_op){
		case 1: printf("Valores: %f, %f e %f.",f_menor,f_meio,f_maior);
			break;
		case 2: printf("Valores: %f, %f e %f.",f_maior,f_meio,f_menor);
			break;
		default: printf("Valor informado invalido.");

	}
	
	getchar();
}


// Exercicio_03_pag_40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void main () {
	int a, b, c;
	double area, s;
	a = b = c = 0;
	s = area = 0.00;

	printf("Informe o primeiro valor: ");
	scanf("%d",&a);
	fflush(stdin);

	printf("Informe o Segundo valor: ");
	scanf("%d",&b);
	fflush(stdin);

	printf("Informe o terceiro valor: ");
	scanf("%d",&c);
	fflush(stdin);

	if (a + b > c &&
		a + c > b &&
		b + c > a) {
 
	s = ((a + b + c) / 2.0);
    area = sqrtf((s * (s - a)) * (s - b) * (s - c));
    printf("A area do triangulo e %f", area);
	}
	else
		printf("Os valores: %d, %d, %d nao formam um triangulo.",a,b,c);
	getchar();
}


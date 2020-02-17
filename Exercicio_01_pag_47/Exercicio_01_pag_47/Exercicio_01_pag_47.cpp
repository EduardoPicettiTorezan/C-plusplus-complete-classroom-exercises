// Exercicio_01_pag_47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


void main() {
	short a,b,c,soma;

	a = b = c = soma = 0;

	while(true){

		printf("Informe o valor de a: ");
		scanf("%hd", &a);
		fflush(stdin);
		
		if (a == -1)
			exit(-1);

		do {
			printf("Informe o valor de b: ");
			scanf("%hd", &b);
			fflush(stdin);

			if (b <= a)
				printf("Valor deve ser maior que : %hd", a);

		}while(b <= a);
		
		do{
			printf("Informe o valor de c: ");
			scanf("%hd", &c);
			fflush(stdin);

			if (c <= 0)
				printf("Valor deve ser maior que zero.");

		}while(c <= 0);

		printf("soma=");
		soma = a;

		do{
			if (a != soma)
			   printf("+");

			printf("%hd",a);

			a = a + c;
			soma = soma + a;
		}while (a + c < b);
       printf("=%hd\n",soma);
	}
}


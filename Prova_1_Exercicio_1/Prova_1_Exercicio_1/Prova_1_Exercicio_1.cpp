// Prova_1_Exercicio_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

void main () {
	char c_nom_cliente[30], c_cont;
	float f_peso = 0.00, f_valor_total;

	strcpy(c_nom_cliente , "");
	f_peso = 0.00;
	c_cont = ' ';

	while(true){

		f_valor_total = 0.00;

		do{
			printf("Nome do cliente: ");
			gets(c_nom_cliente);
			fflush(stdin);

			if (c_nom_cliente == "")
				printf("\nNome do cliente deve ser informado.\n");

		}while (c_nom_cliente == "");

		while(true){
			do{
				printf("Informe o peso: ");
				scanf("%f", &f_peso);
				fflush(stdin);

				if (f_peso <= 0.00)
					printf("\nPeso do envelope deve ser maior que zero.\n");

			}while(f_peso <= 0.00);

			if (f_peso <= 1.00)
				f_valor_total = f_valor_total + 0.25;
			else if (f_peso <= 2.00)
				f_valor_total = f_valor_total + 0.45;
			else if (f_peso <= 3.00)
				f_valor_total = f_valor_total + 0.71;
			else if (f_peso <= 4.00)
				f_valor_total = f_valor_total + 0.92;
			else if (f_peso <= 5.00)
				f_valor_total = f_valor_total + 1.13;
			else
				f_valor_total = f_valor_total + 1.52;
			

			do{
				printf("Deseja incluir mais algum envelope? (s/n)");
				c_cont = getchar();
				fflush(stdin);

				if (c_cont != 's' && c_cont != 'n')
					printf("Valor informado deve ser igual a 's' ou 'n'");

			}while(c_cont != 's' && c_cont != 'n');

			if (c_cont == 'n')
				break;
		}

		printf("\nVALOR A SER PAGO: R$ %.2f \n\n", f_valor_total);
		
		c_cont = ' ';
		do{
			printf("Deseja efetuar o calculo para mais algum cliente? (s/n)");
			c_cont = getchar();
			fflush(stdin);

			if (c_cont != 's' && c_cont != 'n')
				printf("\nValor informado deve ser igual a 's' ou 'n'\n");

		}while(c_cont != 's' && c_cont != 'n');

		if (c_cont == 'n')
			exit(-1);
	}

	getchar();
}

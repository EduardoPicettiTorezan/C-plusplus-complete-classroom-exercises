// Prova_1_Exercicio_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"


void main() {
	char c_nom_ed[30], c_cont = ' ';
	float f_total_agua, f_valor, f_valor_minimo, f_valor_total;
	short s_num_ap;

	strcpy(c_nom_ed, "");
	f_total_agua = f_valor = f_valor_total = 0.00;
	s_num_ap = 0;
	f_valor_minimo = 10.00;

	while(true){

		do{
			printf("Informe o nome do edificio: ");
			gets(c_nom_ed);
			fflush(stdin);

			if (c_nom_ed == "")
				printf("\nNome do edificio deve ser informado.\n");

		} while(c_nom_ed == "");

		do{
			printf("Informe o consumo total de agua em m3: ");
			scanf("%f", &f_total_agua);
			fflush(stdin);

			if (f_total_agua <= 0.00)
				printf("\nConsumo total de agua deve ser maior que zero.\n");

		} while(f_total_agua <= 0.00);

		do{
			printf("Informe o numero total de apartamentos: ");
			scanf("%hd", &s_num_ap);
			fflush(stdin);

			if (s_num_ap <= 0)
				printf("\nNumero total de apartamentos informado deve ser maior que zero.\n");

		} while(s_num_ap <= 0);

		do{
			printf("Informe o valor em Reais do metro cubico de agua: ");
			scanf("%f", &f_valor);
			fflush(stdin);

			if (f_valor <= 0.00)
				printf("\nConsumo total de agua deve ser maior que zero.\n");

		} while(f_valor <= 0.00);

		printf("\n\nNome do edificio: %s", c_nom_ed);
		printf("\nConsumo total de agua: %.4f", f_total_agua);
		printf("\nNumero total de apartamentos: %hd", s_num_ap);
		printf("\nValor em metros cubicos de agua: %.2f \n\n", f_valor);

		printf("O edificio %s possui %hd apartamentos, consumo total de %.4f metros cubicos de\n", c_nom_ed, s_num_ap, f_total_agua);
		f_valor_total = f_total_agua * f_valor;
		printf("agua, valor total de consumo R$ %.2f e o valor rateado para cada\n", f_valor_total);
		if ((f_total_agua / s_num_ap) >= f_valor_minimo)
		    f_valor = f_valor_total / s_num_ap;
		else
			f_valor = f_valor_minimo * f_valor;
		printf("apartamento e de R$ %.2f .\n\n", f_valor);

		c_cont = ' ';
		do{
			printf("Deseja efetuar o calculo para mais edificos?: (s/n)");
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


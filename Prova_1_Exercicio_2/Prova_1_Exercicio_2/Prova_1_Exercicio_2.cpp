// Prova_1_Exercicio_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"


void main() {
	char c_nom_ed[30], c_cont = ' ';
	float f_total_agua, f_valor;
	short s_num_ap;

	strcpy(c_nom_ed, "");
	f_total_agua = f_valor = 0.00;
	s_num_ap = 0;

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
		printf("Consumo total de agua: %f", f_total_agua);
		printf("Numero total de apartamentos: %hd", s_num_ap);
		printf("Valor em m� de agua: %f \n\n", f_valor);

		
	}

}


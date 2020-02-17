// Exercicio_07_set_04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	char s_nom_ed[30];
	float f_con_tot_agua = 0.00, f_valor_mcub = 0.00, f_total = 0.00;
	short s_num_ap = 0;

	printf("Informe o nome do edificio: ");
	gets(s_nom_ed);

	printf("Informe o total consumido de agua: ");
	scanf("%f", &f_con_tot_agua);
	fflush(stdin);

	printf("Informe o numero de apartamentos: ");
	scanf("%hd", &s_num_ap);
	fflush(stdin);

	printf("Informe o valor do metro cubico: ");
	scanf("%f", &f_valor_mcub);
	fflush(stdin);

    f_total = f_con_tot_agua * f_valor_mcub;

	printf("Edificio %s", s_nom_ed);
	printf("\nValor por apartamento %f", (f_total / s_num_ap));
	printf("\nValor total %f", f_total);
    getchar();

}


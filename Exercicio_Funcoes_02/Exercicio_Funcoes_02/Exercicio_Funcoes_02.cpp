// Exercicio_Funcoes_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

float cels_fahr(float);
float fahr_cels(float);
float atrib_temp(void);

void main(){
	unsigned short us_op = 0;
	float f_temp = 0.00;
	bool b_inf_temp = false;
	
	while(true){
		printf("1-Digitar temperatura\n");
		printf("2-Converter de Celsius para Fahrenheit\n");
		printf("3-Converter de Fahrenheit para Celsius\n");
		printf("4-Encerrar\n");

		do {
			printf("Informe a opcao desejada: ");
			scanf("%hd", &us_op);
			fflush(stdin);

			if ((us_op < 1) || (us_op > 4)) {
				printf("Opcao informada invalida.\n");
				us_op = 0;
			};

			if (((us_op == 2) || (us_op == 3)) && (b_inf_temp == false)) {
				printf("Temperatura deve ser informada.\n");
				us_op = 0;
			};

		} while (us_op == 0);

		switch(us_op){
			case 1: f_temp = atrib_temp();
					b_inf_temp = true;
					break;
			case 2: printf("\nValor convertido para Fahrenheit: %f\n", cels_fahr(f_temp));
					b_inf_temp = false;
				    break;
			case 3: printf("\nValor convertido para Celsius: %f\n", fahr_cels(f_temp));
					b_inf_temp = false;
				    break;
			default: exit(-1);
		};
	};

	printf("\nPrograma finalizado.");

	getchar();	
}

float cels_fahr(float f_cels){

	return ((1.8 * f_cels) + 32);
};

float fahr_cels(float f_fahr){

	return ((f_fahr - 32) / 1.8);
};

float atrib_temp(){
	float f_temp = 0.00;

	printf("\nInforme a temperatura: ");
	scanf("%f", &f_temp);
	fflush(stdin);

	return f_temp;
};
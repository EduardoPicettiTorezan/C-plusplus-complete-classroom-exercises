// Exercicio_Funcoes_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

int consiste_data(int, int, int);
int data_nrodia  (int, int, int);
void atrib_data   (void);

unsigned short gi_dia, gi_mes, gi_ano;

void main () {
	unsigned short us_op;
	bool b_inf_data = false;

	gi_dia = gi_mes = gi_ano = us_op = 0;

	while(true){

		printf("1-Entrada de dados\n");
		printf("2-Verificação da validade\n");
		printf("3-Retorno do número do dia no ano\n");
		printf("4-Encerrar\n");

		do {
			printf("Informe a opcao desejada: ");
			scanf("%hd", &us_op);
			fflush(stdin);

			if ((us_op < 1) || (us_op > 4)) {
				printf("Opcao informada invalida.\n");
				us_op = 0;
			};

			if (((us_op == 2) || (us_op == 3)) && (b_inf_data == false)) {
				printf("Data deve ser informada.\n");
				us_op = 0;
			};

		} while (us_op == 0);

		switch(us_op){
			case 1: atrib_data();
					b_inf_data = true;
					break;
			case 2: printf("\nData informada %s.\n", (consiste_data(gi_dia, gi_mes, gi_ano) == 1? "valida" : "invalida"));
					b_inf_data = (consiste_data(gi_dia, gi_mes, gi_ano) == 1? true : false);
					break;
			case 3: printf("\nDia no ano informado: %d\n", data_nrodia(gi_dia, gi_mes, gi_ano));
					b_inf_data = false;
				    break;
			default: exit(-1);
		};
	};

	printf("\nPrograma finalizado.");

	getchar();	
}

int consiste_data(int i_dia, int i_mes, int i_ano){
	int i_ult_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	if ((i_ano % 4 == 0) && (!(i_ano % 100 == 0) || (i_ano % 400 == 0)))
		i_ult_mes[2] = 29;

	if ((i_ano < 1) ||
	    (i_mes < 1) ||
	    (i_mes > 12) ||
	    (i_dia < 1) ||
	    (i_dia > i_ult_mes[i_mes - 1]))
	   return 0;
	else
		return 1;
};

int data_nrodia(int i_dia, int i_mes, int i_ano){
	unsigned short us_conta_mes = 0, us_conta_dias = 0;
	int i_ult_mes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	if ((i_ano % 4 == 0) && (!(i_ano % 100 == 0) || (i_ano % 400 == 0)))
		i_ult_mes[2] = 29;

	for (us_conta_mes = 1; us_conta_mes < i_mes; us_conta_mes++) {
		us_conta_dias = us_conta_dias + i_ult_mes[us_conta_mes - 1];
	};

	us_conta_dias = us_conta_dias + i_dia;

	return us_conta_dias;
};
void atrib_data(void){

	printf("Informe o dia: ");
	scanf("%hd", &gi_dia);
	fflush(stdin);

	printf("Informe o mes: ");
	scanf("%hd", &gi_mes);
	fflush(stdin);

	printf("Informe o ano: ");
	scanf("%hd", &gi_ano);
	fflush(stdin);
};
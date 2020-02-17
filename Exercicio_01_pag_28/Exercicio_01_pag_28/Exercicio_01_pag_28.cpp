// Exercicio_01_pag_28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main (){
	unsigned short us_num_func = 0;
	float f_qtd_horas_trab = 0.00, f_valor_hora = 0.00;
	char c_sexo;

	printf("Informe o numero do funcionario: ");
	scanf("%hd",&us_num_func);
	fflush(stdin);

	printf("\nInforme o a quantidade de horas trabalhadas: ");
	scanf("%f",&f_qtd_horas_trab);
	fflush(stdin);

	printf("\nInforme o valor por hora: ");
	scanf("%f",&f_valor_hora);
	fflush(stdin);

	printf("\nInforme o sexo do funcionario: ");
	c_sexo = getchar();
	fflush(stdin);
    
	float f_salario = 0.00;
	f_salario = (f_qtd_horas_trab * f_valor_hora);

	printf("O funcionario numero %hd , do sexo %c possui salario %.2f .",us_num_func,c_sexo,f_salario);
	getchar();
}


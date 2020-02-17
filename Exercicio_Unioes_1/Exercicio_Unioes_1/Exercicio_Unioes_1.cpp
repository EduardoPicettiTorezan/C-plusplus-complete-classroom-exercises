// Exercicio_Unioes_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
#include "iostream"

enum tipo_numero {LONG, DOUBLE};

typedef union  {
	long l_valor;
	double d_valor;
}valor_numero;

typedef struct  {
	tipo_numero tipo;
	valor_numero valor;
}NUMERO;

NUMERO le_numero();
int busca_char(char* s_string, char c_enc, int qtd);
void escreve_numero(NUMERO num);
NUMERO soma_numeros(NUMERO num1, NUMERO num2);
NUMERO sub_numeros(NUMERO num1, NUMERO num2);
NUMERO mult_numeros(NUMERO num1, NUMERO num2);
NUMERO div_numeros(NUMERO num1, NUMERO num2);


void main(){
	NUMERO num, num1, num2;
	char c_oper = ' ';
	unsigned short us_conta = 0;

	do{
		if (us_conta >= 2)
			us_conta = 0;

		us_conta++;

		if (us_conta >= 2) {
			num2 = le_numero();

			if (c_oper == '+') {
				num = soma_numeros(num1, num2);
			}
			else if (c_oper == '-') {
				num = sub_numeros(num1, num2);
			}
			else if (c_oper == '*') {
				num = mult_numeros(num1, num2);
			}
			else if (c_oper == '/') {
				num = div_numeros(num1, num2);
			};
		
			escreve_numero(num);
		}
		else{
			num1 = le_numero();
			do{
				printf("Informe o operador(+ - * / f): ");
				c_oper = getchar();
				fflush(stdin);

				if ((c_oper != '+') &&
					(c_oper != '-') &&
					(c_oper != '*') &&
					(c_oper != '/') &&
					(c_oper != 'f') ) {
					printf("Operador informado invalido.\n");
					c_oper = ' ';
				}
				else {
					if (c_oper == 'f')
						exit(-1);
				};
			}while(c_oper == ' ');
		};
		
	}while(c_oper != 'f');
	
	getchar();
}

int busca_char(char* s_string, char c_enc, int qtd){
	unsigned short us_conta = 0, us_pos = 0;
	char c_conta = ' ';

	for(us_conta = 0; us_conta <= qtd; us_conta++){
		c_conta = s_string[us_conta];

		if ((us_pos == 0) &&
			(c_conta == c_enc)){
			us_pos = us_conta;
			};
	};

	return(us_pos);
};

NUMERO le_numero(){
	char s_numero[30] = " ", s_temp1[30] = " ", s_temp2[30] = " ";
	NUMERO num_leit;
	double d_temp1 = 0;
	int i_temp1 = 0, i_temp2 = 0, i_conta = 0;
	char * pEnd = " ";

	printf("Informe o numero a ser calculado: ");
	gets(s_numero);
	fflush(stdin);

	i_temp2 = busca_char(s_numero, 'E', 30);
	if  (i_temp2 > 0){
		
		//Obter numero decimal
		for (i_conta = 0; i_conta < i_temp2; i_conta++){
			s_temp1[i_conta] = s_numero[i_conta];
		};

		//Obter numero inteiro
		for (i_conta = i_temp2 + 1; s_numero[i_conta] != '\0'; i_conta++){
			s_temp2[i_conta] = s_numero[i_conta];
		};

		num_leit.tipo  = DOUBLE;
		d_temp1		   = strtod(s_temp1, NULL);
		i_temp1		   = strtol(s_temp2, NULL, 0);
		num_leit.valor.d_valor = pow(d_temp1, i_temp1);
	}
	else if (busca_char(s_numero, '.', 30) > 0) {
		num_leit.tipo  = DOUBLE;
		num_leit.valor.d_valor = strtod(s_numero, NULL);
	}
	else {
		num_leit.tipo  = LONG;
		num_leit.valor.l_valor = strtol(s_numero, NULL, 0);
		};

	return(num_leit);
};

void escreve_numero(NUMERO num){

	printf("Resultado: ");

	if (num.tipo == LONG){
		printf("%d\n", num.valor.l_valor);
	}
	else if (num.tipo == DOUBLE){
		printf("%f\n", num.valor.d_valor);
	};
};

NUMERO soma_numeros(NUMERO num1, NUMERO num2){

	if ((num1.tipo == DOUBLE) ||
		(num2.tipo == DOUBLE)) {
			num1.tipo = DOUBLE;
			num1.valor.d_valor = num1.valor.d_valor + num2.valor.d_valor;
	}
	else {
		num1.tipo = LONG;
		num1.valor.l_valor = num1.valor.l_valor + num2.valor.l_valor;
	};

	return(num1);

};
NUMERO sub_numeros(NUMERO num1, NUMERO num2){

	if ((num1.tipo == DOUBLE) ||
		(num2.tipo == DOUBLE)) {
			num1.tipo = DOUBLE;
			num1.valor.d_valor = num1.valor.d_valor - num2.valor.d_valor;
	}
	else {
		num1.tipo = LONG;
		num1.valor.l_valor = num1.valor.l_valor - num2.valor.l_valor;
	};

	return(num1);
};
NUMERO mult_numeros(NUMERO num1, NUMERO num2){
	
	if ((num1.tipo == DOUBLE) ||
		(num2.tipo == DOUBLE)) {
			num1.tipo = DOUBLE;
			num1.valor.d_valor = num1.valor.d_valor * num2.valor.d_valor;
	}
	else {
		num1.tipo = LONG;
		num1.valor.l_valor = num1.valor.l_valor * num2.valor.l_valor;
	};

	return(num1);
};
NUMERO div_numeros(NUMERO num1, NUMERO num2){
	
	if ((num1.tipo == DOUBLE) ||
		(num2.tipo == DOUBLE)) {
			num1.tipo = DOUBLE;
			num1.valor.d_valor = num1.valor.d_valor / num2.valor.d_valor;
	}
	else {
		num1.tipo = LONG;
		num1.valor.l_valor = num1.valor.l_valor / num2.valor.l_valor;
	};

	return(num1);
};
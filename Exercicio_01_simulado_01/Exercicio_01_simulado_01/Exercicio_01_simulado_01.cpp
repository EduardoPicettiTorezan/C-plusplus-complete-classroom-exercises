// Exercicio_01_simulado_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include <string.h>


void main(){
  short s_conta_mes = 1, s_conta = 0;
  float f_valor = 0.00, f_total, f_media, f_valor_paulo, f_valor_pedro, f_valor_plinio;
  char c_nome[30];

  f_valor_paulo = f_valor_pedro = f_valor_plinio = 0.00;

  while(true){

	f_total = f_media = 0.00;

	printf("\n\nMes: %hd.",s_conta_mes);

	do{
		switch(s_conta){
			case 0: strcpy(c_nome , "Paulo");
				    break;
			case 1: strcpy(c_nome , "Pedro");
				    break;
			case 2: strcpy(c_nome , "Plinio");
					break;
		}

		do{
			printf("\nInforme o valor pago pelo %s: ",c_nome);
			scanf("%f",&f_valor);
			fflush(stdin);

			if (f_valor <= 0.00)
				printf("\nValor informado deve ser maior que zero.");

		}while(f_valor <= 0.00);

		s_conta++;

		switch(s_conta){
			case 0: f_valor_paulo  = f_valor;
				    break;
			case 1: f_valor_pedro  = f_valor;
				    break;
			case 2: f_valor_plinio = f_valor;
				    break;
		}

		f_total = f_total + f_valor;

	}while(s_conta <= 2);

	f_media = (f_total / s_conta);

	s_conta = 1;
	do{
		switch(s_conta){
			case 1: strcpy(c_nome, "Paulo");
				    f_valor = f_valor_paulo - f_media;
				    break;
			case 2: strcpy(c_nome, "Pedro");
					f_valor = f_valor_pedro - f_media;
				    break;
			case 3: strcpy(c_nome, "Plinio");
					f_valor = f_valor_plinio - f_media;
				    break;
		}

		printf("\n%s tem R$ %.2f a %s", c_nome, f_valor,(f_valor < 0 ? "pagar" : "receber"));

		s_conta++;

	}while(s_conta <= 3);

	printf("\nDeseja realizar mais algum calculo? (S/N)");
	if (getchar() != 'S')
		exit(-1);
	else
		fflush(stdin);

	s_conta_mes++;
  };

getchar();

}


// Exercicio_02_pag_45.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	short s_termo_ordem = 0, s_sucessao = 0, s_conta = 0;
	char c_cont;

	c_cont = 'S';
	while (c_cont = 'S'){
		printf("Informe o termo de ordem: ");
		scanf("%hd", &s_termo_ordem);
		fflush(stdin);

		s_sucessao = -9;
		s_conta = 1;
		
		while(s_conta < s_termo_ordem){
			if (s_conta % 2 == 0)
				s_sucessao = s_sucessao + 2;
			else
				s_sucessao = s_sucessao + 6;
			s_conta++;
	    } 
	
		printf("\nSucessao: %hd", s_sucessao);

		do {
			printf("\nDeseja continuar? (S/N).");
			c_cont = getchar();
			fflush(stdin);

			if ((c_cont != 'S') && (c_cont != 'N')){
				printf("\nInforme 'S' para continuar ou 'N' para parar.");
				c_cont = 'E';
			}

		} while ((c_cont != 'S') && (c_cont != 'N'));
	}

	getchar();
}
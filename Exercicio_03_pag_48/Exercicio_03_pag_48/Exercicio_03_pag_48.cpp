// Exercicio_03_pag_48.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void main(){
	short s_num, s_ini, s_fin, s_conta = 1,s_random;

	s_num = s_ini = s_fin = 0;

	while (true) {
		if (s_conta == 1){
			s_ini = 01;
			s_fin = 20;
		}
		else {
			if (s_num > s_random){
			s_ini = s_num + 1;
			s_fin = s_fin;
			}
			else {
				s_ini = s_ini;
				s_fin = s_num - 1;
			}

		}

		s_random = rand() % (s_fin - s_ini) + s_ini;
		s_conta++;

		do{
			printf("\nInforme um valor entre %hd e %hd: ", s_ini, s_fin);
			scanf("%hd", &s_num);
			fflush(stdin);

			if (s_num < s_ini) || (s_num > s_fin) {
				printf("\nInforme um valor entre %hd e %hd: ", s_ini, s_fin);
		}while (s_num < s_ini) || (s_num > s_fin);

		printf("\nPalpite: %hd", s_num);

		if (s_num == s_random){
			printf("\nParabens, voce acertou em %hd tentativas", s_conta);
			printf("\nJogar novamente? (s/n)");
			if (getchar() != 's')
			   exit(-1);
		}

	}
	getchar();
}


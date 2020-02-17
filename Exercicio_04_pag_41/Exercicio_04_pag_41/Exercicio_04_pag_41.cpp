// Exercicio_04_pag_41.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main() {
	short i_hora_ini, i_min_ini, i_hora_fin, i_min_fin, i_tempo;

	i_hora_ini = i_min_ini = i_hora_fin = i_min_fin = 0;

	printf("Informe a hora inicial: ");
	scanf("%hd", &i_hora_ini);
	fflush(stdin);

	printf("Informe o minuto inicial: ");
	scanf("%hd", &i_min_ini);
	fflush(stdin);

	printf("Informe a hora final: ");
	scanf("%hd", &i_hora_fin);
	fflush(stdin);

	printf("Informe o minuto final: ");
	scanf("%hd", &i_min_fin);
	fflush(stdin);

	i_min_ini = i_min_ini + (i_hora_ini * 60);
	i_min_fin = i_min_fin + (i_hora_fin * 60);

	if (i_min_fin < i_min_ini)
		i_min_fin = i_min_fin + (24 * 60);

	i_tempo = i_min_fin - i_min_ini;
	i_hora_fin = int(i_tempo / 60);
	i_min_fin = i_tempo - (i_hora_fin * 60);

	printf("O jogo durou %d horas e %hd minutos.", i_hora_fin, i_min_fin);
	getchar();

}


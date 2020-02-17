// Exercicio_07_Set_01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	short s_hora = 0, s_minuto = 0;

	printf("Informe a hora: ");
	scanf("%hd", &s_hora);
	fflush(stdin);

	printf("Informe os minutos: ");
	scanf("%hd", &s_minuto);
	fflush(stdin);

	printf("%hd minutos.",(s_hora * 60 + s_minuto));
	getchar();
}


// Exercicio_01_pag_66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>

void main () {
	char s_nome[100], s_temp[3];
	char s_ant = ' ';
	unsigned short us_conta = 0;

	printf("Informe o nome caralho da porra: ");
	gets(s_nome);
	fflush(stdin);

	strupr(s_nome);

	for(us_conta == 0; us_conta <= strlen(s_nome); us_conta++){

		strcpy_s(s_nome[us_conta], s_temp);

		if ((s_ant == ' ') &&
			!stricmp(strcat(s_temp,s_nome[us_conta + 1]),"DE") &&
			!stricmp(strcat(s_temp,s_nome[us_conta + 1]),"DO") &&
			!stricmp(strcat(s_temp,s_nome[us_conta + 1]),"DA"))
			printf("%s.", s_nome[us_conta]);

		s_ant = s_nome[us_conta];
	};

	getchar();
}


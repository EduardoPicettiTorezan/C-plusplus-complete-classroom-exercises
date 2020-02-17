// Excercicio_04_pag_66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <ctype.h>

void main() {
	char* s_frase, s_vog, s_cons;

	unsigned char us_conta = 0;

	printf("Informe a frase: ");
	gets(s_frase);
	fflush(stdin);

	for(us_conta = 0; us_conta <= strleng(s_frase); us_conta++){

		if ((toupper(s_frase[us_conta] == "A")) ||
			(toupper(s_frase[us_conta] == "E")) ||
			(toupper(s_frase[us_conta] == "I")) ||
			(toupper(s_frase[us_conta] == "O")) ||
			(toupper(s_frase[us_conta] == "U")))
			strcat_s(s_frase[us_conta], s_vog);
		else if (s_frase[us_conta] != " ")
			strcat_s(s_frase[us_conta], s_cons);

	};

	printf("Vogais %s.\n", s_vog);
	printf("Consoates %s.\n", s_cons);


	getchar();
}


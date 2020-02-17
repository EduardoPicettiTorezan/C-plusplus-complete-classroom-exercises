// Exercicio_03_pag_66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <ctype.h>


void main() {
	char* s_frase;

	unsigned char us_branco = 0, us_vogais = 0, us_cons = 0, us_dig = 0;

	printf("Informe a frase: ");
	gets(s_frase);
	fflush(stdin);

	for(us_conta = 0; s_frase[us_conta] != '\n'; us_conta++){

		if (isdigit(s_frase[us_conta])
			us_numero++;
		else if (isalpha(s_frase[us_conta])) {
			else if ((toupper(s_frase[us_conta] == "A")) ||
						(toupper(s_frase[us_conta] == "E")) ||
						(toupper(s_frase[us_conta] == "I")) ||
						(toupper(s_frase[us_conta] == "O")) ||
						(toupper(s_frase[us_conta] == "U")))
				us_vogais++;
			else
		}
		if (s_frase[us_conta] == " ")
			us_branco++;

	};

	printf("Frase contem: \n");
	printf("%hd espacos em branco.\n", us_branco);
	printf("%hd vogais.\n", us_vogais);
	printf("%hd consoantes.\n", us_cons);
	printf("%hd caracteres.\n", strlen(s_frase));


	getchar();
}


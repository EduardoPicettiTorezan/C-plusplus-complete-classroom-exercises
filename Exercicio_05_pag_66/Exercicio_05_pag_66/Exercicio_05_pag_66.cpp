// Exercicio_05_pag_66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main() {
	char s_frase[21], s_dest[21];

	unsigned char us_conta = 0;

	printf("Informe a frase: ");
	gets(s_frase);
	fflush(stdin);

	for(us_conta = 0; us_conta <= strleng(s_frase); us_conta++){
 
		if (s_frase[us_conta] != "\0")
		   s_dest[strleng(s_frase) - us_conta] = s_frase[us_conta];

	};

	printf("Palavra informada %s palindromo.", (strcomp(s_frase,s_dest) == 0 ? "e" :  "nao e "));

	getchar();
}


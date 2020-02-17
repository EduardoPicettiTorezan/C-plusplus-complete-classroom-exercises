// Exercicio_02_pag_66.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <string.h>


void main() {
	char s_pal1[20], s_pal2[20];
	unsigned char us_tamanho;

	printf("Informe a primeira palavra: ");
	gets(s_pal1);
	fflush(stdin);

	printf("Informe a segunda palavra: ");
	gets(s_pal2);
	fflush(stdin);

	us_tamanho = strcmp(s_pal1,s_pal2);

		printf("As palavras informadas são %s.\n",(us_tamanho == 0 ? "iguais" : "diferentes"));

		if (us_tamanho < 0)
			printf("A segunda palava e maior.");
	    else if (us_tamanho > 0)
    		printf("A primeira palava e maior.");
  
us_tamanho = stricmp(s_pal1,s_pal2);
   if(us_tamanho == 0)
     printf("\nAs strings sao iguais, desconsiderando caixa de texto\n");


	getchar();
}


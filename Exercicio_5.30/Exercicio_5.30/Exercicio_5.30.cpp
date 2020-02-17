// exercicio 5.30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"


int pertence(char x[], char M[30][30], int n) {
	int l;
	for(l=0; l<=n; l++)
		if (strcmp(x,M[l]) ==0)
			return l;

	return -1;
}

void main()
{
	char mat [15] [30] = {"pedro","bino","texugo","gordinho","vini","putas","ze","joao","adenair","josecleidson","jaspio","daileon","shurato","xuxa",};
	char nome[30];
	printf("Digite o nome do convidado:");
	gets(nome);
	fflush(stdin);

	int pos= pertence(nome,mat,15);
	if (pos!= -1)
		printf("convidade encontrado: %d",pos);
	else
		printf ("banido");
	getchar();


}


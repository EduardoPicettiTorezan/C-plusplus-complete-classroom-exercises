// Exercio_Produto_Matricial_Pag_53.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"

void main()
{
	int a[2][3] = {{13,18,20},{2,3,4}};
	int b[3][2] = {{12,6},{24,12},{12,9}};
	int t[2][2];
	int soma = 0, l, c, x;

	for(l=0; l<2; l++)
		for(c=0; c<2; c++){
			soma = 0;
			for(x=0; x<3; x++)
				soma +=  a[l][x] * b[x][c];
			t[l][c] = soma;
		}

	for(l = 0; l < 2; l++){
		printf("\n");
		for(c = 0; c < 2; c++)
			printf("%d ",t[l][c]);
	}
	getchar();
}
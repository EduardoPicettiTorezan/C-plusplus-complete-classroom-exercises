// ExemplosGerais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int selmin(int v[], int i, int n) {
	int j, k=i;
	for(j=i+1; j<n; j++)
		if( v[k]>v[j] )
			k=j;
	return k;
}

void selecao(char v[10][10], int n) {
	int i, k, x;
	printf("%d\n",
	for(i=0; i<n-1; i++) {
		k = selmin(v,i,n);
		x = v[i];
		v[i] = v[k];
		v[k] = x;
	}
}

void mostra(char v[10][10], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n",v[i]);
}


void main()
{
	char vet[10][10] = {"Eduardo","Edu","Dudu","Texugo","Gordinho","Vini","Vinicius","Java","Delphi","Cafe"};

	selecao(vet,10);

	mostra(vet,10);


	getchar();
}


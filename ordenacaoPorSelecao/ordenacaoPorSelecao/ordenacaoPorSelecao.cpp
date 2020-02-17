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

void selecao(int v[], int n) {
	int i, k, x;

	printf("%d\n",

	for(i=0; i<n-1; i++) {
		k = selmin(v,i,n);
		x = v[i];
		v[i] = v[k];
		v[k] = x;
	}
}

void mostra(int v[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n",v[i]);
}


void main()
{
	int vet[10] = {3,12,15,33,68,41,79,44,88,70};

	selecao(vet,10);

	mostra(vet,10);


	getchar();
}


// ExemplosGerais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

void trocas(int v[], int n) {
	bool ordenado;
	int j;

	do{
		ordenado = true;
		n--;
		printf("%d\n",n);
		for(j=0; j<n; j++)
			if( v[j]>v[j+1] ) {
				int x = v[j];
				v[j] = v[j+1];
				v[j+1] = x;
				ordenado = false;
			}
	}while(!ordenado);
}

void mostra(int v[], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d\n",v[i]);
}


void main()
{
	int vet[10] = {3,12,15,33,68,41,79,44,88,70};

	trocas(vet,10);

	mostra(vet,10);
	

	getchar();
}


// ExemplosGerais.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

void trocas(char v[10][10], int n);
void mostra(char v[10][10], int n);

void main(){
	//
	char vet[10][10] = {"Eduardo","Edu","Dudu","Texugo","Gordinho","Vini","Vinicius","Java","Delphi","Cafe"};

	trocas(vet,10);

	mostra(vet,10);


	getchar();
}

void trocas(char v[10][10], int n) {
	bool ordenado;
	int j = 0;
	int s = 0;
	char x[10];

	do{
		ordenado = true;
		n--;

		for(j=0; j<n; j++) {

			s = strcmp( v[j], v[j+1] );

			if ( s > 1 ) {
				strcpy(x, v[j]);
				strcpy(v[j], v[j+1]);
				strcpy(v[j+1], x);
				ordenado = false;
			};
			};
	}while(!ordenado);
}

void mostra(char v[10][10], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%s\n", v[i]);
	};
}

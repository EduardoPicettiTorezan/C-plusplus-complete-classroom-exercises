// Exercicio_7.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void carrega(float *v,int n);

void main(){
	float v ;

	carrega (&v, 5);

	getchar();
}

void carrega(float *v,int n){
	int i = 0;


	for(i = 0; i < n; i ++){
		printf("Informe o valor: ");
		scanf("%f", (v + i));
		fflush(stdin);
	};

	
};
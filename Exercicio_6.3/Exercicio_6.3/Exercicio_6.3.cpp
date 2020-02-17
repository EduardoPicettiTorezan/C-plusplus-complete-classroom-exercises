// Exercicio_6.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "math.h"

typedef struct {
		float fCordx;
		float fCordy;
		} Cordenada;	

void main(){
	Cordenada Cordenada1, Cordenada2;
	unsigned short us_conta = 0;
    
	printf("Informe as cordenadas de X para o ponto 1: ");
	scanf("%f", &Cordenada1.fCordx);
	fflush(stdin);
	
	printf("Informe as cordenadas de Y para o ponto 1: ");
	scanf("%f", &Cordenada1.fCordy);
	fflush(stdin);

	printf("Informe as cordenadas de X para o ponto 2: ");
	scanf("%f", &Cordenada2.fCordx);
	fflush(stdin);
	
	printf("Informe as cordenadas de Y para o ponto 2: ");
	scanf("%f", &Cordenada2.fCordy);
	fflush(stdin);

	printf("Distancia: %f", sqrt(pow((Cordenada2.fCordx - Cordenada1.fCordx),2) + pow((Cordenada2.fCordy - Cordenada1.fCordy),2)));

	getchar();

};
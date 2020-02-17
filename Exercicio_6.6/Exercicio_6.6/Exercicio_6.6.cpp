// Exercicio_6.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct {
	float posicao;
} PONTO;

void main(){
	PONTO pontopx, pontopy, pontoqx, pontoqy;

	pontopx.posicao = 12;
	pontopy.posicao = 13;
	pontoqx.posicao = 25;
	pontoqy.posicao = 42;

	printf("Calculo bizarro e sem sentido: %f", (pontopx.posicao + pontopy.posicao + pontoqx.posicao + pontoqy.posicao));

	getchar();
}


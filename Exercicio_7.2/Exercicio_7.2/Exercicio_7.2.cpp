// Exercicio_7.2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//necessario definir parametros a b com * para que possa receber o enderecedo de seus argumentos
void minimax(float v[10],int n,float *a, float *b){
	int i = 0;
	float ta = 0.0, tb = 0.0;

	//navega na quantidade de valores informados no vetor
	for (i = 0; i < n; i++){
		//se o valor encontrado na lista for menor que o valor existem em ta, ou ta for igual o inicial (0)
		if ((ta > v[i]) || (ta == 0.0))
			ta = v[i];
		//se o valor de tb for menor que o atual
		if (tb < v[i])
			tb = v[i];
	};
	//armazena o valor nor enderecos de origem
	*a = ta;
	*b = tb;
};


void main(){
	float v[10] = { 1.0, 2.55, 3.87, 0.87, 87.97, 45.65, 78.41, 110.1, 112.2, 113.3}, n = 10;
	float a = 0.0, b = 0.0;

	//a e b são passados como referencias
	minimax (v, n, &a, &b);

	printf("\nValor minimo: %f", a);
	printf("\nValor maximo: %f", b);

	getchar();
}




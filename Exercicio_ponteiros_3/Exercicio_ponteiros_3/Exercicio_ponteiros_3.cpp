// 3) (incremento de ponteiros) Fazer um programa para:
// a) declarar vari�veis a, b, c, d do tipo int.
// b) a partir do %p e %d, mostrar o endere�o e o conte�do de cada vari�vel.
// c) criar um ponteiro pont apontando para o endere�o da vari�vel de menor endere�o.
// d) a partir do %p e %d, mostrar o endere�o e o conte�do do ponteiro pont.
// e) incrementar o ponteiro, mostrando novamente o conte�do e endere�o, verificando se 
//    o incremento coincide com o endere�o de alguma outra vari�vel.

#include "stdafx.h"

void main()
{
	int d=14,c=19,a=10,b=7,i=0;
	int *pont;

	printf("Endereco A: %p   Valor: %d \n", &a,a);
	printf("Endereco B: %p   Valor: %d \n", &b,b);
	printf("Endereco C: %p   Valor: %d \n", &c,c);
	printf("Endereco D: %p   Valor: %d \n", &d,d);

	getchar();

	pont=&a;
	if(pont > &b)
		pont = &b;
	if(pont > &c)
		pont = &c;
	if(pont > &d)
		pont = &d;

	printf("\n  O menor endereco das variaveis e: %p que tem o valor :%d",pont,*pont);
	//incrementar o ponteiro, mostrando novamente o conte�do e endere�o, 
	//verificando se o incremento coincide com o endere�o de alguma outra vari�vel.
	
	do{
	pont++;
	printf("\n  Novo endereco de PONT: %p que tem o valor :%d",pont,*pont);
	i++;
	if (pont == &a || pont == &b || pont == &c || pont == &d)
		printf("  -- ACHOU IGUAL");
	else
		printf("  ++ Nao achou");
	}while (i<10);


	getchar();
}

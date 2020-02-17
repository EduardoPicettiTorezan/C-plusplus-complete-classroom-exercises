// 3) (incremento de ponteiros) Fazer um programa para:
// a) declarar variáveis a, b, c, d do tipo int.
// b) a partir do %p e %d, mostrar o endereço e o conteúdo de cada variável.
// c) criar um ponteiro pont apontando para o endereço da variável de menor endereço.
// d) a partir do %p e %d, mostrar o endereço e o conteúdo do ponteiro pont.
// e) incrementar o ponteiro, mostrando novamente o conteúdo e endereço, verificando se 
//    o incremento coincide com o endereço de alguma outra variável.

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
	//incrementar o ponteiro, mostrando novamente o conteúdo e endereço, 
	//verificando se o incremento coincide com o endereço de alguma outra variável.
	
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

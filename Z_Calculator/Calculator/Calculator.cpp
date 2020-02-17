
// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>

enum tipo_numero {LONG, DOUBLE};

//uniao com as definições de valores possiveis
typedef union  {
	long l_valor;
	double d_valor;
}valor_numero;

//estrutura com identificador e união para cada valor
typedef struct  {
	tipo_numero tipo; /* indica qual o campo usado na união */
	valor_numero valor;
}NUMERO;

NUMERO le_numero() 
{
	NUMERO numlido;
	char num[15];

	//captura a string digitada
	gets(num);

	int i;
	bool achou = false;
	//percorre a string ate o ultimo caracter valido
	for (i = 0; num[i] != '\0'; i++) 
		//identificacao se o campo é inteiro ou double (com pontos)
		if (num[i] == '.')
		{
			achou = true;
			break;
		}

	//atribuicao a varivael de tipo NUMERO conforme necessidade de uso de alocacao de memoria
	if (achou) //double
	{
		numlido.tipo = DOUBLE;
		numlido.valor.d_valor = atof(num);
	}else // long
	{
		numlido.tipo = LONG;
		numlido.valor.l_valor = atol(num);
	}

	//retorno da funcao no tipo NUMERO
	return numlido;
}

void escreve_numero(NUMERO num)
{
	//exibe a informacao digitada conforme a variavel tipo (label da struct)
	switch (num.tipo)
	{
		case DOUBLE: printf("%lf\n",num.valor.d_valor); break;
		case LONG: printf("%ld\n",num.valor.l_valor);
	}

}

NUMERO calcula_numeros(NUMERO num1, NUMERO num2, char operacao) 
{
	NUMERO resultado;
	//identifica se um dos valores informados é LONG
	if (num1.tipo == LONG && num2.tipo == LONG)
	{
		//identifica o label com tipo LONG
		resultado.tipo = LONG;
		switch(operacao)
		{
			//conforme operacao selecionada, efetua o caluclo
			case '+': resultado.valor.l_valor = num1.valor.l_valor + num2.valor.l_valor; break;
			case '-': resultado.valor.l_valor = num1.valor.l_valor - num2.valor.l_valor; break;
			case '*': resultado.valor.l_valor = num1.valor.l_valor * num2.valor.l_valor; break;
			case '/': resultado.valor.l_valor = num1.valor.l_valor / num2.valor.l_valor; break;
		}
		
	} else
	{
		//identifica o label com tipo double
		resultado.tipo = DOUBLE;
		double a,b;
		//se valor 1 for long, converte valor long para double, senao apenas atribui valor
		a = (num1.tipo == LONG) ? num1.valor.l_valor : num1.valor.d_valor;
		//se valor 2 for long, converte valor long para double, senao apenas atribui valor
		b = (num2.tipo == LONG) ? num2.valor.l_valor : num2.valor.d_valor;
		switch(operacao)
		{
			//calculo conforme operacao informada
			case '+': resultado.valor.d_valor = a + b; break;
			case '-': resultado.valor.d_valor = a - b; break;
			case '*': resultado.valor.d_valor = a * b; break;
			case '/': resultado.valor.d_valor = a / b; break;
		}
	}
	return resultado;
}

void main()
{
	NUMERO n1,n2;
	char op;

	printf("Digite numero: ");
	n1 = le_numero();

	while(true){
		printf("Digite operador(+ - * / f)");
		op = getchar();
		fflush(stdin);

		if (op == 'f') break; 

		printf("Digite numero: ");
		n2 = le_numero();

		n1 = calcula_numeros(n1,n2,op);

		escreve_numero(n1);


	}
	
}


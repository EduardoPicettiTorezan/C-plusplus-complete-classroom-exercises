// Exercicio_02_pag40.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	int i_valor, i;

	i_valor = 0;

	printf("Informe o valor de 0 a 100: ");
	scanf("%d",&i_valor);
	fflush(stdin);

	if (i_valor == 0)
		printf("zero");
	else if (i_valor == 100)
		printf("cem");
	else {

		i = i_valor % 10;

	   if ((i_valor - i) == 40)
          printf("quar"); 
	   else if ((i_valor - i) == 50)
          printf("cinqu"); 
	   else if ((i_valor - i) == 60)
          printf("sess"); 
	   else if ((i_valor - i) == 70)
          printf("set"); 
	   else if ((i_valor - i) == 80)
          printf("oit"); 
	   else if ((i_valor - i) == 90)
          printf("nov"); 

	   if (i_valor >= 40)
	      printf("enta"); 
	   else {
           if ((i_valor - i) == 30) 
			   printf("trinta"); 
		   else if ((i_valor - i) == 20) 
			   printf("vinte"); 
		   else if (i_valor == 10 || i_valor == 18)
			   printf("dez");
		   else if (i_valor >= 16 && i_valor <= 19)
			   printf("deze");
	   }

	   if (i_valor >= 20 && i > 0)
	      printf(" e "); 

	   if (i_valor >= 11 && i_valor <= 15) {
		   if (i_valor == 15)
			   printf("quinze");
		   else if (i_valor == 14)
			   printf("quatorze");
		   else if (i_valor == 13)
			   printf("treze");
		   else if (i_valor == 12)
			   printf("doze");
		   else if (i_valor == 11)
			   printf("onze");
	   }
	   else {
	   if (i == 9)
		   printf("nove");
	   else if (i == 8)
		   printf("oito");
	   else if (i == 7)
		   printf("sete");
	   else if (i == 6)
		   printf("seis");
	   else if (i == 5)
		   printf("cinco");
	   else if (i == 4)
		   printf("quatro");
	   else if (i == 3)
		   printf("tres");
	   else if (i == 2)
		   printf("dois");
	   else if (i == 1)
		   printf("um");

	}
	   }
	   getchar();

}


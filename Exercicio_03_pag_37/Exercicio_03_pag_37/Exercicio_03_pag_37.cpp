// Exercicio_03_pag_37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

void main() {
   int i_random, i_informado;

   i_random = i_informado = 0;

   srand(time(NULL));

   printf("Informe o valor :");
   scanf("%d", &i_informado);
   fflush(stdin);

   i_random = rand() % 10 + 1;

   printf("Os valores obtidos %d e %d sao %s",i_random,i_informado,(i_random == i_informado ? "iguais" : "diferentes"));
   getchar();
}


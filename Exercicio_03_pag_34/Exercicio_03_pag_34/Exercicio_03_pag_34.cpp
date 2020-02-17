// Exercicio_03_pag_34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main () {
   int i_valor_prim = 0, i_valor_seg = 0;

   printf("Informe o primeiro valor: ");
   scanf("%d", &i_valor_prim);
   fflush(stdin);

   printf("Informe o primeiro valor: ");
   scanf("%d", &i_valor_seg);
   fflush(stdin);

   printf("O valor maior e: %d",(i_valor_prim > i_valor_seg ? i_valor_prim : i_valor_seg));
   getchar();
}

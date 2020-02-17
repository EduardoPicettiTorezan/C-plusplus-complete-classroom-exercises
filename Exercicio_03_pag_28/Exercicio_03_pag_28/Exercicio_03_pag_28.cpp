// Exercicio_03_pag_28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
  int i_valor = 0, i_notas = 0;

  printf("Informe o valor: ");
  scanf("%d",&i_valor);
  fflush(stdin);

  i_notas = i_valor / 100;
  i_valor = i_valor % 100;
  printf("%d notas de 100.", i_notas);

  i_notas = i_valor / 50;
  i_valor = i_valor % 50;
  printf("\n%d notas de 50.", i_notas);

  i_notas = i_valor / 20;
  i_valor = i_valor % 20;
  printf("\n%d notas de 20.", i_notas);

  i_notas = i_valor / 10;
  i_valor = i_valor % 10;
  printf("\n%d notas de 10.", i_notas);

  i_notas = i_valor / 5;
  i_valor = i_valor % 5;
  printf("\n%d notas de 5.", i_notas);

  i_notas = i_valor / 1;
  i_valor = i_valor % 1;
  printf("\n%d notas de 1].", i_notas);

  getchar();

}
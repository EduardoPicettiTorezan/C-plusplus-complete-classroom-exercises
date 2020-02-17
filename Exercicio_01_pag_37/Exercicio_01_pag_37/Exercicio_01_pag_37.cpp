// Exercicio_01_pag_37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"

void main() {
 int i_prim_valor, i_seg_valor, i_ter_valor, i_maior;
 
 i_prim_valor = i_seg_valor = i_ter_valor = i_maior = 0;

 printf("Informe o primeiro valor: ");
 scanf("%d",&i_prim_valor);
 fflush(stdin);

 printf("Informe o segundo valor: ");
 scanf("%d",&i_seg_valor);
 fflush(stdin);

 printf("Informe o terceiro valor: ");
 scanf("%d",&i_ter_valor);
 fflush(stdin);

 i_maior = (i_prim_valor + i_seg_valor + abs(i_prim_valor - i_seg_valor)) / 2;
 i_maior = (i_maior + i_ter_valor + abs(i_maior - i_ter_valor)) / 2;


  printf("%d e o maior.", i_maior);
  getchar();

}


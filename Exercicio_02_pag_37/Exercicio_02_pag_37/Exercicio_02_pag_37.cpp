// Exercicio_02_pag_37.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"


void main (){
   float f_prim_valor, f_seg_valor, f_ter_valor, f_media;

   f_media = f_prim_valor = f_seg_valor = f_ter_valor = 0.00;

   printf("Informe o primeiro valor: ");
   scanf("%f", &f_prim_valor);
   fflush(stdin);

   printf("Informe o segundo valor: ");
   scanf("%f", &f_seg_valor);
   fflush(stdin);

   printf("Informe o terceiro valor: ");
   scanf("%f", &f_ter_valor);
   fflush(stdin);

   f_media = ((f_prim_valor + f_seg_valor + f_ter_valor) / 3.00);

   printf("\nA media aritimetica e: %f", f_media);

   f_media = 3.00 / ((1 / f_prim_valor) + (1 / f_seg_valor) + (1 + f_ter_valor));

   printf("\nA media harmonica e: %f", f_media);

   f_media = powf((f_prim_valor * f_seg_valor * f_ter_valor), 1/3.0);

   printf("\nA media geometrica e: %f", f_media);
   getchar();

	}


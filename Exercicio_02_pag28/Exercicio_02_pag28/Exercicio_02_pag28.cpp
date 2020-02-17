// Exercicio_02_pag28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main (){
   float p, u, r, n, sn;

   p = u = r = n = sn = 0.00;

   printf("Informe o 1º valor:");
   scanf("%f",&p);
   fflush(stdin);

   printf("Informe o 2º valor:");
   scanf("%f",&u);
   fflush(stdin);

   printf("Informe o 3º valor:");
   scanf("%f",&r);
   fflush(stdin);

   n = (u - p + r) / r;

   sn = ((u + p) * n) / 2;

   printf("A soma dos termos da progressao e: %f.",sn);
   getchar();
}
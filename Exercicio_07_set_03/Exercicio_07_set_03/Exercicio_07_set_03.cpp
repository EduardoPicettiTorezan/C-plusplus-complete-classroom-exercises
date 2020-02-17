// Exercicio_07_set_03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void main () {
   float f_graus_celsius, f_graus_fahrenheit;

   f_graus_celsius = f_graus_fahrenheit = 0.00;

   printf("Informe a temperatura em graus Celcius: ");
   scanf("%f", &f_graus_celsius);
   fflush(stdin);

   f_graus_fahrenheit = (9 / 5) * f_graus_celsius + 32;

   printf("Temperatura em graus fahrenheit: %f ", f_graus_fahrenheit);
   getchar();
}


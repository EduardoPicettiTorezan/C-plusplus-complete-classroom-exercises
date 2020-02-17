// Exercicio_02_pag_30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define _USE_MATH_DEFINES
#include "math.h"

void main () {
	float f_raio_esfera = 0.00, f_volume_esfera = 0.00;

	printf("Informe o raio da esfera: ");
	scanf("%f",&f_raio_esfera);
	fflush(stdin);

    f_volume_esfera = (4.0 / 3.0) * M_PI * pow(f_raio_esfera, 3);

	printf("O volume da esfera e %f.",f_volume_esfera);
	getchar();

}


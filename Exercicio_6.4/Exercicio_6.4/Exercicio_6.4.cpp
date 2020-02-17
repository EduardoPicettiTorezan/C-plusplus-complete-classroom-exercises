// Exercicio_6.4.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <time.h>
#include <stdafx.h>

typedef struct {
	char hor[2];
	char min[2];
	char seg[2];
} HORA;

void main ()
{
	HORA horAt = {"14", "23", "12"};

	printf ( "Hora atual: %s:%s:%s", horAt.hor, horAt.hor, horAt.seg );
 
  getchar();
};
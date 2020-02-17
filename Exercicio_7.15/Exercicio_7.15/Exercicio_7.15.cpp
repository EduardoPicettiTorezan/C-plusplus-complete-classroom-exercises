// Exercicio_7.15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"
#include "stdio.h"

char * monet(float v){

	char s_temp[100] = "";
	static char s_temp2[100] = "R$ ";

	sprintf(s_temp, "%.2f", v);

	strcat(s_temp2, s_temp);

	return s_temp2;


};


void main(){
	
	printf("Valor: %s", monet(15879564.22));

	getchar();
}


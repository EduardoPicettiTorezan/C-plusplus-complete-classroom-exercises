// Exercicio_7.14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

char * strsub(char ps[],int pi,int pn){
	static char s_result[30] = "";
	int i = 0;

	for(i == pi - 1; (i < pn) && (ps[i] != '\0'); i++){
		s_result[i] = ps[pi + i];
	};

	return s_result;
};

void main() {

	char s_teste[30] = "Eduardo";

	printf("Alterada: %s", strsub(s_teste, 2, 3));

	getchar();
}


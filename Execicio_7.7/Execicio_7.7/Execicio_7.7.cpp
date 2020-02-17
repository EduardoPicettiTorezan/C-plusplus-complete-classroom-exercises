// Execicio_7.7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int strlentaula(char s[]){
	int iqtd = 0;
	int i = 0;
	
		for(i = 0; *(s + i) != '\0'; i++){
			iqtd++;
		};

	return iqtd;
};

void main(){
	char s_teste[] = "kajsdhakjhfds";

	printf("Qtd caracetres: %d", strlentaula(s_teste));

	getchar();

}


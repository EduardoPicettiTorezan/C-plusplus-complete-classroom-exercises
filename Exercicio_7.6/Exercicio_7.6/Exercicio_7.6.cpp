// Exercicio_7.6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void puts(char s[]){
	int i = 0;

	for(i = 0; *(s + i) != '\0'; i++){
		printf("%c", *(s + i));
	};
	printf("\n");

};

void main(){
	char s_mostra[] = "klajshdkasjdhfkajsdhfkjsdh";

	
	puts(s_mostra);

	getchar();

}
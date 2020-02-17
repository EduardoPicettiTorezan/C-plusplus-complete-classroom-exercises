// cript.cpp : Defines the entry point for the console application.
//

//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void main(int argc, char *argv[]) {
	FILE *e, *s;
	char c,senha[20],conf[20];
	if( argc!=3 ) {
		printf("Uso: cript <[-d][-c]> <arquivo>\n");
		exit(1);
	}
	if( (e=fopen(argv[2],"rb"))==NULL ) {
		printf("Arquivo não pode ser aberto\n");
		exit(1);
	}
	if ((s = fopen("c:\auxi.txt","wb"))==NULL) {
		printf("Arquivo não pode ser criado\n");
		exit(1);
	}

	if (strcmp(argv[1],"-c")==0){   // criptografar
		printf("Digite senha: ");
		gets(senha);
		printf("Confirme senha: ");
		gets(conf);
		if (strcmp(senha,conf) != 0){
			printf("Senha não confere");
			fcloseall();
			exit(1);
		}
		// verificação se está criptografado
		c = fgetc(e);
		if (c == '@'){
			printf("Arquivo já foi criptografado");
			fcloseall();
			exit(1);
		}

		// jogo o @, o tamanho e a senha criptografada
		fputc('@', s);
		fputc(strlen(senha), s);
		int i;
		for (i=0;senha[i]!='\0';i++)
			fputc(~senha[i], s);

		i = 0;
		while(1) {
			fputc(c ^ senha[i], s);
			i++;
			if (senha[i] == '\0')
				i = 0;
			c = fgetc(e);
			if( feof(e) ) break;
			
		}
		fcloseall();
	}else {  //descriptografar


	}

	
	
}




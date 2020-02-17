// Exercicio_8.4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void gravarSenha (FILE *fDestino, char p_temp[]){
    int i_conta = 0;

    fputc('*', fDestino);

	for(i_conta = 0; i_conta < strlen(p_temp); i_conta++) {
        fputc(p_temp[i_conta] ^ '*', fDestino);
	}

    fputc('*', fDestino);
}

void main(int argc, char *argv[]) 
{
    FILE *arqOrigem, *arqDestino;
    char cOrigem , cDestino ;
	char c_temp[200], cArqDestino[255] = "", cNomTemp[11] = "ahgfsdagfd";
    int i_conta = 0;

    if (argc != 3) {
        printf("Numero de parametros informados invalidos.Informe <origem> <senha>\n");
        exit(-1);
    }

    if ((arqOrigem = fopen(argv[1],"rb")) == NULL){
        printf("Nao foi possivel abrir arquivo de origem.\n");
        exit(-1);
    }

	//Definição do arquivo de destino temporario.
	strcpy(cArqDestino, argv[1]);
	strcat(cArqDestino, cNomTemp);

    if ((arqDestino = fopen(cArqDestino,"wb")) == NULL){
        printf("Nao foi possivel criar arquivo temporario.\n");
        exit(1);
    }

    strcpy(c_temp, argv[2]);

    cOrigem = fgetc(arqOrigem);
    i_conta = 0;

    if (cOrigem != '*')
        gravarSenha(arqDestino, c_temp);
    else

	{
        cOrigem = fgetc(arqOrigem);

        while(i_conta < strlen(c_temp)) 
		{
            if ((cOrigem != (c_temp[i_conta] ^ '*'))) 
			{
                printf("Senha Incorreta!");
                exit(-1);
            }
            i_conta++;
            cOrigem = fgetc(arqOrigem);
        }

        if (cOrigem != '*') 
		{
            printf("Senha informada invalida.");
            exit(-1);
        }
        cOrigem = fgetc(arqOrigem);
    }

    i_conta = 0;

    while(1){
        if(c_temp[i_conta] == NULL)
		   i_conta = 0;

        if (feof(arqOrigem))
			break;

        fputc( cOrigem ^ c_temp[i_conta] , arqDestino); 
        i_conta ++;
        cOrigem = fgetc(arqOrigem);
    }

    fclose(arqOrigem);
    fclose(arqDestino);

	if (unlink(argv[1]) < 0) {
		printf("Falha ao excluir arquivo de origem.");
        exit(-1);
	}

	if (!(rename(cArqDestino, argv[1]) == 0)) {
		printf("Falha ao criar arquivo final.");
        exit(-1);
	}

	printf("Concluido.");
	getchar();
}







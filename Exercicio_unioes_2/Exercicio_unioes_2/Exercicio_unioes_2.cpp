// Exercicio_unioes_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct  {
	char * des_tipo;
	int num_ano;
} VINHO;

typedef struct  {
	char * des_cor;
	char * des_pais;
} CERVEJA;

typedef struct  {
	char * des_uva;
	int num_ano;
} GRASPA;

typedef struct  {
	char * des_marca;
	int num_ano;
} WHISKEY;

typedef union  {
	VINHO vinho;
	CERVEJA cerveja;
	GRASPA graspa;
	WHISKEY whiskey;
} BEBIDA;

typedef struct  {
	int tipo_bebida;
	BEBIDA bebida;
} LISTA_BEBIDA;

void exibe_menu(LISTA_BEBIDA lista_bebida[100], int pqtd);

void main(){
	LISTA_BEBIDA lista_bebida[100];
	int i_conta = 0;
	char c_oper = ' ';

	lista_bebida[0].tipo_bebida = 1;
	lista_bebida[0].bebida.cerveja.des_cor = "branca";
	lista_bebida[0].bebida.cerveja.des_pais = "brasil";

	lista_bebida[1].tipo_bebida = 2;
	lista_bebida[1].bebida.graspa.des_uva = "rose";
	lista_bebida[1].bebida.graspa.num_ano = 2010;

	lista_bebida[2].tipo_bebida = 3;
	lista_bebida[2].bebida.vinho.des_tipo = "tinto";
	lista_bebida[2].bebida.vinho.num_ano = 2002;

	lista_bebida[3].tipo_bebida = 4;
	lista_bebida[3].bebida.whiskey.des_marca = "Jack Daniels";
	lista_bebida[3].bebida.whiskey.num_ano = 2000;


	exibe_menu(lista_bebida, 4);

	getchar();
}

void exibe_menu(LISTA_BEBIDA lista_bebida[100], int pqtd){
	int iconta = 0;

	for(iconta = 0; iconta < pqtd; iconta++){

		if (lista_bebida[iconta].tipo_bebida == 1) {
			printf("\nCerveja: ");
			printf(" Cor: %s", lista_bebida[iconta].bebida.cerveja.des_cor);
			printf(" Pais: %s\n", lista_bebida[iconta].bebida.cerveja.des_pais);
		}
		else if (lista_bebida[iconta].tipo_bebida == 2) {
			printf("\nGraspa: ");
			printf(" Uva: %s", lista_bebida[iconta].bebida.graspa.des_uva);
			printf(" Ano: %d\n", lista_bebida[iconta].bebida.graspa.num_ano);
		}
		else if (lista_bebida[iconta].tipo_bebida == 3) {
			printf("\nVinho: ");
			printf(" Tipo: %s", lista_bebida[iconta].bebida.vinho.des_tipo);
			printf(" Ano: %d\n", lista_bebida[iconta].bebida.vinho.num_ano);
		}
		else if (lista_bebida[iconta].tipo_bebida == 4) {
			printf("\nWhiskey: ");
			printf(" Marca: %s", lista_bebida[iconta].bebida.whiskey.des_marca);
			printf(" Ano: %d\n", lista_bebida[iconta].bebida.whiskey.num_ano);
		}
	};
};
// Exercio_6.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef struct {
	int dia, mes, ano;
} DATA;

typedef struct {
	int hor, min, seg;
} HORA;

typedef struct {
	char nome[30], uf[2];
} CIDADE;

typedef struct {
	cidade cidadeOrigem;
	cidade cidadeDestino;
	DATA dataSaida;
	DATA dataChegada;
	HORA horaSaida;
	HORA horaChegada;
} PONTO;

void main(){

	PONTO voo = {{"Guabiju", "RS"}, {"Cacique Doble", "RS"}, {01, 01, 2011}, {31, 01, 2011}, {14, 00, 00}, {15, 00, 00}};

	printf("Origem: %s UF: %s \n", voo.cidadeOrigem.nome, voo.cidadeOrigem.uf);
	printf("Destino: %s UF: %s \n", voo.cidadeDestino.nome, voo.cidadeDestino.uf);
	printf("Data da saida: %d/%d/%d \n",  voo.dataSaida.dia, voo.dataSaida.mes, voo.dataSaida.ano);
	printf("Data da chegada: %d/%d/%d \n",voo.dataChegada.dia, voo.dataChegada.mes, voo.dataChegada.ano);
	printf("Hora da saida: %d/%d/%d \n", voo.horaSaida.hor, voo.horaSaida.min, voo.horaSaida.seg);
	printf("Hora da chegada: %d/%d/%d \n", voo.horaChegada.hor, voo.horaChegada.min, voo.horaChegada.seg);

	getchar();
	
}


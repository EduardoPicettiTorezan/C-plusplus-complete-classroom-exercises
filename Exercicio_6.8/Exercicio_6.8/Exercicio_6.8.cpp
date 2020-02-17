// Exercicio_6.8.cpp : Defines the entry point for the console application.
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
	static CIDADE cidadeOrigem;
	static CIDADE cidadeDestino;
	DATA dataSaida;
	DATA dataChegada;
	HORA horaSaida;
	HORA horaChegada;
} VOO;

void mostr(VOO voo[4]);

void main(){
	static VOO voo[4] =  {
	{{"Guabiju", "RS"}, {"Cacique Doble", "RS"}, {01, 01, 2011}, {31, 01, 2011}, {14, 00, 00}, {15, 00, 00}},
	{{"Guabiju", "RS"}, {"Cacique Doble", "RS"}, {01, 01, 2011}, {31, 01, 2011}, {14, 00, 00}, {15, 00, 00}},
	{{"Guabiju", "RS"}, {"Cacique Doble", "RS"}, {01, 01, 2011}, {31, 01, 2011}, {14, 00, 00}, {15, 00, 00}},
	{{"Guabiju", "RS"}, {"Cacique Doble", "RS"}, {01, 01, 2011}, {31, 01, 2011}, {14, 00, 00}, {15, 00, 00}}
	};

	getchar();
}

void mostra(VOO voo[4]){
	int iconta = 0;

	for (iconta == 0; iconta <= 4; iconta++){
		printf("Origem: %s UF: %s \n", voo[iconta].cidadeOrigem.nome, voo[iconta].cidadeOrigem.uf);
		printf("Destino: %s UF: %s \n", voo[iconta].cidadeDestino.nome, voo[iconta].cidadeDestino.uf);
		printf("Data da saida: %d/%d/%d \n",  voo[iconta].dataSaida.dia, voo[iconta].dataSaida.mes, voo[iconta].dataSaida.ano);
		printf("Data da chegada: %d/%d/%d \n",voo[iconta].dataChegada.dia, voo[iconta].dataChegada.mes, voo[iconta].dataChegada.ano);
		printf("Hora da saida: %d/%d/%d \n", voo[iconta].horaSaida.hor, voo[iconta].horaSaida.min, voo[iconta].horaSaida.seg);
		printf("Hora da chegada: %d/%d/%d \n", voo[iconta].horaChegada.hor, voo[iconta].horaChegada.min, voo[iconta].horaChegada.seg);
	};
};



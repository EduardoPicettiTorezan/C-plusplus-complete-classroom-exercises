// Prova_1_Exercício_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "string.h"

typedef struct {
	int dia, mes, ano;
} DATA;

typedef struct {
	char s_marca[31], s_nome[31], s_chassi[21];
	unsigned short us_ano;
	DATA dt_venc_ipva;
	double d_valor_venda;
	char c_combustivel;

} AUTOMOVEL;

int selmin(AUTOMOVEL p_carros[], int i, int n, char p_campo) {

	int j, k=i;

	for(j = i + 1; j < n; j++)

		if ((p_campo == 'N') &&
		    (strcmp(p_carros[k].s_nome,p_carros[j].s_nome) > 0))
			k=j;
		else if ((p_campo == 'C') &&
		    (strcmp(p_carros[k].s_chassi,p_carros[j].s_chassi) > 0))
			k=j;

	return k;
}

void ordenaCarros(AUTOMOVEL p_carros[], unsigned short pus_num, char p_campo){
	AUTOMOVEL car_temp;
	unsigned short us_conta = 0, us_pos = 0;	

	for(us_conta = 0; us_conta < pus_num - 1; us_conta++){
		
		us_pos = selmin(p_carros , us_conta , pus_num, p_campo);

		car_temp = p_carros[us_conta];
		p_carros[us_conta] = p_carros[us_pos];
		p_carros[us_pos] = car_temp;
	};
};

void mostraCarro(AUTOMOVEL p_carros){

	printf("\nMarca: %s ", p_carros.s_marca);
	printf("Nome: %s ", p_carros.s_nome);
	printf("Ano: %hd ", p_carros.us_ano);
	printf("Data: %d/%d/%d ", p_carros.dt_venc_ipva.dia, p_carros.dt_venc_ipva.mes, p_carros.dt_venc_ipva.ano);
	printf("Chassi: %s ", p_carros.s_chassi);

	printf("Combustivel: ");
	switch(p_carros.c_combustivel)
	{
		case	'A': printf("Alcool");
			break;
		case	'G': printf("Gasolina");
			break;
		case	'D': printf("Diesel");
			break;
		default: printf("Nao informado.");
	}

};

void exibeOrdenado(AUTOMOVEL p_carros[], unsigned short pus_num){
	unsigned short us_conta = 0;		

	ordenaCarros(p_carros, pus_num, 'N');

	for(us_conta = 0; us_conta < pus_num; us_conta++){
		mostraCarro(p_carros[us_conta]);
	};

	printf("\n\n");

};
void buscaChassi  (AUTOMOVEL p_carros[], unsigned short pus_num){
	unsigned short us_conta = 0, us_enc = 0;
	char s_chassi[20];

	strcpy(s_chassi, " ");

	do{

		printf("\nInforme o CHASSI do automovel: ");
		gets(s_chassi);
		fflush(stdin);

		if (strcmp(s_chassi,"") == 0) {
			printf("\nValor informado invalido.");
		};

	}while(strcmp(s_chassi,"") == 0);

	ordenaCarros(p_carros, pus_num, 'C');

	for (us_conta = 0; us_conta <= pus_num; us_conta++){

		if (strcmp(p_carros[us_conta].s_chassi, s_chassi) == 0) {
			
			mostraCarro(p_carros[us_conta]);
			us_enc = 1;
			
		};
	};

	if (us_enc == 0)
		printf("Veiculo nao localizado.");

	printf("\n\n");

};

void main(){
	unsigned short us_opcao = 0;
	static AUTOMOVEL carros[15] =  {
		{"VW", "Brasilia", "123"	 , 1976, { 1,  1, 2011}, 2000.00, 'A'},
		{"VW", "Fusca"	 , "111111"  , 1977, { 2,  1, 2011}, 4000.00, 'A'},
		{"VW", "Corcel"  , "2222222" , 1978, { 3,  2, 2011}, 1000.00, 'A'},
		{"VW", "Rural"   , "33333333", 1979, { 1,  6, 2011}, 5000.00, 'A'},
		{"VW", "Belina"  , "444444"  , 1981, {15,  5, 2011}, 4000.00, 'A'},
		{"VW", "Premio"  , "55555"   , 1981, {15,  8, 2011}, 3000.00, 'A'},
		{"VW", "Focus"   , "6666666" , 1982, {24, 11, 2011}, 8000.00, 'A'},
		{"VW", "Uno"     , "7777777" , 1983, {12, 12, 2011}, 3000.00, 'A'},
		{"VW", "Palio"   , "888888"  , 1984, {14,  1, 2011}, 6000.00, 'A'},
		{"VW", "Celta"   , "999999"  , 1985, {16,  2, 2011}, 9000.00, 'A'},
		{"VW", "Prisma"  , "7171717" , 1986, {30,  2, 2011}, 9000.00, 'A'},
		{"VW", "Fox"     , "61616161", 1987, {29,  2, 2011}, 5000.00, 'A'},
		{"VW", "Santana" , "12121212", 1988, {28,  3, 2011}, 1500.00, 'A'},
		{"VW", "Gol"     , "76576576", 1989, {27,  4, 2011}, 3450.99, 'A'},
		{"VW", "Lada"    , "34234234", 1990, {25,  1, 2011}, 2555.55, 'A'},
	};

	do{
		
		printf("MENU:\n");
		printf("1) Ordenar o vetor por ordem de nome e mostrar.\n");
		printf("2) Buscar automovel por CHASSI.\n");
		printf("3) Sair.\n");

		do{

			printf("Informe a opcao desejada: ");
			scanf("%hd", &us_opcao);
			fflush(stdin);

			if ((us_opcao < 1) || us_opcao > 3) {
				printf("\nOpcao informada invalida.\n");
				us_opcao = 0;
			}

		}while((us_opcao == 0));

		switch(us_opcao)
		{
			case	1: exibeOrdenado(carros, 15);
				break;
			case	2: buscaChassi  (carros, 15);
				break;
			default: exit(-1);

		}

	}while(1==1);

	getchar();
}


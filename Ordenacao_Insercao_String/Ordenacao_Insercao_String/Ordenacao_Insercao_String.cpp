// Ordenacao_Insercao_String.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

//declaracao dos cabecalhos das funcoes
void insercao(char vLista[9][30], int iQtd);
void mostra (char vLista[9][30], int iQtd);

void main() {
	//declaração e inicialização do vetor
	char vLista[9][30] = {"Mohamed", "Gordinho", "Eduardo", "Vinicius", "Farao do Egito", "Aquaman", "John Jones", "Wiliam Bonner", "Juca Kifuri"};

   //execucao da ordecao
   insercao(vLista, 9);
   
   //execuacao da exibicao
   mostra(vLista, 9);

   getchar();
}

void insercao(char vLista[9][30], int iQtd) {
int i, j;
char x[30];

	strcpy(x, " ");
	
	/* navega no intervalo do vetor, iniciando da 2ª posição.
	  a primeira posição é considerada um item ja ordenado. */
	for(i = 1; i < iQtd ; i++) {
		//atribuicao de posicao atual para variavel temporária
		strcpy(x, vLista[i]);

		/* navega nas posicoes anteriores a atual,
		ate a posicao zero e o conteudo da posicao
		atribuida em X seja maior que as posicoes a
		serem anteriores.
		Quando encontrada, em uma posicao menor, um
		valor menor que o temporario, considerasse que
		o X está ordenado no novo vetor. */
		//exemplo de ordenação no inteiro: for(j = i-1; (j >=0) && (x < vLista[j]); j--)
		for(j = i-1; (j >=0) && (strcmp(x, vLista[j]) == -1); j--)

			// deslocamento dos valores à frente, para permitir reposicionar o valor de X.
			strcpy( vLista[j+1], vLista[j]);

		//Reposicionamento do X na sua nova posicao.
		strcpy(vLista[j+1], x);
	}
}

void mostra(char vLista[9][30], int iQtd) {
	int iConta = 0;

	//Navega no intervalo correspondente ao tamanho do vetor.
	for (iConta = 0; iConta < iQtd; iConta++){

		//exibe posicao a posicao;
		printf("%s\n", vLista[iConta]);
	};
};
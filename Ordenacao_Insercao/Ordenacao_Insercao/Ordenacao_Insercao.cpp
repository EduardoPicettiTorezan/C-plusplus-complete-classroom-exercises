// Ordenacao_Insercao.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//declaracao dos cabecalhos das funcoes
void insercao(int vLista[], int iQtd);
void mostra (int vLista[], int iQtd);

void main() {
	//declaração e inicialização do vetor
	int vLista[9] = {56, 55, 1, 32, 67, 87, 43, 99, 5};

   //execucao da ordecao
   insercao(vLista, 9);
   
   //execuacao da exibicao
   mostra(vLista, 9);

   getchar();
}

void insercao(int vLista[], int iQtd) {
int i, j, x;
	
	/* navega no intervalo do vetor, iniciando da 2ª posição.
	  a primeira posição é considerada um item ja ordenado. */
	for(i = 1; i<iQtd ; i++) {
		//atribuicao de posicao atual para variavel temporária
		x = vLista[i];

		/* navega nas posicoes anteriores a atual,
		ate a posicao zero e o conteudo da posicao
		atribuida em X seja maior que as posicoes a
		serem anteriores.
		Quando encontrada, em uma posicao menor, um
		valor menor que o temporario, considerasse que
		o X está ordenado no novo vetor. */
		for(j = i-1; j >=0 && x < vLista[j]; j--)

			// deslocamento dos valores à frente, para permitir reposicionar o valor de X.
			vLista[j+1] = vLista[j];

		//Reposicionamento do X na sua nova posicao.
		vLista[j+1] = x;
	}
}

void mostra(int vLista[], int iQtd) {
	int iConta = 0;

	//Navega no intervalo correspondente ao tamanho do vetor.
	for (iConta = 0; iConta < iQtd; iConta++){

		//exibe posicao a posicao;
		printf("%d\n", vLista[iConta]);
	};
};
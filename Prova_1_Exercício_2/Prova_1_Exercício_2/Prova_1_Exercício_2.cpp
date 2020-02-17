// Prova_1_Exercício_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void substring (char stringcompleto[], char stringprocurar[], int *numocorrencias){
	unsigned short us_conta = 0, us_aux = 0;
	char s_aux[100] = " ";

	for(us_conta = 0; *(stringcompleto + us_conta) != '\0'; us_conta++) {

		for(us_aux = 0; us_aux < strlen(stringprocurar); us_aux++){

			if (*(stringcompleto + (us_conta + us_aux)) != '\0')
				s_aux[us_aux] = *(stringcompleto + (us_conta + us_aux));
		};

		if (strcmp(s_aux, stringprocurar) == 0)
		   (*numocorrencias)++;
	
	};

};

void parimpar(int vetor[], int tamanho, int *numpares, int *numimpares){
	unsigned short us_conta = 0;

	for (us_conta = 0; us_conta < tamanho; us_conta++){
		if (*(vetor + us_conta) % 2 == 0)
			(*numpares)++;
		else
			(*numimpares)++;

	};
};

void main(){
	int i_num_oc = 0, i_pares = 0, i_impares = 0;
	int vet[15] = {1, 15, 43, 67, 87, 21, 22, 44, 66, 88, 12, 2, 87, 10012, 67};

	//Exercicio 1
	substring("aula de programacao, segunda-feira, terminando a prova, testando maca, marte.", "ma", &i_num_oc);

	//Exercicio 2
	parimpar (vet,  15, &i_pares, &i_impares);

	printf("1 - Numero de ocorrencias: %d", i_num_oc);

	printf("\n2 - Pares: %d, impares: %d", i_pares, i_impares);

	getchar();
}


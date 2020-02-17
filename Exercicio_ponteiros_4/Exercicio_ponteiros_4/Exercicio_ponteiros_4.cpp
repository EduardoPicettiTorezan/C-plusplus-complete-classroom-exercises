// exe4ponteiros.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

void ler_questionario(int v[10],char m[10][10]){
	int i;
	

	for (i=0;i<10;i++){
		printf("Digite a sua idade");
		scanf("%d",(v+i));
		fflush(stdin);
		printf("Qual sua opiniao sobre o filme:");
		gets(*(m+i));
	}

}

void calculo(int idade[10], char opiniao[10][10], int *qtdeOtimo, int *qtdePessim, float *mediaIdade){
	*qtdeOtimo = 0;
	*qtdePessim = 0;
	int somaIdades = 0;
	for (int i = 0; i < 10; i++){
		if (strcmp(*(opiniao+i),"otimo")==0)
			(*qtdeOtimo)++;
		else if (strcmp(*(opiniao+i),"pessimo")==0)
			(*qtdePessim)++;
		somaIdades += *(idade+i);
	}
	*mediaIdade = somaIdades / 10.0;
}


void main(){

	int idade[10],qtotimo,qtpessimo;
	float media;
	char opiniao[10][10];

	ler_questionario(idade,opiniao);
	calculo(idade,opiniao,&qtotimo,&qtpessimo,&media);
	printf("Otimos = %d\n",qtotimo);
	printf("Pessimos = %d\n",qtpessimo);
	printf("Media de idade = %f",media);


getchar();
}
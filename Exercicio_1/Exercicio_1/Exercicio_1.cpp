// Exercicio_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	//suf[3] porque o 3 sera para o caracter de controle do c;
	int inum_cliente = 0, iidade = 0;
	char snome_cliente[30], sendereco[20], scidade[10], suf[3], stelefone[10], scpf[11], ssexo;
	float flimite_credito = 0.00;

	printf("Informe o numero do cliente: ");
	scanf("%d",&inum_cliente);
	fflush(stdin);

	printf("Informe o nome do cliente: ");
	gets(snome_cliente);

	printf("Informe o endereco do cliente: ");
	gets(sendereco);

	printf("Informe a cidade do cliente: ");
	gets(scidade);

	printf("Informe a UF do cliente: ");
	gets(suf);

	printf("Informe o telefone do cliente: ");
	gets(stelefone);

	printf("Informe o CPF do cliente: ");
	gets(scpf);

	printf("Informe o sexo do cliente: ");
	ssexo = getchar();
    fflush(stdin);

	printf("Informe o limite de credito do cliente: ");
	scanf("%f",&flimite_credito);
	fflush(stdin);

	printf("\nDados do cliente:\nNOME: %s\nENREDECO: %s\nCIDADE: %s\nUF: %s\nTELEFONE: %s\nCPF: %s\nSEXO: %c\nLIMITE DE CREDITO: %.2f",
		snome_cliente,sendereco,scidade,suf,stelefone,scpf,ssexo,flimite_credito);
	getchar();

}

// Exercicio_Validacao_cpf.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string.h"

bool verif_cpf(char* s_cpf);

void main () {
	char s_cpf[12];

	strcpy(s_cpf, "");

	do {
	   printf("Informe o CPF: ");
	   gets(s_cpf);
	   fflush(stdin);

	   if (strlen(s_cpf) != 11) {
	       printf("\nCpf informado deve ter 11 digitos.\n");
	   }
	   else
		   printf("\nCPF %s.", (verif_cpf(s_cpf) == true ? "valido" : "invalido"));

	}while(strlen(s_cpf) != 11);

	getchar();
}

bool verif_cpf(char* s_cpf){
	int i_soma = 0, i_resultado = 0, i_dig_verif1 = 0, i_dig_verif2 = 0, i_conta = 0;

	for (i_conta = 0; i_conta <= 9; i_conta++){
			i_soma += ((s_cpf[i_conta] - 48) * (10 - i_conta));
		};

	i_resultado = i_soma % 11;

	if ((i_resultado == 1) || (i_resultado == 0))
		i_dig_verif1 = 0;
	else
		i_dig_verif1 = 11 - i_resultado;

	if (i_dig_verif1 != s_cpf[9] - 48)
		return false;

	for (i_conta = 0; i_conta <= 9; i_conta++){
			i_soma += ((s_cpf[i_conta] - 48) * (11 - i_conta));
		};

	i_resultado = i_soma % 11;

	if ((i_resultado == 1) || (i_resultado == 0))
		i_dig_verif2 = 0;
	else
		i_dig_verif2 = 11 - i_resultado;

	if (i_dig_verif2 != s_cpf[10] - 48)
	   return true;
	
	return false;
}

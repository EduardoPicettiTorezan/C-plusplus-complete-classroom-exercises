// Exercicio_02_pag_47.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"


void main () {
	char c_nom_cliente[30];
	short s_cdn_item = 0, s_qtd_item = 0;
	float f_valor;

	printf("Código - Especificação   - Preço Unitário");
	printf("\n100	 - Cachorro-quente - 3,50");
    printf("\n101	 - Bauru Simples   - 4,00");
	printf("\n102	 - Bauru com ovo   - 4,50");
	printf("\n103    - Hambúrguer      - 5,50");
	printf("\n104    - Cheese burguer  - 6,00");
	printf("\n105    - Refrigerante    - 1,50");
	printf("\n106	 - Cerveja         - 2,50");

	while (true){

		f_valor = 0.00;

		printf("\nInforme o nome do cliente: ");
		gets(c_nom_cliente);
		fflush(stdin);

		while (true) {

			do {
				printf("\nInforme o codigo do item: ");
				scanf("%hd", &s_cdn_item);
				fflush(stdin);
				
				if ((s_cdn_item < 100) || (s_cdn_item > 106))
					printf("\nItem invalido.");

			}while((s_cdn_item < 100) || (s_cdn_item > 106));

			do {
				printf("\nInforme a quantidade do item: ");
				scanf("%hd", &s_qtd_item);
				fflush(stdin);

				if (s_qtd_item <= 0)
					printf("\nValor deve ser maior que zero.");

			}while (s_qtd_item <= 0);

			switch(s_cdn_item){
				case 100: f_valor = f_valor + (3.50 * s_qtd_item);
						  printf("\n%hd - Cachorro(s)-quente(s) R$ %f", s_qtd_item, (3.50 * s_qtd_item));
						  break;
				case 101: f_valor = f_valor + (4.00 * s_qtd_item);
						  printf("\n%hd - Bauru(s) simples R$ %f", s_qtd_item, (4.00 * s_qtd_item));
						  break;
				case 102: f_valor = f_valor + (4.50 * s_qtd_item);
						  printf("\n%hd - Bauru(s) com ovo R$ %f", s_qtd_item, (4.50 * s_qtd_item));
						  break;
				case 103: f_valor = f_valor + (5.50 * s_qtd_item);
						  printf("\n%hd - Hamburguer(s) R$ %f", s_qtd_item, (5.50 * s_qtd_item));
						  break;
				case 104: f_valor = f_valor + (6.00 * s_qtd_item);
						  printf("\n%hd - Cheese(s) burger(s) R$ %f", s_qtd_item, (6.00 * s_qtd_item));
						  break;
				case 105: f_valor = f_valor + (1.50 * s_qtd_item);
						  printf("\n%hd - Refrigerante(s) R$ %f", s_qtd_item, (1.50 * s_qtd_item));
						  break;
				case 106: f_valor = f_valor + (2.50 * s_qtd_item);
						  printf("\n%hd - Cerveja(s) R$ %f", s_qtd_item, (2.50 * s_qtd_item));
						  break;
			}

			printf("\nDeseja inserir mais algum item para esse cliente? (s/n)");
			if (getchar() != 's'){
				fflush(stdin);
				break;
			}
		}

		printf("\nA conta do porcocan %s deu %.2f", c_nom_cliente, f_valor);

		printf("\n\nDeseja calcular a conta de mais algum cliente? (s/n)");
		if (getchar() != 's') 
			exit(-1);
		else
			fflush(stdin);
	}

	getchar();
}


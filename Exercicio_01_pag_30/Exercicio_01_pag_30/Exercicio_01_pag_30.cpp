// Exercicio_01_pag_30.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main ()
{
  char s_nom_aut[30] , s_nom_comb[10];
  float f_preco_litro = 0.00, f_km_ini = 0.00, f_km_fin = 0.00, f_qtd_litros;

  printf("Informe o nome do automovel: ");
  gets(s_nom_aut);

  printf("\nInforme o nome do combustivel: ");
  gets(s_nom_comb);

  printf("\nInforme o preco por litro do combustivel %s: ",s_nom_comb); 
  scanf("%f",&f_preco_litro);
  fflush(stdin);

  printf("\nInforme a kilometragem inicial: "); 
  scanf("%f",&f_km_ini);
  fflush(stdin);

  printf("\nInforme a kilometragem final: "); 
  scanf("%f",&f_km_fin);
  fflush(stdin);

  printf("\nInforme a quantidade de litros: "); 
  scanf("%f",&f_qtd_litros);
  fflush(stdin);

  printf("O automóvel %s rodou %f Km.",s_nom_aut[30],(f_km_fin - f_km_ini));
  printf("\nUsou %f litros de %s",f_qtd_litros,s_nom_comb[10]);
  printf("\nFez uma média de %f Km/l.",((f_km_fin - f_km_ini) / f_qtd_litros));
  printf("\nO custo foi de R$ %f.",(f_qtd_litros * f_preco_litro));
  getchar();
}


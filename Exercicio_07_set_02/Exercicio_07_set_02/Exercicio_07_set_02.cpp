// Exercicio_07_set_02.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
   double d_tempo_viagem, d_velocidade_media, d_distancia, d_litros_usados;
   float f_km_p_litro;

   d_tempo_viagem = d_velocidade_media = d_distancia = d_litros_usados = f_km_p_litro = 0.00;

   printf("Informe o tempo gasto na viagem em horas: ");
   scanf("%lf", &d_tempo_viagem);
   fflush(stdin);

   printf("Informe a velocidade media: ");
   scanf("%lf", &d_velocidade_media);
   fflush(stdin);

   printf("Informe quantos quilometros o carro faz por litro: ");
   scanf("%f", &f_km_p_litro);
   fflush(stdin);

   d_velocidade_media = (double)d_velocidade_media;

   d_distancia = d_tempo_viagem * d_velocidade_media;
   d_litros_usados = d_distancia * f_km_p_litro;

   printf("Velocidade média: %.2f", d_velocidade_media);
   printf("\nTempo de viagem em horas: %.2f", d_tempo_viagem);
   printf("\nDistancia percorrida: %.2f", d_distancia);
   printf("\nLitros usados na viagem: %.2f", d_litros_usados);
   getchar();
}
// Campo_Minado.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"
#include "stdio.h"

//Campo minado
//Desenvolvimento: Eduardo, Renan
//Testes: Renan

void preenche  (int m[10][10], int facilidade);
void mostra    (int m[10][10]);
void marca     (int m[10][10]);
void selecCampo(int m[10][10]   , int mSel[10][10], int x, int y);
bool testaFinal(int mSel[10][10], int m[10][10]);

void main(){
 int m[10][10], dificuldade = 0, x = 0, y = 0, iRet = 0;
 int mSel[10][10];

    for (x = 0; x < 10; x++){
	   for (y = 0; y < 10; y++){
		   mSel[x][y] = 63;
	   };
   };
   x = y = 0;

   do {
		printf("Informe a dificuldade: (1/2/3): ");
		scanf("%d", &dificuldade);
		fflush(stdin);

		if ((dificuldade <= 0) ||
		(dificuldade > 3)) {
			printf("\nValor informado invalido.\n");
			dificuldade = 0;
		};

	}while(dificuldade == 0);

	preenche(m, dificuldade);
	printf("\nCampo minado:\n");
	mostra(m);

	marca(m);
	printf("\nContando minas:\n");
	mostra(m);

	printf("\nCampo minado: \n");
	mostra(mSel);

	do {
		printf("\n");
		do {
			printf("Informe a linha (1 a 10, 0 para sair): ");
			scanf("%d", &x);
			fflush(stdin);

			if ((x < 0) ||
			(x > 10)) {
				printf("\nValor informado invalido.\n");
				x = -1;
			}
		}while(x < 0);

		do {
			printf("Informe a a (1 a 10, 0 para sair): ");
			scanf("%d", &y);
			fflush(stdin);

		if ((y < 0) ||
			(y > 10)) {
				printf("\nValor informado invalido.\n");
				y = -1;
		}
		}while(y < 0);

		if ((x == 0) && (y == 0)) {
			printf("\Tchau.\n");
			exit(-1);
		};

		selecCampo( m, mSel, x - 1, y - 1);

		if (mSel[x - 1][y - 1] == 9){
			printf("\nPerdeu imbecil.\n");
		}
		else {
			mostra(mSel);

			if (testaFinal(mSel, m) == true) {
				mSel[x - 1][y - 1] = 9;
				printf("\n\nGanhou imbecil.\n");
		    };
		}

	}while(mSel[x - 1][y - 1] != 9);

	getchar();
};


void preenche(int m[10][10], int facilidade){
	int l = 0, c = 0, iNumBombas = 0, lt = 0, ct = 0;

	if (facilidade == 1)
		iNumBombas = 10;
	else if (facilidade == 2)
		iNumBombas = 20;
	else
		iNumBombas = 30;

	for (l = 0; l < 10; l++){
		for (c = 0; c < 10; c++){
			if ((l == 0) ||
			   (l == 9) ||
			(c == 0) ||
			   (c == 9))
			   m[l][c] = 1;
			else 
				m[l][c] = 0;
		};
	};

	srand(time(NULL));
	do {
		lt = rand() % 8 + 1;
		ct = rand() % 8 + 1;

		if ((m[lt][ct] != 9) &&
			(m[lt][ct] != 1)){
			m[lt][ct] = 9;
			iNumBombas--;
			};			

	}while(iNumBombas > 0);

};

void mostra (int m[10][10]){
	int l = 0, c = 0;

	printf("\n");

	for (l = 0; l < 10; l++){
		for (c = 0; c < 10; c++){
			if ((m[l][c] == 63) ||
			    (m[l][c] == 32))
			   printf("%c ", m[l][c]);
			else
				printf("%d ", m[l][c]);
			if (c >= 9)
				printf("\n");
		};
	};
};

void marca   (int m[10][10]){
	int l = 0, c = 0, lt = 0, ct = 0;

	for (l = 1; l < 9; l++){
		for (c = 1; c < 9; c++){

			if (m[l][c] == 9) {

				//uma linha antes, ate uma linha depois
				for (lt = l - 1; lt <= (l + 1); lt++){
					//uma coluna antes, ate uma coluna depois
					for (ct = c - 1; ct <= (c + 1); ct++){
						if (m[lt][ct] != 9)
							m[lt][ct]++;
					}; //for
				}; //for
			}; //if
		}; //for
	}; //for
};

void  selecCampo(int m[10][10], int mSel[10][10], int x, int y) {
	int c = 0, l = 0;

	if (m[x][y] == 0)
		mSel[x][y] = ' ';
	else
	   mSel[x][y] = m[x][y];

	//linha atual para baixo.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		l++;
	}while(l < 10);
	
	//linha atual para cima.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		l--;
	}while(l >= 0);

	//coluna atual para direita.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c++;
	}while(c < 10);

	//coluna atual para esquerda.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c--;
	}while(c >= 0);

	//diagonal para direita e para cima.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c++;
		l++;
	}while((c < 10) && (l < 10));

	//diagonal para direita e para baixo.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c++;
		l--;
	}while((c < 10) && (l >= 0));

	//diagonal para esquerda e para baixo.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c--;
		l--;
	}while((c >= 0) && (l >= 0));

	//diagonal para esquerda e para cima.
	l = x;
	c = y;
	do{
		if (m[l][c] == 0)
		   mSel[l][c] = ' ';
		else
		   break;
		c++;
		l++;
	}while((c < 10) && (l < 10));

};

bool testaFinal(int mSel[10][10], int m[10][10]){
	int l = 0, c = 0, iConta = 0;

	for (l = 1; l < 9; l++){
		for (c = 1; c < 9; c++){
			if ((mSel[l][c] == 63) &&
			   (m[l][c] != 9))
				iConta++;
		};
	};

	if (iConta > 0)
		return false;
	else
		return true;

};
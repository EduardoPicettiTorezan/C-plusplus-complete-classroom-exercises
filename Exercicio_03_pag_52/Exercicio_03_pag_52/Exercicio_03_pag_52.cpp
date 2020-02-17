// Exercicio_03_pag_52.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


void main () {
	int i_mat[10][10] = {{1,2,3,4,5,6,7,8,9,10},
							{2,2,3,4,5,6,7,8,9,10},
								{3,2,3,4,5,6,7,8,9,10},
									{4,2,3,4,5,6,7,8,9,10},
										{5,2,3,4,5,6,7,8,9,10},
										{6,2,3,4,5,6,7,8,9,10},
									{7,2,3,4,5,6,7,8,9,10},
								{8,2,3,4,5,6,7,8,9,10},
							{9,2,3,4,5,6,7,8,9,10},
						 {10,2,3,4,5,6,7,8,9,10}},

						 i_conta_l, i_conta_c, i_temp;

	i_temp = i_conta_l = i_conta_c = 0;

	for (i_conta_l = 1; i_conta_l <= 10; i_conta_l++){

	  for (i_conta_c = 1; i_conta_c <= 10; i_conta_c++){

	    if (i_conta_l == 2){

				i_temp = i_mat[i_conta_l][i_conta_c];

				i_mat[i_conta_l][i_conta_c] = i_mat[8][i_conta_c];

				i_mat[8][i_conta_c] = i_temp;
			}

			if (i_conta_c == 4){

				i_temp = i_mat[i_conta_l][i_conta_c];

				i_mat[i_conta_l][i_conta_c] = i_mat[10][i_conta_c];

				i_mat[10][i_conta_c] = i_temp;
			}

			if (i_conta_l == 5){

				i_temp = i_mat[i_conta_l][i_conta_c];

				i_mat[i_conta_l][i_conta_c] = i_mat[i_conta_l][10];

				i_mat[i_conta_l][10] = i_temp;
			}

		}
	}
	getchar();
}


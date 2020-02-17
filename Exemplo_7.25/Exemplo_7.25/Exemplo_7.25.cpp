// Exemplo_7.25.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int *v /* ponteiro */ , n, i;

	printf("\nTamanho do vetor? ");
	scanf("%d",&n);
	fflush(stdin);

	v = malloc( n * sizeof(int) );

	if( v == NULL ) exit(1);
		for(i=0; i<n; i++) {

			printf("\n%do. Valor? ", (i + 1));
			scanf("%d",&v[i]);
			fflush(stdin);
	}

	while(i>=0 )
		printf("%d ",v[--i]);

	getchar();
}
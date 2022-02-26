#include <stdio.h>
#include <math.h>


int main(){
	int quadrado[5][5]= {0}, i, j, m = 0, n = 0, l;
	int tabela[5][6] = {{1,2,3,4,5},
	{2,4,6,8,10},
	{20,10,5,3,1},
	{3,6,9,12,15} };


	int mult_matriz[5][6], k;

	for (k=0; k<6; k++){

		mult_matriz[0][k] = tabela[0][k]*5;
	}

	for ( i=0; i<5; i++){

		for (l=i; (l+1)<5; l++){
			printf("  0  ");
		};
		
		if (mult_matriz[0][n] >= 10){
		printf("  %d  ", mult_matriz[0][n]);
		}
		if (mult_matriz[0][n] < 10){
		printf("   %d  ", mult_matriz[0][n]);
		}
		n++;
		m++;

		for( j=1; j<m; j++){
			printf("  0  ");
		};

		printf("\n");

	};


return 0; 
};
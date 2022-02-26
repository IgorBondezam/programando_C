#include <stdio.h>

#define LIN 2
#define COL 2

int main(){
	int linha, coluna, i, x;
	float notas[LIN][COL];

	for(linha=0; linha < LIN; linha ++){

		for(coluna = 0; coluna <COL; coluna ++){

			scanf("%f",&notas[linha][coluna]);

		}
	}

	for(i=0; i<LIN; i++){
		for(x=0; x<COL; x++){
			printf("%.2f | ", notas[i][x]);

		}
		printf("\n");
	}

	return 0;
}
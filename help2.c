#include <stdio.h>

#define MAX 1000


int main(){
	int conta[MAX];
	float saldo[MAX];
	int i=0, cont=0, j;
	float negativo;

	printf("\n");

	while(conta[i] >= 0){
		printf("Número da conta: ");
		scanf("%d", &conta[i]);

		if(conta[i] >= 0){

			printf("Saldo da conta: ");
			scanf("%f", &saldo[i]);

			printf("---------------------------------\n");

			cont++;
			i++;
		}
		else{

			printf("======================================\n");

			for(j=0; j < cont; j++){
				printf("Número da conta: %d\n", conta[j]);

				if(saldo[j] >= 0){
					printf("Saldo: Positivo\n");
				}
				else{
					printf("Saldo: Negativo\n");
					negativo++;
				}

				printf("======================================\n");

			}
			printf("Porcentagem de contas negativas: %.2f porcento.\n", (negativo/cont)*100 );

		return 0;

		}
	}

}
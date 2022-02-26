#include <stdio.h>

#define MAX 1000

int main(){

	int conta[MAX], dias[MAX];
	int n, i=0, valor, total=0;

	while (conta[i] >= 0){
		printf("Digite o número da conta: ");
		scanf("%d", &conta[i]);
		if(conta[i] > 0){
			printf("Número de dias que irá permanecer na pousada: ");
			scanf("%d", &dias[i]);
			i++;

		printf("---------------------------------\n");

		}
		else{

			printf("======================================\n");


			for(n=0; n < i; n++){
				printf("Número da conta: %d\n", conta[n]);
				if(dias[i] < 10){
					valor= dias[n]*280 + dias[n]*30;
				}
				else{
					valor= dias[n]*280 + dias[n]*20;
				}
				printf("Valor pago será: %d\n", valor);

				total += valor;

			printf("======================================\n");

			}
			printf("O total ganho pela pousada é: %d\n", total);

			return 0;
		}

	}
}
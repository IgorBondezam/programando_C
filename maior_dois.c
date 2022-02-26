#include <stdio.h>

int maior (int a, int b){

	if(a>b){
		return a;
	}

	else{
		return b;
	}

}

int main(){
	int x, y, numero;
	scanf("%d%d", &x, &y);
	numero = maior(x, y);
	printf("O maior número é %d\n", numero);

	return 0;
}
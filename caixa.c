#include <stdio.h>

#define  q '#'

void lado (int n_lado){
	int i;

	for(i=0; i<n_lado; i++){
		printf("%c", q);
	}
}

void meio (int dentro){
	
	lado(1);

	int a;
	for(a=0; a<dentro-2; a++){
		printf(" ");
	}

	lado(1);

	printf("\n");
}

void caixa (int largura){
	lado (largura);
	printf("\n");
	meio (largura);
	meio (largura);
	meio (largura);
	meio (largura);
	meio (largura);
	lado (largura);
	printf("\n");

}
int main(){

	int x;
	scanf("%d", &x);

	caixa(x);
	caixa(x);
	caixa(x);

	return 0;
}
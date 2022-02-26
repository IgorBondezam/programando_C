#include <stdio.h>
#include <math.h>


float media (float n[], int tam){
	int i;
	float soma =0;
	for(i=0; i<tam; i++){
	soma += n[i];
	}
	return soma/tam;
}


float variancia (float n[], int tam){
	int i;
	float vari=0;
	float m = media(n, tam);
	for(i=0; i<tam; i++){
	vari += (n[i] - m)*(n[i] - m);
	}
	return vari/tam;
}
float desv (float num[], int tam){
	return sqrt (variancia(num, tam));
}

int main(){
	int i;
	float numeros[10];
	printf("Digite 10 números/n");
	for(i=0; i<10; i++){
		scanf("%f",&numeros[i]);
	}
	printf("O desvio padrã é: %f/n", desv(numeros,10));
	return 0; 
}
#include <stdio.h>

#define MAX_PESSOAS 100


struct pessoas
{
	int idade;
	char sexo[MAX_PESSOAS];
	char cor_olhos[MAX_PESSOAS];
	char cor_cabelos[MAX_PESSOAS];

};

int media_mulheres (struct pessoas p){

	int cont = 0;

		if(p.sexo == 'f' && p.cor_olhos == 'v' && p.cor_cabelos == 'l' ){
			cont++;
		}

		return cont;

	};

void mais_velho (struct pessoas p, int n){

	int aux;

	for (int i = 0; i < n-1; ++i)
	{
		if(p[i].idade < p[i+1].idade){
			aux=p[i]
		}
	}
}
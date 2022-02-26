#include <stdio.h>
#define MAX_NOME 500
#define MASCULINO 0
#define MAX_CLIENTES 1000


struct cliente{
	int codigo;
	char nome[MAX_NOME+1];
	char CPF[15];
	int dia_nascimento;
	int mes_nascimento;
	int ano_nascimento;
	int anos;
	int sexo;
};

void imprimir(struct cliente c){
	printf("Codigo.......: %d\n", c.codigo);
	printf("Nome.........: %s", c.nome);
	printf("CPF..........: %s\n", c.CPF);
	printf("Idade........: %d\n", c.anos );
	printf("Nascimento...: %d/%d/%d\n", c.dia_nascimento, c.mes_nascimento, c.ano_nascimento );
	printf("Sexo.........: ");
		if(c.sexo == MASCULINO){
			printf("masculino\n");
		}else{
			printf("feminino\n");
		}
	printf("\n");
	printf("-------------------------\n");
	printf("\n");
};

int main(){
	int n, i;
	float soma_idade;
	struct cliente c[MAX_CLIENTES];
	scanf("%d", &n);

	for (i=0; i<n; i++){
		c[i].codigo = i;

		getchar();
		printf("Escreva o nome:  ");
		fgets(c[i].nome, MAX_NOME, stdin);
		printf("Digite o CPF:  ");
		fgets(c[i].CPF, 15, stdin);
		printf("Escreva a data de nascimento:  ");
		scanf("%d%d%d", &c[i].dia_nascimento, &c[i].mes_nascimento, &c[i].ano_nascimento);
		printf("Escreva o sexo (0 para masculino 1 para feminino): ");
		scanf("%d", &c[i].sexo);
		printf("\n");
		printf("------------------------------------\n");
		printf("\n");
		c[i].anos = 2021 - c[i].ano_nascimento;
	};
	for(i=0; i<n; i++){
		imprimir(c[i]);
		soma_idade += c[i].anos;
	};

	printf("A média das idades de todos os clientes é: %.2f\n", (soma_idade/n) );

return 0;

}
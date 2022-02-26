#include <stdio.h>

float fahr (float x){
	
	float y;
	y = (1.8*x) +32;

return y;

}

int main(){
	
	float x, conversao;
	scanf("%f", &x);
	conversao = fahr(x);
	printf("O valor convertido de %.2f' graus Celsos é %.2f em graus Fahrenheit\n", x,conversao);

	return 0;
}
#include <stdio.h>


int soma (int x, int y){
	
	return x+y;
}


int main(){
	
	int x, y;
	scanf("%d%d", &x, &y);
	printf("A soma de %d e %d é: %d\n", x, y, soma(x, y));

	return 0;

}
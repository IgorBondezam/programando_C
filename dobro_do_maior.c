#include <stdio.h>

float n_dobro(float x, float y){
	
	float dobro;
	if(x>y){
		dobro = y/2;
	} 
	else{
		dobro = x/2;
		}
	return dobro;
	}

int main(){
	float x, y, dobro;
	scanf("%f%f", &x, &y);
	dobro = n_dobro(x, y);
	printf("O número é %.2f\n", dobro);

	return 0;
	}
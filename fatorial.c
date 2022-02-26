#include <stdio.h>


float fatorial (float x, float y){
	
	float i, mult;

	for(i=1; i<x; i++){

	mult = y*(i);

	y = mult;

	}

	return mult;
}

int main(){
	
	float x, y, z;
	scanf("%f", &x);
	y = x;
	z = fatorial(x, y);
	printf("A fatorial de %.1f é %.1f\n", x, z);

	return 0;

}
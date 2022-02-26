#include <stdio.h>
#include <math.h>

float area_circulo (float raio){
	
	float area;

	area = M_PI * (raio * raio);

	return area;

}

int main(){
	
	float x, y;
	scanf("%f", &x);
	y = area_circulo(x);
	printf("A área do circulo de raio %.2f é %.3f\n", x, y);

	return 0;
}
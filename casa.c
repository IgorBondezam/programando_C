#include <stdio.h>

#define q '#'


void parede (int altura){
	
	int i;

	for(i=0; i < altura; i++){

	printf("%c", q);

	}
	printf("\n");
}


void casa(int altura_casa){

	parede(altura_casa -2);
	parede(altura_casa -2);
	parede(altura_casa);
	parede(altura_casa);
	parede(altura_casa -2);
	parede(altura_casa -2);
	printf("\n");
	}

int main(){

int x, y, z, a;
scanf("%d%d%d%d", &x, &y, &z, &a);
printf("\n");

	casa(x);
	casa(y);
	casa(z);
	casa(a);

	return 0;

}
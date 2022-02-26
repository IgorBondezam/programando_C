#include <stdio.h>

void sinal (float x){
	
	if (x>0){

		printf("Verdadeiro\n");
	}
	else if(x<0){

		printf("Falso\n");

	}

}


int main(){
	
 	float x;
 	scanf("%f", &x);
 	sinal(x);



 	return 0;
}
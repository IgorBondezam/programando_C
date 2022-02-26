#include <stdio.h>

int main(){
	int i;
	i=0;

	while(i > -999){

	printf("digite um número:");
	scanf("%d", &i);

	if( i!= -999){
			printf("O triplo do número é: %d \n", i*3);
		}
	else{
		return 0;
		};
	};
};
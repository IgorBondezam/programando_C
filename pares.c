#include <stdio.h>


int main(){
	
	int a[100], b[100];
	int x, i, c, d, t;

	printf("Digite o limite dos de 0-100 números:");
	scanf("%d", &t);
	printf("\n");

	for(i=0; i<t; i++){

	scanf("%d", &a[i]);

	}

	printf("\n");

	c=0;

	for(i=0; i<t; i++){

		if(a[i]!=0){
			
			if(a[i]%2 == 0){

			b[c] = a[i];
			c++;
			}
		}
	}

	d = c;

	for(c=0; c<d; c++){

		printf("%d\n", b[c]);

	}



}
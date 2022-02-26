#include <stdio.h>


#define Q '*'


int main(){

	int i, b, c, cont1, cont2, cont3;
	scanf("%d", &i);
	printf("\n");
	c = i;
	b = 1;

	for (cont1 = 0; cont1 < i; cont1++ ){

		for (cont3 = 0; cont3 < c; cont3++){
			printf(" ");
		}
		c--;


		for (cont2 = 0; cont2 < b; cont2++){
			printf("%c", Q);
		}

		b= b+2;
		printf("\n");

	}



return 0;

} 
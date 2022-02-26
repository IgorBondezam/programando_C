#include <stdio.h>


#define Q '&'


int main(){

	int i, b, cont1, cont2, cont3;
	scanf("%d", &i);
	printf("\n");
	b = 1;

	for (cont1 = 0; cont1 < i; cont1++ ){

		for (cont2 = 0; cont2 < b; cont2++){
			printf("%c", Q);
		}

		b++;
		printf("\n");

	}

b=i;
b--;

	for (cont1 = i; cont1 > 0 ; cont1-- ){


		for (cont3 = 1; cont3 <= b; cont3++){
			printf("%c", Q);
		}

		b--;
		printf("\n");

	}


return 0;

}
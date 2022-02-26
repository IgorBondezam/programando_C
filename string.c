#include <stdio.h>

#define MAX 500

int main(){
	char frase[MAX+1], frase2[MAX+1];

	int i=0, contador=0, j, k;

	fgets(frase, MAX+1, stdin);

	while(frase[i] !='\0'){

				++contador;

		i++;
	};

	//inversor


	k=contador;

	frase2[contador+1]='\0';

	for (j=0; j<(contador); j++){

		frase2[k]=frase[j];
		k--;
	};

	puts(frase2);


return 0;

}
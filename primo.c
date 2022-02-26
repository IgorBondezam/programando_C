#include<stdio.h>

int main(){
	int n_digitado, contadora;
	scanf ("%d", &n_digitado);

	contadora = 2;

	while( n_digitado % contadora !=0 ){

			contadora=contadora+1;
		}

		if(n_digitado==0){
			printf("\n");
		}

		else if(n_digitado==contadora){
			printf("O número digitado foi:  %d\n", n_digitado);
			printf("1\n");
		}

		else{
			printf("O número digitado foi:  %d\n", n_digitado);
			printf("0\n");
		}


return 0;
}
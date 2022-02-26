#include <stdio.h>

int main(){
	
	int a[10], b[10];
	int x, i, n, cont, y;

	for(i=0; i<10; i++){

		scanf("%d", &a[i]);
		
	}


	printf("\n");

	for(x=0; x<9; x++){

		for(i=0; i<10; i++){

			if(a[i]>a[i+1]){

				a[i]=a[i];
				a[i+1]=a[i+1];
			}
			else{

				y=a[i];
				a[i]=a[i+1];
				a[i+1]=y;


			}

		}

	}



	for(i=0; i<10; i++){

		printf("%d\n", a[i]);

	}
		
	return 0;

}
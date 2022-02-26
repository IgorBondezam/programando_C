#include <stdio.h>



void trian (int y, int x){
	
	int i;
	for(i=0; i<y ; i++){

		printf("%d", x);
		

	}

	printf("\n");

}


int main(){
	
	int x, y, i;
	scanf("%d", &y);
	printf("\n");
	x = 1;
	

	for(i=0; i<y; i++){

	trian(i+1, x);
	x++;
}

return 0;

}

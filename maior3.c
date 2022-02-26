#include <stdio.h>

int maior2 (int a, int b){

	if(a>b){
		return a;
	}

	else{
		return b;
	}

}

int maior3 (int c, int d){

	if(c>d){
		return c;
	}

	else{
		return d;
	}


}

int main(){
	int x, y, z, numero, numero3;
	scanf("%d%d%d", &x, &y, &z);
	numero = maior2(x, y);
	numero3 = maior3 (numero, z);
	printf("O maior número é %d\n", numero3 );

	return 0;
}
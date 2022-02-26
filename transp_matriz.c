#include <stdio.h>


int main(){

	int a[100][100],transp[100][100], m, n, i, j;

	printf("Digite as dimensões n e m da matriz\n");
	scanf("%d%d", &n, &m);


	printf("Digite os elementos de A, linha a linha\n");

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			scanf("%d", &a[i][j]);
		};
	};

	printf(".\n");

	printf("A matriz seria assim:\n");

		for (i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf("%d / ", a[i][j] );
		};
		printf("\n");
	};

	printf("Transposta ela é assim:\n");

	for (i=0; i<n; i++){
		for(j=0; j<m; j++){
			transp[j][i] = a[i][j];
		};
	};
	
	for (i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d / ", transp[i][j] );
		};
		printf("\n");
	};
	


return 0;


}	
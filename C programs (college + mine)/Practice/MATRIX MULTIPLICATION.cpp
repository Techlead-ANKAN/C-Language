# include <stdio.h>
 main()
{
	int a[2][2] = {{1,1},{2,2}}, b[2][2] = {{1,1},{2,2}}, c[2][2] , sum[2][2], i, j, k;
	
	// Matrix A
	printf("Matrix A: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d ", a[i][j]);
		printf("\n");
	}
	
	// Matrix B
	printf("Matrix B: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d ", b[i][j]);
		printf("\n");
}
	
	//Answer
	printf("Answer: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			printf("%d", sum[i][j]);
	}
		printf("\n");
	}
}

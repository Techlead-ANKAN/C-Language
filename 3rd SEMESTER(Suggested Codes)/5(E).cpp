// 5(D) To calculate addition / subtraction of 2-dimensional matrix.

# include <stdio.h>
int main()
{
	int a[2][2] = {{1,2}, {1,2}};
	int b[2][2] = {{1,2},{1,2}};
	int sum[2][2];
	int sub[2][2];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = a[i][j] + b[i][j];
			sub[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("Addition: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
	printf("Subtraction: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ", sub[i][j]);
		}
		printf("\n");
	}
}

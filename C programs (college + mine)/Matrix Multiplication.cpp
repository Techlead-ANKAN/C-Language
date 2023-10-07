# include <stdio.h>
int main()
{
	int a[2][2] = {{2,3},{5,6}}, b[2][2] = {{1,3},{2,4}}, c[2][2], sum ,i,j,n,k;
	printf("1st matrix: \n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf(" %d", a[i][j]);
		printf("\n");
	}
	
	printf("2nd Matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf(" %d", b[i][j]);
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		sum = 0;
		for(k=0;k<2;k++)
		sum = sum + a[i][k] * b[k][j];
		c[i][j] = sum;
	   }
	}	   


printf("Answers: \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	printf(" %d", c[i][j]);
	printf("\n");
}
}

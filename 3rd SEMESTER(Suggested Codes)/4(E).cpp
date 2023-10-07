// 4(E) To generate simple number triangle for n rows

# include <stdio.h>
int main()
{
	int n,i,j;
	printf("Enter no.of rows: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d", j);
	    }
	    printf("\n");
	}
}

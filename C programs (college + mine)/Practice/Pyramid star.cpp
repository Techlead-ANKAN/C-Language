# include <stdio.h>
main()
{
	int i,j,n;
	printf("Enter no.of rows: ");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n-(i-1) && j<=n+(i-1))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}

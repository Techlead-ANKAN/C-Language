// 3(C) To find even or odd numbers.

# include <stdio.h>
int  main()
{
	int end,j,i;
	printf("Enter the range: ");
	scanf("%d", &end);
	printf("EVEN NO.s: ");
	for(i=1;i<=end;i++)
	{
		if (i%2==0)
			printf("%d ",i);
	}
	printf("\n"); 
	printf("ODD NO.s: ");
	for (j=1;j<=end;j++)
	{
		if (j%2!=0)
			printf("%d ", j);
	}
}


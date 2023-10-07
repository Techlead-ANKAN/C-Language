// 4(F) To generate Pascal triangle for n rows.

# include <stdio.h>
int main()
{
	int row, i,j,space, c = 1;
	printf("Enter no.of rows: ");
	scanf("%d", &row);
	
	for(i=0;i<=row;i++)
	{
		for (space= 1;space<=row-i;space++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if (j==0 || i==0)
				c=1;
			else
				c = c*(i-j+1)/j;
				printf("% 4d", c);
		}
		printf("\n");
	}
}



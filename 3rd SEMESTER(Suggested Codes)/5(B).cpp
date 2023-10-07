// 5(B) To sort array elements in ascending / descending order.

# include <stdio.h>
int main()
{
	int numbers[5] = {199,4,78,11,789};
	int i,j,k,n, temp;
	
	for (i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if (numbers[i]>numbers[j])
			{
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	printf("In Ascending Order: ");
	for(k=0;k<5;k++)
	{
		printf("%d ", numbers[k]);
	}
	printf("\n");
	
	printf("In Descending Order: ");
	for(n=4;n>=0;n--)
	{
		printf("%d ", numbers[n]);
	}
}

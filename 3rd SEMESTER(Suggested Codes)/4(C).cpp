// 4(C) To add first ‘n’ natural, even, odd numbers using different loop 
//structures.

# include <stdio.h>
int main()
{
	int n,i,j,k, sum = 0, even = 0, odd = 0;
	printf("Enter no.of terms: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	printf("Sum of Natural Numbers: %d\n", sum);
	
	for (j=1;j<=n;j++)
	{
		if (j%2==0)
			even = even + j;
	}
	printf("Sum of Even Numbers: %d\n", even);
	
	for (k=1;k<=n;k++)
	{
		if (k%2!=0)
			odd = odd + k;
	}
	printf("Sum of Odd Numbers: %d", odd);
}

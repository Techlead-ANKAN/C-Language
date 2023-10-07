//4(I) To find all the Armstrong numbers within 100 to 1000.

# include <stdio.h>
int main()
{
	int low, up,m,i,sum,rem;
	printf("Enter the lower limit: ");
	scanf("%d", &low);
	printf("Enter the upper limit: ");
	scanf("%d", &up);
	
	for (i=low; i<=up; i++)
	{
		m = i;
		sum = 0;
		while (m!=0)
		{
			rem = m%10;
			sum = sum + (rem*rem*rem);
			m = m/10;
		}
		if (sum==i)
			printf("%d ", i);
			
	}
}

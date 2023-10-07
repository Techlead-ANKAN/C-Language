// 4(H) To generate all prime numbers within the given range.

# include <stdio.h>

int isprime(int n)
{
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0; 
	    }
	}
	return 1;
}

int main()
{
	int i,low, up;
	printf("Enter lower limit: ");
	scanf("%d", &low);
	printf("Enter upper limit: ");
	scanf("%d", &up);
	
	for(i=low;i<=up;i++)
	{
		if (isprime(i))
		{
			printf("%d ", i);
	    }
	}
}

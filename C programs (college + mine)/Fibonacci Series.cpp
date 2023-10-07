# include <stdio.h>
int main()
{
	int i,n, first = 0, sec = 1, nextterm = 0;
	printf("Enter the no.of terms: ");
	scanf("%d", &n);
	nextterm = first + sec;
	printf("%d %d",first, sec);
	for(i=0;i<=n;i++)
	{
		printf(" %d", nextterm);
		first = sec;
		sec = nextterm;
		nextterm = first + sec;
	}
}

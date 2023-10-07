# include <stdio.h>
int main()
{
	int i, n, dig, sum = 0,m;
	printf("Enter number: ");
	scanf("%d", &n);
	m = n;
	while (n>0)
	{
		dig = n % 10;
		sum = sum + (dig*dig*dig);
		n = n/ 10;
	}
	if (m == sum)
	printf("Armstrong No.");
	else
	printf("Not Armstrong No.");
}

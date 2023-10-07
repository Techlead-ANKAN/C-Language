// Reverse a Given Number Using While Loop
# include <stdio.h>
main()
{
	int n,sum = 0, dig;
	printf("Enter number: ");
	scanf("%d", &n);
	
	while (n>0)
	{
		dig = n % 10;
		sum = sum * 10 + dig;
		n = n / 10;
	}
	printf("Reverse No. = %d", sum);
}

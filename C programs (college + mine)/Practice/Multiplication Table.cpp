// Print Multiplication Table Using for Loop
# include <stdio.h>
main()
{
	int i, n, mul = 1;
	printf("Enter number: ");
	scanf("%d", &n);
	
	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n", n,i,(n*i));
	}
}

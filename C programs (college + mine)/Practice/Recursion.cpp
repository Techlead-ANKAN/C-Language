# include <stdio.h>

int sum(int , int);  // Func. Declaration

main()
{
	int a,b,c;
	printf("Enter 2 no.s: ");
	scanf("%d %d", &a, &b);
	
	c = sum(a,b);  // Func. Call
	
	printf("%d", c);
}

// Func Define
int sum (int x, int y)
{
	return (x + y);
}

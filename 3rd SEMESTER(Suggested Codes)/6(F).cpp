// 6(F) Write a program in C to find GCD of two numbers using recursion.

# include <stdio.h>
int gcd(int a, int b)
{
	if (b!=0)
		return gcd(b, a%b);
	else
		return (a);
}
int main()
{
	int n1, n2;
	printf("Enter n1: ");
	scanf("%d", &n1);
	printf("Enter n2: ");
	scanf("%d",&n2);
	
	printf("%d",gcd(n1,n2));
}

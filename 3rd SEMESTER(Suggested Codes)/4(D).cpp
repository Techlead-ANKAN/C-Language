// 4(D) To find GCD, LCM of two integral numbers.

# include <stdio.h>
int main()
{
	int n1, n2, gcd, lcm, i;
	printf("Enter number 1: ");
	scanf("%d", &n1);
	printf("Enter number 2: ");
	scanf("%d", &n2);
	
	for(i=1; i<=n1 && i<=n2; i++)
	{
		if (n1%i==0 && n2%i==0)
		gcd = i;
	}
	lcm = (n1*n2)/gcd;
	printf("GCD = %d\n", gcd);
	printf("LCM = %d", lcm);
}

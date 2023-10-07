// 3)(A) Find the greatest and smallest of three numbers

# include <stdio.h>
int main()
{

	int a,b,c;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	if (a>b && a>c)
		printf("%d iS GREATEST", a);
	else if (b>a && b>c)
		printf("%d is GREATEST", b);
	else
		printf("%d is GREATEST", c);

}



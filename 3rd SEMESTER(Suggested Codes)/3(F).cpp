// 3(F) To check whether there exist real (float) roots of a quadratic
//equation and if exist find them.

# include <stdio.h>
# include <math.h>
int main()
{
	double a,b,c,r1,r2;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("Enter c: ");
	scanf("%d", &c);
	
	r1 = -b + math.sqrt((b*b) - (4*a*c));
	r2 = -b - math.sqrt((b*b) - (4*a*c));
	
	printf("%d,%d", r1, r2);
}






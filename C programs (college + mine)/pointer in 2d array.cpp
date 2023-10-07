# include <stdio.h>
int main()
{
	int a[2][2] =  {{1,2},{3,4}};
	int *p;
	p = &a[0][1];
	printf("%d",*p);
}

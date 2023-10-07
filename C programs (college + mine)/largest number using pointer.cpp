# include <stdio.h>
int main()
{
	int a[] = {20,5,30,40,2}, i;
	int *p;
	p = a;
	for(i=1;i<5;i++)
	{
		if (a[i] > *p)
		*p = a[i];
	}
	printf("Largest No.: \n");
	printf("%d", *p);
}

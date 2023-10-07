// 5(A)To find the largest and smallest numbers from array elements.

# include <stdio.h>
int main()
{
	int a[] = {1,8,1,29,2};
	int i,max, *p;
	p = a;
	
	for(i=0;i<5;i++)
	{
		if (a[i]>*p)
		*p = a[i];
	}
	printf("%d",*p);
	
}

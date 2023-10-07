# include <stdio.h>
main()
{
	int a[] = {1,2,3,4,5,6};
	int *p;
	p = a;
	printf("Number: %d\n", *p);
	printf("Address: %p", *p);
}


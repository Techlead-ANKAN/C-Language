// 6(G) To demonstrate call by reference, call by value. 

// call by value
# include <stdio.h>
void add(int number)
{
	printf("Before adding value in function, number = %d\n", number);
	number += 105;
	printf("After adding value in function, number = %d\n", number);
}

int main()
{
	int a;
	printf("Before function call, a= %d\n", a);
	add(a);
	printf("After function call, a= %d",a);
}

// call by reference
# include <stdio.h>
int add(int *num)
{
	printf("Before adding value in the function, num = %d\n", *num);
	(*num) += 100;
	printf("After adding value in the function, num = %d\n", *num); 
}
int main()
{
	int a;
	printf("Before function call, a = %d\n", a);
	add(&a);
	printf("After function call, a = %d", a);
}


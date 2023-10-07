# include <stdio.h>
int sum(int);
int main()
{
	int add, num;
	printf("Enter the number of digit: ");
	scanf("%d", &num);
	
	add = sum(num);
	printf("Result = %d", add);
	
}
int sum(int a)
{
	if (a!=0)
	return (a + sum(a-1));
	else
	return 0;
}

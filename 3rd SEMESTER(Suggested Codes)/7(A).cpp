// 7(A) To read and display an integer array using pointer.

# include <stdio.h>
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9};
	int *ptr, i;
	ptr = &arr[0];
	for(i=0;i<=8;i++)   // i will be less than equals to the no.of items present.
		printf("%d ", *(ptr+i));
}

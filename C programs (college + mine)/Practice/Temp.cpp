#include <stdio.h>

main() 
{
int i, j,r;
printf("Enter no.of rows: ");
scanf("%d", &r);    

for(i=1;i<=r;i++)
{
	for(j=1;j<=i;j++)
	printf("*", j);
	printf("\n");
}
}

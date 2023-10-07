# include <stdio.h>
int main() 
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	printf("The number in OCTAL: %o\n", n);
	printf("The number in DECIMAL: %d\n", n);
	printf("The number in HEXA-DECIMAL: %x\n", n);
}

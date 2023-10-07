// Program to Check Character Is Uppercase, Lowercase Alphabet or a Digit or a Special Symbol
# include <stdio.h>
main()
{
	char a;
	printf("Enter any key: ");
	scanf("%c", &a);
	
	if ((a>=65) && (a<90))
	printf("Upper Case");
	else if ((a>=97) && (a<=122))
	printf("Lower Case");
	else if ((a>=48) && (a<=57))
	printf("Digit");
	else
	printf("Special Symbols");
}

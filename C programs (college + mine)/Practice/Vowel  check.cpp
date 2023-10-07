# include <stdio.h>
main()
{
	char ch;
	int lower, upper;
	printf("Enter an alphabet: ");
	scanf("%c", &ch);
	
	lower = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
	upper = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
	if (lower || upper)
	printf("Vowel");
	else
	printf("Not Vowel");
	
}


//Checking You Are Eligible for Voting or Not
# include <stdio.h>
main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age>=18)
	printf("Eligible to vote");
	else
	printf("Not Eligible to Vote");
}

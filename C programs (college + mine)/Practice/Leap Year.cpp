# include <stdio.h>
main()
{
	int yr;
	printf("Enter Year: ");
	scanf("%d", &yr);
	
	if (yr%400==0)
	printf("Leap Year");
	else if (yr%4==0)
	printf("Leap Year");
	else if (yr%100==0)
	printf("Not Leap Year");
	else
	printf("Not Leap Year");1
}

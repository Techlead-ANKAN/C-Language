// 3(B) To display pass class, second-class, distinction according to the 
//marks entered from the keyboard.

# include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks: ");
	scanf("%d", &marks);
	if ( marks>40 && marks<50 )
		printf("PASS CLASS");
	else if ( marks>50 && marks<70 )
		printf("SECOND CLASS");
	else
		printf("DISTINCTION");
}

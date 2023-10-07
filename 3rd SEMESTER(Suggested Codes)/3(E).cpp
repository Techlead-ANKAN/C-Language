// 3(E) Implementation and displaying the menu to execute 1. ADD, 2. 
//SUBTRACT 3. MULTIPLICATION, 4. DIVISION using switch case.

# include <stdio.h>
int main()
{
	int op_no, a,b;
	printf("Enter 1 for ADD, 2 for SUBTRACT, 3 for MULTIPLICATION, 4 for DIVISION: ");
	scanf("%d", &op_no);
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	
	switch (op_no)
	{
		case 1:
			printf("Addition: %d", (a+b));
			break;
		
		case 2:
			printf("Subtraction: %d", (a-b));
			break;
		
		case 3:
			printf("Multiplication: %d", (a*b));
			break;
			
		case 4:
			printf("Division: %d", (a/b));
			break;
	}
}

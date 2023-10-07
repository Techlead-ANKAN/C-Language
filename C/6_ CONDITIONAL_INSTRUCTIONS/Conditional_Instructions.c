/*IF ELSE*/
// Structure
/*
if (condition){
   statements if condition is True
}
else{
   statements if condition is False
}
*/

// Example - 1
/*
# include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("%d is even", n);
    }
    else{
        printf("%d is odd",n);
    }
    return 0;
}
*/

// Example - 2


# include <stdio.h>
void main()
{

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if age>=30
        printf("Capable of driving");
    else if age<25
        printf("Not capable of driving");
}
























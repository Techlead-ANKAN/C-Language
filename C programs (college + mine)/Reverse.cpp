# include <stdio.h>
int main()
{
    int n,sum = 0, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    while (n > 0)
    {
        dig = n % 10;
        sum = sum*10 + dig;
        n = n / 10;
    }
    printf("Rverese No.: %d", sum);
}


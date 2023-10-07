# include <stdio.h>
int main()
{
    int n, sum = 0, m, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    while (n>0)
    {
        dig = n % 10;
        sum = sum + (dig*dig*dig);
        n = n / 10;
    }
    if (m == sum)
    printf("%d is Armstrong",m);
    else
    printf("%d is Not Armstrong",m);
}


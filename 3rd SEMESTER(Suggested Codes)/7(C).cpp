//7(C) To read, display, add and subtract of two times defined using hour, minutes and values of seconds.

# include <stdio.h>
int main()
{
	int hour1, min1, sec1;
	int hour2, min2, sec2;
	printf("Enter 1st hour, min and sec: ");
	scanf("%d\n%d\n%d", &hour1, &min1, &sec1);
	printf("\nEnter 2nd hour, min and sec: ");
	scanf("%d\n%d\n%d", &hour2, &min2, &sec2);
	
	printf("\n1st Time: %d HOUR %dMINUTE %dSECOND", hour1, min1, sec1);
	printf("\n2nd Time: %d HOUR %dMINUTE %dSECOND", hour2, min2, sec2);
	
	printf("\nDifference b/w times: %d HOUR %dMINUTE %dSECOND", (hour2-hour1), (min2-min1), (sec2-sec1));
}



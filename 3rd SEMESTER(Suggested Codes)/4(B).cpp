// 4(B) To demonstrate Continue and Break statements within loop 
//structure.

// break
# include <stdio.h>

int main()
{
	int i,n;
	printf("Enter the range: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d", i);
		if (i==5)
			break;
	}
}

// continue
# include <stdio.h>
int main()
{
	int i,n;
	printf("Enter range: ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		if (i==11)
		continue;
		printf("%d ", i);  
	}
}

// 5(J) To make the abbreviated form of a multiword string

# include <stdio.h>
# include <string.h>
int main()
{
	char main[50] = "PYTHON JAVA C RUBY";
	char s2[50] = "";
	char a;
	int i;
	
	for(i=0;i<50;i++)
	{
		if (main[i]==' ')
		{
			//strcat(s2,main[i+1]);
			a = main[i+1];
		}
	}
	printf("Abbreviated: %s", s2);
}



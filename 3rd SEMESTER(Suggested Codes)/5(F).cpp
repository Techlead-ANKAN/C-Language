// 5(G) To find the number of vowels and consonants in a string.

# include <stdio.h>
int main()
{
	char str[50] = "ANKAN MAITY IS A GOOD BOY";
	int i, vow = 0, con = 0;
	for(i=0;i<50;i++)
	{
		if (str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
		{
			vow = vow + 1;
		}
	}
	for(i=0;i<50;i++)
	{
	if (str[i]!='A'|| str[i]!='E'|| str[i]!='I'|| str[i]!='O'|| str[i]!='U'||str[i]!=' ')
	{
		con = con + 1;
	}	
	}
	
	printf("%d ", vow);
	printf("%d ", con);
}


// 5(I) To check whether a string is palindrome or not.

# include <stdio.h>
# include <string.h>

void ispalindrome(char s[])
{
	int r = strlen(s) - 1;
	int l = 0;
	int flag = 0;
	
	while (r>l)
	{
		if (s[l++] == s[r--])
			flag =1;
		else
			flag = 0;
	}
	if (flag==1)
	{
		printf("%s IS A PALINDROMIC STRING\n", s);
	}
	else
	{
		printf("%s IS NOT A PALINDROMIC STRING\n", s);
	}
	
}
int main()
{
	ispalindrome("ANKAN");
	ispalindrome("abba");
}

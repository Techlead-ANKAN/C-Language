// 5(I) To replace a specific character/string by another character/string in a multiword string.

# include <stdio.h>
# include <string.h>
int main()
{
	char main_str[20] = "ANKAN major is C";
	char s1 = 'C';
	char rep_str[20] = "PYTHON";
	
	for(int i =0;i<strlen(main_str);i++)
	{
		if (main_str[i] == s1)
			main_str[i] = rep_str[20];
	}
	printf("After replacement: %s", main_str);
}

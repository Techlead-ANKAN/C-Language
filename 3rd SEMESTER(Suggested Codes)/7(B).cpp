// 7(B) To read and display a text using a character pointer to a string.

# include <stdio.h>
int main()
{
	char str[10] = "ANKAN";
	char *ptr;
	int i;
	ptr = &str[0];
	
	for(i=0;i<=4;i++)
		printf("%c ", *(ptr+i));
}

// 5(H) Implementation of strlen(), strcpy(), strcat() and strcmp() functions.

#include <stdio.h>
# include <string.h>
int main()
{
	char s1[20] = "ANKAN";
	printf("LENGTH: %d\n", strlen(s1));  // --> strlen()
	char s2[20];
	strcpy(s2,s1);
	printf("COPIED: %s\n", s2);
	char s3[20] = " MAITY";
	strcat(s1,s3);
	printf("CONCATENATED: %s\n", s1);
	printf("COMPAIRING: %d",strcmp(s1,s3));	
}

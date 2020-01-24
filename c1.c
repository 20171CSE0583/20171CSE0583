#include<stdio.h>
#include<string.h>
void main()
{
	int n
	{
	char str1[100],str2[100],str3[100];
	printf("enter the string\n");
	gets(str1);
	printf("enter tne string2\n");
	gets(str2);
	strcpy(str1,str2);
	printf("string1 is %s\n",str1);
	printf("string2 is %s\n",str2);
	printf("enter the string3\n");
	gets(str3);
	strncpy(str1,str3,4);
	printf("string1 is %s\n",str1);
}
}


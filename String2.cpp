#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],dest[100];
	int i,len;
	printf("Enter any string:");
	gets(str);
	printf("String is %s",str);
	len=strlen (str);
	printf("\n Length is %d",len);
	strcpy(dest,str);
	printf("\n Copied string is %s",dest);
	Strrer (dest);
	printf("\n Reversed string is %s",dest);
	strcat(str/dest);
	printf("\n After joining: %s",str);
	return 0;
}

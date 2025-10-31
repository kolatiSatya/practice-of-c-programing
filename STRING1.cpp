#include<stdio.h>
int main()
{
	char str[100];
	int i,len;
	printf("Enter any string:");
	gets(str);
	printf("string is: %s",str);
	len=0;
	for(i=0;str[i]!='\0';i++)
	{
		len++;//len=len+1;
	}
	printf("\n length is %d",len);
	return 0;
}

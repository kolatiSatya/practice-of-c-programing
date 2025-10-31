#include<stdio.h>
int main()
{
	char s1[100];
	int i;
	scanf("%[^\n]",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='a' && s1[i]<='z')
		{
			s1[i]=s1[i]-32;
		}
	}
	printf("\n lower case string %s",s1);
	return 0;
}

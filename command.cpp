#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
	char name[50];
	int c,m,b,p;
	float total;
};
int main(int argc,char*argv[])
{
	struct student s1;
	if(argc>=5)
	{
		strcpy(s1.name,argv[1]);
		s1.c=atoi(argv[2]);
		s1.m=atoi(argv[3]);
		s1.b=atoi(argv[4]);
		s1.p=atoi(argv[5]);
		s1.total=s1.c+s1.m+s1.b+s1.p;
		printf("student name and marks:");
		printf("%s\t,%f",s1.name,s1.total);
	}
	else
	{
		printf("not valid");
	}
	return 0;
}

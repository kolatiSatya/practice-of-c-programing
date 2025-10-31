#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
}s1,s2;
int main()
{
	struct student s3={101,"Ramu",78.95};
	s2=s3;
	printf("%d\n",s2.rno);
	printf("%d\n",s2.name);
	printf("%d\n",s2.avg);
	return 0;
}

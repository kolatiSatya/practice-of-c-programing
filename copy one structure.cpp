#include<stdio.h>
struct student
{
	int rno;
	char name[30];
	float avg;
}S1,S2;
int main()
{
	struct student S3={101,"Ramu",78.95};
	S2=S3;
	printf("%d\n",S2.rno);
	printf("%s\n",S2.name);
	printf("f\n",S2.avg);
	return 0;
}

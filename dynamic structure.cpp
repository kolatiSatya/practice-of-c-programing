#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[32];
	float avg;
};
int main()
{
	struct student *s1;
	int n,i;
	scanf("%d",&n);
	s1=(struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("Enter rollno, name and average:\n");
		scanf("%d\n%s\n%f",&(s1+i)->rollno,&(s1+i)->name,&(s1+i)->avg);
	}
	printf("Rollno\tname\taverage");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%f\n",(s1+i)->rollno,(s1+i)->name,(s1+i)->avg);
	}
	return 0;
}

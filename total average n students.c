#include<stdio.h>
struct student
{
	int rno;
	int cp,m,b,c;
	float tot,avg;
};
int main()
{
	struct student std[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter roll number and 4 subjects marks\n");
		scanf("%d%d%d%d%d",&std[i].rno,&std[i].cp,&std[i].m,&std[i].b,&std[i].c);
	}
	for(i=0;i<n;i++)
	{
		std[i].tot=std[i].cp+std[i].m+std[i].b+std[i].c;
		std[i].avg=(float)(std[i].tot/4);
		printf("tot=%f\n,avg=%f\n",std[i].tot,std[i].avg);
	}
	return 0;
}

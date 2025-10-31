#include<stdio.h>
int swap(int,int);
int swap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
	printf("the numbers after swapping was %d  and %d",a,b);
}
int main()
{
	int x,y;
	printf("enter the values: ");
	scanf("%d %d", &x,&y);
	swap(x,y);
	return 0;
}

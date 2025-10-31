#include<stdio.h>
void update (int*);
void update (int*m)
{
	int lab=8;
	*m=*m+lab;
	printf("\n In Fun:%d",*m);
}
int main ()
{
	int marks=31;
	update(&marks);
	printf("\nmarks:%d",marks);
	return 0;
}

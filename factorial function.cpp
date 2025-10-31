#include<stdio.h>
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return (n*factorial(n-1));
	}
}
int main()
{
	int a,b;
	printf("Enter the number");
	scanf("%d",&a);
	b=factorial(a);
	printf("the factorial of %d is %d", a,b);
	return 0;
}

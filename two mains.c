#include<stdio.h>
int main()
{
	int a[10][10],i,j,m,n;
	int b[10][10],p,q;
	printf("Enter rows and columns of 1st martix");
	scanf("%d",&m,&n);
	printf("Enter rows and columns of 2nd matrix");
	scanf("%d",&p,&q);
	printf("Enter %d elements of 1st martix",m*n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter %d elements of 2nd matrix",p*q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Elements of 1st matrix are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("Elements of 2nd matrix are:\n");
	for(i=0;i<p;i++)
	{
		for(i=0;j<q;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

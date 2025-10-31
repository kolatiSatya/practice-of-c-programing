#include<stdio.h>
void Quicksort(int a[],int left,int right)
{
	int i,j,t,pivot;
	if(left<right)
	{
		pivot=left;
		i=left;
		j=right;
		while(i<j)
		{
			while(a[i]<=a[pivot]&&i<right)
			i++;
			while(a[j]>a[pivot])
			j--;
			if(i<j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[j];
		a[j]=a[pivot];
		a[pivot]=t;
		Quicksort(a,left,j-1);
		Quicksort(a,j+1,right);
		
	}
}
int main()
{
	int arr[30],n,i;
	printf("enter number of elements");
	scanf("%d",&n);
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Quicksort(arr,0,n-1);
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}

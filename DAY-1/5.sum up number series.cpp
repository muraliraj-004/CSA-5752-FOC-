#include<stdio.h>
int main()
{
	int n,a[20],i,sum=0;
	printf("enter n elements:");
	scanf("%d",&n);
	printf("Elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
	printf("sum of the numbers series:%d",sum);
}

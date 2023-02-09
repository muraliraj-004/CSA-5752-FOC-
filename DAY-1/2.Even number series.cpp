#include<stdio.h>
int main()
{
	int n,a[20],i;
	printf("Enter n elemens:");
	scanf("%d",&n);
	printf("Elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the number value :");
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
	printf("%d",a[i]);
}
}

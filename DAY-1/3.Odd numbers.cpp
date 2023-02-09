#include<stdio.h>
int main()
{
	int n,a[20],i;
	printf("Enter n elements: ");
	scanf("%d",&n);
	printf("elements are:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("The number value is:");
	for(i=0;i<n;i++)
{
	if(a[i]%2 != 0)
	printf("%d",a[i]);
}
}

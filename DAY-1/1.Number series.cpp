#include<stdio.h>
int main()
{
	int n,i,a[20];
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Enter the values one by one:");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("The output are ");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return NULL;
}

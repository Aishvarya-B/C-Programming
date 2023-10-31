#include<stdio.h>
int main()
{
	int i,p=0,n,k;
	printf("Enter number of array elements");
	scanf("%d",&n);
	int a[n];
	printf("Enter k to find");
	scanf("%d",&k);
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		p++;
	}
	
	printf("no of occurrence of k is %d ",p);
}

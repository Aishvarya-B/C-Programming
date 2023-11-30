#include<stdio.h>
int main()
{
	int i,t,p=0,s,j,n,e;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	int copy[n];
	for (i=0;i<n;i++)
	{
		copy[i]=a[i];
	}
	
for (i=0;i<n;i++)
printf("%d ",copy[i]);	
}

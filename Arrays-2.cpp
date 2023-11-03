#include<stdio.h>
int main()
{
	int i,t,p,s,j,n;
	printf("Enter n");
	scanf("%d",&n);
	int a[n];
	
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j+1]<a[j])
		{t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	}
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
}

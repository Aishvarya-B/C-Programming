#include<stdio.h>
int main()
{
	int a[5],i,t,p,s,j,n=5;
	printf("Enter the array elements");
	for (i=0;i<5;i++)
	scanf("%d",&a[i]);
	for (i=0;i<5;i++)
	{
		for(j=0;j<n-1-i;j++)
		if(a[j+1]<a[j])
		{t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	}
	for (i=0;i<5;i++)
	printf("%d ",a[i]);
}
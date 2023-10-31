#include<stdio.h>
int main()
{
	int i,j,l,n,k;
	printf("Enter number of array elements");
	scanf("%d",&n);
	int a[n];
l=n;
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
	{	if (a[i]==a[j])
		{for(k=0;k<n-i;k++)
		
		a[i+k]=a[i+k+1];
		l--;}
		
	    }
	}
	
	for (i=0;i<l;i++)
	printf("%d ",a[i]);
}

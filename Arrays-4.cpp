#include<stdio.h>
int main()
{
	int i,t,p,s,j,n;

	printf("Enter number of array elements (even)");
	scanf("%d",&n);
	int a[n];	

	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n;i+=2)
	{

		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
		
	
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
}

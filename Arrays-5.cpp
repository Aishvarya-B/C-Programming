#include<stdio.h>
int main()
{
	int i,t,p,q,j,n;

	printf("Enter number of array elements");
	scanf("%d",&n);
	int a[n];	
p=0;q=n-1;
	printf("Enter the array elements");
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for (i=0;q>p;i++)
	{

		t=a[p];
		a[p]=a[q];
		a[q]=t;
		p++;
		q--;
	}
		
	
	for (i=0;i<n;i++)
	printf("%d ",a[i]);
}

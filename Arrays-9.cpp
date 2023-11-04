#include<stdio.h>
int main()
{
	int i,t,p=0,q,j,n;

	printf("Enter n");
	scanf("%d",&n);
	int a[n-1];	

	printf("Enter first n int with one no. missing");
	for (i=0;i<n-1;i++)
	scanf("%d",&a[i]);
	for (i=0;i<n-1;i++)
	{

		p+=a[i];
	}
		
	
	
	printf("missing no. is %d ",n*(n+1)/2-p);
}

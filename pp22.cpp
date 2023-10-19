#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=0;j<i+1;j++)
	{printf("%d",i+1);
	if (j!=i)
	printf("*");}
	printf("\n");
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n-i;j++)
	{printf("%d",n-i);
	if (j!=n-i-1)
	printf("*");}
	printf("\n");
	}
}

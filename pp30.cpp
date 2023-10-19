#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=0;j<i;j++)
	printf(" ");
	printf("*");
	for(j=0;j<2*(n-i-1)-1;j++)
	printf("_");
	if(i!=n-1)
	printf("*");
	printf("\n");
	
	}
}

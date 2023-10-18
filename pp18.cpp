/*Printing patterns 18*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		printf(" ");
		for(k=0;k<i+1;k++)
		printf("%d ",i+1);
		printf("\n");
	}
	return 0;
	}

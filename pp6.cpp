/*Printing patterns 6*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<i;k++)
		printf("  ");
		for(j=0;j<2*(n-i)-1;j++)
		printf("* ");
		printf("\n");
	}
	return 0;
		
	}

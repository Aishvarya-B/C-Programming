/*Printing patterns 11*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		printf("  ");
		for(j=0;j<n-i;j++)
		printf("* ");
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<n-i-1;k++)
		printf("  ");
		for(k=0;k<i+1;k++)
		printf("* ");
		printf("\n");
	}
		return 0;
}

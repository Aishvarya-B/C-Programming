/*Printing patterns 9*/
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		printf(" ");
		for(k=0;k<5;k++)
		printf("* ");
		printf("\n");
	}
	return 0;
	}

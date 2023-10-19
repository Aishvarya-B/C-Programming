/*Printing patterns 26*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
	for (j=0;j<=i;j++)
		printf("%c ",65+n-1-i+j);
	
		printf("\n");
	}
}


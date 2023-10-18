/*Printing patterns 17*/
#include<stdio.h>
int main()
{
	int i,j,k=1,n;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=0;j<i+1;j++)
	{printf("%d ",k);
	k++;}
	printf("\n");
}}

#include<stdio.h>
int main()
{
	int i,n,j;
	printf("Enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{if(i%2==0)
	{for(j=0;j<n-i-1;j++)
	printf(" ");;
	for(j=0;j<i+1;j++)
	printf("*");
	printf("\n");}
	else
	{for(j=0;j<n-i-1;j++)
	printf(" ");;
	for(j=0;j<i+1;j++)
	printf("_");
	printf("\n");}}
	
	for(i=0;i<n-1;i++)
	{if(i%2==0)
	{for(j=0;j<i+1;j++)
	printf(" ");;
	for(j=0;j<n-i-1;j++)
	printf("_");
	printf("\n");}
	else
	{for(j=0;j<i+1;j++)
	printf(" ");;
	for(j=0;j<n-i-1;j++)
	printf("*");
	printf("\n");}}}

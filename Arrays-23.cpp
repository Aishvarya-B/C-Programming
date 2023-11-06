#include<stdio.h>
int main()
{
	int i,t,p=0,s,j,n,e;
	printf("Enter n");
	scanf("%d",&n);
	int a[n][n];
	int b[n][n];
	int c[n][n];
	printf("Enter the array elements for matrix 1");
	for (i=0;i<n;i++)
	{printf("FOR ROW %d",i);
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);}
}
	printf("Enter the array elements for matrix 2");
	for (i=0;i<n;i++)
	{printf("FOR ROW %d",i);
	for(j=0;j<n;j++)
	{
	scanf("%d",&b[i][j]);}}
	
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	{for(c[i][j]=0,t=0;t<n;t++)
	c[i][j]+=a[i][t]*b[t][j];
	}}
	
	for (i=0;i<n;i++)
	{for(j=0;j<n;j++)
	printf("%d	   ",c[i][j]);
	printf("\n");}
}

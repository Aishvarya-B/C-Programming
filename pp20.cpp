/*Printing patterns 2*/
#include<stdio.h>
int main()
{
	int i,j,k=1,n;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{for (j=0;j<n-i;j++)
	{printf("%d ",k);
	k++;}
	printf("\n");}
return 0;	
}

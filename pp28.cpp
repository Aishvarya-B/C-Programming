/*Printing patterns 28*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{for (j=0;j<n-i;j++)
	printf("%c",65+i);
	printf("\n");}
return 0;	
}

/*multiplication table*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number");
	scanf("%d",&n);
	for (i=0;i<10;i++)
	printf("%d * %d = %d\n",n,i+1,n*(i+1));
	return 0;
	
}

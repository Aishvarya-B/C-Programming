/*print nth fibonacci nuber*/
#include<stdio.h>
int main()
{
	int n,i,a=0,b=1;
	printf("Enter a number");
	scanf("%d",&n);
	for (i=0;i<n-2;i++)
	{
	b=b+a;
	a=b-a;
}
printf("%dth fibonacci number is %d",n,b);
return 0;
	
}

/*length of a number*/
#include<stdio.h>
int main()
{
	int i,n,l;
	printf("Enter a number");
	scanf("%d",&n);
	l=0;
	for(i=n;i>0;i=i/10)
	{
	l=l+1;
}
printf(" no of digits in %d is %d",n,l);
return 0;
	
}

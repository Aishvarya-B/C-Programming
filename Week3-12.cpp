/*sum of digits*/
#include<stdio.h>
int main()
{
	int n,s=0,i;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>0;i/=10)
	s=s+(i%10);
	printf("sum of digits is %d",s);
	return 0;
}

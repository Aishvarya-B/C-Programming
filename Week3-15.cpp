/*sum of first and last digit*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,s=0,n=0;
	
	printf("Enter a number");
	scanf("%d",&n);
	for(i=n;i>10;i/=10);
  s=(n%10)+i;

	
	printf("sum of first and last digits in %d is %d",n,s);
	return 0;
}

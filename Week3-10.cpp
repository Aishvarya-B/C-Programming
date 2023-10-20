/*reverse of a number*/
#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter a number");
	scanf("%d",&n);
	r=0;
	while(n!=0)
	{r=r*10 +(n%10);
	n/=10;}
	
	printf("reverse number is %d",r);
	return 0;

}

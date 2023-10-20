/*palindrome */
#include<stdio.h>
int main()
{
	int n,r,i,s;
	printf("Enter a number");
	scanf("%d",&n);
	r=0;
	s=n;
	while(s!=0)
	{r=r*10 +(s%10);
	s/=10;}
	if (r==n)
	printf(" %d is a palindrome",n);
	else
	printf("%d is not a palindrome.",n);
	return 0;

}





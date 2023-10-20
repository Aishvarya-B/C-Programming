/* sum of first n natural number*/
#include<stdio.h>
int main()
{
	int n,s,i;
	scanf("%d",&n);
	s=0;
	for(i=0;i<n;i++)
	s=s+i+1;
	printf("sum of first %d numbers is %d",n,s);
	return 0;
}

#include<stdio.h>
int S( int n)
{
	
	int a,b,c,s;
	a=1;
	b=2;
	c=3;
	int i=3;
	if(n==1)
	return a ;
	else if(n==2)
	return b ;
	else if(n==3)
	return c ;
	else
	return S(n-1)+S(n-2)+S(n-3);
	

}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",S(n));
}

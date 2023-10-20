#include<stdio.h>
int main()
{
	int a[5],i,t,p,s,j;
	printf("Enter the array elements");
	for (i=0;i<5;i++)
	scanf("%d",&a[i]);
	t=a[0];
	p=a[0];
	s=a[0];
	for(j=0;j<4;j++)
{	if (a[j+1]<a[j])
	t=a[j+1];
	else
	p=a[j+1];
	s+=a[j+1];}
	printf("min: %d; max: %d; avg: %d",t,p,s/5);
}
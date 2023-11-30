#include<stdio.h>

int avg(int *arr)
{
	int i,s=0;
	
	for(i=0;i<5;i++)
	s+=*(arr+i);
	printf("%d \n",s);
	return s/(i);
	
}

int main()
{
 int arr[5]={2,4,6,10,8};
 int *ptr=arr;
 printf("%d", avg(ptr));
}





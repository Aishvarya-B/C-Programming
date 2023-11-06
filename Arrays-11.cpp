#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n");
	scanf("%d",&n);
	int arr[n]
;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		if (arr[i]==arr[j])
		{
		printf("index of first repeating element is %d",i) ;
		break;}
		if (arr[i]==arr[j])
		break;
		else
		continue;
	}
}
	

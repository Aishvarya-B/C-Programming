#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter n");
	scanf("%d",&n);
	int a[n]
;
	printf("Enter array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=;j<n;j++)
		if (a[i]==a[j])
		{
		printf("%d",a[i]) ;
		break;}
	}
}
